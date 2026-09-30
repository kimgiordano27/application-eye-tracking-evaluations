/*
FUNCTION_NAME: Fusion.NetworkLinkedList<__Il2CppFullySharedGenericType>$$get_Count
ENTRY_POINT: 021387d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x021386f0) */

void Fusion_NetworkLinkedList<__Il2CppFullySharedGenericType>__get_Count(long *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x23;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint unaff_w28;
  long unaff_x29;
  
  lVar10 = *param_1;
  __cxa_end_catch();
  if (*(char *)(unaff_x29 + -0x18) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar10);
  }
  iVar2 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    iVar5 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    if ((iVar2 < (int)(unaff_w28 - 1)) && ((int)unaff_w28 < iVar5 + iVar2)) {
      plVar9 = *(long **)(unaff_x19 + 0x18);
      thunk_FUN_01a4b338();
      uVar3 = *(uint *)(unaff_x19 + 0x20);
      thunk_FUN_01a4b338();
      pvVar1 = *(void **)(unaff_x29 + -0x28);
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x10);
      }
      memcpy(unaff_x21,pvVar1,unaff_x23);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = uVar3 & unaff_w28;
      if (*(uint *)(plVar9 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar3 + 0x20),
             unaff_x21,unaff_x23);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      if (*(uint *)(plVar9 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      FUN_01ab6954(lVar10,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar3 + 0x20
                  );
      thunk_FUN_01a4b338();
      iVar2 = *(int *)(unaff_x19 + 0x24);
      *(uint *)(unaff_x19 + 0x14) = unaff_w28 + 1;
      goto LAB_02138684;
    }
  }
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  FUN_027e0bd8();
  uVar3 = *(uint *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  iVar2 = *(int *)(unaff_x19 + 0x20);
  thunk_FUN_01a4b338();
  uVar6 = unaff_w28 - uVar3;
  if (iVar2 <= (int)uVar6) {
    plVar9 = (long *)(unaff_x19 + 0x18);
    lVar10 = *plVar9;
    thunk_FUN_01a4b338();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    lVar10 = FUN_01ab6a94(lVar7,*(int *)(lVar10 + 0x18) << 1);
    uVar4 = *(uint *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    lVar7 = *plVar9;
    uVar4 = uVar4 & uVar3;
    if (uVar4 == 0) {
      thunk_FUN_01a4b338();
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar7,0,lVar10,0,*(undefined4 *)(lVar8 + 0x18),0);
    }
    else {
      thunk_FUN_01a4b338();
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar7,uVar4,lVar10,0,*(int *)(lVar8 + 0x18) - uVar4,0);
      lVar8 = *plVar9;
      thunk_FUN_01a4b338();
      lVar7 = *plVar9;
      thunk_FUN_01a4b338();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02793ce8(lVar8,0,lVar10,*(int *)(lVar7 + 0x18) - uVar4,uVar4,0);
    }
    thunk_FUN_01a4b338();
    *plVar9 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar10);
    thunk_FUN_01a4b338();
    *(undefined4 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01a4b338();
    iVar2 = *(int *)(unaff_x19 + 0x20);
    *(uint *)(unaff_x19 + 0x14) = uVar6;
    thunk_FUN_01a4b338();
    thunk_FUN_01a4b338();
    *(uint *)(unaff_x19 + 0x20) = iVar2 << 1 | 1;
    unaff_w28 = uVar6;
  }
  plVar9 = *(long **)(unaff_x19 + 0x18);
  thunk_FUN_01a4b338();
  uVar3 = *(uint *)(unaff_x19 + 0x20);
  thunk_FUN_01a4b338();
  pvVar1 = *(void **)(unaff_x29 + -0x28);
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x21,pvVar1,unaff_x23);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = uVar3 & unaff_w28;
  if (*(uint *)(plVar9 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar3 + 0x20),
         unaff_x21,unaff_x23);
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  if (*(uint *)(plVar9 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  FUN_01ab6954(lVar10,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)uVar3 + 0x20);
  thunk_FUN_01a4b338();
  *(uint *)(unaff_x19 + 0x14) = unaff_w28 + 1;
  if (uVar6 == 0) {
    thunk_FUN_01aa5278(*(undefined8 *)(unaff_x29 + -0x30),0);
  }
  iVar2 = *(int *)(unaff_x19 + 0x24) - *(int *)(unaff_x19 + 0x28);
  *(int *)(unaff_x19 + 0x24) = iVar2;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
LAB_02138684:
  if (iVar2 == 0x7fffffff) {
    FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14();
  }
  *(int *)(unaff_x19 + 0x24) = iVar2 + 1;
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


