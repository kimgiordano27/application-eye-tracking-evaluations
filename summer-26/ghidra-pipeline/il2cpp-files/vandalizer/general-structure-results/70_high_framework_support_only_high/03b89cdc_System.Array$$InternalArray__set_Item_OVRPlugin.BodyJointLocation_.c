/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 03b89cdc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>
              (long param_1,long *param_2,void *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong uVar7;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if ((param_1 == 0) && (FUN_031f20f4(PTR_DAT_075d6490), *(long *)(unaff_x19 + 0x38) == 0)) {
    FUN_0322bf50();
  }
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  iVar2 = thunk_FUN_03201a1c(param_2,0);
  if (iVar2 < 2) {
    uVar3 = FUN_05e1a3d8(param_2,0);
    puVar1 = PTR_DAT_075d6490;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        memcpy(&stack0x00000070,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_2 + 0x104));
        memcpy(&stack0x00000008,param_3,0x68);
        uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000008
                                  );
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
        }
        uVar5 = FUN_06c2d8f4(&stack0x00000070,uVar4,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
        if ((uVar5 & 1) != 0) {
          iVar2 = thunk_FUN_032019d8(param_2,0,0);
          return iVar2 + (int)uVar7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    iVar2 = thunk_FUN_032019d8(param_2,0,0);
    return iVar2 + -1;
  }
  thunk_FUN_03257e30(PTR_DAT_075d6460);
  uVar4 = thunk_FUN_0322f148();
  uVar6 = thunk_FUN_03257e30(PTR_DAT_075d6468);
  FUN_05e12d58(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar4);
}


