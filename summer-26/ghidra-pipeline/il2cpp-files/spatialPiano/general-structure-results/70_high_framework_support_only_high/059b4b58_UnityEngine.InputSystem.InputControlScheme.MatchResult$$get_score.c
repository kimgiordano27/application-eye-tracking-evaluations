/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlScheme.MatchResult$$get_score
ENTRY_POINT: 059b4b58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputControlScheme_MatchResult__get_score
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000068 = param_2._8_8_;
  uStack0000000000000060 = param_2._0_8_;
                    /* try { // try from 059b4b58 to 05ab4b77 has its CatchHandler @ 059b4cc8 */
  uStack0000000000000070 = uStack0000000000000060;
  uStack0000000000000078 = uStack0000000000000068;
  UnityEngine_UIElements_Panel__GetUpdater(&stack0x00000060,param_4,*unaff_x23,0,*param_1,0);
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x20 + 0x48) = uStack0000000000000068;
    *(undefined8 *)(unaff_x20 + 0x40) = uStack0000000000000060;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack0000000000000078;
    *(undefined8 *)(unaff_x20 + 0x50) = uStack0000000000000070;
    lVar4 = *unaff_x22;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_02f41ef8(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
    puVar1 = PTR_DAT_067cd890;
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    UnityEngine_UIElements_Panel__GetUpdater
              (&stack0x00000040,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0,
               **(undefined8 **)(lVar3 + 0xb8),0);
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000048;
      *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000040;
      *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000058;
      *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000050;
      lVar4 = *unaff_x22;
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 == 0) {
        FUN_02f41ef8(lVar4);
        lVar3 = *(long *)(lVar4 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar2 = Method_Unity_Collections_NativeArray<GPUInstanceIndex>_Dispose__;
      puVar1 = PTR_DAT_067ca188;
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c();
      }
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      UnityEngine_UIElements_Panel__GetUpdater
                (&stack0x00000020,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0,
                 **(undefined8 **)(lVar3 + 0xb8),0);
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000028;
        *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000020;
        *(undefined8 *)(unaff_x20 + 0x98) = in_stack_00000038;
        *(undefined8 *)(unaff_x20 + 0x90) = in_stack_00000030;
        lVar4 = *unaff_x22;
        lVar3 = *(long *)(lVar4 + 0x38);
        if (lVar3 == 0) {
          FUN_02f41ef8(lVar4);
          lVar3 = *(long *)(lVar4 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        UnityEngine_UIElements_Panel__GetUpdater();
        puVar1 = PTR_DAT_067cd878;
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0xa8) = 0;
          *(undefined8 *)(unaff_x20 + 0xa0) = 0;
          *(undefined8 *)(unaff_x20 + 0xb8) = 0;
          *(undefined8 *)(unaff_x20 + 0xb0) = 0;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0628cda4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


