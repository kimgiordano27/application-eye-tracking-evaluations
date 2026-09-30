/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Bone>
ENTRY_POINT: 04c3ad20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Bone>
               (long param_1,long *param_2,void *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x24;
  ulong uVar7;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long lStack0000000000000108;
  
  lStack0000000000000108 = param_1;
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_03d8f2c8();
  }
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  iVar1 = thunk_FUN_03d9e884(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
    uVar4 = thunk_FUN_03d2ef40();
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4);
  }
  uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_2,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x000000b0,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      memcpy(&stack0x00000060,param_3,0x50);
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000060);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03d8f26c(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000b0,0x50);
      uVar3 = thunk_FUN_071d4ed8();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03d9e840(param_2,0,0);
        iVar1 = iVar1 + (int)uVar7;
        goto LAB_04c3ae44;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03d9e840(param_2,0,0);
  iVar1 = iVar1 + -1;
LAB_04c3ae44:
  if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000108) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


