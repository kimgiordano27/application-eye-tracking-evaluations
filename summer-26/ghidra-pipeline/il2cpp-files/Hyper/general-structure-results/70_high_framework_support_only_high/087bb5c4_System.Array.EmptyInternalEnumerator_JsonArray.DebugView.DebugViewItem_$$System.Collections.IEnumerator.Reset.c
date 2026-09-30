/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<JsonArray.DebugView.DebugViewItem>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 087bb5c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<JsonArray_DebugView_DebugViewItem>__System_Collections_IEnumerator_Reset
          (code *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  long unaff_x21;
  long *unaff_x22;
  uint uVar10;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined4 unaff_s8;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  
  do {
    uVar4 = (*param_1)();
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        uStack000000000000001c = in_stack_00000028._4_4_;
        uVar5 = thunk_FUN_04983b98(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                   &stack0x0000001c);
        FUN_08d9d894(uVar5,0);
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if ((uint)unaff_x27 < *(uint *)(unaff_x25 + 0x18)) {
          *(undefined4 *)(unaff_x21 + 0xc) = unaff_s8;
          return 1;
        }
LAB_087bb83c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      return 0;
    }
    uVar4 = (ulong)*(uint *)(unaff_x25 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x27) goto LAB_087bb83c;
      uVar9 = *(uint *)(unaff_x21 + 4);
      if ((int)(uint)uVar4 <= unaff_w28) {
        FUN_08d9d998(0);
      }
      uVar4 = *(ulong *)(unaff_x25 + 0x18);
      unaff_w28 = unaff_w28 + 1;
      uVar10 = (uint)uVar4;
      if (uVar10 <= uVar9) {
        if (*(int *)(unaff_x19 + 0x28) < 1) {
          uVar9 = *(uint *)(unaff_x19 + 0x20);
          if (uVar9 == uVar10) {
            System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext();
            lVar6 = *(long *)(unaff_x19 + 0x10);
            *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
            if (lVar6 == 0) goto LAB_087bb840;
            uVar10 = *(uint *)(lVar6 + 0x18);
            iVar1 = 0;
            if (uVar10 != 0) {
              iVar1 = unaff_w26 / (int)uVar10;
            }
            uVar2 = unaff_w26 - iVar1 * uVar10;
            if (uVar10 <= uVar2) goto LAB_087bb83c;
            lVar7 = *(long *)(unaff_x19 + 0x18);
            in_stack_00000010 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            lVar7 = *(long *)(unaff_x19 + 0x18);
            *(uint *)(unaff_x19 + 0x20) = uVar9 + 1;
          }
          if (lVar7 == 0) {
LAB_087bb840:
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_087bb83c;
          lVar7 = lVar7 + (long)(int)uVar9 * 0x10;
        }
        else {
          uVar9 = *(uint *)(unaff_x19 + 0x24);
          *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
          if (uVar10 <= uVar9) goto LAB_087bb83c;
          lVar7 = unaff_x25 + (long)(int)uVar9 * 0x10;
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar7 + 0x24);
        }
        *(int *)(lVar7 + 0x20) = unaff_w26;
        iVar1 = *in_stack_00000010;
        *(undefined4 *)(lVar7 + 0x2c) = unaff_s8;
        *(int *)(lVar7 + 0x24) = iVar1 + -1;
        *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028._4_4_;
        *in_stack_00000010 = uVar9 + 1;
        return 1;
      }
      unaff_x27 = (long)(int)uVar9;
      unaff_x21 = unaff_x29 + unaff_x27 * 0x10;
    } while (*(int *)(unaff_x29 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar9 << 4)
                     ) != unaff_w26);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    lVar6 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_087bb5c0;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_087bb5c0:
    param_1 = (code *)*puVar3;
  } while( true );
}


