/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 06629240
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


undefined8 System_Span<OVRPlugin_SpaceQueryResult>__op_Implicit(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  short *psVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long unaff_x23;
  
  if (*param_1 == 0) {
LAB_06629884:
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = **(undefined8 **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x18) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x18) + 0x40))
      goto LAB_06629948;
      pcVar5 = (char *)thunk_FUN_04485360();
      if (*pcVar5 == '\0') goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x30) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x30) + 0x40))
      goto LAB_06629948;
      pcVar5 = (char *)thunk_FUN_04485360();
      if (*pcVar5 == '\0') goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x88) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x88) + 0x40))
      goto LAB_06629948;
      psVar6 = (short *)thunk_FUN_04485360();
      if (*psVar6 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x68) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x68) + 0x40))
      goto LAB_06629948;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x70) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x70) + 0x40))
      goto LAB_06629948;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x38) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x38) + 0x40))
      goto LAB_06629948;
      psVar6 = (short *)thunk_FUN_04485360();
      if (*psVar6 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x40) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x40) + 0x40))
      goto LAB_06629948;
      psVar6 = (short *)thunk_FUN_04485360();
      if (*psVar6 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x58) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x58) + 0x40))
      goto LAB_06629948;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar8 = FUN_07a4ce38(uVar8,0);
    uVar2 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x60) + 0x20,0);
    uVar3 = FUN_07a5629c(uVar8,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = *unaff_x19;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
      if (plVar4 == (long *)0x0) {
LAB_06629944:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x60) + 0x40)) {
LAB_06629948:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      puVar7 = (undefined8 *)thunk_FUN_04485360();
      uVar3 = FUN_07a9891c(0,*puVar7,0);
      if ((uVar3 & 1) != 0) goto LAB_06629884;
    }
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04481fb8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar8 = thunk_FUN_0448520c();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_04481fb8(*unaff_x19);
    }
    FUN_0687b240(uVar8);
  }
  return uVar8;
}


