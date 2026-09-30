/*
FUNCTION_NAME: System.MissingMemberException$$.ctor
ENTRY_POINT: 031f3310
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_MissingMemberException___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  
  if (*unaff_x20 != **(long **)(param_1 + 0x290)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  if (unaff_x19 == 0) {
LAB_031f36a8:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(unaff_x19 + 0x1c) == 3) {
    FUN_031f4174();
    return;
  }
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    if ((unaff_x20 == (long *)0x0) || (lVar4 = unaff_x20[0x1b], lVar4 == 0)) goto LAB_031f36a8;
    if (*(char *)(lVar4 + 0x2e) != '\0') {
      lVar4 = FUN_031f23f8(lVar4,*(undefined8 *)(unaff_x19 + 0x28));
      *(long *)(unaff_x19 + 0x48) = lVar4;
      if (lVar4 != 0) {
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_031e8770(lVar4);
        *(undefined4 *)(unaff_x19 + 0x50) = uVar3;
      }
    }
  }
  puVar2 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo;
  switch(*(undefined4 *)(unaff_x19 + 0x20)) {
  case 1:
    lVar8 = *(long *)(unaff_x19 + 0x48);
    lVar4 = *(long *)
             VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar2;
    }
    lVar10 = *(long *)(lVar4 + 0xb8);
    if (lVar8 == *(long *)(lVar10 + 0x38)) {
      FUN_031f491c();
      if ((unaff_x20 == (long *)0x0) || (lVar4 = unaff_x20[0x1b], lVar4 == 0)) goto LAB_031f36a8;
      lVar8 = *(long *)(unaff_x19 + 0x30);
    }
    else {
      iVar1 = *(int *)(unaff_x19 + 0x50);
      if (iVar1 == 0) {
        if (*(int *)(unaff_x19 + 0x18) == 4) {
          if (unaff_x20 != (long *)0x0) {
            lVar4 = unaff_x20[0x1b];
            uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar8 = FUN_032556a4(uVar9,0);
            if (lVar4 != 0) goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        lVar8 = *(long *)(unaff_x19 + 0x48);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        if (lVar8 == *(long *)(lVar10 + 0xc0)) goto LAB_031f36c0;
        FUN_031f491c();
        lVar8 = *(long *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (unaff_x20 == (long *)0x0) goto LAB_031f36a8;
        lVar4 = unaff_x20[0x1b];
        if (lVar8 != *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200)) {
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x2c) == '\0') {
              return;
            }
            uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
            lVar8 = *(long *)(unaff_x19 + 0x30);
            goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        if (lVar4 == 0) goto LAB_031f36a8;
        lVar8 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar8 = *(long *)(unaff_x19 + 0x38);
        if (lVar8 == 0) {
          uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar8 = FUN_031ed750(uVar7,iVar1);
        }
        if ((unaff_x20 == (long *)0x0) || (lVar4 = unaff_x20[0x1b], lVar4 == 0)) goto LAB_031f36a8;
      }
    }
    break;
  case 2:
    FUN_031f2d68();
    if (*(long *)(unaff_x21 + 0x88) == 0) goto LAB_031f36a8;
    FUN_031f79ec();
    if (((*(long *)(unaff_x19 + 0xd8) != 0) &&
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xd8) + 0x18), lVar4 != 0)) &&
       (uVar5 = FUN_032eb44c(lVar4,0), (uVar5 & 1) != 0)) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 1;
      lVar4 = FUN_031f2828();
      if (unaff_x20 != (long *)0x0) {
        lVar10 = unaff_x20[0x1d];
        uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
        lVar8 = unaff_x20[0x1b];
        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)OVRManager_<>c_TypeInfo);
        FUN_031fc598(uVar7,lVar10,uVar9,lVar8,0);
        if (lVar4 != 0) {
          FUN_031f79ec(lVar4,uVar7,0);
          return;
        }
      }
      goto LAB_031f36a8;
    }
    if ((unaff_x20 == (long *)0x0) || (lVar4 = unaff_x20[0x1b], lVar4 == 0)) goto LAB_031f36a8;
    lVar8 = *(long *)(unaff_x19 + 0xe8);
    break;
  case 3:
    plVar6 = *(long **)(unaff_x21 + 0x30);
    if (((plVar6 != (long *)0x0) &&
        (lVar8 = (**(code **)(*plVar6 + 0x178))
                           (plVar6,*(undefined8 *)(unaff_x19 + 0x60),
                            *(undefined8 *)(*plVar6 + 0x180)), unaff_x20 != (long *)0x0)) &&
       (lVar4 = unaff_x20[0x1b], lVar4 != 0)) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      if (lVar8 != 0) goto LAB_031f35a4;
      FUN_031f258c(lVar4,uVar7,0,unaff_x20 + 0x22,unaff_x20 + 0x21);
      if (unaff_x20[0x1b] != 0) {
        FUN_031f2620(unaff_x20[0x1b],unaff_x20[0xb],*(undefined8 *)(unaff_x19 + 0x28),
                     *(undefined8 *)(unaff_x19 + 0x60));
        return;
      }
    }
    goto LAB_031f36a8;
  case 4:
    if ((unaff_x20 == (long *)0x0) || (lVar4 = unaff_x20[0x1b], lVar4 == 0)) goto LAB_031f36a8;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
    lVar8 = 0;
    goto LAB_031f35a4;
  default:
    FUN_031f381c();
LAB_031f36c0:
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar7 = FUN_01c5d2fc(uVar7,1);
    FUN_019b2708();
    uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
    FUN_019b2708(uVar7);
    FUN_019b8dd4(uVar7,uVar9);
    FUN_019b8e08(uVar7,0,uVar9);
    uVar9 = thunk_FUN_01c273e8(OVRManager_CompositionMethod_TypeInfo);
    uVar7 = FUN_03315920(uVar9,uVar7,0);
    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
    uVar9 = thunk_FUN_01c496e0();
    FUN_031dce5c(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(OVRManager_MrcCameraType_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
LAB_031f35a4:
  FUN_031f258c(lVar4,uVar7,lVar8,unaff_x20 + 0x22,unaff_x20 + 0x21);
  return;
}


