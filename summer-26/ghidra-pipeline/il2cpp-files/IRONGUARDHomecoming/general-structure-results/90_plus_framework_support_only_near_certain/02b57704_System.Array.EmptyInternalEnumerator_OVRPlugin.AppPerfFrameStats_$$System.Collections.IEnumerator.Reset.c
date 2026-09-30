/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b57704
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
          (undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint unaff_w19;
  uint uVar6;
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
    FUN_0358bbf4(param_1);
    do {
      unaff_w23 = unaff_w23 + 1;
      uVar4 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
      if (uVar4 <= unaff_w19) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar6 = *(uint *)(unaff_x21 + 0x20);
          if (uVar6 == uVar4) {
            System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
            if (lVar5 == 0) goto LAB_02b578bc;
            uVar4 = *(uint *)(lVar5 + 0x18);
            iVar1 = 0;
            if (uVar4 != 0) {
              iVar1 = unaff_w27 / (int)uVar4;
            }
            uVar2 = unaff_w27 - iVar1 * uVar4;
            if (uVar4 <= uVar2) goto LAB_02b578b8;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
          }
          if (unaff_x26 == 0) goto LAB_02b578bc;
          if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = (long)(int)uVar6;
            goto LAB_02b577c8;
          }
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar6 = *(uint *)(unaff_x21 + 0x24);
          if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = (long)(int)uVar6;
            *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
LAB_02b577c8:
            lVar5 = unaff_x26 + lVar5 * 0x28;
            *(int *)(lVar5 + 0x20) = unaff_w27;
            iVar1 = *unaff_x28;
            *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
            *(int *)(lVar5 + 0x24) = iVar1 + -1;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
            uVar8 = unaff_x29[1];
            uVar7 = *unaff_x29;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            *unaff_x28 = uVar6 + 1;
            return 1;
          }
        }
LAB_02b578b8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x25 + 0x20) == unaff_w27) {
        if (unaff_x24 == (long *)0x0) {
LAB_02b578bc:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = (**(code **)(*unaff_x24 + 0x1b8))();
        if ((uVar3 & 1) != 0) {
          if (in_stack_00000008._4_1_ == '\x02') {
            FUN_0358baf0();
            return 0;
          }
          if (in_stack_00000008._4_1_ != '\x01') {
            return 0;
          }
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + (long)(int)unaff_w19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            return 1;
          }
          goto LAB_02b578b8;
        }
        uVar4 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar4 <= unaff_w19) goto LAB_02b578b8;
      unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x25 + 0x24);
    } while (unaff_w23 < (int)uVar4);
    param_1 = 0;
  } while( true );
}


