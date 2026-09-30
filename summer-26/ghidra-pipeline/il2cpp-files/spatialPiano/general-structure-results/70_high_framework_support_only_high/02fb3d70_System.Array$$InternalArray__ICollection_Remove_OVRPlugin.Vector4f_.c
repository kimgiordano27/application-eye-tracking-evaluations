/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4f>
ENTRY_POINT: 02fb3d70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4f>(undefined4 param_1)

{
  ulong uVar1;
  byte bVar2;
  bool in_CY;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long unaff_x21;
  uint uVar10;
  uint uVar11;
  long unaff_x24;
  ulong uVar12;
  long *unaff_x25;
  char *unaff_x26;
  long lVar13;
  char *unaff_x27;
  char *pcVar14;
  char *unaff_x28;
  long unaff_x29;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
  if (in_CY) {
    puVar7 = (undefined4 *)*unaff_x20;
    puVar5 = (undefined4 *)(unaff_x24 + (unaff_x21 - in_stack_00000030) * 4);
    if (puVar5 == puVar7) goto LAB_02fb3ea4;
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = unaff_x29 - 0x28U | 1;
    lVar13 = (long)unaff_x27 - unaff_x21;
    do {
      uVar4 = (ulong)uVar10;
      uVar1 = uVar12;
      if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
        uVar1 = *(ulong *)(unaff_x29 + -0x18);
      }
      if (*(char *)(uVar1 + uVar4) != '\0') {
        uVar1 = uVar12;
        if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
          uVar1 = *(ulong *)(unaff_x29 + -0x18);
        }
        if (uVar11 == *(byte *)(uVar1 + uVar4)) {
          puVar7 = (undefined4 *)*unaff_x20;
          uVar11 = 0;
          *puVar7 = param_1;
          bVar2 = *(byte *)(unaff_x29 + -0x28);
          uVar9 = *(ulong *)(unaff_x29 + -0x20);
          *unaff_x20 = (long)(puVar7 + 1);
          uVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            uVar1 = uVar9;
          }
          if (uVar4 < uVar1 - 1) {
            uVar10 = uVar10 + 1;
          }
        }
      }
      uVar3 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar13 = lVar13 + -1;
      uVar11 = uVar11 + 1;
      *puVar7 = uVar3;
      *unaff_x20 = (long)(puVar7 + 1);
    } while (lVar13 != 0);
    puVar7 = puVar7 + 1;
    puVar5 = (undefined4 *)(unaff_x24 + (unaff_x21 - in_stack_00000030) * 4);
    if (puVar5 == puVar7) goto LAB_02fb3ea4;
  }
  if (puVar5 < puVar7 + -1) {
    puVar5 = puVar7 + -1;
    puVar7 = (undefined4 *)(unaff_x24 + in_stack_00000030 * -4 + unaff_x21 * 4);
    do {
      puVar8 = puVar7 + 1;
      uVar3 = *puVar7;
      *puVar7 = *puVar5;
      puVar6 = puVar5 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar6;
      puVar7 = puVar8;
    } while (puVar8 < puVar6);
  }
LAB_02fb3ea4:
  if (unaff_x27 < unaff_x26) {
    lVar13 = (long)unaff_x26 - (long)unaff_x27;
    pcVar14 = unaff_x27;
    do {
      if (*pcVar14 == '.') {
        uVar3 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar7 = (undefined4 *)*unaff_x20;
        *puVar7 = uVar3;
        *unaff_x20 = (long)(puVar7 + 1);
        unaff_x27 = pcVar14 + 1;
        break;
      }
      uVar3 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      lVar13 = lVar13 + -1;
      *puVar7 = uVar3;
      *unaff_x20 = (long)(puVar7 + 1);
      unaff_x27 = unaff_x26;
      pcVar14 = pcVar14 + 1;
    } while (lVar13 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar13 = *unaff_x20 + ((long)unaff_x26 - (long)unaff_x27) * 4;
  bVar2 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar13;
  if (unaff_x28 != unaff_x26) {
    lVar13 = unaff_x24 + ((long)unaff_x28 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar13;
  if ((bVar2 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
}


