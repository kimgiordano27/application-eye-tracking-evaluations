/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b575d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
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
  
  do {
    param_1 = FUN_01ecaf44(param_1);
    do {
      lVar5 = *unaff_x24;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == param_1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02b57624;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02b57624:
      uVar6 = (*(code *)*puVar4)();
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_0358baf0();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar10 = in_stack_00000000[1];
          uVar9 = *in_stack_00000000;
          if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + unaff_x19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = in_stack_00000000[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar10;
            *(undefined8 *)(lVar5 + 0x30) = uVar9;
            return 1;
          }
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        return 0;
      }
      uVar6 = (ulong)*(uint *)(unaff_x26 + 0x18);
      do {
        if ((uint)uVar6 <= (uint)unaff_x19) goto LAB_02b578b8;
        uVar8 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
        if ((int)(uint)uVar6 <= unaff_w29) {
          FUN_0358bbf4(0);
        }
        uVar6 = *(ulong *)(unaff_x26 + 0x18);
        unaff_w29 = unaff_w29 + 1;
        if ((uint)uVar6 <= uVar8) {
          if (*(int *)(unaff_x21 + 0x28) < 1) {
            uVar8 = *(uint *)(unaff_x21 + 0x20);
            if (uVar8 == (uint)uVar6) {
              System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
              lVar5 = *(long *)(unaff_x21 + 0x10);
              *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
              if (lVar5 == 0) goto LAB_02b578bc;
              uVar1 = *(uint *)(lVar5 + 0x18);
              iVar2 = 0;
              if (uVar1 != 0) {
                iVar2 = unaff_w27 / (int)uVar1;
              }
              uVar3 = unaff_w27 - iVar2 * uVar1;
              if (uVar1 <= uVar3) goto LAB_02b578b8;
              unaff_x26 = *(long *)(unaff_x21 + 0x18);
              unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
            }
            else {
              unaff_x26 = *(long *)(unaff_x21 + 0x18);
              *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
            }
            if (unaff_x26 == 0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_02b578b8;
            lVar5 = (long)(int)uVar8;
          }
          else {
            *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
            uVar8 = *(uint *)(unaff_x21 + 0x24);
            if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_02b578b8;
            lVar5 = (long)(int)uVar8;
            *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
          }
          lVar5 = unaff_x26 + lVar5 * 0x28;
          *(int *)(lVar5 + 0x20) = unaff_w27;
          iVar2 = *unaff_x28;
          *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
          *(int *)(lVar5 + 0x24) = iVar2 + -1;
          thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
          uVar10 = in_stack_00000000[1];
          uVar9 = *in_stack_00000000;
          *(undefined8 *)(lVar5 + 0x40) = in_stack_00000000[2];
          *(undefined8 *)(lVar5 + 0x38) = uVar10;
          *(undefined8 *)(lVar5 + 0x30) = uVar9;
          *unaff_x28 = uVar8 + 1;
          return 1;
        }
        unaff_x19 = (long)(int)uVar8;
      } while (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x23 + 0x20) != unaff_w27);
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    } while ((*(byte *)(param_1 + 0x135) & 1) != 0);
  } while( true );
}


