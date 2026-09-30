/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02fb3c98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  byte *unaff_x19;
  long *unaff_x20;
  char *unaff_x21;
  uint uVar16;
  long unaff_x22;
  uint uVar17;
  long unaff_x23;
  char *unaff_x24;
  ulong uVar18;
  long *unaff_x25;
  long lVar19;
  char *unaff_x27;
  char *pcVar20;
  long unaff_x28;
  long unaff_x29;
  char *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
  for (; unaff_x23 != unaff_x22; unaff_x22 = unaff_x22 + 1) {
    bVar3 = unaff_x21[unaff_x22];
    if (((*unaff_x19 & 1) == 0) && (iVar4 = __cxa_guard_acquire(), iVar4 != 0)) {
      DAT_06de37f0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_06de37f8);
    }
    if (bVar3 - 0x3a < 0xfffffff6) {
      unaff_x27 = unaff_x21 + unaff_x22;
      break;
    }
  }
  uVar18 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
  if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
    uVar18 = *(ulong *)(unaff_x29 + -0x20);
  }
  if (uVar18 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)unaff_x27 - (long)unaff_x21) * 4;
  }
  else {
    if ((unaff_x21 != unaff_x27) &&
       (pcVar7 = unaff_x27 + -1, pcVar20 = unaff_x21, unaff_x21 < pcVar7)) {
      do {
        pcVar12 = pcVar20 + 1;
        cVar2 = *pcVar20;
        *pcVar20 = *pcVar7;
        pcVar8 = pcVar7 + -1;
        *pcVar7 = cVar2;
        pcVar7 = pcVar8;
        pcVar20 = pcVar12;
      } while (pcVar12 < pcVar8);
    }
    uVar5 = (**(code **)(*in_stack_00000028 + 0x20))(in_stack_00000028);
    if (unaff_x21 < unaff_x27) {
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = unaff_x29 - 0x28U | 1;
      lVar19 = (long)unaff_x27 - (long)unaff_x21;
      do {
        uVar9 = (ulong)uVar16;
        uVar1 = uVar18;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar9) != '\0') {
          uVar1 = uVar18;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar17 == *(byte *)(uVar1 + uVar9)) {
            puVar13 = (undefined4 *)*unaff_x20;
            uVar17 = 0;
            *puVar13 = uVar5;
            bVar3 = *(byte *)(unaff_x29 + -0x28);
            uVar15 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar13 + 1);
            uVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar1 = uVar15;
            }
            if (uVar9 < uVar1 - 1) {
              uVar16 = uVar16 + 1;
            }
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar13 = (undefined4 *)*unaff_x20;
        lVar19 = lVar19 + -1;
        uVar17 = uVar17 + 1;
        *puVar13 = uVar6;
        *unaff_x20 = (long)(puVar13 + 1);
      } while (lVar19 != 0);
      puVar13 = puVar13 + 1;
      puVar10 = (undefined4 *)(unaff_x28 + ((long)unaff_x21 - in_stack_00000030) * 4);
      if (puVar10 == puVar13) goto joined_r0x02fb3f04;
    }
    else {
      puVar13 = (undefined4 *)*unaff_x20;
      puVar10 = (undefined4 *)(unaff_x28 + ((long)unaff_x21 - in_stack_00000030) * 4);
      if (puVar10 == puVar13) goto joined_r0x02fb3f04;
    }
    if (puVar10 < puVar13 + -1) {
      puVar10 = puVar13 + -1;
      puVar13 = (undefined4 *)(unaff_x28 + in_stack_00000030 * -4 + (long)unaff_x21 * 4);
      do {
        puVar14 = puVar13 + 1;
        uVar5 = *puVar13;
        *puVar13 = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar5;
        puVar10 = puVar11;
        puVar13 = puVar14;
      } while (puVar14 < puVar11);
    }
  }
joined_r0x02fb3f04:
  if (unaff_x27 < unaff_x24) {
    lVar19 = (long)unaff_x24 - (long)unaff_x27;
    pcVar20 = unaff_x27;
    do {
      if (*pcVar20 == '.') {
        uVar5 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar13 = (undefined4 *)*unaff_x20;
        *puVar13 = uVar5;
        *unaff_x20 = (long)(puVar13 + 1);
        unaff_x27 = pcVar20 + 1;
        break;
      }
      uVar5 = (**(code **)(*unaff_x25 + 0x58))();
      puVar13 = (undefined4 *)*unaff_x20;
      lVar19 = lVar19 + -1;
      *puVar13 = uVar5;
      *unaff_x20 = (long)(puVar13 + 1);
      unaff_x27 = unaff_x24;
      pcVar20 = pcVar20 + 1;
    } while (lVar19 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar19 = *unaff_x20 + ((long)unaff_x24 - (long)unaff_x27) * 4;
  bVar3 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar19;
  if (in_stack_00000018 != unaff_x24) {
    lVar19 = unaff_x28 + ((long)in_stack_00000018 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar19;
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


