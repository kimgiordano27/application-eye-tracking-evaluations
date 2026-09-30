/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$SampleDepthTexture
ENTRY_POINT: 072a39ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__SampleDepthTexture(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x19;
  uint unaff_w20;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  uint unaff_w26;
  ulong uVar16;
  long in_stack_00000008;
  
  if ((int)unaff_w25 < 0) {
    uVar16 = 0;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x160);
    if (lVar10 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar10 + 0x18) <= unaff_w25) goto LAB_072a409c;
    uVar16 = (ulong)*(byte *)(lVar10 + (ulong)unaff_w25 + 0x20) + 1;
    if ((unaff_x23 & 1) == 0) {
      lVar10 = *(long *)(unaff_x19 + 0x150);
      if ((unaff_w22 >> 1 & 1) == 0) {
        if (lVar10 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar10 + 0x18) <= (uint)uVar16) goto LAB_072a409c;
        FUN_072a4bd4();
      }
      else {
        if (lVar10 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar10 + 0x18) <= (uint)uVar16) goto LAB_072a409c;
        FUN_072a4ab8();
      }
    }
  }
  if ((int)uVar16 < (int)unaff_w20) {
    do {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_072a40a0;
      uVar9 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18);
      if ((uVar9 <= uVar16) || (uVar15 = uVar16 + 1, uVar9 <= uVar15)) goto LAB_072a409c;
      lVar10 = *(long *)(unaff_x19 + 0x180);
      if (lVar10 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
      lVar10 = *(long *)(lVar10 + 0x38);
      if (lVar10 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_072a409c;
      if (*(int *)(lVar10 + uVar16 * 4 + 0x20) == 7) {
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
        lVar10 = *(long *)(unaff_x19 + 0xf8);
        if (lVar10 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_072a409c;
        lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_072a40a0;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a409c;
        FUN_072a4c7c();
      }
      uVar16 = uVar15;
    } while (unaff_w20 != uVar15);
  }
  if ((unaff_x23 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x180);
    if (lVar10 != 0) {
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) {
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 != 0) {
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
        lVar10 = *(long *)(lVar10 + 0x38);
        if (lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) < 0x15) goto LAB_072a409c;
          lVar7 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(lVar10 + 0x70) == 7) {
            if ((unaff_w22 >> 1 & 1) == 0) {
              if (lVar7 != 0) {
                if (0x15 < *(uint *)(lVar7 + 0x18)) {
                  FUN_072a4bd4();
                  return;
                }
                goto LAB_072a409c;
              }
            }
            else if (lVar7 != 0) {
              if (0x15 < *(uint *)(lVar7 + 0x18)) {
                FUN_072a4ab8();
                return;
              }
              goto LAB_072a409c;
            }
          }
          else if ((unaff_x21 & 1) == 0) {
            if (lVar7 != 0) {
              if (0x15 < *(uint *)(lVar7 + 0x18)) {
                FUN_072a4e38();
                return;
              }
              goto LAB_072a409c;
            }
          }
          else if (lVar7 != 0) {
            if (0x15 < *(uint *)(lVar7 + 0x18)) {
              lVar10 = *(long *)(unaff_x19 + 0xf8);
              if (lVar10 == 0) goto LAB_072a40a0;
              if (unaff_w26 < *(uint *)(lVar10 + 0x18)) {
                lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_072a40a0;
                if (*(int *)(lVar10 + 0x18) != 0) {
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
  else {
    uVar14 = 3;
    lVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,3);
    FUN_07593f88(lVar10,*(undefined8 *)PTR_DAT_092c24c0,0);
    if ((int)unaff_w25 < 0) {
      uVar6 = 0xc;
    }
    else {
      lVar7 = *(long *)(unaff_x19 + 0x168);
      if (lVar7 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w25) goto LAB_072a409c;
      lVar8 = *(long *)(unaff_x19 + 0x170);
      if (lVar8 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar8 + 0x18) <= unaff_w25) goto LAB_072a409c;
      if (lVar10 == 0) goto LAB_072a40a0;
      bVar3 = *(byte *)(lVar8 + (ulong)unaff_w25 + 0x20);
      uVar14 = (uint)bVar3;
      if (*(uint *)(lVar10 + 0x18) <= (uint)bVar3) goto LAB_072a409c;
      bVar4 = *(byte *)(lVar7 + (ulong)unaff_w25 + 0x20);
      uVar6 = (uint)bVar4;
      *(uint *)(lVar10 + (ulong)(uint)bVar3 * 4 + 0x20) = (uint)bVar4;
    }
    if (((int)uVar6 < unaff_w24) ||
       (sVar5 = (short)((uVar14 - 1) * 0x5556 >> 0x10),
       uVar14 = (uint)(short)((short)(uVar14 - 1) + (sVar5 - (sVar5 >> 0xf)) * -3), (int)uVar14 < 0)
       ) {
LAB_072a3d6c:
      uVar16 = (long)unaff_w24;
      do {
        if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
        uVar14 = *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18);
        uVar9 = uVar16 + 1;
        if ((uVar14 <= uVar9) || (uVar14 <= (uint)uVar16)) goto LAB_072a409c;
        if (lVar10 == 0) goto LAB_072a40a0;
        uVar15 = 0;
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_072a409c;
          if ((long)*(int *)(lVar10 + 0x20 + uVar15 * 4) < (long)uVar16) {
            lVar7 = *(long *)(unaff_x19 + 0x180);
            if (lVar7 == 0) goto LAB_072a40a0;
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
            lVar7 = *(long *)(lVar7 + 0x28);
            if (lVar7 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_072a409c;
            lVar7 = *(long *)(lVar7 + uVar15 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16) goto LAB_072a409c;
            if (*(int *)(lVar7 + uVar16 * 4 + 0x20) == 7) goto LAB_072a3e18;
            if ((unaff_x21 & 1) == 0) {
              FUN_072a4e38();
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0xf8);
              if (lVar7 == 0) goto LAB_072a40a0;
              if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_072a409c;
              lVar7 = *(long *)(lVar7 + in_stack_00000008 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_072a40a0;
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_072a409c;
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
          uVar15 = uVar15 + 1;
        } while (uVar15 != 3);
        uVar16 = uVar9;
      } while (uVar9 != 0xc);
      if (*(long *)(unaff_x19 + 0x158) != 0) {
        if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xe) goto LAB_072a409c;
        uVar16 = 0;
        while (lVar10 = *(long *)(unaff_x19 + 0x180), lVar10 != 0) {
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
          lVar10 = *(long *)(lVar10 + 0x28);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_072a409c;
          lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_072a409c;
          lVar7 = *(long *)(unaff_x19 + 0x158);
          if (*(int *)(lVar10 + 0x4c) == 7) {
            if ((unaff_w22 >> 1 & 1) == 0) {
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_072a409c;
              FUN_072a4bd4();
            }
            else {
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_072a409c;
              FUN_072a4ab8();
            }
          }
          else if ((unaff_x21 & 1) == 0) {
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_072a409c;
            FUN_072a4e38();
          }
          else {
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_072a409c;
            lVar10 = *(long *)(unaff_x19 + 0xf8);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_072a409c;
            lVar10 = *(long *)(lVar10 + in_stack_00000008 * 8 + 0x20);
            if (lVar10 == 0) break;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_072a409c;
            FUN_072a4c7c();
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == 3) {
            return;
          }
        }
      }
    }
    else if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      do {
        if (uVar1 <= uVar14) goto LAB_072a409c;
        puVar11 = (uint *)(lVar10 + (ulong)uVar14 * 4 + 0x20);
        if (*puVar11 == 0xffffffff) {
          lVar7 = *(long *)(unaff_x19 + 0x158);
          if (lVar7 == 0) break;
          if ((*(uint *)(lVar7 + 0x18) <= uVar6 + 1) || (*(uint *)(lVar7 + 0x18) <= uVar6))
          goto LAB_072a409c;
          iVar2 = *(int *)(lVar7 + 0x20 + (long)(int)uVar6 * 4);
          uVar12 = *(int *)(lVar7 + 0x20 + (long)(int)(uVar6 + 1) * 4) - iVar2;
          uVar13 = uVar12 + uVar12 * uVar14 + iVar2 * 3;
          do {
            uVar13 = uVar13 - 1;
            if (0x80000000 < uVar12) goto LAB_072a3d38;
            lVar7 = *(long *)(unaff_x19 + 0x188);
            if (lVar7 == 0) goto LAB_072a40a0;
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
            lVar7 = *(long *)(lVar7 + 0x28);
            if (lVar7 == 0) goto LAB_072a40a0;
            if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_072a409c;
            uVar12 = uVar12 - 1;
          } while (*(float *)(lVar7 + (long)(int)uVar13 * 4 + 0x20) == 0.0);
          *puVar11 = uVar6;
LAB_072a3d38:
          uVar6 = uVar6 - (uVar14 == 0);
        }
        else if (*(int *)(lVar10 + 0x20) != -1) {
          if (uVar1 < 2) goto LAB_072a409c;
          if (*(int *)(lVar10 + 0x24) != -1) {
            if (uVar1 == 2) goto LAB_072a409c;
            if (*(int *)(lVar10 + 0x28) != -1) goto LAB_072a3d6c;
          }
        }
        if (((int)uVar6 < unaff_w24) || (uVar14 = (int)(uVar14 - 1) % 3, (int)uVar14 < 0))
        goto LAB_072a3d6c;
      } while( true );
    }
  }
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


