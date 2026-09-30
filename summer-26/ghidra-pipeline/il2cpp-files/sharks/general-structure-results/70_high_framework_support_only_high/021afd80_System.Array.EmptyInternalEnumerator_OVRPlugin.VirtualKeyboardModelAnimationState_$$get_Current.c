/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 021afd80
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
          (void)

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
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
code_r0x021afd80:
  puVar4 = (undefined8 *)FUN_0185dba8();
  do {
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000000._4_1_ == '\x02') {
        uStack0000000000000014 = in_stack_00000018._4_4_;
        uVar6 = thunk_FUN_018617ec(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000014);
        FUN_02befc40(uVar6,0);
      }
      else if (in_stack_00000000._4_1_ == '\x01') {
        if ((uint)unaff_x19 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined8 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30) = in_stack_00000008;
          thunk_FUN_0188fd20();
          return 1;
        }
LAB_021b0044:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x19) goto LAB_021b0044;
      uVar10 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x22 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w29) {
        FUN_02befd44(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar5 <= uVar10) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar10 = *(uint *)(unaff_x20 + 0x20);
          if (uVar10 == (uint)uVar5) {
            FUN_021b03e4();
            lVar8 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
            if (lVar8 == 0)
            goto System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>___cctor;
            uVar1 = *(uint *)(lVar8 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_021b0044;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar8 + (ulong)uVar2 * 4 + 0x20);
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
          lVar8 = (long)(int)uVar10;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar10 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_021b0044;
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar8 * 0x18 + 0x24);
        }
        lVar8 = unaff_x26 + lVar8 * 0x18;
        *(int *)(lVar8 + 0x20) = unaff_w27;
        *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
        *(undefined8 *)(lVar8 + 0x30) = in_stack_00000008;
        *(undefined4 *)(lVar8 + 0x28) = in_stack_00000018._4_4_;
        thunk_FUN_0188fd20((undefined8 *)(lVar8 + 0x30),in_stack_00000008);
        *unaff_x28 = uVar10 + 1;
        return 1;
      }
      unaff_x19 = (long)(int)uVar10;
    } while (*(int *)(unaff_x26 + (long)(int)uVar10 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0185daa4(lVar8);
    }
    lVar7 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 == 0) goto code_r0x021afd80;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != lVar8) {
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
      if (uVar5 == 0) goto code_r0x021afd80;
    }
    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
}


