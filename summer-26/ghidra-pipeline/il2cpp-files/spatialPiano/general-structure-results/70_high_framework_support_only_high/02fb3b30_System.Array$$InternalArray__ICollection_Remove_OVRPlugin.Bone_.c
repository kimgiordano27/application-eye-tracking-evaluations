/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Bone>
ENTRY_POINT: 02fb3b30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Bone>(code *param_1)

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
  byte *pbVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long *unaff_x19;
  long *unaff_x20;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long unaff_x24;
  ulong uVar20;
  long *unaff_x25;
  byte *unaff_x26;
  long lVar21;
  long unaff_x27;
  byte *pbVar22;
  byte *pbVar23;
  byte *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  
  uVar4 = (*param_1)();
  puVar7 = (undefined4 *)*unaff_x20;
  pbVar23 = (byte *)(unaff_x27 + 1);
  *puVar7 = uVar4;
  *unaff_x20 = (long)(puVar7 + 1);
  lVar19 = (long)unaff_x26 - (long)pbVar23;
  lVar21 = lVar19 + -2;
  if (((lVar19 < 2) || (*pbVar23 != 0x30)) || ((*(byte *)(unaff_x27 + 2) | 0x20) != 0x78)) {
    pbVar16 = pbVar23;
    if (pbVar23 < unaff_x26) {
      lVar21 = 0;
      do {
        bVar2 = pbVar23[lVar21];
        if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        lVar3 = lVar21;
      } while ((0xfffffff5 < bVar2 - 0x3a) &&
              (lVar21 = lVar21 + 1, lVar3 = lVar19, lVar19 != lVar21));
      pbVar22 = pbVar23 + lVar3;
      goto FUN_02fb3d08;
    }
    pbVar22 = pbVar23;
    uVar20 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar20 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar7 = (undefined4 *)*unaff_x20;
    pbVar16 = (byte *)(unaff_x27 + 3);
    *puVar7 = uVar4;
    *unaff_x20 = (long)(puVar7 + 1);
    if (pbVar16 < unaff_x26) {
      pbVar8 = pbVar16;
      do {
        bVar2 = *pbVar8;
        if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
          DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_06de37f8);
        }
        if ((bVar2 - 0x3a < 0xfffffff6) &&
           (pbVar22 = pbVar8, (bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
        lVar21 = lVar21 + -1;
        pbVar8 = pbVar8 + 1;
        pbVar22 = pbVar23 + lVar19;
      } while (lVar21 != 0);
FUN_02fb3d08:
      uVar20 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar20 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
    else {
      pbVar22 = pbVar16;
      uVar20 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar20 = *(ulong *)(unaff_x29 + -0x20);
      }
    }
  }
  if (uVar20 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar22 - (long)pbVar16) * 4;
  }
  else {
    if ((pbVar16 != pbVar22) && (pbVar8 = pbVar22 + -1, pbVar23 = pbVar16, pbVar16 < pbVar8)) {
      do {
        pbVar13 = pbVar23 + 1;
        bVar2 = *pbVar23;
        *pbVar23 = *pbVar8;
        pbVar9 = pbVar8 + -1;
        *pbVar8 = bVar2;
        pbVar8 = pbVar9;
        pbVar23 = pbVar13;
      } while (pbVar13 < pbVar9);
    }
    uVar4 = (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
    if (pbVar16 < pbVar22) {
      uVar17 = 0;
      uVar18 = 0;
      uVar20 = unaff_x29 - 0x28U | 1;
      lVar21 = (long)pbVar22 - (long)pbVar16;
      do {
        uVar10 = (ulong)uVar17;
        uVar1 = uVar20;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar10) != '\0') {
          uVar1 = uVar20;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar18 == *(byte *)(uVar1 + uVar10)) {
            puVar7 = (undefined4 *)*unaff_x20;
            uVar18 = 0;
            *puVar7 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar15 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar7 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar15;
            }
            if (uVar10 < uVar1 - 1) {
              uVar17 = uVar17 + 1;
            }
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar7 = (undefined4 *)*unaff_x20;
        lVar21 = lVar21 + -1;
        uVar18 = uVar18 + 1;
        *puVar7 = uVar6;
        *unaff_x20 = (long)(puVar7 + 1);
      } while (lVar21 != 0);
      puVar7 = puVar7 + 1;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar16 - unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    else {
      puVar7 = (undefined4 *)*unaff_x20;
      puVar11 = (undefined4 *)(unaff_x24 + ((long)pbVar16 - unaff_x27) * 4);
      if (puVar11 == puVar7) goto joined_r0x02fb3f04;
    }
    if (puVar11 < puVar7 + -1) {
      puVar11 = puVar7 + -1;
      puVar7 = (undefined4 *)(unaff_x24 + unaff_x27 * -4 + (long)pbVar16 * 4);
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
  if (pbVar22 < unaff_x26) {
    lVar21 = (long)unaff_x26 - (long)pbVar22;
    pbVar23 = pbVar22;
    do {
      if (*pbVar23 == 0x2e) {
        uVar4 = (**(code **)(*unaff_x19 + 0x18))(unaff_x19);
        puVar7 = (undefined4 *)*unaff_x20;
        *puVar7 = uVar4;
        *unaff_x20 = (long)(puVar7 + 1);
        pbVar22 = pbVar23 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar21 = lVar21 + -1;
      *puVar7 = uVar4;
      *unaff_x20 = (long)(puVar7 + 1);
      pbVar22 = unaff_x26;
      pbVar23 = pbVar23 + 1;
    } while (lVar21 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar21 = *unaff_x20 + ((long)unaff_x26 - (long)pbVar22) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar21;
  if (unaff_x28 != unaff_x26) {
    lVar21 = unaff_x24 + ((long)unaff_x28 - unaff_x27) * 4;
  }
  *in_stack_00000020 = lVar21;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


