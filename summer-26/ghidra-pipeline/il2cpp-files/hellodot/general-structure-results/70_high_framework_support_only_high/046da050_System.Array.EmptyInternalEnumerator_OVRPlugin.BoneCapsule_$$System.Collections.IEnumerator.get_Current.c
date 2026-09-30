/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046da050
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
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_get_Current
          (undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
LAB_046da060:
  do {
    uVar4 = (*(code *)*param_1)();
    if ((uVar4 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_04f52404();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        uVar10 = in_stack_00000000[1];
        uVar9 = *in_stack_00000000;
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          lVar6 = unaff_x26 + unaff_x19 * 0x28;
          *(undefined8 *)(lVar6 + 0x40) = in_stack_00000000[2];
          *(undefined8 *)(lVar6 + 0x38) = uVar10;
          *(undefined8 *)(lVar6 + 0x30) = uVar9;
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
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x19) goto LAB_046da2dc;
      uVar8 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
      if ((int)(uint)uVar4 <= unaff_w29) {
        FUN_04f52508(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar4 <= uVar8) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x21 + 0x20);
          if (uVar8 == (uint)uVar4) {
            FUN_046da6a0();
            lVar6 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
            if (lVar6 == 0) goto LAB_046da2f4;
            uVar1 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar1 != 0) {
              iVar2 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar2 * uVar1;
            if (uVar1 <= uVar3) goto LAB_046da2dc;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
          }
          if (unaff_x26 == 0) {
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_046da2dc;
          lVar6 = (long)(int)uVar8;
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar8 = *(uint *)(unaff_x21 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_046da2dc;
          lVar6 = (long)(int)uVar8;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x28 + 0x24);
        }
        lVar6 = unaff_x26 + lVar6 * 0x28;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        iVar2 = *unaff_x28;
        *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
        *(int *)(lVar6 + 0x24) = iVar2 + -1;
        uVar10 = in_stack_00000000[1];
        uVar9 = *in_stack_00000000;
        *(undefined8 *)(lVar6 + 0x40) = in_stack_00000000[2];
        *(undefined8 *)(lVar6 + 0x38) = uVar10;
        *(undefined8 *)(lVar6 + 0x30) = uVar9;
        *unaff_x28 = uVar8 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar8;
    } while (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978(lVar6);
    }
    lVar5 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_046da060;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_02ce0a7c();
  } while( true );
}


