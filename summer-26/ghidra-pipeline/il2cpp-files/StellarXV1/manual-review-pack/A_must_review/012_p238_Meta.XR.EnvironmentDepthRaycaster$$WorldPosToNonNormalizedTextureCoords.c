/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 072a389c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x19;
  ulong uVar16;
  ulong unaff_x21;
  uint unaff_w22;
  int iVar17;
  uint unaff_w25;
  uint unaff_w26;
  ulong uVar18;
  long in_stack_00000008;
  
  if (param_1 == 0) goto LAB_072a40a0;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_072a409c;
  if (*(int *)(param_1 + 0x20) == 2) {
    lVar9 = *(long *)(unaff_x19 + 0x108);
    if (lVar9 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_072a409c;
    lVar9 = *(long *)(lVar9 + in_stack_00000008 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_072a40a0;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a409c;
    if (*(char *)(lVar9 + 0x20) == '\0') {
      iVar17 = 0;
      uVar7 = 0xffffffff;
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x150);
      if (lVar9 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_072a409c;
      iVar17 = 3;
      uVar7 = 8;
      if (*(int *)(lVar9 + 0x40) <= (int)unaff_w25) {
        uVar7 = 0xffffffff;
      }
    }
    bVar5 = true;
    if (-1 < (int)unaff_w25) goto LAB_072a3924;
LAB_072a39b0:
    uVar18 = 0;
  }
  else {
    bVar5 = false;
    uVar7 = 0x15;
    iVar17 = -1;
    if ((int)unaff_w25 < 0) goto LAB_072a39b0;
LAB_072a3924:
    lVar9 = *(long *)(unaff_x19 + 0x160);
    if (lVar9 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w25) goto LAB_072a409c;
    uVar18 = (ulong)*(byte *)(lVar9 + (ulong)unaff_w25 + 0x20) + 1;
    if (!bVar5) {
      lVar9 = *(long *)(unaff_x19 + 0x150);
      if ((unaff_w22 >> 1 & 1) == 0) {
        if (lVar9 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar18) goto LAB_072a409c;
        FUN_072a4bd4();
      }
      else {
        if (lVar9 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar9 + 0x18) <= (uint)uVar18) goto LAB_072a409c;
        FUN_072a4ab8();
      }
    }
  }
  if ((int)uVar18 < (int)uVar7) {
    do {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_072a40a0;
      uVar12 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18);
      if ((uVar12 <= uVar18) || (uVar16 = uVar18 + 1, uVar12 <= uVar16)) goto LAB_072a409c;
      lVar9 = *(long *)(unaff_x19 + 0x180);
      if (lVar9 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
      lVar9 = *(long *)(lVar9 + 0x28);
      if (lVar9 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
      lVar9 = *(long *)(lVar9 + 0x38);
      if (lVar9 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_072a409c;
      if (*(int *)(lVar9 + uVar18 * 4 + 0x20) == 7) {
        if ((unaff_w22 >> 1 & 1) == 0) {
          FUN_072a4bd4();
        }
        else {
          FUN_072a4ab8();
        }
      }
      else if ((unaff_x21 & 1) == 0) {
        FUN_072a4e38();
      }
      else {
        lVar9 = *(long *)(unaff_x19 + 0xf8);
        if (lVar9 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_072a409c;
        lVar9 = *(long *)(lVar9 + in_stack_00000008 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_072a40a0;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a409c;
        FUN_072a4c7c();
      }
      uVar18 = uVar16;
    } while (uVar7 != uVar16);
  }
  if (bVar5) {
    uVar7 = 3;
    lVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,3);
    FUN_07593f88(lVar9,*(undefined8 *)PTR_DAT_092c24c0,0);
    if ((int)unaff_w25 < 0) {
      uVar8 = 0xc;
    }
    else {
      lVar10 = *(long *)(unaff_x19 + 0x168);
      if (lVar10 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar10 + 0x18) <= unaff_w25) goto LAB_072a409c;
      lVar11 = *(long *)(unaff_x19 + 0x170);
      if (lVar11 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w25) goto LAB_072a409c;
      if (lVar9 == 0) goto LAB_072a40a0;
      bVar3 = *(byte *)(lVar11 + (ulong)unaff_w25 + 0x20);
      uVar7 = (uint)bVar3;
      if (*(uint *)(lVar9 + 0x18) <= (uint)bVar3) goto LAB_072a409c;
      bVar4 = *(byte *)(lVar10 + (ulong)unaff_w25 + 0x20);
      uVar8 = (uint)bVar4;
      *(uint *)(lVar9 + (ulong)(uint)bVar3 * 4 + 0x20) = (uint)bVar4;
    }
    if (((int)uVar8 < iVar17) ||
       (sVar6 = (short)((uVar7 - 1) * 0x5556 >> 0x10),
       uVar7 = (uint)(short)((short)(uVar7 - 1) + (sVar6 - (sVar6 >> 0xf)) * -3), (int)uVar7 < 0)) {
LAB_072a3d6c:
      uVar18 = (long)iVar17;
      do {
        if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
        uVar7 = *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18);
        uVar12 = uVar18 + 1;
        if ((uVar7 <= uVar12) || (uVar7 <= (uint)uVar18)) goto LAB_072a409c;
        if (lVar9 == 0) goto LAB_072a40a0;
        uVar16 = 0;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_072a409c;
          if ((long)*(int *)(lVar9 + 0x20 + uVar16 * 4) < (long)uVar18) {
            lVar10 = *(long *)(unaff_x19 + 0x180);
            if (lVar10 == 0) goto LAB_072a40a0;
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
            lVar10 = *(long *)(lVar10 + 0x28);
            if (lVar10 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_072a409c;
            lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar10 + 0x18) <= (uint)uVar18) goto LAB_072a409c;
            if (*(int *)(lVar10 + uVar18 * 4 + 0x20) == 7) goto LAB_072a3e18;
            if ((unaff_x21 & 1) == 0) {
              FUN_072a4e38();
            }
            else {
              lVar10 = *(long *)(unaff_x19 + 0xf8);
              if (lVar10 == 0) goto LAB_072a40a0;
              if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_072a409c;
              lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_072a40a0;
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a409c;
              FUN_072a4c7c();
            }
          }
          else {
LAB_072a3e18:
            if ((unaff_w22 >> 1 & 1) == 0) {
              FUN_072a4bd4();
            }
            else {
              FUN_072a4ab8();
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != 3);
        uVar18 = uVar12;
      } while (uVar12 != 0xc);
      if (*(long *)(unaff_x19 + 0x158) != 0) {
        if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xe) goto LAB_072a409c;
        uVar18 = 0;
        while (lVar9 = *(long *)(unaff_x19 + 0x180), lVar9 != 0) {
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
          lVar9 = *(long *)(lVar9 + 0x28);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_072a409c;
          lVar9 = *(long *)(lVar9 + uVar18 * 8 + 0x20);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_072a409c;
          lVar10 = *(long *)(unaff_x19 + 0x158);
          if (*(int *)(lVar9 + 0x4c) == 7) {
            if ((unaff_w22 >> 1 & 1) == 0) {
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_072a409c;
              FUN_072a4bd4();
            }
            else {
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_072a409c;
              FUN_072a4ab8();
            }
          }
          else if ((unaff_x21 & 1) == 0) {
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_072a409c;
            FUN_072a4e38();
          }
          else {
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_072a409c;
            lVar9 = *(long *)(unaff_x19 + 0xf8);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_072a409c;
            lVar9 = *(long *)(lVar9 + in_stack_00000008 * 8 + 0x20);
            if (lVar9 == 0) break;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_072a409c;
            FUN_072a4c7c();
          }
          uVar18 = uVar18 + 1;
          if (uVar18 == 3) {
            return;
          }
        }
      }
    }
    else if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      do {
        if (uVar1 <= uVar7) goto LAB_072a409c;
        puVar13 = (uint *)(lVar9 + (ulong)uVar7 * 4 + 0x20);
        if (*puVar13 == 0xffffffff) {
          lVar10 = *(long *)(unaff_x19 + 0x158);
          if (lVar10 == 0) break;
          if ((*(uint *)(lVar10 + 0x18) <= uVar8 + 1) || (*(uint *)(lVar10 + 0x18) <= uVar8))
          goto LAB_072a409c;
          iVar2 = *(int *)(lVar10 + 0x20 + (long)(int)uVar8 * 4);
          uVar14 = *(int *)(lVar10 + 0x20 + (long)(int)(uVar8 + 1) * 4) - iVar2;
          uVar15 = uVar14 + uVar14 * uVar7 + iVar2 * 3;
          do {
            uVar15 = uVar15 - 1;
            if (0x80000000 < uVar14) goto LAB_072a3d38;
            lVar10 = *(long *)(unaff_x19 + 0x188);
            if (lVar10 == 0) goto LAB_072a40a0;
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
            lVar10 = *(long *)(lVar10 + 0x28);
            if (lVar10 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_072a409c;
            uVar14 = uVar14 - 1;
          } while (*(float *)(lVar10 + (long)(int)uVar15 * 4 + 0x20) == 0.0);
          *puVar13 = uVar8;
LAB_072a3d38:
          uVar8 = uVar8 - (uVar7 == 0);
        }
        else if (*(int *)(lVar9 + 0x20) != -1) {
          if (uVar1 < 2) goto LAB_072a409c;
          if (*(int *)(lVar9 + 0x24) != -1) {
            if (uVar1 == 2) goto LAB_072a409c;
            if (*(int *)(lVar9 + 0x28) != -1) goto LAB_072a3d6c;
          }
        }
        if (((int)uVar8 < iVar17) || (uVar7 = (int)(uVar7 - 1) % 3, (int)uVar7 < 0))
        goto LAB_072a3d6c;
      } while( true );
    }
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x180);
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) {
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar9 = *(long *)(lVar9 + 0x28);
      if (lVar9 != 0) {
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 != 0) {
          if (*(uint *)(lVar9 + 0x18) < 0x15) goto LAB_072a409c;
          lVar10 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(lVar9 + 0x70) == 7) {
            if ((unaff_w22 >> 1 & 1) == 0) {
              if (lVar10 != 0) {
                if (0x15 < *(uint *)(lVar10 + 0x18)) {
                  FUN_072a4bd4();
                  return;
                }
                goto LAB_072a409c;
              }
            }
            else if (lVar10 != 0) {
              if (0x15 < *(uint *)(lVar10 + 0x18)) {
                FUN_072a4ab8();
                return;
              }
              goto LAB_072a409c;
            }
          }
          else if ((unaff_x21 & 1) == 0) {
            if (lVar10 != 0) {
              if (0x15 < *(uint *)(lVar10 + 0x18)) {
                FUN_072a4e38();
                return;
              }
              goto LAB_072a409c;
            }
          }
          else if (lVar10 != 0) {
            if (0x15 < *(uint *)(lVar10 + 0x18)) {
              lVar9 = *(long *)(unaff_x19 + 0xf8);
              if (lVar9 == 0) goto LAB_072a40a0;
              if (unaff_w26 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = *(long *)(lVar9 + in_stack_00000008 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_072a40a0;
                if (*(int *)(lVar9 + 0x18) != 0) {
                  FUN_072a4c7c();
                  return;
                }
              }
            }
            goto LAB_072a409c;
          }
        }
      }
    }
  }
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


