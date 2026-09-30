/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Quatf>
ENTRY_POINT: 03a1811c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__Resize<OVRPlugin_Quatf>(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
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
  
  if (param_1 == 0) {
    FUN_0367ca58();
  }
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  iVar1 = thunk_FUN_03651f18();
  if (1 < iVar1) {
    thunk_FUN_036aa1c8(&DAT_07b6ce80);
    uVar4 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(&DAT_07bda940);
    FUN_05e299f0(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4);
  }
  uVar2 = FUN_05e310c0();
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000090,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000058 = unaff_x21[1];
      in_stack_00000050 = *unaff_x21;
      in_stack_00000068 = unaff_x21[3];
      in_stack_00000060 = unaff_x21[2];
      in_stack_00000078 = unaff_x21[5];
      in_stack_00000070 = unaff_x21[4];
      in_stack_00000088 = unaff_x21[7];
      in_stack_00000080 = unaff_x21[6];
      thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000050);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_0367c9fc(lVar6);
      }
      uVar3 = thunk_FUN_05e72870();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03651ed8();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03651ed8();
  return iVar1 + -1;
}


