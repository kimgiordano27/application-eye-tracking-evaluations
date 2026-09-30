/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 039fb544
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector4s>
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              long *param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_02feb320(param_6);
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  iVar1 = thunk_FUN_02fe5810(param_5,0);
  if (1 < iVar1) {
    thunk_FUN_03037804(PTR_DAT_06f98da8);
    uVar4 = thunk_FUN_0301080c();
    uVar5 = thunk_FUN_03037804(PTR_DAT_06f98db0);
    FUN_05b00444(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar4,param_6);
  }
  uVar2 = FUN_05b07bb4(param_5,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000030,(void *)((long)param_5 + uVar7 * *(uint *)(*param_5 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_5 + 0x104));
      uStack0000000000000020 = param_1;
      uStack0000000000000024 = param_2;
      uStack0000000000000028 = param_3;
      uStack000000000000002c = param_4;
      thunk_FUN_0301043c(*(undefined8 *)(*(long *)(param_6 + 0x38) + 8),&stack0x00000020);
      lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02feb2c4(lVar6);
      }
      uVar3 = thunk_FUN_05b4a650();
      if ((uVar3 & 1) != 0) {
        iVar1 = RootMotion_Dynamics_SubBehaviourCOM__GetMomentum(param_5,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = RootMotion_Dynamics_SubBehaviourCOM__GetMomentum(param_5,0,0);
  return iVar1 + -1;
}


