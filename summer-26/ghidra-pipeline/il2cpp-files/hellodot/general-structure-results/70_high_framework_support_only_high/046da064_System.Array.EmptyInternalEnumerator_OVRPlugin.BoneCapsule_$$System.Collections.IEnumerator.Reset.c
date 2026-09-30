/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 046da064
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
          (code *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar5 = (*param_1)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_04f52404();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        uVar11 = in_stack_00000000[1];
        uVar10 = *in_stack_00000000;
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          lVar7 = unaff_x26 + unaff_x19 * 0x28;
          *(undefined8 *)(lVar7 + 0x40) = in_stack_00000000[2];
          *(undefined8 *)(lVar7 + 0x38) = uVar11;
          *(undefined8 *)(lVar7 + 0x30) = uVar10;
          if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
            return 1;
          }
        }
LAB_046da2dc:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_046da2dc;
      uVar9 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w29) {
        FUN_04f52508(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar5 <= uVar9) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar9 = *(uint *)(unaff_x21 + 0x20);
          if (uVar9 == (uint)uVar5) {
            FUN_046da6a0();
            lVar7 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
            if (lVar7 == 0) goto LAB_046da2f4;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar2 = 0;
            if (uVar1 != 0) {
              iVar2 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar2 * uVar1;
            if (uVar1 <= uVar3) goto LAB_046da2dc;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
          }
          if (unaff_x26 == 0) {
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_046da2dc;
          lVar7 = (long)(int)uVar9;
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar9 = *(uint *)(unaff_x21 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_046da2dc;
          lVar7 = (long)(int)uVar9;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x28 + 0x24);
        }
        lVar7 = unaff_x26 + lVar7 * 0x28;
        *(int *)(lVar7 + 0x20) = unaff_w27;
        iVar2 = *unaff_x28;
        *(undefined8 *)(lVar7 + 0x28) = unaff_x20;
        *(int *)(lVar7 + 0x24) = iVar2 + -1;
        uVar11 = in_stack_00000000[1];
        uVar10 = *in_stack_00000000;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_00000000[2];
        *(undefined8 *)(lVar7 + 0x38) = uVar11;
        *(undefined8 *)(lVar7 + 0x30) = uVar10;
        *unaff_x28 = uVar9 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar9;
    } while (*(int *)(unaff_x26 + (long)(int)uVar9 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    lVar6 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046da060;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_046da060:
    param_1 = (code *)*puVar4;
  } while( true );
}


