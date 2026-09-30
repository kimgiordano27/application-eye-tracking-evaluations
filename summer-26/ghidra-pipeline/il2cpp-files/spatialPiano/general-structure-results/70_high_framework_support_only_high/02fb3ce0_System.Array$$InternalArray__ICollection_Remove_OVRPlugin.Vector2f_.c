/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 02fb3ce0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>(void)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *unaff_x19;
  long lVar15;
  long *unaff_x20;
  char *unaff_x21;
  uint uVar16;
  uint uVar17;
  long unaff_x24;
  ulong uVar18;
  long *unaff_x25;
  char *unaff_x26;
  char *unaff_x27;
  char *pcVar19;
  char *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
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
       (pcVar6 = unaff_x27 + -1, pcVar19 = unaff_x21, unaff_x21 < pcVar6)) {
      do {
        pcVar12 = pcVar19 + 1;
        cVar2 = *pcVar19;
        *pcVar19 = *pcVar6;
        pcVar7 = pcVar6 + -1;
        *pcVar6 = cVar2;
        pcVar6 = pcVar7;
        pcVar19 = pcVar12;
      } while (pcVar12 < pcVar7);
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x20))();
    unaff_x19 = in_stack_00000028;
    if (unaff_x21 < unaff_x27) {
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = unaff_x29 - 0x28U | 1;
      lVar15 = (long)unaff_x27 - (long)unaff_x21;
      do {
        uVar8 = (ulong)uVar16;
        uVar1 = uVar18;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar8) != '\0') {
          uVar1 = uVar18;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar17 == *(byte *)(uVar1 + uVar8)) {
            puVar11 = (undefined4 *)*unaff_x20;
            uVar17 = 0;
            *puVar11 = uVar5;
            bVar3 = *(byte *)(unaff_x29 + -0x28);
            uVar14 = *(ulong *)(unaff_x29 + -0x20);
            *unaff_x20 = (long)(puVar11 + 1);
            uVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar1 = uVar14;
            }
            if (uVar8 < uVar1 - 1) {
              uVar16 = uVar16 + 1;
            }
          }
        }
        uVar4 = (**(code **)(*unaff_x25 + 0x58))();
        puVar11 = (undefined4 *)*unaff_x20;
        lVar15 = lVar15 + -1;
        uVar17 = uVar17 + 1;
        *puVar11 = uVar4;
        *unaff_x20 = (long)(puVar11 + 1);
      } while (lVar15 != 0);
      puVar11 = puVar11 + 1;
      puVar9 = (undefined4 *)(unaff_x24 + ((long)unaff_x21 - in_stack_00000030) * 4);
      if (puVar9 == puVar11) goto joined_r0x02fb3ea8;
    }
    else {
      puVar11 = (undefined4 *)*unaff_x20;
      puVar9 = (undefined4 *)(unaff_x24 + ((long)unaff_x21 - in_stack_00000030) * 4);
      if (puVar9 == puVar11) goto joined_r0x02fb3ea8;
    }
    if (puVar9 < puVar11 + -1) {
      puVar9 = puVar11 + -1;
      puVar11 = (undefined4 *)(unaff_x24 + in_stack_00000030 * -4 + (long)unaff_x21 * 4);
      do {
        puVar13 = puVar11 + 1;
        uVar5 = *puVar11;
        *puVar11 = *puVar9;
        puVar10 = puVar9 + -1;
        *puVar9 = uVar5;
        puVar9 = puVar10;
        puVar11 = puVar13;
      } while (puVar13 < puVar10);
    }
  }
joined_r0x02fb3ea8:
  if (unaff_x27 < unaff_x26) {
    lVar15 = (long)unaff_x26 - (long)unaff_x27;
    pcVar19 = unaff_x27;
    do {
      if (*pcVar19 == '.') {
        uVar5 = (**(code **)(*unaff_x19 + 0x18))(unaff_x19);
        puVar11 = (undefined4 *)*unaff_x20;
        *puVar11 = uVar5;
        *unaff_x20 = (long)(puVar11 + 1);
        unaff_x27 = pcVar19 + 1;
        break;
      }
      uVar5 = (**(code **)(*unaff_x25 + 0x58))();
      puVar11 = (undefined4 *)*unaff_x20;
      lVar15 = lVar15 + -1;
      *puVar11 = uVar5;
      *unaff_x20 = (long)(puVar11 + 1);
      unaff_x27 = unaff_x26;
      pcVar19 = pcVar19 + 1;
    } while (lVar15 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar15 = *unaff_x20 + ((long)unaff_x26 - (long)unaff_x27) * 4;
  bVar3 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar15;
  if (unaff_x28 != unaff_x26) {
    lVar15 = unaff_x24 + ((long)unaff_x28 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar15;
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


