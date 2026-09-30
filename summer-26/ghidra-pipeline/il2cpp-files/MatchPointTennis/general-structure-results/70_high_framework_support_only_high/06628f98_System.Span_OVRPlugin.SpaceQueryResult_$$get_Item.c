/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 06628f98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_SpaceQueryResult>__get_Item(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  int *piVar12;
  short *psVar13;
  undefined8 *puVar14;
  int in_w10;
  long *unaff_x19;
  long unaff_x23;
  
  if (in_w10 == 0) {
    thunk_FUN_044a54b4(param_1);
  }
  uVar5 = FUN_07a4ce38();
  uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x28) + 0x20,0);
  uVar7 = FUN_07a5629c(uVar5,uVar6,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) goto LAB_06629944;
    if (*(long *)(*plVar9 + 0x40) == *(long *)(*(long *)(unaff_x23 + 0x28) + 0x40)) {
      pcVar10 = (char *)thunk_FUN_04485360();
      puVar4 = PTR_DAT_09f298f0;
      cVar2 = *pcVar10;
      lVar8 = *(long *)PTR_DAT_09f298f0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar8 = *(long *)puVar4;
      }
      lVar11 = *unaff_x19;
      puVar14 = *(undefined8 **)(lVar8 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar14 = *(undefined8 **)(lVar8 + 0xb8);
      }
      bVar3 = *(byte *)(lVar11 + 0x135);
      uVar5 = *puVar14;
joined_r0x06629060:
      if ((bVar3 & 1) == 0) {
        lVar11 = FUN_04481fb8();
      }
      uVar5 = FUN_04dd8218(uVar5,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x50));
      return uVar5;
    }
LAB_06629948:
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_04481fb8();
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
  }
  uVar5 = FUN_07a4ce38(uVar5,0);
  uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x48) + 0x20,0);
  uVar7 = FUN_07a5629c(uVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x50) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x50) + 0x40))
      goto LAB_06629948;
      piVar12 = (int *)thunk_FUN_04485360();
      if (*piVar12 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x18) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x18) + 0x40))
      goto LAB_06629948;
      pcVar10 = (char *)thunk_FUN_04485360();
      if (*pcVar10 == '\0') goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x30) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x30) + 0x40))
      goto LAB_06629948;
      pcVar10 = (char *)thunk_FUN_04485360();
      if (*pcVar10 == '\0') goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x88) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x88) + 0x40))
      goto LAB_06629948;
      psVar13 = (short *)thunk_FUN_04485360();
      if (*psVar13 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x68) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x68) + 0x40))
      goto LAB_06629948;
      plVar9 = (long *)thunk_FUN_04485360();
      if (*plVar9 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x70) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x70) + 0x40))
      goto LAB_06629948;
      plVar9 = (long *)thunk_FUN_04485360();
      if (*plVar9 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x38) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x38) + 0x40))
      goto LAB_06629948;
      psVar13 = (short *)thunk_FUN_04485360();
      if (*psVar13 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x40) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x40) + 0x40))
      goto LAB_06629948;
      psVar13 = (short *)thunk_FUN_04485360();
      if (*psVar13 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x58) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x58) + 0x40))
      goto LAB_06629948;
      plVar9 = (long *)thunk_FUN_04485360();
      if (*plVar9 == 0) goto LAB_06629884;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
    }
    uVar5 = FUN_07a4ce38(uVar5,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x23 + 0x60) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (plVar9 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x60) + 0x40))
      goto LAB_06629948;
      puVar14 = (undefined8 *)thunk_FUN_04485360();
      uVar7 = FUN_07a9891c(0,*puVar14,0);
      if ((uVar7 & 1) != 0) {
LAB_06629884:
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04481fb8();
        }
        return **(undefined8 **)(lVar8 + 0xb8);
      }
    }
  }
  else {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_04481fb8();
    }
    plVar9 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
    if (plVar9 == (long *)0x0) {
LAB_06629944:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x23 + 0x48) + 0x40))
    goto LAB_06629948;
    piVar12 = (int *)thunk_FUN_04485360();
    puVar4 = PTR_DAT_09f298f0;
    uVar1 = *piVar12 + 1;
    if (uVar1 < 10) {
      lVar8 = *(long *)PTR_DAT_09f298f0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar11 = *unaff_x19;
        uVar5 = *(undefined8 *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
        bVar3 = *(byte *)(lVar11 + 0x135);
        goto joined_r0x06629060;
      }
      goto LAB_06629944;
    }
  }
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_04481fb8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  uVar5 = thunk_FUN_0448520c();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_04481fb8(*unaff_x19);
  }
  FUN_0687b240(uVar5);
  return uVar5;
}


