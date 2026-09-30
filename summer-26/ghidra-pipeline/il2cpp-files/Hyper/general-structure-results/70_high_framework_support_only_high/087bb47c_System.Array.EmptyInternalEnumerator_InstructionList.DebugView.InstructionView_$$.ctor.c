/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InstructionList.DebugView.InstructionView>$$.ctor
ENTRY_POINT: 087bb47c
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<InstructionList_DebugView_InstructionView>___ctor
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long unaff_x25;
  uint unaff_w28;
  int iVar13;
  int *piVar14;
  undefined4 unaff_s8;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_087bb4d4;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_04980e68();
LAB_087bb4d4:
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_087bb840;
  uVar11 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)uVar2 / (int)uVar11;
  }
  uVar10 = uVar2 - iVar13 * uVar11;
  if (uVar11 <= uVar10) {
LAB_087bb83c:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  piVar14 = (int *)(lVar6 + (ulong)uVar10 * 4 + 0x20);
  uVar11 = *piVar14 - 1;
  uVar8 = (ulong)uVar11;
  if (unaff_x22 == (long *)0x0) {
    if (unaff_x25 == 0) goto LAB_087bb840;
    uVar12 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar10 = (uint)uVar12;
    if (uVar11 < uVar10) {
      iVar13 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = (uint)uVar8;
        lVar6 = unaff_x25 + 0x20 + (long)(int)uVar10 * 0x10;
        if (*(uint *)(unaff_x25 + 0x20 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) ==
            uVar2) {
          plVar4 = (long *)FUN_0566cc80(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_087bb83c;
          if (plVar4 == (long *)0x0) goto LAB_087bb840;
          uVar8 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined4 *)(lVar6 + 8),uStack000000000000002c,
                             *(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar8 & 1) != 0) {
            if ((unaff_w28 & 0xff) == 2) {
              puVar3 = (undefined8 *)&stack0x00000028;
              lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              uStack0000000000000028 = uStack000000000000002c;
              goto LAB_087bb824;
            }
            if ((unaff_w28 & 0xff) != 1) {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar11 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar11 <= uVar10) goto LAB_087bb83c;
        uVar1 = *(uint *)(lVar6 + 4);
        uVar8 = (ulong)uVar1;
        if ((int)uVar11 <= iVar13) {
          FUN_08d9d998(0);
        }
        uVar12 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar13 = iVar13 + 1;
        uVar10 = (uint)uVar12;
      } while (uVar1 < uVar10);
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_087bb840;
    uVar12 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar10 = (uint)uVar12;
    if (uVar11 < uVar10) {
      iVar13 = 0;
      uStack000000000000000c = unaff_w28;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = (uint)uVar8;
        lVar6 = unaff_x25 + 0x20 + (long)(int)uVar10 * 0x10;
        if (*(uint *)(unaff_x25 + 0x20 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) ==
            uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04980b34(lVar5);
          }
          lVar7 = *unaff_x22;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_087bb5c0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_04980e68();
LAB_087bb5c0:
          uVar8 = (*(code *)*puVar3)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
              puVar3 = (undefined8 *)((long)&stack0x00000018 + 4);
              lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              in_stack_00000018._4_4_ = uStack000000000000002c;
LAB_087bb824:
              uVar12 = thunk_FUN_04983b98(*(undefined8 *)(lVar6 + 0x70),puVar3);
              FUN_08d9d894(uVar12,0);
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined4 *)(lVar6 + 0xc) = unaff_s8;
              return 1;
            }
            goto LAB_087bb83c;
          }
          uVar11 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar11 <= uVar10) goto LAB_087bb83c;
        uVar1 = *(uint *)(lVar6 + 4);
        uVar8 = (ulong)uVar1;
        if ((int)uVar11 <= iVar13) {
          FUN_08d9d998(0);
        }
        uVar12 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar13 = iVar13 + 1;
        uVar10 = (uint)uVar12;
      } while (uVar1 < uVar10);
    }
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x19 + 0x20);
    if (uVar11 == uVar10) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
      if (lVar5 == 0) goto LAB_087bb840;
      uVar10 = *(uint *)(lVar5 + 0x18);
      iVar13 = 0;
      if (uVar10 != 0) {
        iVar13 = (int)uVar2 / (int)uVar10;
      }
      uVar1 = uVar2 - iVar13 * uVar10;
      if (uVar10 <= uVar1) goto LAB_087bb83c;
      lVar6 = *(long *)(unaff_x19 + 0x18);
      piVar14 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar11 + 1;
    }
    if (lVar6 == 0) {
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_087bb83c;
    lVar6 = lVar6 + (long)(int)uVar11 * 0x10;
  }
  else {
    uVar11 = *(uint *)(unaff_x19 + 0x24);
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    if (uVar10 <= uVar11) goto LAB_087bb83c;
    lVar6 = unaff_x25 + (long)(int)uVar11 * 0x10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar2;
  iVar13 = *piVar14;
  *(undefined4 *)(lVar6 + 0x2c) = unaff_s8;
  *(int *)(lVar6 + 0x24) = iVar13 + -1;
  *(undefined4 *)(lVar6 + 0x28) = uStack000000000000002c;
  *piVar14 = uVar11 + 1;
  return 1;
}


