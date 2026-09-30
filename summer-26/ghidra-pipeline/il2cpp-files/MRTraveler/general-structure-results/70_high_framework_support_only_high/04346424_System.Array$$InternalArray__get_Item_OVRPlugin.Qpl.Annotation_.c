/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04346424
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


int System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation>
              (long param_1,long *param_2,void *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  if (param_1 == 0) {
    FUN_03cf12a0(param_4);
  }
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  iVar1 = thunk_FUN_03d12034(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_03ce5214(PTR_DAT_08e804b0);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e804b8);
    FUN_0711241c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,param_4);
  }
  uVar2 = FUN_07119d8c(param_2,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x000000d0,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      memcpy(&stack0x00000070,param_3,0x60);
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&stack0x00000070);
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03cf1244(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000d0,0x60);
      uVar3 = thunk_FUN_0715d3b4();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03d11ff0(param_2,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03d11ff0(param_2,0,0);
  return iVar1 + -1;
}


