/*
FUNCTION_NAME: Amazon.Util.AWSHttpClient$$Dispose
ENTRY_POINT: 04a24fa0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Amazon_Util_AWSHttpClient__Dispose(void)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  ulong *unaff_x20;
  char *unaff_x21;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long *unaff_x25;
  long lVar15;
  char *unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  char *in_stack_00000010;
  long *in_stack_00000018;
  char *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
  uVar14 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
  if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
    uVar14 = *(ulong *)(unaff_x29 + -0x20);
  }
  if (uVar14 == 0) {
    (**(code **)(*unaff_x25 + 0x40))();
    *unaff_x20 = (ulong)(unaff_x27 + (*unaff_x20 - (long)unaff_x21));
  }
  else {
    if ((unaff_x21 != unaff_x27) &&
       (pcVar6 = unaff_x27 + -1, pcVar9 = unaff_x21, unaff_x21 < pcVar6)) {
      do {
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        *pcVar9 = *pcVar6;
        pcVar7 = pcVar6 + -1;
        *pcVar6 = cVar2;
        pcVar6 = pcVar7;
        pcVar9 = pcVar10;
      } while (pcVar10 < pcVar7);
    }
    uVar4 = (**(code **)(*in_stack_00000018 + 0x20))(in_stack_00000018);
    if (unaff_x21 < unaff_x27) {
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = unaff_x29 - 0x28U | 1;
      lVar15 = (long)unaff_x27 - (long)unaff_x21;
      do {
        uVar8 = (ulong)uVar12;
        uVar1 = uVar14;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (*(char *)(uVar1 + uVar8) != '\0') {
          uVar1 = uVar14;
          if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
            uVar1 = *(ulong *)(unaff_x29 + -0x18);
          }
          if (uVar13 == *(byte *)(uVar1 + uVar8)) {
            puVar11 = (undefined1 *)*unaff_x20;
            uVar13 = 0;
            *unaff_x20 = (ulong)(puVar11 + 1);
            *puVar11 = uVar4;
            uVar1 = (ulong)(*(byte *)(unaff_x29 + -0x28) >> 1);
            if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
              uVar1 = *(ulong *)(unaff_x29 + -0x20);
            }
            if (uVar8 < uVar1 - 1) {
              uVar12 = uVar12 + 1;
            }
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x38))();
        puVar11 = (undefined1 *)*unaff_x20;
        lVar15 = lVar15 + -1;
        uVar13 = uVar13 + 1;
        *unaff_x20 = (ulong)(puVar11 + 1);
        *puVar11 = uVar5;
      } while (lVar15 != 0);
    }
    if ((unaff_x21 + (in_stack_00000028 - in_stack_00000030) != (char *)*unaff_x20) &&
       (pcVar9 = (char *)*unaff_x20 + -1,
       unaff_x21 + (in_stack_00000028 - in_stack_00000030) < pcVar9)) {
      pcVar6 = unaff_x21 + (in_stack_00000028 - in_stack_00000030);
      do {
        pcVar10 = pcVar6 + 1;
        cVar2 = *pcVar6;
        *pcVar6 = *pcVar9;
        pcVar7 = pcVar9 + -1;
        *pcVar9 = cVar2;
        pcVar9 = pcVar7;
        pcVar6 = pcVar10;
      } while (pcVar10 < pcVar7);
    }
  }
  if (unaff_x27 < in_stack_00000020) {
    lVar15 = (long)in_stack_00000020 - (long)unaff_x27;
    pcVar9 = unaff_x27;
    do {
      if (*pcVar9 == '.') {
        uVar4 = (**(code **)(*in_stack_00000018 + 0x18))(in_stack_00000018);
        puVar11 = (undefined1 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar11 + 1);
        *puVar11 = uVar4;
        unaff_x27 = pcVar9 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x38))();
      puVar11 = (undefined1 *)*unaff_x20;
      lVar15 = lVar15 + -1;
      *unaff_x20 = (ulong)(puVar11 + 1);
      *puVar11 = uVar4;
      unaff_x27 = in_stack_00000020;
      pcVar9 = pcVar9 + 1;
    } while (lVar15 != 0);
  }
  (**(code **)(*unaff_x25 + 0x40))();
  uVar14 = *unaff_x20;
  bVar3 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = (ulong)(in_stack_00000020 + (uVar14 - (long)unaff_x27));
  pcVar9 = in_stack_00000020 + (uVar14 - (long)unaff_x27);
  if (in_stack_00000010 != in_stack_00000020) {
    pcVar9 = in_stack_00000010 + (in_stack_00000028 - in_stack_00000030);
  }
  *unaff_x28 = (ulong)pcVar9;
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


