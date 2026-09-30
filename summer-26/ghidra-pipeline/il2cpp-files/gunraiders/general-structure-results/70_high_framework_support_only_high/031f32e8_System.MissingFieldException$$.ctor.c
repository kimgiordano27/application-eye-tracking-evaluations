/*
FUNCTION_NAME: System.MissingFieldException$$.ctor
ENTRY_POINT: 031f32e8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_MissingFieldException___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x20 + 0x6ce) = 1;
  if (*(long *)(unaff_x21 + 0x88) == 0) {
LAB_031f36a8:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar4 = (long *)FUN_031fa42c(*(long *)(unaff_x21 + 0x88),0);
  if ((plVar4 != (long *)0x0) &&
     (*plVar4 != *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(plVar4);
  }
  if (unaff_x19 == 0) goto LAB_031f36a8;
  if (*(int *)(unaff_x19 + 0x1c) == 3) {
    FUN_031f4174();
    return;
  }
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    if ((plVar4 == (long *)0x0) || (lVar5 = plVar4[0x1b], lVar5 == 0)) goto LAB_031f36a8;
    if (*(char *)(lVar5 + 0x2e) != '\0') {
      lVar5 = FUN_031f23f8(lVar5,*(undefined8 *)(unaff_x19 + 0x28));
      *(long *)(unaff_x19 + 0x48) = lVar5;
      if (lVar5 != 0) {
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = FUN_031e8770(lVar5);
        *(undefined4 *)(unaff_x19 + 0x50) = uVar3;
      }
    }
  }
  puVar2 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo;
  switch(*(undefined4 *)(unaff_x19 + 0x20)) {
  case 1:
    lVar9 = *(long *)(unaff_x19 + 0x48);
    lVar5 = *(long *)
             VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar2;
    }
    lVar11 = *(long *)(lVar5 + 0xb8);
    if (lVar9 == *(long *)(lVar11 + 0x38)) {
      FUN_031f491c();
      if ((plVar4 == (long *)0x0) || (lVar5 = plVar4[0x1b], lVar5 == 0)) goto LAB_031f36a8;
      lVar9 = *(long *)(unaff_x19 + 0x30);
    }
    else {
      iVar1 = *(int *)(unaff_x19 + 0x50);
      if (iVar1 == 0) {
        if (*(int *)(unaff_x19 + 0x18) == 4) {
          if (plVar4 != (long *)0x0) {
            lVar5 = plVar4[0x1b];
            uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
            uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar9 = FUN_032556a4(uVar10,0);
            if (lVar5 != 0) goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        lVar9 = *(long *)(unaff_x19 + 0x48);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        if (lVar9 == *(long *)(lVar11 + 0xc0)) goto LAB_031f36c0;
        FUN_031f491c();
        lVar9 = *(long *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (plVar4 == (long *)0x0) goto LAB_031f36a8;
        lVar5 = plVar4[0x1b];
        if (lVar9 != *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200)) {
          if (lVar5 != 0) {
            if (*(char *)(lVar5 + 0x2c) == '\0') {
              return;
            }
            uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
            lVar9 = *(long *)(unaff_x19 + 0x30);
            goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        if (lVar5 == 0) goto LAB_031f36a8;
        lVar9 = *(long *)(unaff_x19 + 0x48);
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0x38);
        if (lVar9 == 0) {
          uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar9 = FUN_031ed750(uVar8,iVar1);
        }
        if ((plVar4 == (long *)0x0) || (lVar5 = plVar4[0x1b], lVar5 == 0)) goto LAB_031f36a8;
      }
    }
    break;
  case 2:
    FUN_031f2d68();
    if (*(long *)(unaff_x21 + 0x88) == 0) goto LAB_031f36a8;
    FUN_031f79ec();
    if (((*(long *)(unaff_x19 + 0xd8) != 0) &&
        (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xd8) + 0x18), lVar5 != 0)) &&
       (uVar6 = FUN_032eb44c(lVar5,0), (uVar6 & 1) != 0)) {
      *(undefined1 *)(unaff_x19 + 0xe0) = 1;
      lVar5 = FUN_031f2828();
      if (plVar4 != (long *)0x0) {
        lVar11 = plVar4[0x1d];
        uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
        lVar9 = plVar4[0x1b];
        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)OVRManager_<>c_TypeInfo);
        FUN_031fc598(uVar8,lVar11,uVar10,lVar9,0);
        if (lVar5 != 0) {
          FUN_031f79ec(lVar5,uVar8,0);
          return;
        }
      }
      goto LAB_031f36a8;
    }
    if ((plVar4 == (long *)0x0) || (lVar5 = plVar4[0x1b], lVar5 == 0)) goto LAB_031f36a8;
    lVar9 = *(long *)(unaff_x19 + 0xe8);
    break;
  case 3:
    plVar7 = *(long **)(unaff_x21 + 0x30);
    if (((plVar7 != (long *)0x0) &&
        (lVar9 = (**(code **)(*plVar7 + 0x178))
                           (plVar7,*(undefined8 *)(unaff_x19 + 0x60),
                            *(undefined8 *)(*plVar7 + 0x180)), plVar4 != (long *)0x0)) &&
       (lVar5 = plVar4[0x1b], lVar5 != 0)) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
      if (lVar9 != 0) goto LAB_031f35a4;
      FUN_031f258c(lVar5,uVar8,0,plVar4 + 0x22,plVar4 + 0x21);
      if (plVar4[0x1b] != 0) {
        FUN_031f2620(plVar4[0x1b],plVar4[0xb],*(undefined8 *)(unaff_x19 + 0x28),
                     *(undefined8 *)(unaff_x19 + 0x60));
        return;
      }
    }
    goto LAB_031f36a8;
  case 4:
    if ((plVar4 == (long *)0x0) || (lVar5 = plVar4[0x1b], lVar5 == 0)) goto LAB_031f36a8;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    lVar9 = 0;
    goto LAB_031f35a4;
  default:
    FUN_031f381c();
LAB_031f36c0:
    uVar8 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar8 = FUN_01c5d2fc(uVar8,1);
    FUN_019b2708();
    uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
    FUN_019b2708(uVar8);
    FUN_019b8dd4(uVar8,uVar10);
    FUN_019b8e08(uVar8,0,uVar10);
    uVar10 = thunk_FUN_01c273e8(OVRManager_CompositionMethod_TypeInfo);
    uVar8 = FUN_03315920(uVar10,uVar8,0);
    thunk_FUN_01c273e8(ExitGames_Client_Photon_Protocol16_TypeInfo);
    uVar10 = thunk_FUN_01c496e0();
    FUN_031dce5c(uVar10,uVar8,0);
    uVar8 = thunk_FUN_01c273e8(OVRManager_MrcCameraType_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar10,uVar8);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
LAB_031f35a4:
  FUN_031f258c(lVar5,uVar8,lVar9,plVar4 + 0x22,plVar4 + 0x21);
  return;
}


