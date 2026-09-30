/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 02fb3ae8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_BodyJointLocation>(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong in_x9;
  byte *pbVar13;
  undefined4 *puVar14;
  long in_x10;
  ulong uVar15;
  long *plVar16;
  long *unaff_x20;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long unaff_x24;
  ulong uVar22;
  long *unaff_x25;
  byte *unaff_x26;
  long lVar23;
  byte *unaff_x27;
  byte *pbVar24;
  byte *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  
  if (((ulong)(in_x10 >> 3) <= in_x9) ||
     (plVar16 = *(long **)(param_1 + in_x9 * 8), plVar16 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fa4ee4();
  }
  (**(code **)(*plVar16 + 0x28))(unaff_x29 + -0x28,plVar16);
  *unaff_x20 = unaff_x24;
  if ((*unaff_x27 == 0x2d) || (pbVar17 = unaff_x27, *unaff_x27 == 0x2b)) {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    pbVar17 = unaff_x27 + 1;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
  }
  lVar21 = (long)unaff_x26 - (long)pbVar17;
  lVar23 = lVar21 + -2;
  if (((lVar21 < 2) || (*pbVar17 != 0x30)) || ((pbVar17[1] | 0x20) != 0x78)) {
    pbVar18 = pbVar17;
    if (pbVar17 < unaff_x26) {
      lVar23 = 0;
      do {
        bVar2 = pbVar17[lVar23];
        if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        lVar3 = lVar23;
      } while ((0xfffffff5 < bVar2 - 0x3a) &&
              (lVar23 = lVar23 + 1, lVar3 = lVar21, lVar21 != lVar23));
      pbVar24 = pbVar17 + lVar3;
      goto FUN_02fb3d08;
    }
    pbVar24 = pbVar17;
    uVar22 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar22 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    pbVar18 = pbVar17 + 2;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    if (pbVar18 < unaff_x26) {
      pbVar8 = pbVar18;
      do {
        bVar2 = *pbVar8;
        if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        if ((bVar2 - 0x3a < 0xfffffff6) &&
           (pbVar24 = pbVar8, (bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
        lVar23 = lVar23 + -1;
        pbVar8 = pbVar8 + 1;
        pbVar24 = pbVar17 + lVar21;
      } while (lVar23 != 0);
FUN_02fb3d08:
      uVar22 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar22 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
    else {
      pbVar24 = pbVar18;
      uVar22 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar22 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
  }
  if (uVar22 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar24 - (long)pbVar18) * 4;
  }
  else {
    if ((pbVar18 != pbVar24) && (pbVar8 = pbVar24 + -1, pbVar17 = pbVar18, pbVar18 < pbVar8)) {
      do {
        pbVar13 = pbVar17 + 1;
        bVar2 = *pbVar17;
        *pbVar17 = *pbVar8;
        pbVar9 = pbVar8 + -1;
        *pbVar8 = bVar2;
        pbVar8 = pbVar9;
        pbVar17 = pbVar13;
      } while (pbVar13 < pbVar9);
    }
    uVar4 = (**(code **)(*plVar16 + 0x20))(plVar16);
    if (pbVar18 < pbVar24) {
      uVar19 = 0;
      uVar20 = 0;
      uVar22 = unaff_x29 - 0x28U | 1;
      lVar23 = (long)pbVar24 - (long)pbVar18;
      do {
        uVar10 = (ulong)uVar19;
        uVar1 = uVar22;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar10) != '\0') {
          uVar1 = uVar22;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar20 == *(byte *)(uVar1 + uVar10)) {
            puVar7 = (undefined4 *)*unaff_x20;
            uVar20 = 0;
            *puVar7 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar15 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar7 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar15;
            }
            if (uVar10 < uVar1 - 1) {
              uVar19 = uVar19 + 1;
            }
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar7 = (undefined4 *)*unaff_x20;
        lVar23 = lVar23 + -1;
        uVar20 = uVar20 + 1;
        *puVar7 = uVar6;
        *unaff_x20 = (long)(puVar7 + 1);
      } while (lVar23 != 0);
      puVar7 = puVar7 + 1;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar18 - (long)unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    else {
      puVar7 = (undefined4 *)*unaff_x20;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar18 - (long)unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    if (puVar11 < puVar7 + -1) {
      puVar11 = puVar7 + -1;
      puVar7 = (undefined4 *)(unaff_x24 + (long)unaff_x27 * -4 + (long)pbVar18 * 4);
      do {
        puVar14 = puVar7 + 1;
        uVar4 = *puVar7;
        *puVar7 = *puVar11;
        puVar12 = puVar11 + -1;
        *puVar11 = uVar4;
        puVar11 = puVar12;
        puVar7 = puVar14;
      } while (puVar14 < puVar12);
    }
  }
joined_r0x02fb3f04:
  if (pbVar24 < unaff_x26) {
    lVar23 = (long)unaff_x26 - (long)pbVar24;
    pbVar17 = pbVar24;
    do {
      if (*pbVar17 == 0x2e) {
        uVar4 = (**(code **)(*plVar16 + 0x18))(plVar16);
        puVar7 = (undefined4 *)*unaff_x20;
        *puVar7 = uVar4;
        *unaff_x20 = (long)(puVar7 + 1);
        pbVar24 = pbVar17 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar23 = lVar23 + -1;
      *puVar7 = uVar4;
      *unaff_x20 = (long)(puVar7 + 1);
      pbVar24 = unaff_x26;
      pbVar17 = pbVar17 + 1;
    } while (lVar23 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar23 = *unaff_x20 + ((long)unaff_x26 - (long)pbVar24) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar23;
  if (unaff_x28 != unaff_x26) {
    lVar23 = unaff_x24 + ((long)unaff_x28 - (long)unaff_x27) * 4;
  }
  *in_stack_00000020 = lVar23;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


