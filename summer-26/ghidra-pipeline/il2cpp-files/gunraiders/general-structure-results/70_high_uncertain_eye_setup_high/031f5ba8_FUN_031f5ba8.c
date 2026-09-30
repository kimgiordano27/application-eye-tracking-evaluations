/*
FUNCTION_NAME: FUN_031f5ba8
ENTRY_POINT: 031f5ba8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_031f5ba8(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_68;
  long local_60;
  long local_58;
  
  if ((DAT_045326d8 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_045326d8 = 1;
  }
  puVar1 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  if (param_2 == 0) goto LAB_031f5e54;
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar9 == (long *)0x0) {
    uVar5 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_GameServicesCore_Android_NativeGameLeaderboard_<>c__DisplayClass12_0_TypeInfo
                              );
    uVar5 = FUN_03313b64(uVar5,0);
                    /* try { // try from 031f5eb0 to 032f5fa7 has its CatchHandler @ 031f5eb0
                       catch() { ... } // from try @ 031f5eb0 with catch @ 031f5eb0
                       catch() { ... } // from try @ 031f5fe0 with catch @ 031f5eb0
                       catch() { ... } // from try @ 031f6018 with catch @ 031f5eb0
                       catch() { ... } // from try @ 031f606c with catch @ 031f5eb0 */
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_10_0_TypeInfo);
    FUN_03247d68(uVar6,uVar7,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(OVRPlugin_OVRP_1_11_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar5);
  }
  lVar11 = *(long *)(param_2 + 0x20);
  uVar8 = *(ulong *)(param_2 + 0x68);
  lVar3 = *(long *)
           VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
  ;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar1;
  }
  if (lVar11 == *(long *)(*(long *)(lVar3 + 0xb8) + 0x38)) {
    if (param_3 != 0) {
      *(ulong *)(param_3 + 0x18) = uVar8;
      lVar3 = *(long *)(param_1 + 0x40);
      uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      if (lVar3 != 0) {
        FUN_031ef8cc(lVar3,uVar8 & 0xffffffff,uVar5,0);
        return;
      }
    }
    goto LAB_031f5e54;
  }
  if (*(char *)(param_2 + 0x2b) != '\0') {
                    /* try { // try from 031f5c4c to 032f5d63 has its CatchHandler @ 031f5c4c
                       catch() { ... } // from try @ 031f5c4c with catch @ 031f5c4c
                       catch() { ... } // from try @ 031f5d90 with catch @ 031f5c4c
                       catch() { ... } // from try @ 031f5dc8 with catch @ 031f5c4c
                       catch() { ... } // from try @ 031f5e1c with catch @ 031f5c4c */
    FUN_031f608c(param_1,param_2,param_3);
    return;
  }
  System_ConsoleCancelEventArgs__get_Cancel(param_2,&local_58,&local_60,&local_68,0);
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_031f5e54;
    if ((*(byte *)(*(long *)(param_1 + 0x68) + 0x10) & 1) != 0) goto LAB_031f5cc8;
  }
  else {
LAB_031f5cc8:
    if (param_3 == 0) goto LAB_031f5e54;
    *(undefined1 *)(param_3 + 0x3b) = 1;
    *(undefined1 *)(param_3 + 0x3d) = 1;
    if (param_4 == 0) goto LAB_031f5e54;
    *(undefined1 *)(param_4 + 0x3b) = 1;
    *(undefined1 *)(param_4 + 0x3d) = 1;
  }
  if ((local_58 != 0) &&
     (lVar3 = FUN_01c5d2fc(*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo,
                           *(undefined4 *)(local_58 + 0x18)), local_60 != 0)) {
    lVar11 = 4;
    do {
      uVar8 = lVar11 - 4;
      if ((long)(int)*(uint *)(local_60 + 0x18) <= (long)uVar8) {
        FUN_031f6874(param_1,param_2,param_3,param_4,local_58,local_60,local_68,lVar3);
        return;
      }
      if (*(uint *)(local_60 + 0x18) <= uVar8) goto LAB_031f5e94;
      lVar10 = *(long *)(local_60 + lVar11 * 8);
      if (lVar10 == 0) {
        if (local_68 == 0) break;
        if (*(uint *)(local_68 + 0x18) <= uVar8) goto LAB_031f5e94;
        lVar10 = *(long *)(local_68 + lVar11 * 8);
        if (lVar10 == 0) {
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar10 = *(long *)puVar1;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xc0);
        }
        else {
          lVar10 = thunk_FUN_01c5d21c(lVar10,0);
        }
      }
      iVar2 = FUN_031f67f4(param_1,lVar10);
      if (iVar2 == 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        if (lVar10 != *(long *)(*(long *)(lVar4 + 0xb8) + 0x38)) {
          if (local_68 == 0) break;
          if (*(uint *)(local_68 + 0x18) <= uVar8) {
LAB_031f5e94:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar10 = *(long *)(local_68 + lVar11 * 8);
          if (lVar10 == 0) {
            if (local_60 == 0) break;
            if (*(uint *)(local_60 + 0x18) <= uVar8) goto LAB_031f5e94;
            lVar10 = FUN_031f133c(*(undefined8 *)(local_60 + lVar11 * 8),
                                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                                  *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70),0)
            ;
          }
          else {
            lVar10 = FUN_031f050c(lVar10,*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                                  *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                                  param_1,*(undefined8 *)(param_1 + 0x70),0);
          }
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_031f5e94;
          *(long *)(lVar3 + lVar11 * 8) = lVar10;
          uVar5 = FUN_031f5954(param_1,lVar10);
          if (lVar10 == 0) break;
          *(undefined8 *)(lVar10 + 0x70) = uVar5;
        }
      }
      lVar11 = lVar11 + 1;
    } while (local_60 != 0);
  }
LAB_031f5e54:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


