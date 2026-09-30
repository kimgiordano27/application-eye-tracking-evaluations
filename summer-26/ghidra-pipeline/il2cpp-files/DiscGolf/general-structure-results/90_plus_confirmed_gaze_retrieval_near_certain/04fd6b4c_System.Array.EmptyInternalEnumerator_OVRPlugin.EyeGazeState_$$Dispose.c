/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 04fd6b4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 175
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ushort in_w9;
  ulong uVar7;
  int *piVar8;
  int unaff_w19;
  uint uVar9;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  uint uVar10;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int *in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    if ((in_w9 & 1) == 0) {
      param_2 = FUN_02dcfd18(param_2);
    }
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04fd6ba8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c();
LAB_04fd6ba8:
    uVar7 = (*(code *)*puVar3)();
    if ((uVar7 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        uStack0000000000000024 = in_stack_00000028._4_4_;
        uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000024);
        FUN_05509920(uVar4,0);
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined8 *)(unaff_x29 + (long)(int)unaff_w28 * 0x18 + 0x10) = in_stack_00000010;
          LeanTween__value();
          return 1;
        }
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      return 0;
    }
    uVar7 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar7 <= unaff_w28) goto LAB_04fd6e64;
      unaff_w28 = *(uint *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19 + 4);
      if ((int)(uint)uVar7 <= unaff_w22) {
        FUN_05509a24(0);
      }
      uVar7 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      uVar10 = (uint)uVar7;
      if (uVar10 <= unaff_w28) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar9 = *(uint *)(unaff_x20 + 0x20);
          if (uVar9 == uVar10) {
            FUN_04fd7204();
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
            if (lVar6 == 0) goto LAB_04fd6e68;
            uVar10 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar10 != 0) {
              iVar2 = unaff_w27 / (int)uVar10;
            }
            uVar1 = unaff_w27 - iVar2 * uVar10;
            if (uVar10 <= uVar1) goto LAB_04fd6e64;
            lVar5 = *(long *)(unaff_x20 + 0x18);
            in_stack_00000018 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
          }
          else {
            lVar5 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
          }
          if (lVar5 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_04fd6e64;
          lVar5 = lVar5 + (long)(int)uVar9 * 0x18;
        }
        else {
          uVar9 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          if (uVar10 <= uVar9) goto LAB_04fd6e64;
          lVar5 = unaff_x26 + (long)(int)uVar9 * 0x18;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
        }
        *(int *)(lVar5 + 0x20) = unaff_w27;
        *(int *)(lVar5 + 0x24) = *in_stack_00000018 + -1;
        *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000010;
        LeanTween__value((undefined8 *)(lVar5 + 0x30),in_stack_00000010);
        *in_stack_00000018 = uVar9 + 1;
        return 1;
      }
    } while (*(int *)(unaff_x29 + (long)(int)unaff_w28 * (long)unaff_w19) != unaff_w27);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    in_w9 = *(ushort *)(param_2 + 0x135);
  } while( true );
}


