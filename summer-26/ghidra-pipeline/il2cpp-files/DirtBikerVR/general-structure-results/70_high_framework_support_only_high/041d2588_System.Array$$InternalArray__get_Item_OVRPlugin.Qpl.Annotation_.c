/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 041d2588
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation>
              (long *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03ac40ec(param_3);
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar1 = thunk_FUN_03a9985c(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_03af1434(&DAT_0861d9c0);
    uVar3 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(&DAT_08694740);
    FUN_06762458(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,param_3);
  }
  uVar2 = FUN_06769a04(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000048,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000038 = param_2[1];
      in_stack_00000030 = *param_2;
      in_stack_00000040 = param_2[2];
      uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000018 = in_stack_00000048;
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000008 = lVar6;
      uVar4 = thunk_FUN_067aa794(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = thunk_FUN_03a9981c(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03a9981c(param_1,0,0);
  return iVar1 + -1;
}


