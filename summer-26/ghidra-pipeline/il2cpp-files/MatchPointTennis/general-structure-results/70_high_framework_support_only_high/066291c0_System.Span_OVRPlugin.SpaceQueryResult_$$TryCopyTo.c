/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$TryCopyTo
ENTRY_POINT: 066291c0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_SpaceQueryResult>__TryCopyTo(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  char *pcVar7;
  short *psVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x23;
  
  thunk_FUN_044a54b4();
  uVar1 = FUN_07a4ce38();
  uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x50) + 0x20,0);
  uVar3 = FUN_07a5629c(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
LAB_06629248:
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x18) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x18) + 0x40))
      goto LAB_06629948;
      pcVar7 = (char *)thunk_FUN_04485360();
      if (*pcVar7 == '\0') goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x30) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x30) + 0x40))
      goto LAB_06629948;
      pcVar7 = (char *)thunk_FUN_04485360();
      if (*pcVar7 == '\0') goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x88) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x88) + 0x40))
      goto LAB_06629948;
      psVar8 = (short *)thunk_FUN_04485360();
      if (*psVar8 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x68) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x68) + 0x40))
      goto LAB_06629948;
      plVar5 = (long *)thunk_FUN_04485360();
      if (*plVar5 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x70) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x70) + 0x40))
      goto LAB_06629948;
      plVar5 = (long *)thunk_FUN_04485360();
      if (*plVar5 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x38) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x38) + 0x40))
      goto LAB_06629948;
      psVar8 = (short *)thunk_FUN_04485360();
      if (*psVar8 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x40) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x40) + 0x40))
      goto LAB_06629948;
      psVar8 = (short *)thunk_FUN_04485360();
      if (*psVar8 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x58) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x58) + 0x40))
      goto LAB_06629948;
      plVar5 = (long *)thunk_FUN_04485360();
      if (*plVar5 == 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x60) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar1,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *unaff_x19;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8();
      }
      plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
      if (plVar5 == (long *)0x0) {
LAB_06629944:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x60) + 0x40)) {
LAB_06629948:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      puVar9 = (undefined8 *)thunk_FUN_04485360();
      uVar3 = FUN_07a9891c(0,*puVar9,0);
      if ((uVar3 & 1) != 0) goto LAB_06629884;
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar1 = thunk_FUN_0448520c();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_04481fb8(*unaff_x19);
    }
    FUN_0687b240(uVar1);
  }
  else {
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    plVar5 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
    if (plVar5 == (long *)0x0) goto LAB_06629944;
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x50) + 0x40))
    goto LAB_06629948;
    piVar6 = (int *)thunk_FUN_04485360();
    if (*piVar6 != 0) goto LAB_06629248;
LAB_06629884:
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar4 = *unaff_x19;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    uVar1 = **(undefined8 **)(lVar4 + 0xb8);
  }
  return uVar1;
}


