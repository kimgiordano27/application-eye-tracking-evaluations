/*
FUNCTION_NAME: Fusion.NetworkLinkedList<__Il2CppFullySharedGenericType>$$get_Tail
ENTRY_POINT: 021387b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x02138880) */
/* WARNING: Removing unreachable block (ram,0x021387f8) */

void Fusion_NetworkLinkedList<__Il2CppFullySharedGenericType>__get_Tail(undefined8 param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x23;
  long lVar8;
  int unaff_w26;
  long lVar9;
  uint uVar10;
  long unaff_x29;
  
  if (unaff_w26 != 1) {
    if (*(char *)(unaff_x29 + -0x18) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (unaff_w26 != 1) {
      thunk_FUN_01a4b338();
      *(undefined4 *)(unaff_x19 + 0x2c) = 0;
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar9 = *plVar7;
    __cxa_end_catch();
    goto LAB_0213869c;
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar9 = *plVar7;
  __cxa_end_catch();
  if (*(char *)(unaff_x29 + -0x18) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar9);
  }
  iVar2 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  if (*(char *)(unaff_x19 + 0x30) == '\0') {
    iVar4 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    if ((0x7ffffffd < iVar2) || (iVar4 + iVar2 <= 0x7fffffff)) goto LAB_02138368;
    plVar7 = *(long **)(unaff_x19 + 0x18);
    thunk_FUN_01a4b338();
    uVar3 = *(uint *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    pvVar1 = *(void **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x21,pvVar1,unaff_x23);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = uVar3 & 0x7fffffff;
    if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20),
           unaff_x21,unaff_x23);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar9,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20);
    thunk_FUN_01a4b338();
    iVar2 = *(int *)(unaff_x19 + 0x24);
    *(undefined4 *)(unaff_x19 + 0x14) = 0x80000000;
  }
  else {
LAB_02138368:
    thunk_FUN_01a4b338();
    *(undefined4 *)(unaff_x19 + 0x2c) = 0;
    FUN_027e0bd8();
    uVar3 = *(uint *)(unaff_x19 + 0x10);
    thunk_FUN_01a4b338();
    iVar2 = *(int *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    uVar5 = 0x7fffffff - uVar3;
    uVar10 = 0x7fffffff;
    if (iVar2 <= (int)uVar5) {
      plVar7 = (long *)(unaff_x19 + 0x18);
      lVar9 = *plVar7;
      thunk_FUN_01a4b338();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8();
      }
      lVar9 = FUN_01ab6a94(lVar6,*(int *)(lVar9 + 0x18) << 1);
      uVar10 = *(uint *)(unaff_x19 + 0x20);
      thunk_FUN_01a4b338();
      lVar6 = *plVar7;
      uVar10 = uVar10 & uVar3;
      if (uVar10 == 0) {
        thunk_FUN_01a4b338();
        lVar8 = *plVar7;
        thunk_FUN_01a4b338();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793ce8(lVar6,0,lVar9,0,*(undefined4 *)(lVar8 + 0x18),0);
      }
      else {
        thunk_FUN_01a4b338();
        lVar8 = *plVar7;
        thunk_FUN_01a4b338();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793ce8(lVar6,uVar10,lVar9,0,*(int *)(lVar8 + 0x18) - uVar10,0);
        lVar8 = *plVar7;
        thunk_FUN_01a4b338();
        lVar6 = *plVar7;
        thunk_FUN_01a4b338();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02793ce8(lVar8,0,lVar9,*(int *)(lVar6 + 0x18) - uVar10,uVar10,0);
      }
      thunk_FUN_01a4b338();
      *plVar7 = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar9);
      thunk_FUN_01a4b338();
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01a4b338();
      iVar2 = *(int *)(unaff_x19 + 0x20);
      *(uint *)(unaff_x19 + 0x14) = uVar5;
      thunk_FUN_01a4b338();
      thunk_FUN_01a4b338();
      *(uint *)(unaff_x19 + 0x20) = iVar2 << 1 | 1;
      uVar10 = uVar5;
    }
    plVar7 = *(long **)(unaff_x19 + 0x18);
    thunk_FUN_01a4b338();
    uVar3 = *(uint *)(unaff_x19 + 0x20);
    thunk_FUN_01a4b338();
    pvVar1 = *(void **)(unaff_x29 + -0x28);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x21,pvVar1,unaff_x23);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = uVar3 & uVar10;
    if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20),
           unaff_x21,unaff_x23);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    if (*(uint *)(plVar7 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_01ab6954(lVar9,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar3 + 0x20);
    thunk_FUN_01a4b338();
    *(uint *)(unaff_x19 + 0x14) = uVar10 + 1;
    if (uVar5 == 0) {
      thunk_FUN_01aa5278(*(undefined8 *)(unaff_x29 + -0x30),0);
    }
    iVar2 = *(int *)(unaff_x19 + 0x24) - *(int *)(unaff_x19 + 0x28);
    *(int *)(unaff_x19 + 0x24) = iVar2;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (iVar2 == 0x7fffffff) {
    FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14();
  }
  lVar9 = 0;
  *(int *)(unaff_x19 + 0x24) = iVar2 + 1;
LAB_0213869c:
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar9);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


