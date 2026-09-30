/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$get_Current
ENTRY_POINT: 013e0748
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int unaff_w19;
  uint uVar9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x28;
  int unaff_w29;
  undefined8 uVar10;
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
    param_1 = FUN_0103c244(param_1);
    do {
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == param_1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_013e0798;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_013e0798:
      uVar7 = (*(code *)*puVar4)();
      if ((uVar7 & 1) != 0) {
        if (in_stack_00000000._4_1_ == '\x02') {
          in_stack_00000028 = in_stack_00000048;
          in_stack_00000020 = in_stack_00000040;
          uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000020);
          FUN_01d6947c(uVar5,0);
        }
        else if (in_stack_00000000._4_1_ == '\x01') {
          in_stack_00000030 = in_stack_00000018[2];
          in_stack_00000028 = in_stack_00000018[1];
          in_stack_00000020 = *in_stack_00000018;
          if ((uint)unaff_x21 < *(uint *)(unaff_x28 + 0x18)) {
            lVar6 = unaff_x28 + unaff_x21 * 0x30;
            *(undefined8 *)(lVar6 + 0x48) = in_stack_00000030;
            *(undefined8 *)(lVar6 + 0x40) = in_stack_00000028;
            *(undefined8 *)(lVar6 + 0x38) = in_stack_00000020;
            return 1;
          }
LAB_013e0a88:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        return 0;
      }
      uVar7 = (ulong)*(uint *)(unaff_x28 + 0x18);
      do {
        if ((uint)uVar7 <= (uint)unaff_x21) goto LAB_013e0a88;
        uVar9 = *(uint *)(unaff_x28 + unaff_x21 * unaff_x22 + 0x24);
        if ((int)(uint)uVar7 <= unaff_w19) {
          FUN_01d69580(0);
        }
        uVar7 = *(ulong *)(unaff_x28 + 0x18);
        unaff_w19 = unaff_w19 + 1;
        if ((uint)uVar7 <= uVar9) {
          if (*(int *)(in_stack_00000010 + 0x28) < 1) {
            uVar9 = *(uint *)(in_stack_00000010 + 0x20);
            if (uVar9 == (uint)uVar7) {
              FUN_013e0e44(in_stack_00000010,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 400));
              lVar6 = *(long *)(in_stack_00000010 + 0x10);
              *(uint *)(in_stack_00000010 + 0x20) = uVar9 + 1;
              if (lVar6 == 0) goto LAB_013e0a8c;
              uVar1 = *(uint *)(lVar6 + 0x18);
              iVar3 = 0;
              if (uVar1 != 0) {
                iVar3 = unaff_w29 / (int)uVar1;
              }
              uVar2 = unaff_w29 - iVar3 * uVar1;
              if (uVar1 <= uVar2) goto LAB_013e0a88;
              unaff_x28 = *(long *)(in_stack_00000010 + 0x18);
              in_stack_00000008 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
            }
            else {
              unaff_x28 = *(long *)(in_stack_00000010 + 0x18);
              *(uint *)(in_stack_00000010 + 0x20) = uVar9 + 1;
            }
            if (unaff_x28 == 0) {
LAB_013e0a8c:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (*(uint *)(unaff_x28 + 0x18) <= uVar9) goto LAB_013e0a88;
            lVar6 = (long)(int)uVar9;
          }
          else {
            *(int *)(in_stack_00000010 + 0x28) = *(int *)(in_stack_00000010 + 0x28) + -1;
            uVar9 = *(uint *)(in_stack_00000010 + 0x24);
            if (*(uint *)(unaff_x28 + 0x18) <= uVar9) goto LAB_013e0a88;
            lVar6 = (long)(int)uVar9;
            *(undefined4 *)(in_stack_00000010 + 0x24) =
                 *(undefined4 *)(unaff_x28 + lVar6 * 0x30 + 0x24);
          }
          lVar6 = unaff_x28 + lVar6 * 0x30;
          *(int *)(lVar6 + 0x20) = unaff_w29;
          *(int *)(lVar6 + 0x24) = *in_stack_00000008 + -1;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000048;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000040;
          uVar10 = in_stack_00000018[1];
          uVar5 = *in_stack_00000018;
          *(undefined8 *)(lVar6 + 0x48) = in_stack_00000018[2];
          *(undefined8 *)(lVar6 + 0x40) = uVar10;
          *(undefined8 *)(lVar6 + 0x38) = uVar5;
          *in_stack_00000008 = uVar9 + 1;
          return 1;
        }
        unaff_x21 = (long)(int)uVar9;
      } while (*(int *)(unaff_x28 + (long)(int)uVar9 * (long)(int)unaff_x22 + 0x20) != unaff_w29);
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    } while ((*(byte *)(param_1 + 0x135) & 1) != 0);
  } while( true );
}


