/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.ctor
ENTRY_POINT: 021afde0
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
          (undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  while (uVar5 = (uint)param_1, unaff_w24 < uVar5) {
    if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4(lVar7);
      }
      lVar6 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_021afd9c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0185dba8();
LAB_021afd9c:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) != 0) {
        if (in_stack_00000000._4_1_ == '\x02') {
          uStack0000000000000014 = in_stack_00000018._4_4_;
          uVar4 = thunk_FUN_018617ec(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000014);
          FUN_02befc40(uVar4,0);
        }
        else if (in_stack_00000000._4_1_ == '\x01') {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined8 *)(unaff_x26 + (long)(int)unaff_w24 * 0x18 + 0x30) = in_stack_00000008;
            thunk_FUN_0188fd20();
            return 1;
          }
          goto LAB_021b0044;
        }
        return 0;
      }
      uVar5 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar5 <= unaff_w24) goto LAB_021b0044;
    unaff_w24 = *(uint *)(unaff_x26 + (int)unaff_w24 * unaff_x22 + 0x24);
    if ((int)uVar5 <= unaff_w29) {
      FUN_02befd44(0);
    }
    unaff_w29 = unaff_w29 + 1;
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x20 + 0x20);
    if (uVar10 == uVar5) {
      FUN_021b03e4();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      if (lVar7 == 0) goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
      uVar5 = *(uint *)(lVar7 + 0x18);
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar2 * uVar5;
      if (uVar5 <= uVar1) goto LAB_021b0044;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
    lVar7 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) {
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    lVar7 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x18 + 0x24);
  }
  lVar7 = unaff_x26 + lVar7 * 0x18;
  *(int *)(lVar7 + 0x20) = unaff_w27;
  *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
  *(undefined8 *)(lVar7 + 0x30) = in_stack_00000008;
  *(undefined4 *)(lVar7 + 0x28) = in_stack_00000018._4_4_;
  thunk_FUN_0188fd20((undefined8 *)(lVar7 + 0x30),in_stack_00000008);
  *unaff_x28 = uVar10 + 1;
  return 1;
}


