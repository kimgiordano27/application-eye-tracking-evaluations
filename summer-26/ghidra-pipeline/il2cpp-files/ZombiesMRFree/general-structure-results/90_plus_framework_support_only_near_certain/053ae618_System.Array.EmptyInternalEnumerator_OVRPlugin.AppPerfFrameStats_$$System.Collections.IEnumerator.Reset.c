/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 053ae618
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
          (long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int unaff_w19;
  uint uVar7;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (param_1 == (long *)0x0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar4 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined8 *)(unaff_x26 + unaff_x23 * unaff_x22 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar4 & 1) != 0) {
      if (unaff_w29 == '\x02') {
        in_stack_00000010 = in_stack_00000018;
        uVar5 = thunk_FUN_0301043c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000010);
        FUN_05b107f0(uVar5,0);
      }
      else if (unaff_w29 == '\x01') {
        if ((uint)unaff_x23 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x23 * 0x14 + 0x30) = unaff_w25;
          return 1;
        }
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      return 0;
    }
    uVar4 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar4 <= (uint)unaff_x23) goto LAB_053ae804;
      uVar7 = *(uint *)(unaff_x26 + unaff_x23 * unaff_x22 + 0x24);
      if ((int)(uint)uVar4 <= unaff_w19) {
        FUN_05b108f4(0);
      }
      uVar4 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w19 = unaff_w19 + 1;
      if ((uint)uVar4 <= uVar7) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar7 = *(uint *)(unaff_x20 + 0x20);
          if (uVar7 == (uint)uVar4) {
            System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
            lVar6 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar7 + 1;
            if (lVar6 == 0) goto LAB_053ae808;
            uVar1 = *(uint *)(lVar6 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_053ae804;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar7 + 1;
          }
          if (unaff_x26 == 0) goto LAB_053ae808;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_053ae804;
          lVar6 = (long)(int)uVar7;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar7 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_053ae804;
          lVar6 = (long)(int)uVar7;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x14 + 0x24);
        }
        lVar6 = unaff_x26 + lVar6 * 0x14;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        *(int *)(lVar6 + 0x24) = *unaff_x28 + -1;
        *(undefined4 *)(lVar6 + 0x30) = unaff_w25;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
        *unaff_x28 = uVar7 + 1;
        return 1;
      }
      unaff_x23 = (long)(int)uVar7;
    } while (*(int *)(unaff_x26 + (long)(int)uVar7 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    param_1 = (long *)FUN_040052a8(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
    if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_053ae804;
  } while( true );
}


