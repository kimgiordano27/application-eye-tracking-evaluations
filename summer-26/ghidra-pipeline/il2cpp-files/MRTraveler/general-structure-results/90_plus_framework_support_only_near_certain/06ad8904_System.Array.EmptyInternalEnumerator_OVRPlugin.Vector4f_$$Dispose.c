/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 06ad8904
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  int unaff_w19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
                    /* try { // try from 06ad8904 to 06bd8927 has its CatchHandler @ 06ad8570 */
    uVar8 = *(uint *)(in_x9 + 0x24);
    if ((int)param_1 <= unaff_w19) {
      FUN_07122f08(0);
    }
    param_1 = *(ulong *)(unaff_x26 + 0x18);
    unaff_w19 = unaff_w19 + 1;
    if ((uint)param_1 <= uVar8) break;
    lVar7 = (long)(int)uVar8;
                    /* try { // try from 06ad88b0 to 06bd88bf has its CatchHandler @ 06ad8570 */
    if (*(int *)(unaff_x26 + (long)(int)uVar8 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
                    /* try { // try from 06ad88c0 to 06bd88c3 has its CatchHandler @ 06ad88c4 */
      plVar4 = (long *)FUN_041d81b8(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06ad88c0 with catch @ 06ad88c4
                       try { // try from 06ad88c4 to 06bd88eb has its CatchHandler @ 06ad8570 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06ad8800 with catch @ 06ad88c8
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06ad8898 with catch @ 06ad88cc
                        */
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_06ad8abc;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06ad8820 with catch @ 06ad88d0
                        */
      if (plVar4 == (long *)0x0) {
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06ad889c with catch @ 06ad88d4
                        */
                    /* try { // try from 06ad88ec to 06bd8903 has its CatchHandler @ 06ad8938 */
      uVar5 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined8 *)(unaff_x26 + lVar7 * unaff_x22 + 0x28),
                         in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((uVar5 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          in_stack_00000010 = in_stack_00000018;
          uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000010);
          FUN_07122e04(uVar6,0);
        }
        else if (unaff_w29 == '\x01') {
          if (uVar8 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + lVar7 * 0x18 + 0x30) = unaff_w25;
            return 1;
          }
          goto LAB_06ad8abc;
        }
        return 0;
      }
      param_1 = (ulong)*(uint *)(unaff_x26 + 0x18);
    }
    if ((uint)param_1 <= uVar8) goto LAB_06ad8abc;
    in_x9 = unaff_x26 + lVar7 * unaff_x22;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x20 + 0x20);
    if (uVar8 == (uint)param_1) {
      FUN_06ad8e5c();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
      if (lVar7 == 0) goto LAB_06ad8ac0;
      uVar1 = *(uint *)(lVar7 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_06ad8abc;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
    }
    if (unaff_x26 == 0) goto LAB_06ad8ac0;
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) {
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar7 = (long)(int)uVar8;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar8 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_06ad8abc;
    lVar7 = (long)(int)uVar8;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x18 + 0x24);
  }
  lVar7 = unaff_x26 + lVar7 * 0x18;
  *(int *)(lVar7 + 0x20) = unaff_w27;
  *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar7 + 0x30) = unaff_w25;
  *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
  *unaff_x28 = uVar8 + 1;
  return 1;
}


