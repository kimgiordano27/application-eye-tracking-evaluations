/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Quatf>
ENTRY_POINT: 0433d478
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_Quatf>(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
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
  
  if (param_1 == 0) {
    FUN_03cf12a0();
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar1 = thunk_FUN_03d12034();
  if (1 < iVar1) {
    thunk_FUN_03ce5214(PTR_DAT_08e804b0);
    uVar3 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e804b8);
    FUN_0711241c(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar3);
  }
  uVar2 = FUN_07119d8c();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000048,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000040 = unaff_x21[2];
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000018 = in_stack_00000048;
      in_stack_00000008 = lVar6;
      uVar4 = thunk_FUN_0715d3b4(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = thunk_FUN_03d11ff0();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03d11ff0();
  return iVar1 + -1;
}


