/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector4s>
ENTRY_POINT: 01e38864
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector4s>(void)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  __locale_t p_Var6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  byte *unaff_x19;
  ulong *unaff_x20;
  uint uVar15;
  long unaff_x21;
  byte *unaff_x22;
  uint unaff_w23;
  uint uVar16;
  char *unaff_x24;
  long *unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *pbVar17;
  byte *pbVar18;
  long unaff_x29;
  long *in_stack_00000000;
  ulong *in_stack_00000008;
  byte *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  byte in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  
code_r0x01e38864:
  __cxa_guard_release();
LAB_01e38824:
  iVar3 = isxdigit_l(unaff_w23,*(__locale_t *)(unaff_x21 + 0x2f8));
  pbVar17 = unaff_x27;
  if ((iVar3 != 0) && (unaff_x27 = unaff_x27 + 1, pbVar17 = unaff_x22, unaff_x22 != unaff_x27)) {
    unaff_w23 = (uint)*unaff_x27;
    if (((*unaff_x19 & 1) != 0) || (iVar3 = __cxa_guard_acquire(), iVar3 == 0)) goto LAB_01e38824;
    p_Var6 = newlocale(0x1fbf,unaff_x24,(__locale_t)0x0);
    *(__locale_t *)(unaff_x21 + 0x2f8) = p_Var6;
    goto code_r0x01e38864;
  }
  uVar9 = (ulong)(in_stack_00000030 >> 1);
  if ((in_stack_00000030 & 1) != 0) {
    uVar9 = in_stack_00000038;
  }
  if (uVar9 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar17 - (long)unaff_x26) * 4;
  }
  else {
    if ((unaff_x26 != pbVar17) && (pbVar7 = pbVar17 + -1, pbVar18 = unaff_x26, unaff_x26 < pbVar7))
    {
      do {
        pbVar13 = pbVar18 + 1;
        bVar2 = *pbVar18;
        *pbVar18 = *pbVar7;
        pbVar8 = pbVar7 + -1;
        *pbVar7 = bVar2;
        pbVar7 = pbVar8;
        pbVar18 = pbVar13;
      } while (pbVar13 < pbVar8);
    }
    uVar4 = (**(code **)(*in_stack_00000000 + 0x20))(in_stack_00000000);
    if (unaff_x26 < pbVar17) {
      uVar16 = 0;
      uVar15 = 0;
      pbVar18 = unaff_x26;
      do {
        uVar9 = (ulong)uVar16;
        if ((in_stack_00000030 & 1) == 0) {
          bVar2 = (&stack0x00000031)[uVar9];
        }
        else {
          bVar2 = *(byte *)((long)in_stack_00000040 + uVar9);
        }
        if ((bVar2 != 0) && (uVar15 == bVar2)) {
          puVar12 = (undefined4 *)*unaff_x20;
          uVar15 = 0;
          *unaff_x20 = (ulong)(puVar12 + 1);
          *puVar12 = uVar4;
          uVar1 = (ulong)(in_stack_00000030 >> 1);
          if ((in_stack_00000030 & 1) != 0) {
            uVar1 = in_stack_00000038;
          }
          if (uVar9 < uVar1 - 1) {
            uVar16 = uVar16 + 1;
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x58))();
        puVar10 = (undefined4 *)*unaff_x20;
        pbVar18 = pbVar18 + 1;
        uVar15 = uVar15 + 1;
        puVar12 = puVar10 + 1;
        *unaff_x20 = (ulong)puVar12;
        *puVar10 = uVar5;
      } while (pbVar17 != pbVar18);
    }
    else {
      puVar12 = (undefined4 *)*unaff_x20;
    }
    puVar10 = (undefined4 *)(in_stack_00000020 + ((long)unaff_x26 - in_stack_00000028) * 4);
    if ((puVar10 != puVar12) && (puVar10 < puVar12 + -1)) {
      puVar10 = puVar12 + -1;
      puVar12 = (undefined4 *)(in_stack_00000020 + ((long)unaff_x26 - in_stack_00000028) * 4);
      do {
        puVar14 = puVar12 + 1;
        uVar4 = *puVar12;
        *puVar12 = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar4;
        puVar10 = puVar11;
        puVar12 = puVar14;
      } while (puVar14 < puVar11);
    }
  }
  pbVar18 = pbVar17;
  if (pbVar17 < unaff_x22) {
    do {
      if (*pbVar17 == 0x2e) {
        uVar4 = (**(code **)(*in_stack_00000000 + 0x18))(in_stack_00000000);
        puVar12 = (undefined4 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar12 + 1);
        *puVar12 = uVar4;
        pbVar18 = pbVar17 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar12 = (undefined4 *)*unaff_x20;
      pbVar17 = pbVar17 + 1;
      *unaff_x20 = (ulong)(puVar12 + 1);
      *puVar12 = uVar4;
      pbVar18 = unaff_x22;
    } while (unaff_x22 != pbVar17);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  uVar9 = *unaff_x20 + ((long)unaff_x22 - (long)pbVar18) * 4;
  *unaff_x20 = uVar9;
  if (in_stack_00000010 != unaff_x22) {
    uVar9 = in_stack_00000020 + ((long)in_stack_00000010 - in_stack_00000028) * 4;
  }
  *in_stack_00000008 = uVar9;
  if ((in_stack_00000030 & 1) != 0) {
    operator_delete(in_stack_00000040);
  }
  if (*(long *)(in_stack_00000018 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


