/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 053ae604
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
System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int unaff_w19;
  uint uVar8;
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
    plVar4 = (long *)FUN_040052a8(*(undefined8 *)(param_1 + 0x18));
                    /* try { // try from 053ae610 to 054ae61f has its CatchHandler @ 053ae620 */
    if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x23) {
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (plVar4 == (long *)0x0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar5 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,*(undefined8 *)(unaff_x26 + unaff_x23 * unaff_x22 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
    if ((uVar5 & 1) != 0) {
      if (unaff_w29 == '\x02') {
        in_stack_00000010 = in_stack_00000018;
        uVar6 = thunk_FUN_0301043c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000010);
        FUN_05b107f0(uVar6,0);
      }
      else if (unaff_w29 == '\x01') {
        if ((uint)unaff_x23 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x23 * 0x14 + 0x30) = unaff_w25;
          return 1;
        }
        goto LAB_053ae804;
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x23) goto LAB_053ae804;
      uVar8 = *(uint *)(unaff_x26 + unaff_x23 * unaff_x22 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w19) {
        FUN_05b108f4(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w19 = unaff_w19 + 1;
      if ((uint)uVar5 <= uVar8) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x20 + 0x20);
          if (uVar8 == (uint)uVar5) {
            System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
            if (lVar7 == 0) goto LAB_053ae808;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_053ae804;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
          }
          if (unaff_x26 == 0) goto LAB_053ae808;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_053ae804;
          lVar7 = (long)(int)uVar8;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar8 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_053ae804;
          lVar7 = (long)(int)uVar8;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x14 + 0x24);
        }
        lVar7 = unaff_x26 + lVar7 * 0x14;
        *(int *)(lVar7 + 0x20) = unaff_w27;
        *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
        *(undefined4 *)(lVar7 + 0x30) = unaff_w25;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
        *unaff_x28 = uVar8 + 1;
        return 1;
      }
                    /* try { // try from 053ae5ec to 054ae60f has its CatchHandler @ 053ae258 */
      unaff_x23 = (long)(int)uVar8;
    } while (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x22 + 0x20) != unaff_w27);
    param_1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  } while( true );
}


