/*
FUNCTION_NAME: System.MissingMemberException$$.ctor
ENTRY_POINT: 031f32a0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_MissingMemberException___ctor(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((DAT_045326ce & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo);
    FUN_01c5d288(OVRManager_<>c_TypeInfo);
    DAT_045326ce = 1;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_031f36a8:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar3 = (long *)FUN_031fa42c(*(long *)(param_1 + 0x88),0);
  if ((plVar3 != (long *)0x0) &&
     (*plVar3 != *(long *)VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_TypeInfo))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748(plVar3);
  }
  if (param_2 == 0) goto LAB_031f36a8;
  if (*(int *)(param_2 + 0x1c) == 3) {
    FUN_031f4174(param_1,param_2);
    return;
  }
  plVar4 = plVar3;
  if (*(long *)(param_2 + 0x48) == 0) {
    if ((plVar3 == (long *)0x0) || (plVar4 = (long *)plVar3[0x1b], plVar4 == (long *)0x0))
    goto LAB_031f36a8;
    if (*(char *)((long)plVar4 + 0x2e) != '\0') {
      lVar5 = FUN_031f23f8(plVar4,*(undefined8 *)(param_2 + 0x28));
      *(long *)(param_2 + 0x48) = lVar5;
      plVar4 = (long *)0x0;
      if (lVar5 != 0) {
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar4 = (long *)FUN_031e8770(lVar5);
        *(int *)(param_2 + 0x50) = (int)plVar4;
      }
    }
  }
  puVar2 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo;
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 1:
    lVar8 = *(long *)(param_2 + 0x48);
    lVar5 = *(long *)
             VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar2;
    }
    lVar10 = *(long *)(lVar5 + 0xb8);
    if (lVar8 == *(long *)(lVar10 + 0x38)) {
      FUN_031f491c(param_1,param_2,plVar3);
      if ((plVar3 == (long *)0x0) || (lVar5 = plVar3[0x1b], lVar5 == 0)) goto LAB_031f36a8;
      lVar8 = *(long *)(param_2 + 0x30);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x50);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 0x18) == 4) {
          if (plVar3 != (long *)0x0) {
            lVar5 = plVar3[0x1b];
            uVar7 = *(undefined8 *)(param_2 + 0x28);
            uVar9 = *(undefined8 *)(param_2 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar8 = FUN_032556a4(uVar9,0);
            if (lVar5 != 0) goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        lVar8 = *(long *)(param_2 + 0x48);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        if (lVar8 == *(long *)(lVar10 + 0xc0)) goto LAB_031f36c0;
        FUN_031f491c(param_1,param_2,plVar3);
        lVar8 = *(long *)(param_2 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (plVar3 == (long *)0x0) goto LAB_031f36a8;
        lVar5 = plVar3[0x1b];
        if (lVar8 != *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200)) {
          if (lVar5 != 0) {
            if (*(char *)(lVar5 + 0x2c) == '\0') {
              return;
            }
            uVar7 = *(undefined8 *)(param_2 + 0x28);
            lVar8 = *(long *)(param_2 + 0x30);
            goto LAB_031f35a4;
          }
          goto LAB_031f36a8;
        }
        if (lVar5 == 0) goto LAB_031f36a8;
        lVar8 = *(long *)(param_2 + 0x48);
      }
      else {
        lVar8 = *(long *)(param_2 + 0x38);
        if (lVar8 == 0) {
          uVar7 = *(undefined8 *)(param_2 + 0x30);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar8 = FUN_031ed750(uVar7,iVar1);
        }
        if ((plVar3 == (long *)0x0) || (lVar5 = plVar3[0x1b], lVar5 == 0)) goto LAB_031f36a8;
      }
    }
    break;
  case 2:
    FUN_031f2d68(param_1,param_2);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_031f36a8;
    FUN_031f79ec(*(long *)(param_1 + 0x88),param_2,0);
    if (((*(long *)(param_2 + 0xd8) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_2 + 0xd8) + 0x18), lVar5 != 0)) &&
       (uVar6 = FUN_032eb44c(lVar5,0), (uVar6 & 1) != 0)) {
      *(undefined1 *)(param_2 + 0xe0) = 1;
      lVar5 = FUN_031f2828(param_1);
      if (plVar3 != (long *)0x0) {
        lVar10 = plVar3[0x1d];
        uVar9 = *(undefined8 *)(param_2 + 0x28);
        lVar8 = plVar3[0x1b];
        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)OVRManager_<>c_TypeInfo);
        FUN_031fc598(uVar7,lVar10,uVar9,lVar8,0);
        if (lVar5 != 0) {
          FUN_031f79ec(lVar5,uVar7,0);
          return;
        }
      }
      goto LAB_031f36a8;
    }
    if ((plVar3 == (long *)0x0) || (lVar5 = plVar3[0x1b], lVar5 == 0)) goto LAB_031f36a8;
    lVar8 = *(long *)(param_2 + 0xe8);
    break;
  case 3:
    plVar4 = *(long **)(param_1 + 0x30);
    if (((plVar4 != (long *)0x0) &&
        (lVar8 = (**(code **)(*plVar4 + 0x178))
                           (plVar4,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(*plVar4 + 0x180))
        , plVar3 != (long *)0x0)) && (lVar5 = plVar3[0x1b], lVar5 != 0)) {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      if (lVar8 != 0) goto LAB_031f35a4;
      FUN_031f258c(lVar5,uVar7,0,plVar3 + 0x22,plVar3 + 0x21);
      if (plVar3[0x1b] != 0) {
        FUN_031f2620(plVar3[0x1b],plVar3[0xb],*(undefined8 *)(param_2 + 0x28),
                     *(undefined8 *)(param_2 + 0x60));
        return;
      }
    }
    goto LAB_031f36a8;
  case 4:
    if ((plVar3 == (long *)0x0) || (lVar5 = plVar3[0x1b], lVar5 == 0)) goto LAB_031f36a8;
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    lVar8 = 0;
    goto LAB_031f35a4;
  default:
    FUN_031f381c(plVar4,param_2,plVar3);
LAB_031f36c0:
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_042305b8);
    uVar7 = FUN_01c5d2fc(uVar7,1);
    FUN_019b2708(param_2);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
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
  uVar7 = *(undefined8 *)(param_2 + 0x28);
LAB_031f35a4:
  FUN_031f258c(lVar5,uVar7,lVar8,plVar3 + 0x22,plVar3 + 0x21);
  return;
}


