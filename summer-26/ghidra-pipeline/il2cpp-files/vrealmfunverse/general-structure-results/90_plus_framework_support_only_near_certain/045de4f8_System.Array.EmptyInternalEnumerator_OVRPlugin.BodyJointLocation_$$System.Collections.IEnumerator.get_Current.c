/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045de4f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
          (ulong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int unaff_w19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  uint uVar9;
  ulong uVar10;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  int *in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    if ((param_1 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        uStack0000000000000024 = in_stack_00000028._4_4_;
        uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                           &stack0x00000024);
        FUN_04d9ca1c(uVar4,0);
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
          lVar5 = unaff_x29 + (long)(int)unaff_w28 * 0x24;
          uVar11 = in_stack_00000010[1];
          uVar4 = *in_stack_00000010;
          *(undefined8 *)(lVar5 + 0x1c) = in_stack_00000010[2];
          *(undefined8 *)(lVar5 + 0x14) = uVar11;
          *(undefined8 *)(lVar5 + 0xc) = uVar4;
          return 1;
        }
LAB_045de7ac:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      return 0;
    }
    uVar10 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar10 <= unaff_w28) goto LAB_045de7ac;
      unaff_w28 = *(uint *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19 + 4);
      if ((int)(uint)uVar10 <= unaff_w22) {
        FUN_04d9cb20(0);
      }
      uVar10 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      uVar9 = (uint)uVar10;
      if (uVar9 <= unaff_w28) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x20 + 0x20);
          if (uVar8 == uVar9) {
            FUN_045deb60();
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
            if (lVar6 == 0)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
            uVar9 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar9 != 0) {
              iVar2 = unaff_w27 / (int)uVar9;
            }
            uVar1 = unaff_w27 - iVar2 * uVar9;
            if (uVar9 <= uVar1) goto LAB_045de7ac;
            lVar5 = *(long *)(unaff_x20 + 0x18);
            in_stack_00000018 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
          }
          else {
            lVar5 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
          }
          if (lVar5 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_045de7ac;
          lVar5 = lVar5 + (long)(int)uVar8 * 0x24;
        }
        else {
          uVar8 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          if (uVar9 <= uVar8) goto LAB_045de7ac;
          lVar5 = unaff_x26 + (long)(int)uVar8 * 0x24;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
        }
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *in_stack_00000018 + -1;
        *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
        uVar11 = in_stack_00000010[1];
        uVar4 = *in_stack_00000010;
        *(undefined8 *)(lVar5 + 0x3c) = in_stack_00000010[2];
        *(undefined8 *)(lVar5 + 0x34) = uVar11;
        *(undefined8 *)(lVar5 + 0x2c) = uVar4;
        *in_stack_00000018 = uVar8 + 1;
        return 1;
      }
    } while (*(int *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19) != unaff_w27);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_045de4e4;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c();
LAB_045de4e4:
    param_1 = (*(code *)*puVar3)();
  } while( true );
}


