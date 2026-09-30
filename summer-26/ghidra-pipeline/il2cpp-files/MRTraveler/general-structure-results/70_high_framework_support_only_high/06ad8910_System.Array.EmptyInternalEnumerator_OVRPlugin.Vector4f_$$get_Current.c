/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 06ad8910
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__get_Current(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int unaff_w19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined4 unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    FUN_07122f08(0);
    do {
      unaff_w19 = unaff_w19 + 1;
      uVar6 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
      if (uVar6 <= unaff_w24) {
                    /* try { // try from 06ad8928 to 06bd8937 has its CatchHandler @ 06ad8938 */
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x20 + 0x20);
          if (uVar8 == uVar6) {
            FUN_06ad8e5c();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
            if (lVar7 == 0) goto LAB_06ad8ac0;
            uVar6 = *(uint *)(lVar7 + 0x18);
            iVar2 = 0;
            if (uVar6 != 0) {
              iVar2 = unaff_w27 / (int)uVar6;
            }
            uVar1 = unaff_w27 - iVar2 * uVar6;
            if (uVar6 <= uVar1) goto LAB_06ad8abc;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
          }
          if (unaff_x26 == 0) {
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if (uVar8 < *(uint *)(unaff_x26 + 0x18)) {
            lVar7 = (long)(int)uVar8;
            goto LAB_06ad89d8;
          }
        }
        else {
                    /* catch() { ... } // from try @ 06ad88ec with catch @ 06ad8938
                       catch() { ... } // from try @ 06ad8928 with catch @ 06ad8938 */
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
                    /* try { // try from 06ad893c to 06bd893f has its CatchHandler @ 06ad8948 */
          uVar8 = *(uint *)(unaff_x20 + 0x24);
                    /* try { // try from 06ad8940 to 06bd894b has its CatchHandler @ 06ad8570 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06ad893c with catch @ 06ad8948
                        */
          if (uVar8 < *(uint *)(unaff_x26 + 0x18)) {
            lVar7 = (long)(int)uVar8;
            *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x18 + 0x24);
LAB_06ad89d8:
            lVar7 = unaff_x26 + lVar7 * 0x18;
            *(int *)(lVar7 + 0x20) = unaff_w27;
            *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
            *(undefined4 *)(lVar7 + 0x30) = unaff_w25;
            *(undefined8 *)(lVar7 + 0x28) = in_stack_00000018;
            *unaff_x28 = uVar8 + 1;
            return 1;
          }
        }
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar7 = (long)(int)unaff_w24;
      if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
        plVar3 = (long *)FUN_041d81b8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) goto LAB_06ad8abc;
        if (plVar3 == (long *)0x0) goto LAB_06ad8ac0;
        uVar4 = (**(code **)(*plVar3 + 0x1b8))
                          (plVar3,*(undefined8 *)(unaff_x26 + lVar7 * unaff_x22 + 0x28),
                           in_stack_00000018,*(undefined8 *)(*plVar3 + 0x1c0));
        if ((uVar4 & 1) != 0) {
          if (unaff_w29 == '\x02') {
            in_stack_00000010 = in_stack_00000018;
            uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                       &stack0x00000010);
            FUN_07122e04(uVar5,0);
            return 0;
          }
          if (unaff_w29 != '\x01') {
            return 0;
          }
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + lVar7 * 0x18 + 0x30) = unaff_w25;
            return 1;
          }
          goto LAB_06ad8abc;
        }
        uVar6 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar6 <= unaff_w24) goto LAB_06ad8abc;
      unaff_w24 = *(uint *)(unaff_x26 + lVar7 * unaff_x22 + 0x24);
    } while (unaff_w19 < (int)uVar6);
  } while( true );
}


