/*
FUNCTION_NAME: UnityEngine.InputSystem.InputInteractionContext$$Canceled
ENTRY_POINT: 059b5924
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputInteractionContext__Canceled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
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
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  
                    /* catch() { ... } // from try @ 059b58d8 with catch @ 059b5928 */
                    /* try { // try from 059b5930 to 05ab5937 has its CatchHandler @ 059b5ad8 */
                    /* try { // try from 059b5938 to 05ab59a3 has its CatchHandler @ 059b53f0 */
                    /* catch() { ... } // from try @ 059b54bc with catch @ 059b593c */
                    /* catch() { ... } // from try @ 059b54e8 with catch @ 059b5940
                       catch() { ... } // from try @ 059b591c with catch @ 059b5940 */
                    /* catch() { ... } // from try @ 059b54cc with catch @ 059b5944
                       catch() { ... } // from try @ 059b5918 with catch @ 059b5944 */
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
                    /* catch() { ... } // from try @ 059b5634 with catch @ 059b5948
                       catch() { ... } // from try @ 059b5920 with catch @ 059b5948 */
  UnityEngine_UIElements_Panel__GetUpdater
            (&stack0x00000080,*unaff_x21,*unaff_x23,0,**(undefined8 **)(param_1 + 0xb8),0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* catch() { ... } // from try @ 059b587c with catch @ 059b5954 */
  if (*(int *)(unaff_x20 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 059b590c with catch @ 059b5958 */
                    /* catch() { ... } // from try @ 059b58a0 with catch @ 059b595c */
    *(undefined8 *)(unaff_x20 + 0x28) = uStack0000000000000088;
    *(undefined8 *)(unaff_x20 + 0x20) = uStack0000000000000080;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack0000000000000098;
    *(undefined8 *)(unaff_x20 + 0x30) = uStack0000000000000090;
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
    puVar2 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
    puVar1 = PTR_DAT_067cd880;
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    in_stack_00000078 = 0;
    in_stack_00000070 = 0;
    UnityEngine_UIElements_Panel__GetUpdater
              (&stack0x00000060,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0,
               **(undefined8 **)(lVar3 + 0xb8),0);
    if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000068;
      *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000060;
      *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000078;
      *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000070;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


