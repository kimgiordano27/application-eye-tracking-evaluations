/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 01e38728
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector3f>(void)

{
  ulong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ulong *unaff_x20;
  uint uVar14;
  byte *unaff_x21;
  byte *unaff_x22;
  uint uVar15;
  long *unaff_x24;
  long *unaff_x25;
  byte *pbVar16;
  ulong *unaff_x27;
  byte *pbVar17;
  byte *pbVar18;
  ulong unaff_x28;
  long unaff_x29;
  byte *in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  byte *in_stack_00000028;
  byte in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  
  (**(code **)(*unaff_x24 + 0x28))(&stack0x00000030);
  *unaff_x20 = unaff_x28;
  if ((*unaff_x21 == 0x2d) || (pbVar16 = unaff_x21, *unaff_x21 == 0x2b)) {
    uVar3 = (**(code **)(*unaff_x25 + 0x58))();
    puVar6 = (undefined4 *)*unaff_x20;
    pbVar16 = unaff_x21 + 1;
    *unaff_x20 = (ulong)(puVar6 + 1);
    *puVar6 = uVar3;
  }
  if ((((long)unaff_x22 - (long)pbVar16 < 2) || (*pbVar16 != 0x30)) || ((pbVar16[1] | 0x20) != 0x78)
     ) {
    pbVar18 = pbVar16;
    pbVar17 = pbVar16;
    if (pbVar16 < unaff_x22) {
      do {
        bVar2 = *pbVar17;
        if (((DAT_046c9300 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_046c9300), iVar4 != 0)) {
          DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_046c9300);
          unaff_x28 = in_stack_00000020;
        }
        iVar4 = isdigit_l((uint)bVar2,DAT_046c92f8);
        unaff_x21 = in_stack_00000028;
        pbVar18 = pbVar17;
      } while ((iVar4 != 0) && (pbVar17 = pbVar17 + 1, pbVar18 = unaff_x22, unaff_x22 != pbVar17));
    }
  }
  else {
    uVar3 = (**(code **)(*unaff_x25 + 0x58))();
    puVar6 = (undefined4 *)*unaff_x20;
    *unaff_x20 = (ulong)(puVar6 + 1);
    *puVar6 = uVar3;
    uVar3 = (**(code **)(*unaff_x25 + 0x58))();
    puVar6 = (undefined4 *)*unaff_x20;
    pbVar16 = pbVar16 + 2;
    *unaff_x20 = (ulong)(puVar6 + 1);
    *puVar6 = uVar3;
    pbVar18 = pbVar16;
    pbVar17 = pbVar16;
    if (pbVar16 < unaff_x22) {
      do {
        bVar2 = *pbVar17;
        if (((DAT_046c9300 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_046c9300), iVar4 != 0)) {
          DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_046c9300);
          unaff_x28 = in_stack_00000020;
        }
        iVar4 = isxdigit_l((uint)bVar2,DAT_046c92f8);
        unaff_x21 = in_stack_00000028;
        pbVar18 = pbVar17;
      } while ((iVar4 != 0) && (pbVar17 = pbVar17 + 1, pbVar18 = unaff_x22, unaff_x22 != pbVar17));
    }
  }
  uVar9 = (ulong)(in_stack_00000030 >> 1);
  if ((in_stack_00000030 & 1) != 0) {
    uVar9 = in_stack_00000038;
  }
  if (uVar9 == 0) {
    (**(code **)(*unaff_x25 + 0x60))();
    *unaff_x20 = *unaff_x20 + ((long)pbVar18 - (long)pbVar16) * 4;
    in_stack_00000020 = unaff_x28;
  }
  else {
    if ((pbVar16 != pbVar18) && (pbVar7 = pbVar18 + -1, pbVar17 = pbVar16, pbVar16 < pbVar7)) {
      do {
        pbVar12 = pbVar17 + 1;
        bVar2 = *pbVar17;
        *pbVar17 = *pbVar7;
        pbVar8 = pbVar7 + -1;
        *pbVar7 = bVar2;
        pbVar7 = pbVar8;
        pbVar17 = pbVar12;
      } while (pbVar12 < pbVar8);
    }
    uVar3 = (**(code **)(*unaff_x24 + 0x20))(unaff_x24);
    if (pbVar16 < pbVar18) {
      uVar15 = 0;
      uVar14 = 0;
      pbVar17 = pbVar16;
      do {
        uVar9 = (ulong)uVar15;
        if ((in_stack_00000030 & 1) == 0) {
          bVar2 = (&stack0x00000031)[uVar9];
        }
        else {
          bVar2 = *(byte *)((long)in_stack_00000040 + uVar9);
        }
        if ((bVar2 != 0) && (uVar14 == bVar2)) {
          puVar6 = (undefined4 *)*unaff_x20;
          uVar14 = 0;
          *unaff_x20 = (ulong)(puVar6 + 1);
          *puVar6 = uVar3;
          uVar1 = (ulong)(in_stack_00000030 >> 1);
          if ((in_stack_00000030 & 1) != 0) {
            uVar1 = in_stack_00000038;
          }
          if (uVar9 < uVar1 - 1) {
            uVar15 = uVar15 + 1;
          }
        }
        uVar5 = (**(code **)(*unaff_x25 + 0x58))();
        puVar10 = (undefined4 *)*unaff_x20;
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 + 1;
        puVar6 = puVar10 + 1;
        *unaff_x20 = (ulong)puVar6;
        *puVar10 = uVar5;
      } while (pbVar18 != pbVar17);
    }
    else {
      puVar6 = (undefined4 *)*unaff_x20;
      in_stack_00000028 = unaff_x21;
      in_stack_00000020 = unaff_x28;
    }
    puVar10 = (undefined4 *)(in_stack_00000020 + ((long)pbVar16 - (long)in_stack_00000028) * 4);
    unaff_x21 = in_stack_00000028;
    if ((puVar10 != puVar6) && (puVar10 < puVar6 + -1)) {
      puVar10 = puVar6 + -1;
      puVar6 = (undefined4 *)(in_stack_00000020 + ((long)pbVar16 - (long)in_stack_00000028) * 4);
      do {
        puVar13 = puVar6 + 1;
        uVar3 = *puVar6;
        *puVar6 = *puVar10;
        puVar11 = puVar10 + -1;
        *puVar10 = uVar3;
        puVar10 = puVar11;
        puVar6 = puVar13;
      } while (puVar13 < puVar11);
    }
  }
  pbVar16 = pbVar18;
  if (pbVar18 < unaff_x22) {
    do {
      if (*pbVar18 == 0x2e) {
        uVar3 = (**(code **)(*unaff_x24 + 0x18))(unaff_x24);
        puVar6 = (undefined4 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar6 + 1);
        *puVar6 = uVar3;
        pbVar16 = pbVar18 + 1;
        break;
      }
      uVar3 = (**(code **)(*unaff_x25 + 0x58))();
      puVar6 = (undefined4 *)*unaff_x20;
      pbVar18 = pbVar18 + 1;
      *unaff_x20 = (ulong)(puVar6 + 1);
      *puVar6 = uVar3;
      pbVar16 = unaff_x22;
    } while (unaff_x22 != pbVar18);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  uVar9 = *unaff_x20 + ((long)unaff_x22 - (long)pbVar16) * 4;
  *unaff_x20 = uVar9;
  if (in_stack_00000010 != unaff_x22) {
    uVar9 = in_stack_00000020 + ((long)in_stack_00000010 - (long)unaff_x21) * 4;
  }
  *unaff_x27 = uVar9;
  if ((in_stack_00000030 & 1) != 0) {
    operator_delete(in_stack_00000040);
  }
  if (*(long *)(in_stack_00000018 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


