/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b576f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_get_Current
          (ulong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  do {
    uVar6 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x25 + 0x24);
    if ((int)param_1 <= unaff_w23) {
      FUN_0358bbf4(0);
    }
    param_1 = *(ulong *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    if ((uint)param_1 <= uVar6) {
      if (*(int *)(unaff_x21 + 0x28) < 1) {
        uVar6 = *(uint *)(unaff_x21 + 0x20);
        if (uVar6 == (uint)param_1) {
          System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
          lVar5 = *(long *)(unaff_x21 + 0x10);
          *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
          if (lVar5 == 0) goto LAB_02b578bc;
          uVar1 = *(uint *)(lVar5 + 0x18);
          iVar2 = 0;
          if (uVar1 != 0) {
            iVar2 = unaff_w27 / (int)uVar1;
          }
          uVar3 = unaff_w27 - iVar2 * uVar1;
          if (uVar1 <= uVar3) break;
          unaff_x26 = *(long *)(unaff_x21 + 0x18);
          unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
        }
        else {
          unaff_x26 = *(long *)(unaff_x21 + 0x18);
          *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
        }
        if (unaff_x26 == 0) goto LAB_02b578bc;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar6) break;
        lVar5 = (long)(int)uVar6;
      }
      else {
        *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
        uVar6 = *(uint *)(unaff_x21 + 0x24);
        if (*(uint *)(unaff_x26 + 0x18) <= uVar6) break;
        lVar5 = (long)(int)uVar6;
        *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
      }
      lVar5 = unaff_x26 + lVar5 * 0x28;
      *(int *)(lVar5 + 0x20) = unaff_w27;
      iVar2 = *unaff_x28;
      *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
      *(int *)(lVar5 + 0x24) = iVar2 + -1;
      thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
      uVar8 = unaff_x29[1];
      uVar7 = *unaff_x29;
      *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      *(undefined8 *)(lVar5 + 0x30) = uVar7;
      *unaff_x28 = uVar6 + 1;
      return 1;
    }
    unaff_x19 = (long)(int)uVar6;
    if (*(int *)(unaff_x26 + (long)(int)uVar6 * (long)(int)unaff_x25 + 0x20) == unaff_w27) {
      if (unaff_x24 == (long *)0x0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_0358baf0();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + unaff_x19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            return 1;
          }
          break;
        }
        return 0;
      }
      param_1 = (ulong)*(uint *)(unaff_x26 + 0x18);
    }
  } while (uVar6 < (uint)param_1);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


