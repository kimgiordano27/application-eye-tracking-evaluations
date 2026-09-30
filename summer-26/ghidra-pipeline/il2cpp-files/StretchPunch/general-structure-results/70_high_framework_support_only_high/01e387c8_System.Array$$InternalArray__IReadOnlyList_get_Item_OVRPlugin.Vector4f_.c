/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 01e387c8
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


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector4f>
               (undefined4 *param_1,undefined4 param_2)

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
  ulong *unaff_x20;
  uint uVar14;
  long unaff_x21;
  byte *unaff_x22;
  uint uVar15;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  byte *pbVar16;
  byte *pbVar17;
  long unaff_x28;
  long unaff_x29;
  ulong *in_stack_00000008;
  byte *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  byte in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  
  *param_1 = param_2;
  uVar4 = (**(code **)(*unaff_x25 + 0x58))();
  puVar7 = (undefined4 *)*unaff_x20;
  pbVar17 = (byte *)(unaff_x26 + 2);
  *unaff_x20 = (ulong)(puVar7 + 1);
  *puVar7 = uVar4;
  pbVar16 = pbVar17;
  pbVar12 = pbVar17;
  if (pbVar17 < unaff_x22) {
    do {
      bVar2 = *pbVar12;
      if (((DAT_046c9300 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_046c9300), iVar5 != 0)) {
        DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_046c9300);
        unaff_x28 = in_stack_00000020;
      }
      iVar5 = isxdigit_l((uint)bVar2,DAT_046c92f8);
      unaff_x21 = in_stack_00000028;
      pbVar16 = pbVar12;
    } while ((iVar5 != 0) && (pbVar12 = pbVar12 + 1, pbVar16 = unaff_x22, unaff_x22 != pbVar12));
  }
  uVar9 = (ulong)(in_stack_00000030 >> 1);
  if ((in_stack_00000030 & 1) != 0) {
    uVar9 = in_stack_00000038;
  }
  if (uVar9 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar16 - (long)pbVar17) * 4;
  }
  else {
    if ((pbVar17 != pbVar16) && (pbVar17 < pbVar16 + -1)) {
      pbVar12 = (byte *)(unaff_x26 + 3);
      pbVar8 = pbVar16 + -1;
      do {
        bVar2 = pbVar12[-1];
        pbVar12[-1] = *pbVar8;
        *pbVar8 = bVar2;
        bVar3 = pbVar12 < pbVar8 + -1;
        pbVar12 = pbVar12 + 1;
        pbVar8 = pbVar8 + -1;
      } while (bVar3);
    }
    uVar4 = (**(code **)(*unaff_x24 + 0x20))(unaff_x24);
    if (pbVar17 < pbVar16) {
      uVar15 = 0;
      uVar14 = 0;
      pbVar12 = pbVar17;
      do {
        uVar9 = (ulong)uVar15;
        if ((in_stack_00000030 & 1) == 0) {
          bVar2 = (&stack0x00000031)[uVar9];
        }
        else {
          bVar2 = *(byte *)((long)in_stack_00000040 + uVar9);
        }
        if ((bVar2 != 0) && (uVar14 == bVar2)) {
          puVar7 = (undefined4 *)*unaff_x20;
          uVar14 = 0;
          *unaff_x20 = (ulong)(puVar7 + 1);
          *puVar7 = uVar4;
          uVar1 = (ulong)(in_stack_00000030 >> 1);
          if ((in_stack_00000030 & 1) != 0) {
            uVar1 = in_stack_00000038;
          }
          if (uVar9 < uVar1 - 1) {
            uVar15 = uVar15 + 1;
          }
        }
        uVar6 = (**(code **)(*unaff_x25 + 0x58))();
        puVar10 = (undefined4 *)*unaff_x20;
        pbVar12 = pbVar12 + 1;
        uVar14 = uVar14 + 1;
        puVar7 = puVar10 + 1;
        *unaff_x20 = (ulong)puVar7;
        *puVar10 = uVar6;
      } while (pbVar16 != pbVar12);
    }
    else {
      puVar7 = (undefined4 *)*unaff_x20;
      in_stack_00000028 = unaff_x21;
      in_stack_00000020 = unaff_x28;
    }
    puVar10 = (undefined4 *)(in_stack_00000020 + ((long)pbVar17 - in_stack_00000028) * 4);
    unaff_x21 = in_stack_00000028;
    unaff_x28 = in_stack_00000020;
    if ((puVar10 != puVar7) && (puVar10 < puVar7 + -1)) {
      puVar10 = puVar7 + -1;
      puVar7 = (undefined4 *)(in_stack_00000020 + ((long)pbVar17 - in_stack_00000028) * 4);
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
  pbVar17 = pbVar16;
  if (pbVar16 < unaff_x22) {
    do {
      if (*pbVar16 == 0x2e) {
        uVar4 = (**(code **)(*unaff_x24 + 0x18))(unaff_x24);
        puVar7 = (undefined4 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar4;
        pbVar17 = pbVar16 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar7 = (undefined4 *)*unaff_x20;
      pbVar16 = pbVar16 + 1;
      *unaff_x20 = (ulong)(puVar7 + 1);
      *puVar7 = uVar4;
      pbVar17 = unaff_x22;
    } while (unaff_x22 != pbVar16);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  uVar9 = *unaff_x20 + ((long)unaff_x22 - (long)pbVar17) * 4;
  *unaff_x20 = uVar9;
  if (in_stack_00000010 != unaff_x22) {
    uVar9 = unaff_x28 + ((long)in_stack_00000010 - unaff_x21) * 4;
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


