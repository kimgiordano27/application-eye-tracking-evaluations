/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 072a3a80
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


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long unaff_x19;
  uint uVar14;
  ulong unaff_x20;
  ulong uVar15;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  int unaff_w24;
  uint unaff_w25;
  ulong uVar16;
  uint unaff_w26;
  ulong unaff_x27;
  long in_stack_00000008;
  
  do {
    FUN_072a4c7c();
    uVar16 = unaff_x27;
    while( true ) {
      while( true ) {
        if (unaff_x20 == uVar16) {
          if ((unaff_x23 & 1) != 0) {
            uVar14 = 3;
            lVar6 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,3);
            FUN_07593f88(lVar6,*(undefined8 *)PTR_DAT_092c24c0,0);
            if ((int)unaff_w25 < 0) {
              uVar7 = 0xc;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x168);
              if (lVar8 == 0) goto LAB_072a40a0;
              if (*(uint *)(lVar8 + 0x18) <= unaff_w25) goto LAB_072a409c;
              lVar9 = *(long *)(unaff_x19 + 0x170);
              if (lVar9 == 0) goto LAB_072a40a0;
              if (*(uint *)(lVar9 + 0x18) <= unaff_w25) goto LAB_072a409c;
              if (lVar6 == 0) goto LAB_072a40a0;
              bVar3 = *(byte *)(lVar9 + (ulong)unaff_w25 + 0x20);
              uVar14 = (uint)bVar3;
              if (*(uint *)(lVar6 + 0x18) <= (uint)bVar3) goto LAB_072a409c;
              bVar4 = *(byte *)(lVar8 + (ulong)unaff_w25 + 0x20);
              uVar7 = (uint)bVar4;
              *(uint *)(lVar6 + (ulong)(uint)bVar3 * 4 + 0x20) = (uint)bVar4;
            }
            if (((int)uVar7 < unaff_w24) ||
               (sVar5 = (short)((uVar14 - 1) * 0x5556 >> 0x10),
               uVar14 = (uint)(short)((short)(uVar14 - 1) + (sVar5 - (sVar5 >> 0xf)) * -3),
               (int)uVar14 < 0)) goto LAB_072a3d6c;
            if (lVar6 == 0) goto LAB_072a40a0;
            uVar1 = *(uint *)(lVar6 + 0x18);
            goto LAB_072a3c5c;
          }
          lVar6 = *(long *)(unaff_x19 + 0x180);
          if (lVar6 == 0) goto LAB_072a40a0;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
          lVar6 = *(long *)(lVar6 + 0x28);
          if (lVar6 == 0) goto LAB_072a40a0;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
          lVar6 = *(long *)(lVar6 + 0x38);
          if (lVar6 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar6 + 0x18) < 0x15) goto LAB_072a409c;
          lVar8 = *(long *)(unaff_x19 + 0x150);
          if (*(int *)(lVar6 + 0x70) == 7) {
            if ((unaff_w22 >> 1 & 1) == 0) {
              if (lVar8 == 0) goto LAB_072a40a0;
              if (0x15 < *(uint *)(lVar8 + 0x18)) {
                FUN_072a4bd4();
                return;
              }
            }
            else {
              if (lVar8 == 0) goto LAB_072a40a0;
              if (0x15 < *(uint *)(lVar8 + 0x18)) {
                FUN_072a4ab8();
                return;
              }
            }
            goto LAB_072a409c;
          }
          if ((unaff_x21 & 1) == 0) {
            if (lVar8 == 0) goto LAB_072a40a0;
            if (0x15 < *(uint *)(lVar8 + 0x18)) {
              FUN_072a4e38();
              return;
            }
            goto LAB_072a409c;
          }
          if (lVar8 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar8 + 0x18) < 0x16) goto LAB_072a409c;
          lVar6 = *(long *)(unaff_x19 + 0xf8);
          if (lVar6 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_072a409c;
          lVar6 = *(long *)(lVar6 + in_stack_00000008 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_072a40a0;
          if (*(int *)(lVar6 + 0x18) != 0) {
            FUN_072a4c7c();
            return;
          }
          goto LAB_072a409c;
        }
        if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_072a40a0;
        uVar10 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x150) + 0x18);
        if ((uVar10 <= uVar16) || (unaff_x27 = uVar16 + 1, uVar10 <= unaff_x27)) goto LAB_072a409c;
        lVar6 = *(long *)(unaff_x19 + 0x180);
        if (lVar6 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar6 = *(long *)(lVar6 + 0x28);
        if (lVar6 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_072a409c;
        lVar6 = *(long *)(lVar6 + 0x38);
        if (lVar6 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_072a409c;
        if (*(int *)(lVar6 + uVar16 * 4 + 0x20) != 7) break;
        if ((unaff_w22 >> 1 & 1) == 0) {
          FUN_072a4bd4();
          uVar16 = unaff_x27;
        }
        else {
          FUN_072a4ab8();
          uVar16 = unaff_x27;
        }
      }
      if ((unaff_x21 & 1) != 0) break;
      FUN_072a4e38();
      uVar16 = unaff_x27;
    }
    lVar6 = *(long *)(unaff_x19 + 0xf8);
    if (lVar6 == 0) goto LAB_072a40a0;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) break;
    lVar6 = *(long *)(lVar6 + in_stack_00000008 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_072a40a0;
  } while (*(int *)(lVar6 + 0x18) != 0);
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
LAB_072a3c5c:
  if (uVar1 <= uVar14) goto LAB_072a409c;
  puVar11 = (uint *)(lVar6 + (ulong)uVar14 * 4 + 0x20);
  if (*puVar11 == 0xffffffff) {
    lVar8 = *(long *)(unaff_x19 + 0x158);
    if (lVar8 == 0) goto LAB_072a40a0;
    if ((*(uint *)(lVar8 + 0x18) <= uVar7 + 1) || (*(uint *)(lVar8 + 0x18) <= uVar7))
    goto LAB_072a409c;
    iVar2 = *(int *)(lVar8 + 0x20 + (long)(int)uVar7 * 4);
    uVar12 = *(int *)(lVar8 + 0x20 + (long)(int)(uVar7 + 1) * 4) - iVar2;
    uVar13 = uVar12 + uVar12 * uVar14 + iVar2 * 3;
    do {
      uVar13 = uVar13 - 1;
      if (0x80000000 < uVar12) goto LAB_072a3d38;
      lVar8 = *(long *)(unaff_x19 + 0x188);
      if (lVar8 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
      lVar8 = *(long *)(lVar8 + 0x28);
      if (lVar8 == 0) goto LAB_072a40a0;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_072a409c;
      uVar12 = uVar12 - 1;
    } while (*(float *)(lVar8 + (long)(int)uVar13 * 4 + 0x20) == 0.0);
    *puVar11 = uVar7;
LAB_072a3d38:
    uVar7 = uVar7 - (uVar14 == 0);
  }
  else if (*(int *)(lVar6 + 0x20) != -1) {
    if (uVar1 < 2) goto LAB_072a409c;
    if (*(int *)(lVar6 + 0x24) != -1) {
      if (uVar1 == 2) goto LAB_072a409c;
      if (*(int *)(lVar6 + 0x28) != -1) goto LAB_072a3d6c;
    }
  }
  if (((int)uVar7 < unaff_w24) || (uVar14 = (int)(uVar14 - 1) % 3, (int)uVar14 < 0))
  goto LAB_072a3d6c;
  goto LAB_072a3c5c;
LAB_072a3d6c:
  uVar16 = (long)unaff_w24;
  do {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
    uVar14 = *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18);
    uVar10 = uVar16 + 1;
    if ((uVar14 <= uVar10) || (uVar14 <= (uint)uVar16)) goto LAB_072a409c;
    if (lVar6 == 0) goto LAB_072a40a0;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_072a409c;
      if ((long)*(int *)(lVar6 + 0x20 + uVar15 * 4) < (long)uVar16) {
        lVar8 = *(long *)(unaff_x19 + 0x180);
        if (lVar8 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar8 = *(long *)(lVar8 + 0x28);
        if (lVar8 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_072a409c;
        lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar16) goto LAB_072a409c;
        if (*(int *)(lVar8 + uVar16 * 4 + 0x20) == 7) goto LAB_072a3e18;
        if ((unaff_x21 & 1) == 0) {
          FUN_072a4e38();
        }
        else {
          lVar8 = *(long *)(unaff_x19 + 0xf8);
          if (lVar8 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_072a409c;
          lVar8 = *(long *)(lVar8 + in_stack_00000008 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_072a40a0;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_072a409c;
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
    uVar16 = uVar10;
  } while (uVar10 != 0xc);
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xe) goto LAB_072a409c;
    uVar16 = 0;
    while (lVar6 = *(long *)(unaff_x19 + 0x180), lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_072a409c;
      lVar6 = *(long *)(lVar6 + uVar16 * 8 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_072a409c;
      lVar8 = *(long *)(unaff_x19 + 0x158);
      if (*(int *)(lVar6 + 0x4c) == 7) {
        if ((unaff_w22 >> 1 & 1) == 0) {
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4bd4();
        }
        else {
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4ab8();
        }
      }
      else if ((unaff_x21 & 1) == 0) {
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_072a409c;
        FUN_072a4e38();
      }
      else {
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) < 0xc) goto LAB_072a409c;
        lVar6 = *(long *)(unaff_x19 + 0xf8);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_072a409c;
        lVar6 = *(long *)(lVar6 + in_stack_00000008 * 8 + 0x20);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_072a409c;
        FUN_072a4c7c();
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == 3) {
        return;
      }
    }
  }
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


