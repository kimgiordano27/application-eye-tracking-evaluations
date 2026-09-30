/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InstructionList.DebugView.InstructionView>$$get_Current
ENTRY_POINT: 087bb41c
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<InstructionList_DebugView_InstructionView>__get_Current
          (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int in_w8;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  uint unaff_w28;
  int iVar17;
  int *piVar18;
  undefined4 unaff_s8;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  *(int *)(param_1 + 0x2c) = in_w8 + 1;
  uStack000000000000002c = param_2;
  if (in_x9 == 0) {
    FUN_087bb304();
  }
  plVar12 = *(long **)(unaff_x19 + 0x30);
  lVar16 = *(long *)(unaff_x19 + 0x18);
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (plVar12 == (long *)0x0) {
    uVar4 = FUN_08d98794(&stack0x0000002c,*(undefined8 *)(lVar7 + 0x188));
  }
  else {
    lVar7 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_087bb4d4;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar12,lVar7,1);
LAB_087bb4d4:
    uVar4 = (*(code *)*puVar5)(plVar12,param_2,puVar5[1]);
  }
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 == 0) goto LAB_087bb840;
  uVar14 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar17 = 0;
  if (uVar14 != 0) {
    iVar17 = (int)uVar4 / (int)uVar14;
  }
  uVar13 = uVar4 - iVar17 * uVar14;
  if (uVar14 <= uVar13) {
LAB_087bb83c:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  piVar18 = (int *)(lVar7 + (ulong)uVar13 * 4 + 0x20);
  uVar14 = *piVar18 - 1;
  uVar10 = (ulong)uVar14;
  if (plVar12 == (long *)0x0) {
    if (lVar16 == 0) goto LAB_087bb840;
    uVar15 = *(undefined8 *)(lVar16 + 0x18);
    uVar13 = (uint)uVar15;
    if (uVar14 < uVar13) {
      iVar17 = 0;
      do {
        uVar14 = (uint)uVar15;
        uVar13 = (uint)uVar10;
        lVar7 = lVar16 + 0x20 + (long)(int)uVar13 * 0x10;
        if (*(uint *)(lVar16 + 0x20 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) ==
            uVar4) {
          plVar12 = (long *)FUN_0566cc80(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_087bb83c;
          if (plVar12 == (long *)0x0) goto LAB_087bb840;
          uVar10 = (**(code **)(*plVar12 + 0x1b8))
                             (plVar12,*(undefined4 *)(lVar7 + 8),uStack000000000000002c,
                              *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if ((unaff_w28 & 0xff) == 2) {
              puVar6 = &stack0x00000028;
              lVar16 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              in_stack_00000028 = uStack000000000000002c;
              goto LAB_087bb824;
            }
            if ((unaff_w28 & 0xff) != 1) {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar7 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar14 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar14 <= uVar13) goto LAB_087bb83c;
        uVar2 = *(uint *)(lVar7 + 4);
        uVar10 = (ulong)uVar2;
        if ((int)uVar14 <= iVar17) {
          FUN_08d9d998(0);
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        iVar17 = iVar17 + 1;
        uVar13 = (uint)uVar15;
      } while (uVar2 < uVar13);
    }
  }
  else {
    if (lVar16 == 0) goto LAB_087bb840;
    uVar15 = *(undefined8 *)(lVar16 + 0x18);
    uVar13 = (uint)uVar15;
    if (uVar14 < uVar13) {
      iVar17 = 0;
      uStack000000000000000c = unaff_w28;
      do {
        uVar3 = uStack000000000000002c;
        uVar14 = (uint)uVar15;
        uVar13 = (uint)uVar10;
        lVar7 = lVar16 + 0x20 + (long)(int)uVar13 * 0x10;
        if (*(uint *)(lVar16 + 0x20 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) ==
            uVar4) {
          uVar1 = *(undefined4 *)(lVar7 + 8);
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_04980b34(lVar8);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_087bb5c0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar12,lVar8,0);
LAB_087bb5c0:
          uVar10 = (*(code *)*puVar5)(plVar12,uVar1,uVar3,puVar5[1]);
          if ((uVar10 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
              puVar6 = (undefined4 *)((long)&stack0x00000018 + 4);
              lVar16 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              in_stack_00000018._4_4_ = uStack000000000000002c;
LAB_087bb824:
              uVar15 = thunk_FUN_04983b98(*(undefined8 *)(lVar16 + 0x70),puVar6);
              FUN_08d9d894(uVar15,0);
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar7 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar14 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar14 <= uVar13) goto LAB_087bb83c;
        uVar2 = *(uint *)(lVar7 + 4);
        uVar10 = (ulong)uVar2;
        if ((int)uVar14 <= iVar17) {
          FUN_08d9d998(0);
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x18);
        iVar17 = iVar17 + 1;
        uVar13 = (uint)uVar15;
      } while (uVar2 < uVar13);
    }
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar14 = *(uint *)(unaff_x19 + 0x20);
    if (uVar14 == uVar13) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext();
      lVar7 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar13 + 1;
      if (lVar7 == 0) goto LAB_087bb840;
      uVar13 = *(uint *)(lVar7 + 0x18);
      iVar17 = 0;
      if (uVar13 != 0) {
        iVar17 = (int)uVar4 / (int)uVar13;
      }
      uVar2 = uVar4 - iVar17 * uVar13;
      if (uVar13 <= uVar2) goto LAB_087bb83c;
      lVar16 = *(long *)(unaff_x19 + 0x18);
      piVar18 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      lVar16 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar14 + 1;
    }
    if (lVar16 == 0) {
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_087bb83c;
    lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
  }
  else {
    uVar14 = *(uint *)(unaff_x19 + 0x24);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    if (uVar13 <= uVar14) goto LAB_087bb83c;
    lVar16 = lVar16 + (long)(int)uVar14 * 0x10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar16 + 0x24);
  }
  *(uint *)(lVar16 + 0x20) = uVar4;
  iVar17 = *piVar18;
  *(undefined4 *)(lVar16 + 0x2c) = unaff_s8;
  *(int *)(lVar16 + 0x24) = iVar17 + -1;
  *(undefined4 *)(lVar16 + 0x28) = uStack000000000000002c;
  *piVar18 = uVar14 + 1;
  return 1;
}


