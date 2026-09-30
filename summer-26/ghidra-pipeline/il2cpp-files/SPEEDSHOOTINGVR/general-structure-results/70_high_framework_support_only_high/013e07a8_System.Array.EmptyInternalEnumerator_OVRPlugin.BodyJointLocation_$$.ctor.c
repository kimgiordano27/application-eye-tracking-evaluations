/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 013e07a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>___ctor(code *param_1)

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
  int unaff_w19;
  uint uVar10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x28;
  int unaff_w29;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  int *in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    uVar5 = (*param_1)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000000._4_1_ == '\x02') {
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000020);
        FUN_01d6947c(uVar6,0);
      }
      else if (in_stack_00000000._4_1_ == '\x01') {
        in_stack_00000030 = in_stack_00000018[2];
        in_stack_00000028 = in_stack_00000018[1];
        in_stack_00000020 = *in_stack_00000018;
        if ((uint)unaff_x21 < *(uint *)(unaff_x28 + 0x18)) {
          lVar8 = unaff_x28 + unaff_x21 * 0x30;
          *(undefined8 *)(lVar8 + 0x48) = in_stack_00000030;
          *(undefined8 *)(lVar8 + 0x40) = in_stack_00000028;
          *(undefined8 *)(lVar8 + 0x38) = in_stack_00000020;
          return 1;
        }
LAB_013e0a88:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x28 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x21) goto LAB_013e0a88;
      uVar10 = *(uint *)(unaff_x28 + unaff_x21 * unaff_x22 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w19) {
        FUN_01d69580(0);
      }
      uVar5 = *(ulong *)(unaff_x28 + 0x18);
      unaff_w19 = unaff_w19 + 1;
      if ((uint)uVar5 <= uVar10) {
        if (*(int *)(in_stack_00000010 + 0x28) < 1) {
          uVar10 = *(uint *)(in_stack_00000010 + 0x20);
          if (uVar10 == (uint)uVar5) {
            FUN_013e0e44(in_stack_00000010,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 400));
            lVar8 = *(long *)(in_stack_00000010 + 0x10);
            *(uint *)(in_stack_00000010 + 0x20) = uVar10 + 1;
            if (lVar8 == 0) goto LAB_013e0a8c;
            uVar1 = *(uint *)(lVar8 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w29 / (int)uVar1;
            }
            uVar2 = unaff_w29 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_013e0a88;
            unaff_x28 = *(long *)(in_stack_00000010 + 0x18);
            in_stack_00000008 = (int *)(lVar8 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x28 = *(long *)(in_stack_00000010 + 0x18);
            *(uint *)(in_stack_00000010 + 0x20) = uVar10 + 1;
          }
          if (unaff_x28 == 0) {
LAB_013e0a8c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(unaff_x28 + 0x18) <= uVar10) goto LAB_013e0a88;
          lVar8 = (long)(int)uVar10;
        }
        else {
          *(int *)(in_stack_00000010 + 0x28) = *(int *)(in_stack_00000010 + 0x28) + -1;
          uVar10 = *(uint *)(in_stack_00000010 + 0x24);
          if (*(uint *)(unaff_x28 + 0x18) <= uVar10) goto LAB_013e0a88;
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(in_stack_00000010 + 0x24) =
               *(undefined4 *)(unaff_x28 + lVar8 * 0x30 + 0x24);
        }
        lVar8 = unaff_x28 + lVar8 * 0x30;
        *(int *)(lVar8 + 0x20) = unaff_w29;
        *(int *)(lVar8 + 0x24) = *in_stack_00000008 + -1;
        *(undefined8 *)(lVar8 + 0x30) = in_stack_00000048;
        *(undefined8 *)(lVar8 + 0x28) = in_stack_00000040;
        uVar11 = in_stack_00000018[1];
        uVar6 = *in_stack_00000018;
        *(undefined8 *)(lVar8 + 0x48) = in_stack_00000018[2];
        *(undefined8 *)(lVar8 + 0x40) = uVar11;
        *(undefined8 *)(lVar8 + 0x38) = uVar6;
        *in_stack_00000008 = uVar10 + 1;
        return 1;
      }
      unaff_x21 = (long)(int)uVar10;
    } while (*(int *)(unaff_x28 + (long)(int)uVar10 * (long)(int)unaff_x22 + 0x20) != unaff_w29);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244(lVar8);
    }
    lVar7 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_013e0798;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_013e0798:
    param_1 = (code *)*puVar4;
  } while( true );
}


