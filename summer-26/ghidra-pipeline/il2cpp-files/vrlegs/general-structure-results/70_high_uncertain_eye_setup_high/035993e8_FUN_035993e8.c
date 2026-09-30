/*
FUNCTION_NAME: FUN_035993e8
ENTRY_POINT: 035993e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


float FUN_035993e8(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((DAT_0412e0af & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d09ac8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0af = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_03cbdf88;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 300) == '\0') {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03598308();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(param_1,0,0);
  fVar9 = 0.0;
  if ((uVar5 & 1) == 0) {
    iVar8 = 4;
    if ((param_2 & 1) == 0) {
      iVar8 = 0;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(0);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54),0);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x50),0);
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        fVar9 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x50),0);
        iVar1 = -0x80000000;
        if (fVar9 != INFINITY) {
          iVar1 = (int)fVar9;
        }
        iVar8 = iVar1 + iVar8;
      }
      fVar9 = (float)iVar8;
      fVar19 = 1.0;
    }
    else {
      if (DAT_0411f1e1 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbeb00);
        DAT_0411f1e1 = '\x01';
      }
      pfVar7 = *(float **)(*(long *)PTR_DAT_03cbeb00 + 0xb8);
      fVar9 = *pfVar7;
      fVar19 = pfVar7[1];
      fVar18 = pfVar7[2];
      fVar17 = pfVar7[3];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03598df0(param_1);
      uVar6 = FUN_0369b288(param_1,0);
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xcc),0);
      fVar10 = 0.0;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        fVar10 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xcc),0);
      }
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc),0);
      fVar11 = 0.0;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        fVar11 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xc),0);
        fVar11 = fVar10 * fVar11;
      }
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x40),0);
      fVar12 = 0.0;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        fVar12 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x40),0);
        fVar12 = fVar10 * fVar12;
      }
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x3c),0);
      fVar13 = 0.0;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        fVar13 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x3c),0);
        fVar13 = fVar10 * fVar13;
      }
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      fVar12 = fVar11 + fVar12 + fVar13;
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x78),0);
      fVar10 = 0.0;
      if ((uVar5 & 1) == 0) {
        fVar13 = 0.0;
      }
      else {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        uVar5 = FUN_01f65944(uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe0),
                             *(undefined8 *)PTR_DAT_03d09ac8);
        fVar13 = 0.0;
        fVar10 = 0.0;
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar3;
          }
          uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd0),0);
          fVar10 = 0.0;
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)puVar3;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar3;
            }
            fVar10 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd0),0);
          }
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar3;
          }
          fVar13 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x78),0);
          fVar13 = fVar10 * fVar13;
          fVar14 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x80),0);
          fVar10 = fVar10 * fVar14;
        }
      }
      lVar4 = *(long *)puVar3;
      fVar10 = fVar10 + fVar11 + fVar13;
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x24),0);
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
        }
        uVar5 = FUN_01f65944(uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe8),
                             *(undefined8 *)PTR_DAT_03d09ac8);
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar3;
          }
          uVar5 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd4),0);
          fVar10 = 0.0;
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)puVar3;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar3;
            }
            fVar10 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd4),0);
          }
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar3;
          }
          fVar13 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
          fVar14 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0);
          fVar15 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
          fVar16 = (float)FUN_0369e060(param_1,*(undefined4 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x24),0);
          fVar11 = fVar11 + fVar10 * fVar15 + fVar10 * fVar16;
          fVar15 = fVar11 - fVar10 * fVar13;
          fVar16 = fVar11 - fVar10 * fVar14;
          fVar13 = fVar10 * fVar13 + fVar11;
          fVar11 = fVar10 * fVar14 + fVar11;
          if (fVar9 <= fVar15) {
            fVar9 = fVar15;
          }
          if (fVar19 <= fVar16) {
            fVar19 = fVar16;
          }
          if (fVar18 <= fVar13) {
            fVar18 = fVar13;
          }
          if (fVar17 <= fVar11) {
            fVar17 = fVar11;
          }
        }
      }
      lVar4 = *(long *)puVar3;
      if (fVar9 <= fVar12) {
        fVar9 = fVar12;
      }
      if (fVar19 <= fVar12) {
        fVar19 = fVar12;
      }
      if (fVar18 <= fVar12) {
        fVar18 = fVar12;
      }
      if (fVar17 <= fVar12) {
        fVar17 = fVar12;
      }
      fVar10 = (float)iVar8;
      fVar12 = (float)NEON_fminnm(fVar9 + fVar10,0x3f800000);
      fVar11 = (float)NEON_fminnm(fVar19 + fVar10,0x3f800000);
      fVar9 = (float)NEON_fminnm(fVar18 + fVar10,0x3f800000);
      fVar19 = (float)NEON_fminnm(fVar17 + fVar10,0x3f800000);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      fVar17 = (float)FUN_0369e060(param_1,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x54),0);
      fVar18 = fVar12 * fVar17;
      if (fVar12 * fVar17 <= fVar11 * fVar17) {
        fVar18 = fVar11 * fVar17;
      }
      fVar10 = fVar9 * fVar17;
      if (fVar9 * fVar17 <= fVar18) {
        fVar10 = fVar18;
      }
      fVar9 = fVar19 * fVar17;
      if (fVar19 * fVar17 <= fVar10) {
        fVar9 = fVar10;
      }
      fVar19 = 1.25;
    }
    fVar9 = fVar9 + fVar19;
  }
  return fVar9;
}


