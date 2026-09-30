/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 06628738
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  void *unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(param_1 + 0x28),&stack0x00000418);
  if (plVar1 == (long *)0x0) goto LAB_066289a8;
  if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40)) goto LAB_066289ac;
  psVar2 = (short *)thunk_FUN_04485360();
  if (*psVar2 == 0) {
LAB_066288e8:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar4 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar5 = FUN_07a5629c(uVar7,uVar4,0);
    if ((uVar5 & 1) != 0) {
      memcpy(&stack0x00000418,unaff_x20,0x208);
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000418);
      if (plVar1 == (long *)0x0) goto LAB_066289a8;
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40))
      goto LAB_066289ac;
      plVar1 = (long *)thunk_FUN_04485360();
      if (*plVar1 == 0) goto LAB_066288e8;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar7 = FUN_07a4ce38(uVar7,0);
    uVar4 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar5 = FUN_07a5629c(uVar7,uVar4,0);
    if ((uVar5 & 1) != 0) {
      memcpy(&stack0x00000418,unaff_x20,0x208);
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar1 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000418);
      if (plVar1 == (long *)0x0) {
LAB_066289a8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x60) + 0x40)) {
LAB_066289ac:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      puVar6 = (undefined8 *)thunk_FUN_04485360();
      uVar5 = FUN_07a9891c(0,*puVar6,0);
      if ((uVar5 & 1) != 0) goto LAB_066288e8;
    }
    memcpy(&stack0x00000210,unaff_x20,0x208);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar7 = thunk_FUN_0448520c();
    memcpy(&stack0x00000008,&stack0x00000210,0x208);
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58);
    memcpy(&stack0x00000418,&stack0x00000008,0x208);
    FUN_0687a424(uVar7,&stack0x00000418,uVar4);
  }
  return uVar7;
}


