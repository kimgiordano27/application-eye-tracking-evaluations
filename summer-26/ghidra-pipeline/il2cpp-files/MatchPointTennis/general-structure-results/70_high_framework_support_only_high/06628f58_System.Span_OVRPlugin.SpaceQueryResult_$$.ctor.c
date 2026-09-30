/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 06628f58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_SpaceQueryResult>___ctor(ulong param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  short *psVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long *plVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f298f0);
    *(undefined1 *)(unaff_x22 + 0x11d) = 1;
  }
  plVar14 = (long *)(unaff_x19 + 0x20);
  lVar5 = *plVar14;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  puVar4 = PTR_DAT_09f1e5b8;
  uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
  }
  uVar15 = FUN_07a4ce38(uVar15,0);
  uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x28) + 0x20,0);
  uVar7 = FUN_07a5629c(uVar15,uVar6,0);
  if ((uVar7 & 1) != 0) {
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
    if (plVar8 == (long *)0x0) goto LAB_06629944;
    if (*(long *)(*plVar8 + 0x40) == *(long *)(*(long *)(puVar4 + 0x28) + 0x40)) {
      pcVar9 = (char *)thunk_FUN_04485360();
      puVar4 = PTR_DAT_09f298f0;
      cVar2 = *pcVar9;
      lVar5 = *(long *)PTR_DAT_09f298f0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *(long *)puVar4;
      }
      lVar10 = *plVar14;
      puVar13 = *(undefined8 **)(lVar5 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar13 = *(undefined8 **)(lVar5 + 0xb8);
      }
      bVar3 = *(byte *)(lVar10 + 0x135);
      uVar15 = *puVar13;
joined_r0x06629060:
      if ((bVar3 & 1) == 0) {
        lVar10 = FUN_04481fb8();
      }
      uVar15 = FUN_04dd8218(uVar15,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x50));
      return uVar15;
    }
LAB_06629948:
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
  lVar5 = *plVar14;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
  }
  uVar15 = FUN_07a4ce38(uVar15,0);
  uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x48) + 0x20,0);
  uVar7 = FUN_07a5629c(uVar15,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x50) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x50) + 0x40))
      goto LAB_06629948;
      piVar11 = (int *)thunk_FUN_04485360();
      if (*piVar11 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x18) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x18) + 0x40))
      goto LAB_06629948;
      pcVar9 = (char *)thunk_FUN_04485360();
      if (*pcVar9 == '\0') goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x30) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x30) + 0x40))
      goto LAB_06629948;
      pcVar9 = (char *)thunk_FUN_04485360();
      if (*pcVar9 == '\0') goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x88) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x88) + 0x40))
      goto LAB_06629948;
      psVar12 = (short *)thunk_FUN_04485360();
      if (*psVar12 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x68) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x68) + 0x40))
      goto LAB_06629948;
      plVar8 = (long *)thunk_FUN_04485360();
      if (*plVar8 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x70) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x70) + 0x40))
      goto LAB_06629948;
      plVar8 = (long *)thunk_FUN_04485360();
      if (*plVar8 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x38) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x38) + 0x40))
      goto LAB_06629948;
      psVar12 = (short *)thunk_FUN_04485360();
      if (*psVar12 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x40) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x40) + 0x40))
      goto LAB_06629948;
      psVar12 = (short *)thunk_FUN_04485360();
      if (*psVar12 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x58) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x58) + 0x40))
      goto LAB_06629948;
      plVar8 = (long *)thunk_FUN_04485360();
      if (*plVar8 == 0) goto LAB_06629884;
    }
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(puVar4 + 0xe0));
    }
    uVar15 = FUN_07a4ce38(uVar15,0);
    uVar6 = FUN_07a4ce38(*(long *)(puVar4 + 0x60) + 0x20,0);
    uVar7 = FUN_07a5629c(uVar15,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar14;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
      if (plVar8 == (long *)0x0) goto LAB_06629944;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x60) + 0x40))
      goto LAB_06629948;
      puVar13 = (undefined8 *)thunk_FUN_04485360();
      uVar7 = FUN_07a9891c(0,*puVar13,0);
      if ((uVar7 & 1) != 0) {
LAB_06629884:
        lVar5 = *plVar14;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar5 = *plVar14;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8();
        }
        return **(undefined8 **)(lVar5 + 0xb8);
      }
    }
  }
  else {
    lVar5 = *plVar14;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    plVar8 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28));
    if (plVar8 == (long *)0x0) {
LAB_06629944:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)(puVar4 + 0x48) + 0x40)) goto LAB_06629948;
    piVar11 = (int *)thunk_FUN_04485360();
    puVar4 = PTR_DAT_09f298f0;
    uVar1 = *piVar11 + 1;
    if (uVar1 < 10) {
      lVar5 = *(long *)PTR_DAT_09f298f0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *(long *)puVar4;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar10 = *plVar14;
        uVar15 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
        bVar3 = *(byte *)(lVar10 + 0x135);
        goto joined_r0x06629060;
      }
      goto LAB_06629944;
    }
  }
  lVar5 = *plVar14;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  uVar15 = thunk_FUN_0448520c();
  if ((*(byte *)(*plVar14 + 0x135) & 1) == 0) {
    FUN_04481fb8(*plVar14);
  }
  FUN_0687b240(uVar15);
  return uVar15;
}


