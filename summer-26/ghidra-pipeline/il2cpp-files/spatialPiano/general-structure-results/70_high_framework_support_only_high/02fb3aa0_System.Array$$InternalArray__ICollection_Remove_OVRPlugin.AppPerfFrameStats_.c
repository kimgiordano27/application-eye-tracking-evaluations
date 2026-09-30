/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 02fb3aa0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_AppPerfFrameStats>(void)

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
  ulong uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long unaff_x19;
  long *plVar17;
  long *unaff_x20;
  long *unaff_x21;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long unaff_x24;
  long *unaff_x25;
  byte *unaff_x26;
  long lVar23;
  byte *unaff_x27;
  byte *pbVar24;
  byte *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  
  *(long **)(unaff_x29 + -0x10) = unaff_x21;
  if (*unaff_x21 != -1) {
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
    *(long *)(unaff_x29 + -8) = unaff_x29 + -0x28;
    std::__ndk1::__call_once((ulong *)StringLiteral_9772,(void *)(unaff_x29 + -8),FUN_02fd875c);
  }
  uVar13 = (long)(int)unaff_x21[1] - 1;
  if (((ulong)(*(long *)(unaff_x19 + 0x18) - *(long *)(unaff_x19 + 0x10) >> 3) <= uVar13) ||
     (plVar17 = *(long **)(*(long *)(unaff_x19 + 0x10) + uVar13 * 8), plVar17 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fa4ee4();
  }
  (**(code **)(*plVar17 + 0x28))(unaff_x29 + -0x28,plVar17);
  *unaff_x20 = unaff_x24;
  if ((*unaff_x27 == 0x2d) || (pbVar18 = unaff_x27, *unaff_x27 == 0x2b)) {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    pbVar18 = unaff_x27 + 1;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
  }
  lVar22 = (long)unaff_x26 - (long)pbVar18;
  lVar23 = lVar22 + -2;
  if (((lVar22 < 2) || (*pbVar18 != 0x30)) || ((pbVar18[1] | 0x20) != 0x78)) {
    pbVar19 = pbVar18;
    if (pbVar18 < unaff_x26) {
      lVar23 = 0;
      do {
        bVar2 = pbVar18[lVar23];
        if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        lVar3 = lVar23;
      } while ((0xfffffff5 < bVar2 - 0x3a) &&
              (lVar23 = lVar23 + 1, lVar3 = lVar22, lVar22 != lVar23));
      pbVar24 = pbVar18 + lVar3;
      goto FUN_02fb3d08;
    }
    pbVar24 = pbVar18;
    uVar13 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar13 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    pbVar19 = pbVar18 + 2;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    if (pbVar19 < unaff_x26) {
      pbVar8 = pbVar19;
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
        pbVar24 = pbVar18 + lVar22;
      } while (lVar23 != 0);
FUN_02fb3d08:
      uVar13 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar13 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
    else {
      pbVar24 = pbVar19;
      uVar13 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar13 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
  }
  if (uVar13 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar24 - (long)pbVar19) * 4;
  }
  else {
    if ((pbVar19 != pbVar24) && (pbVar8 = pbVar24 + -1, pbVar18 = pbVar19, pbVar19 < pbVar8)) {
      do {
        pbVar14 = pbVar18 + 1;
        bVar2 = *pbVar18;
        *pbVar18 = *pbVar8;
        pbVar9 = pbVar8 + -1;
        *pbVar8 = bVar2;
        pbVar8 = pbVar9;
        pbVar18 = pbVar14;
      } while (pbVar14 < pbVar9);
    }
    uVar4 = (**(code **)(*plVar17 + 0x20))(plVar17);
    if (pbVar19 < pbVar24) {
      uVar20 = 0;
      uVar21 = 0;
      uVar13 = unaff_x29 - 0x28U | 1;
      lVar23 = (long)pbVar24 - (long)pbVar19;
      do {
        uVar10 = (ulong)uVar20;
        uVar1 = uVar13;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar10) != '\0') {
          uVar1 = uVar13;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar21 == *(byte *)(uVar1 + uVar10)) {
            puVar7 = (undefined4 *)*unaff_x20;
            uVar21 = 0;
            *puVar7 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar16 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar7 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar16;
            }
            if (uVar10 < uVar1 - 1) {
              uVar20 = uVar20 + 1;
            }
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar7 = (undefined4 *)*unaff_x20;
        lVar23 = lVar23 + -1;
        uVar21 = uVar21 + 1;
        *puVar7 = uVar6;
        *unaff_x20 = (long)(puVar7 + 1);
      } while (lVar23 != 0);
      puVar7 = puVar7 + 1;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar19 - (long)unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    else {
      puVar7 = (undefined4 *)*unaff_x20;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar19 - (long)unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    if (puVar11 < puVar7 + -1) {
      puVar11 = puVar7 + -1;
      puVar7 = (undefined4 *)(unaff_x24 + (long)unaff_x27 * -4 + (long)pbVar19 * 4);
      do {
        puVar15 = puVar7 + 1;
        uVar4 = *puVar7;
        *puVar7 = *puVar11;
        puVar12 = puVar11 + -1;
        *puVar11 = uVar4;
        puVar11 = puVar12;
        puVar7 = puVar15;
      } while (puVar15 < puVar12);
    }
  }
joined_r0x02fb3f04:
  if (pbVar24 < unaff_x26) {
    lVar23 = (long)unaff_x26 - (long)pbVar24;
    pbVar18 = pbVar24;
    do {
      if (*pbVar18 == 0x2e) {
        uVar4 = (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar7 = (undefined4 *)*unaff_x20;
        *puVar7 = uVar4;
        *unaff_x20 = (long)(puVar7 + 1);
        pbVar24 = pbVar18 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar23 = lVar23 + -1;
      *puVar7 = uVar4;
      *unaff_x20 = (long)(puVar7 + 1);
      pbVar24 = unaff_x26;
      pbVar18 = pbVar18 + 1;
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


