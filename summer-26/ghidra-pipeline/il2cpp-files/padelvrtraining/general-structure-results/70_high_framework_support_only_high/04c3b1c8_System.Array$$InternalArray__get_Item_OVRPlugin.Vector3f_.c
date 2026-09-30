/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 04c3b1c8
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


void System_Array__InternalArray__get_Item<OVRPlugin_Vector3f>
               (long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long lStack00000000000000c8;
  
  lVar1 = tpidr_el0;
  lStack00000000000000c8 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03d8f2c8(param_3);
  }
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  iVar2 = thunk_FUN_03d9e884(param_1,0);
  if (1 < iVar2) {
    thunk_FUN_03d1e194(PTR_DAT_091f9158);
    uVar4 = thunk_FUN_03d2ef40();
    uVar6 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
    FUN_071895f4(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,param_3);
  }
  uVar3 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      memcpy(&stack0x00000090,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000080 = param_2[6];
      in_stack_00000068 = param_2[3];
      in_stack_00000060 = param_2[2];
      in_stack_00000078 = param_2[5];
      in_stack_00000070 = param_2[4];
      in_stack_00000058 = param_2[1];
      in_stack_00000050 = *param_2;
      uVar4 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000050);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000048 = in_stack_000000c0;
      in_stack_00000030 = in_stack_000000a8;
      in_stack_00000028 = in_stack_000000a0;
      in_stack_00000040 = in_stack_000000b8;
      in_stack_00000038 = in_stack_000000b0;
      in_stack_00000020 = in_stack_00000098;
      in_stack_00000018 = in_stack_00000090;
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_071d4ed8(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_03d9e840(param_1,0,0);
        iVar2 = iVar2 + (int)uVar8;
        goto LAB_04c3b324;
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  iVar2 = thunk_FUN_03d9e840(param_1,0,0);
  iVar2 = iVar2 + -1;
LAB_04c3b324:
  if (*(long *)(lVar1 + 0x28) == lStack00000000000000c8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


