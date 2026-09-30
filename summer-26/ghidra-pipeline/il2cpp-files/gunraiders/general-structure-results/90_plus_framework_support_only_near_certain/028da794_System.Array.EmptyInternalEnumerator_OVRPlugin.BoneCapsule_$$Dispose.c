/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 028da794
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar4 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_028da7d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498();
LAB_028da7d8:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) != 0) {
      if (in_stack_00000000._4_1_ == '\x02') {
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
        uVar5 = thunk_FUN_01c49334(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000010);
        FUN_032f29a8(uVar5,0);
      }
      else if (in_stack_00000000._4_1_ == '\x01') {
        in_stack_00000020 = in_stack_00000008[2];
        in_stack_00000018 = in_stack_00000008[1];
        in_stack_00000010 = *in_stack_00000008;
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          lVar6 = unaff_x26 + unaff_x19 * 0x28;
          *(undefined8 *)(lVar6 + 0x40) = in_stack_00000020;
          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000018;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000010;
          if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
            return 1;
          }
        }
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      return 0;
    }
    uVar7 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar7 <= (uint)unaff_x19) goto LAB_028daa8c;
      uVar9 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x22 + 0x24);
      if ((int)(uint)uVar7 <= unaff_w29) {
        FUN_032f2aac(0);
      }
      uVar7 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar7 <= uVar9) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar9 = *(uint *)(unaff_x20 + 0x20);
          if (uVar9 == (uint)uVar7) {
            FUN_028dae4c();
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
            if (lVar6 == 0) goto LAB_028daabc;
            uVar1 = *(uint *)(lVar6 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_028daa8c;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
          }
          if (unaff_x26 == 0) {
LAB_028daabc:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_028daa8c;
          lVar6 = (long)(int)uVar9;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar9 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_028daa8c;
          lVar6 = (long)(int)uVar9;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x28 + 0x24);
        }
        lVar6 = unaff_x26 + lVar6 * 0x28;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        *(int *)(lVar6 + 0x24) = *unaff_x28 + -1;
        *(undefined4 *)(lVar6 + 0x28) = in_stack_00000028._4_4_;
        uVar10 = in_stack_00000008[1];
        uVar5 = *in_stack_00000008;
        *(undefined8 *)(lVar6 + 0x40) = in_stack_00000008[2];
        *(undefined8 *)(lVar6 + 0x38) = uVar10;
        *(undefined8 *)(lVar6 + 0x30) = uVar5;
        *unaff_x28 = uVar9 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar9;
    } while (*(int *)(unaff_x26 + (long)(int)uVar9 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01c72394(param_3);
    }
    param_1 = *unaff_x23;
  } while( true );
}


