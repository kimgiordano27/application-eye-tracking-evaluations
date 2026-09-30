/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06ad883c
PROGRAM: MRTraveler-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset
          (code *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char cStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar5 = (*param_1)();
    if ((uVar5 & 1) != 0) {
      if (cStack0000000000000008 == '\x02') {
        in_stack_00000010 = in_stack_00000018;
        uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000010);
        FUN_07122e04(uVar6,0);
      }
      else if (cStack0000000000000008 == '\x01') {
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = uStack000000000000000c;
          return 1;
        }
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_06ad8abc;
      uVar10 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x22 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w29) {
        FUN_07122f08(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar5 <= uVar10) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar10 = *(uint *)(unaff_x20 + 0x20);
          if (uVar10 == (uint)uVar5) {
            FUN_06ad8e5c();
            lVar8 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
            if (lVar8 == 0) goto LAB_06ad8ac0;
            uVar1 = *(uint *)(lVar8 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_06ad8abc;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar8 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
          }
          if (unaff_x26 == 0) {
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_06ad8abc;
          lVar8 = (long)(int)uVar10;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar10 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_06ad8abc;
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar8 * 0x18 + 0x24);
        }
        lVar8 = unaff_x26 + lVar8 * 0x18;
        *(int *)(lVar8 + 0x20) = unaff_w27;
        *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
        *(undefined4 *)(lVar8 + 0x30) = uStack000000000000000c;
        *(undefined8 *)(lVar8 + 0x28) = in_stack_00000018;
        *unaff_x28 = uVar10 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar10;
    } while (*(int *)(unaff_x26 + (long)(int)uVar10 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar7 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06ad8834;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06ad8834:
    param_1 = (code *)*puVar4;
  } while( true );
}


