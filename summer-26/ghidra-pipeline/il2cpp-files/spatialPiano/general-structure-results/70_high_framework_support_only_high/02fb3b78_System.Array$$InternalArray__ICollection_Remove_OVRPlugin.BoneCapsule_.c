/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BoneCapsule>
ENTRY_POINT: 02fb3b78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_BoneCapsule>(long param_1)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar15;
  long unaff_x22;
  uint uVar16;
  long unaff_x23;
  long unaff_x24;
  ulong uVar17;
  long *unaff_x25;
  byte *unaff_x26;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
  uVar4 = (**(code **)(param_1 + 0x58))();
  puVar7 = (undefined4 *)*unaff_x20;
  *puVar7 = uVar4;
  *unaff_x20 = (long)(puVar7 + 1);
  uVar4 = (**(code **)(*unaff_x25 + 0x58))();
  puVar7 = (undefined4 *)*unaff_x20;
  pbVar19 = (byte *)(unaff_x21 + 2);
  *puVar7 = uVar4;
  *unaff_x20 = (long)(puVar7 + 1);
  if (pbVar19 < unaff_x26) {
    pbVar12 = pbVar19;
    do {
      pbVar20 = pbVar12;
      bVar2 = *pbVar20;
      if (((DAT_06de37f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06de37f8), iVar5 != 0)) {
        DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_06de37f8);
      }
      if ((bVar2 - 0x3a < 0xfffffff6) && ((bVar2 & 0xffffffdf) - 0x47 < 0xfffffffa)) break;
      unaff_x22 = unaff_x22 + -1;
      pbVar12 = pbVar20 + 1;
      pbVar20 = (byte *)(unaff_x21 + unaff_x23);
    } while (unaff_x22 != 0);
    unaff_x19 = in_stack_00000028;
    uVar17 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar17 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  else {
    pbVar20 = pbVar19;
    uVar17 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      uVar17 = *(ulong *)(unaff_x29 + -0x20);
    }
  }
  if (uVar17 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar20 - (long)pbVar19) * 4;
    in_stack_00000028 = unaff_x19;
  }
  else {
    if ((pbVar19 != pbVar20) && (pbVar19 < pbVar20 + -1)) {
      pbVar12 = (byte *)(unaff_x21 + 3);
      pbVar8 = pbVar20 + -1;
      do {
        bVar2 = pbVar12[-1];
        pbVar12[-1] = *pbVar8;
        *pbVar8 = bVar2;
        bVar3 = pbVar12 < pbVar8 + -1;
        pbVar12 = pbVar12 + 1;
        pbVar8 = pbVar8 + -1;
      } while (bVar3);
    }
    uVar4 = (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
    if (pbVar19 < pbVar20) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = unaff_x29 - 0x28U | 1;
      lVar18 = (long)pbVar20 - (long)pbVar19;
      do {
        uVar9 = (ulong)uVar15;
        uVar1 = uVar17;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar9) != '\0') {
          uVar1 = uVar17;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar16 == *(byte *)(uVar1 + uVar9)) {
            puVar7 = (undefined4 *)*unaff_x20;
            uVar16 = 0;
            *puVar7 = uVar4;
            bVar2 = *(byte *)(unaff_x29 + -0x28);
            uVar14 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar7 + 1);
            uVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar1 = uVar14;
            }
            if (uVar9 < uVar1 - 1) {
              uVar15 = uVar15 + 1;
            }
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar7 = (undefined4 *)*unaff_x20;
        lVar18 = lVar18 + -1;
        uVar16 = uVar16 + 1;
        *puVar7 = uVar6;
        *unaff_x20 = (long)(puVar7 + 1);
      } while (lVar18 != 0);
      puVar7 = puVar7 + 1;
      puVar10 = (undefined4 *)(unaff_x24 + ((long)pbVar19 - in_stack_00000030) * 4);
      if (puVar10 == puVar7) goto joined_r0x02fb3ea8;
    }
    else {
      puVar7 = (undefined4 *)*unaff_x20;
      puVar10 = (undefined4 *)(unaff_x24 + ((long)pbVar19 - in_stack_00000030) * 4);
      if (puVar10 == puVar7) goto joined_r0x02fb3ea8;
    }
    if (puVar10 < puVar7 + -1) {
      puVar10 = puVar7 + -1;
      puVar7 = (undefined4 *)(unaff_x24 + in_stack_00000030 * -4 + (long)pbVar19 * 4);
      do {
        puVar13 = puVar7 + 1;
        uVar4 = *puVar7;
        *puVar7 = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar4;
        puVar10 = puVar11;
        puVar7 = puVar13;
      } while (puVar13 < puVar11);
    }
  }
joined_r0x02fb3ea8:
  if (pbVar20 < unaff_x26) {
    lVar18 = (long)unaff_x26 - (long)pbVar20;
    pbVar19 = pbVar20;
    do {
      if (*pbVar19 == 0x2e) {
        uVar4 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar7 = (undefined4 *)*unaff_x20;
        *puVar7 = uVar4;
        *unaff_x20 = (long)(puVar7 + 1);
        pbVar20 = pbVar19 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar18 = lVar18 + -1;
      *puVar7 = uVar4;
      *unaff_x20 = (long)(puVar7 + 1);
      pbVar20 = unaff_x26;
      pbVar19 = pbVar19 + 1;
    } while (lVar18 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar18 = *unaff_x20 + ((long)unaff_x26 - (long)pbVar20) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar18;
  if (unaff_x28 != unaff_x26) {
    lVar18 = unaff_x24 + ((long)unaff_x28 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar18;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


