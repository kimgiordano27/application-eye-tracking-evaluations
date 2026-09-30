/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor$$OnDisable
ENTRY_POINT: 06bcdb50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06bcdff0) */

long * UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInputInteractor__OnDisable(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 uVar9;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long *plStack0000000000000008;
  char cStack000000000000001c;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x760));
  FUN_031f20f4(PTR_DAT_075d8d78);
  FUN_031f20f4(PTR_DAT_075d6da8);
  FUN_031f20f4(System_Diagnostics_TraceLevel_var);
                    /* try { // try from 06bcdb7c to 06ccdc07 has its CatchHandler @ 06bcd49c */
  FUN_031f20f4(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
  FUN_031f20f4(PTR_DAT_0759c0d8);
  FUN_031f20f4(PTR_DAT_075d7b58);
  FUN_031f20f4(System_Threading_ExecutionContext_Reader_var);
  FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
  FUN_031f20f4(PTR_DAT_0759b3b8);
  FUN_031f20f4(PTR_DAT_075d7518);
  *(undefined1 *)(unaff_x21 + 0xe52) = 1;
  puVar1 = PTR_DAT_075d7518;
  cStack000000000000001c = 0;
  plStack0000000000000008 = (long *)0x0;
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = FUN_06bc54fc(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_075d7b58;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* try { // try from 06bcdc08 to 06ccdc1f has its CatchHandler @ 06bcdcb4 */
  FUN_03da9d88();
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 06bcdc34 to 06ccdc4b has its CatchHandler @ 06bcdc9c */
  uVar9 = **(undefined8 **)(lVar2 + 0xb8);
  cStack000000000000001c = '\0';
                    /* try { // try from 06bcdc4c to 06ccdc53 has its CatchHandler @ 06bcd49c */
  FUN_05e65364(uVar9,&stack0x0000001c,0);
  lVar2 = *(long *)puVar1;
                    /* try { // try from 06bcdc54 to 06ccdc57 has its CatchHandler @ 06bcdce4 */
                    /* try { // try from 06bcdc58 to 06ccdc5f has its CatchHandler @ 06bcd49c */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* try { // try from 06bcdc60 to 06ccdc63 has its CatchHandler @ 06bcdcd4 */
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 06bcdc64 to 06ccdc67 has its CatchHandler @ 06bcdccc */
                    /* try { // try from 06bcdc68 to 06ccdc6b has its CatchHandler @ 06bcdcc8 */
                    /* try { // try from 06bcdc6c to 06ccdc6f has its CatchHandler @ 06bcdce8 */
  if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
                    /* try { // try from 06bcdc70 to 06ccdc73 has its CatchHandler @ 06bcdcd8 */
                    /* try { // try from 06bcdc74 to 06ccdc77 has its CatchHandler @ 06bcdcbc */
                    /* try { // try from 06bcdc78 to 06ccdc7b has its CatchHandler @ 06bcdca8 */
                    /* try { // try from 06bcdc7c to 06ccdc7f has its CatchHandler @ 06bcdca4 */
                    /* try { // try from 06bcdc80 to 06ccdc83 has its CatchHandler @ 06bcdcb4 */
                    /* try { // try from 06bcdc84 to 06ccdc87 has its CatchHandler @ 06bcdc98 */
  uVar3 = FUN_05815364();
                    /* try { // try from 06bcdc88 to 06ccdc8b has its CatchHandler @ 06bcdc90 */
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 06bcd940 with catch @ 06bcdc8c
                       try { // try from 06bcdc8c to 06ccdd03 has its CatchHandler @ 06bcd49c */
                    /* catch() { ... } // from try @ 06bcdc88 with catch @ 06bcdc90 */
                    /* catch() { ... } // from try @ 06bcd858 with catch @ 06bcdc94 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06bcdc84 with catch @ 06bcdc98 */
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
                    /* catch() { ... } // from try @ 06bcd984 with catch @ 06bcdc9c
                       catch() { ... } // from try @ 06bcdc34 with catch @ 06bcdc9c */
                    /* catch() { ... } // from try @ 06bcd920 with catch @ 06bcdca0 */
    uVar3 = FUN_06bce20c();
                    /* catch() { ... } // from try @ 06bcdc7c with catch @ 06bcdca4 */
    if ((uVar3 & 1) == 0) {
      plStack0000000000000008 =
           (long *)thunk_FUN_0322f148(*(undefined8 *)System_Threading_ExecutionContext_Reader_var);
      FUN_06bce260();
      if (plStack0000000000000008 == (long *)0x0) goto LAB_06bce01c;
    }
    else {
                    /* catch() { ... } // from try @ 06bcdc78 with catch @ 06bcdca8 */
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
                    /* catch() { ... } // from try @ 06bcdaf8 with catch @ 06bcdcac */
                    /* catch() { ... } // from try @ 06bcda8c with catch @ 06bcdcb0 */
                    /* catch() { ... } // from try @ 06bcd8dc with catch @ 06bcdcb4
                       catch() { ... } // from try @ 06bcdc08 with catch @ 06bcdcb4
                       catch() { ... } // from try @ 06bcdc80 with catch @ 06bcdcb4 */
      uVar3 = FUN_05d386a0();
                    /* catch() { ... } // from try @ 06bcd898 with catch @ 06bcdcb8
                       catch() { ... } // from try @ 06bcd9a8 with catch @ 06bcdcb8 */
                    /* catch() { ... } // from try @ 06bcd6c0 with catch @ 06bcdcbc
                       catch() { ... } // from try @ 06bcd900 with catch @ 06bcdcbc
                       catch() { ... } // from try @ 06bcdc74 with catch @ 06bcdcbc */
                    /* catch() { ... } // from try @ 06bcd7a8 with catch @ 06bcdcc0 */
      if ((uVar3 & 1) == 0) {
        uVar10 = *(undefined8 *)UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var;
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
        plVar5 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
        lVar2 = (**(code **)(*unaff_x20 + 0x1c8))();
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((lVar2 != 0) &&
           (lVar6 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar5[4] = lVar2;
        thunk_FUN_0329bf60(plVar5 + 4,lVar2);
        lVar2 = (**(code **)(*unaff_x20 + 0x248))();
        if ((lVar2 != 0) &&
           (lVar6 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,0);
        }
        if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar5[5] = lVar2;
        thunk_FUN_0329bf60(plVar5 + 5,lVar2);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar10 = (**(code **)(*plVar4 + 0x928))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x930));
      }
      else {
                    /* catch() { ... } // from try @ 06bcdacc with catch @ 06bcdcc4 */
                    /* catch() { ... } // from try @ 06bcdc68 with catch @ 06bcdcc8 */
                    /* catch() { ... } // from try @ 06bcdc64 with catch @ 06bcdccc */
                    /* catch() { ... } // from try @ 06bcd5e4 with catch @ 06bcdcd0 */
                    /* catch() { ... } // from try @ 06bcdc60 with catch @ 06bcdcd4 */
        uVar10 = *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
                    /* catch() { ... } // from try @ 06bcd670 with catch @ 06bcdcd8
                       catch() { ... } // from try @ 06bcd6e4 with catch @ 06bcdcd8
                       catch() { ... } // from try @ 06bcdc70 with catch @ 06bcdcd8 */
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06bcda48 with catch @ 06bcdcdc */
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
                    /* catch() { ... } // from try @ 06bcd9e8 with catch @ 06bcdce0 */
                    /* catch() { ... } // from try @ 06bcd5c8 with catch @ 06bcdce4
                       catch() { ... } // from try @ 06bcdc54 with catch @ 06bcdce4 */
                    /* catch() { ... } // from try @ 06bcd74c with catch @ 06bcdce8
                       catch() { ... } // from try @ 06bcdc6c with catch @ 06bcdce8 */
        plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
                    /* catch() { ... } // from try @ 06bcd798 with catch @ 06bcdcec
                       catch() { ... } // from try @ 06bcdaac with catch @ 06bcdcec
                       catch() { ... } // from try @ 06bcdb40 with catch @ 06bcdcec */
        plVar5 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
                    /* try { // try from 06bcdd04 to 06ccdd07 has its CatchHandler @ 06bcdd14 */
                    /* catch() { ... } // from try @ 06bcdd04 with catch @ 06bcdd14 */
        lVar2 = (**(code **)(*unaff_x20 + 0x248))();
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((lVar2 != 0) &&
           (lVar6 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar5[4] = lVar2;
        thunk_FUN_0329bf60(plVar5 + 4,lVar2);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar10 = (**(code **)(*plVar4 + 0x928))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x930));
      }
      lVar2 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759c0d8,1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar6 = thunk_FUN_0322f04c();
      if (lVar6 == 0) {
        uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar9,0);
      }
      if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(long **)(lVar2 + 0x20) = unaff_x20;
      thunk_FUN_0329bf60();
      lVar2 = FUN_05e2c180(uVar10,lVar2,0);
      if (lVar2 == 0) {
LAB_06bce01c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar10 = *(undefined8 *)System_Diagnostics_TraceLevel_var;
      plStack0000000000000008 = (long *)thunk_FUN_0322f04c(lVar2,uVar10);
      if (plStack0000000000000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar2,uVar10);
      }
    }
    lVar2 = *plStack0000000000000008;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Diagnostics_TraceLevel_var) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06bcdf6c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_0322c1e8(plStack0000000000000008,*(long *)System_Diagnostics_TraceLevel_var,0);
LAB_06bcdf6c:
    (*(code *)*puVar7)(plStack0000000000000008,puVar7[1]);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05813848();
  }
  if (cStack000000000000001c != '\0') {
    thunk_FUN_032004d4(uVar9,0);
  }
  return plStack0000000000000008;
}


