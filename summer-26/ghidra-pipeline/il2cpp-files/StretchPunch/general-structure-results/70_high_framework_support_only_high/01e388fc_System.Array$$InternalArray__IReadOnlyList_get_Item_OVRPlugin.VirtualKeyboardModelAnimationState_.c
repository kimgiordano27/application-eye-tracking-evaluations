/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01e388fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_VirtualKeyboardModelAnimationState>
               (void)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
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
  ulong *unaff_x20;
  uint uVar14;
  long unaff_x21;
  char *unaff_x22;
  uint uVar15;
  long *unaff_x24;
  long *unaff_x25;
  char *unaff_x26;
  char *unaff_x27;
  char *pcVar16;
  long unaff_x28;
  long unaff_x29;
  ulong *in_stack_00000008;
  char *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  byte in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  
  uVar8 = (ulong)(in_stack_00000030 >> 1);
  if ((in_stack_00000030 & 1) != 0) {
    uVar8 = in_stack_00000038;
  }
  if (uVar8 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)unaff_x27 - (long)unaff_x26) * 4;
  }
  else {
    if ((unaff_x26 != unaff_x27) &&
       (pcVar6 = unaff_x27 + -1, pcVar16 = unaff_x26, unaff_x26 < pcVar6)) {
      do {
        pcVar12 = pcVar16 + 1;
        cVar3 = *pcVar16;
        *pcVar16 = *pcVar6;
        pcVar7 = pcVar6 + -1;
        *pcVar6 = cVar3;
        pcVar6 = pcVar7;
        pcVar16 = pcVar12;
      } while (pcVar12 < pcVar7);
    }
    uVar4 = (**(code **)(*unaff_x24 + 0x20))();
    if (unaff_x26 < unaff_x27) {
      uVar15 = 0;
      uVar14 = 0;
      pcVar16 = unaff_x26;
      do {
        uVar8 = (ulong)uVar15;
        if ((in_stack_00000030 & 1) == 0) {
          bVar2 = (&stack0x00000031)[uVar8];
        }
        else {
          bVar2 = *(byte *)((long)in_stack_00000040 + uVar8);
        }
        if ((bVar2 != 0) && (uVar14 == bVar2)) {
          puVar11 = (undefined4 *)*unaff_x20;
          uVar14 = 0;
          *unaff_x20 = (ulong)(puVar11 + 1);
          *puVar11 = uVar4;
          uVar1 = (ulong)(in_stack_00000030 >> 1);
          if ((in_stack_00000030 & 1) != 0) {
            uVar1 = in_stack_00000038;
          }
          if (uVar8 < uVar1 - 1) {
            uVar15 = uVar15 + 1;
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x58))();
        puVar9 = (undefined4 *)*unaff_x20;
        pcVar16 = pcVar16 + 1;
        uVar14 = uVar14 + 1;
        puVar11 = puVar9 + 1;
        *unaff_x20 = (ulong)puVar11;
        *puVar9 = uVar5;
        unaff_x21 = in_stack_00000028;
        unaff_x28 = in_stack_00000020;
      } while (unaff_x27 != pcVar16);
    }
    else {
      puVar11 = (undefined4 *)*unaff_x20;
    }
    puVar9 = (undefined4 *)(unaff_x28 + ((long)unaff_x26 - unaff_x21) * 4);
    if ((puVar9 != puVar11) && (puVar9 < puVar11 + -1)) {
      puVar9 = puVar11 + -1;
      puVar11 = (undefined4 *)(unaff_x28 + ((long)unaff_x26 - unaff_x21) * 4);
      do {
        puVar13 = puVar11 + 1;
        uVar4 = *puVar11;
        *puVar11 = *puVar9;
        puVar10 = puVar9 + -1;
        *puVar9 = uVar4;
        puVar9 = puVar10;
        puVar11 = puVar13;
      } while (puVar13 < puVar10);
    }
  }
  pcVar16 = unaff_x27;
  if (unaff_x27 < unaff_x22) {
    do {
      if (*unaff_x27 == '.') {
        uVar4 = (**(code **)(*unaff_x24 + 0x18))(unaff_x24);
        puVar11 = (undefined4 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar11 + 1);
        *puVar11 = uVar4;
        pcVar16 = unaff_x27 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar11 = (undefined4 *)*unaff_x20;
      unaff_x27 = unaff_x27 + 1;
      *unaff_x20 = (ulong)(puVar11 + 1);
      *puVar11 = uVar4;
      pcVar16 = unaff_x22;
    } while (unaff_x22 != unaff_x27);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  uVar8 = *unaff_x20 + ((long)unaff_x22 - (long)pcVar16) * 4;
  *unaff_x20 = uVar8;
  if (in_stack_00000010 != unaff_x22) {
    uVar8 = unaff_x28 + ((long)in_stack_00000010 - unaff_x21) * 4;
  }
  *in_stack_00000008 = uVar8;
  if ((in_stack_00000030 & 1) != 0) {
    operator_delete(in_stack_00000040);
  }
  if (*(long *)(in_stack_00000018 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


