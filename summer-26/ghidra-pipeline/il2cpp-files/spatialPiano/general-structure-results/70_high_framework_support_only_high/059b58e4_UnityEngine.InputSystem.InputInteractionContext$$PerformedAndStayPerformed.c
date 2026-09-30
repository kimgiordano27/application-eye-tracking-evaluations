/*
FUNCTION_NAME: UnityEngine.InputSystem.InputInteractionContext$$PerformedAndStayPerformed
ENTRY_POINT: 059b58e4
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


void UnityEngine_InputSystem_InputInteractionContext__PerformedAndStayPerformed
               (ushort *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long *unaff_x22;
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
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
                    /* try { // try from 059b58e8 to 05ab58ef has its CatchHandler @ 059b5984 */
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
                    /* try { // try from 059b58f0 to 05ab58f3 has its CatchHandler @ 059b5a60 */
                    /* try { // try from 059b58f4 to 05ab58f7 has its CatchHandler @ 059b5974 */
  if (*(int *)(param_2 + 0xe4) == 0) {
                    /* try { // try from 059b58f8 to 05ab58fb has its CatchHandler @ 059b5970 */
    thunk_FUN_02f6670c();
  }
  puVar2 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__;
  puVar1 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__;
                    /* try { // try from 059b58fc to 05ab58ff has its CatchHandler @ 059b596c */
                    /* try { // try from 059b5900 to 05ab5903 has its CatchHandler @ 059b5964 */
                    /* try { // try from 059b5904 to 05ab5907 has its CatchHandler @ 059b5960 */
                    /* try { // try from 059b5908 to 05ab590b has its CatchHandler @ 059b5a60 */
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
                    /* try { // try from 059b590c to 05ab5913 has its CatchHandler @ 059b5958 */
                    /* try { // try from 059b5914 to 05ab5917 has its CatchHandler @ 059b53f0 */
                    /* try { // try from 059b5918 to 05ab591b has its CatchHandler @ 059b5944 */
                    /* try { // try from 059b591c to 05ab591f has its CatchHandler @ 059b5940 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 059b5920 to 05ab5927 has its CatchHandler @ 059b5948 */
    lVar3 = FUN_02f41e9c();
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  UnityEngine_UIElements_Panel__GetUpdater
            (&stack0x00000080,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0,
             **(undefined8 **)(lVar3 + 0xb8),0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000090;
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


