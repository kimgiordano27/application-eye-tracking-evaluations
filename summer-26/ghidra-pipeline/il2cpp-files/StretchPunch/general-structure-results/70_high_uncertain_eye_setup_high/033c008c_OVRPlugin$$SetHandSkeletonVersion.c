/*
FUNCTION_NAME: OVRPlugin$$SetHandSkeletonVersion
ENTRY_POINT: 033c008c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetHandSkeletonVersion(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int in_w8;
  long in_x9;
  uint unaff_w19;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  long in_stack_00000038;
  
                    /* catch() { ... } // from try @ 033c0080 with catch @ 033c008c */
  if (in_w8 != 0) {
                    /* catch() { ... } // from try @ 033c0074 with catch @ 033c0090 */
                    /* catch() { ... } // from try @ 033c006c with catch @ 033c0094 */
                    /* catch() { ... } // from try @ 033bfd88 with catch @ 033c0098 */
    uVar6 = *(undefined8 *)(in_x9 + 0x20);
                    /* catch() { ... } // from try @ 033c0068 with catch @ 033c009c */
                    /* catch() { ... } // from try @ 033bff98 with catch @ 033c00a0 */
                    /* catch() { ... } // from try @ 033bfcf4 with catch @ 033c00a4 */
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 033bfc98 with catch @ 033c00a8 */
      thunk_FUN_01dc4f30();
    }
                    /* catch() { ... } // from try @ 033c0064 with catch @ 033c00ac */
    uVar2 = FUN_033ab18c(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) goto LAB_033bfa24;
      plVar5 = *(long **)(unaff_x23 + (long)(int)unaff_w19 * 8 + 0x20);
      if ((plVar5 == (long *)0x0) ||
         (lVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
         unaff_x22 == (long *)0x0)) goto LAB_033bec5c;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01de26bc(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_033c07f0;
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    else {
                    /* try { // try from 033c00c4 to 034c00c7 has its CatchHandler @ 033c00d8 */
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
      uVar7 = *(undefined8 *)(in_stack_00000038 + 0x20);
                    /* catch() { ... } // from try @ 033c00c4 with catch @ 033c00d8 */
                    /* try { // try from 033c00e0 to 034c0153 has its CatchHandler @ 033c0204 */
      uVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      lVar3 = thunk_FUN_033b4750(uVar7,uVar6,0);
      if (unaff_x22 == (long *)0x0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01de26bc(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_033c07f0:
        uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,0);
      }
      uVar1 = *(uint *)(unaff_x22 + 3);
    }
    if (unaff_w19 < uVar1) {
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_01e10808(unaff_x22 + (long)(int)unaff_w19 + 4,lVar3);
      *unaff_x28 = unaff_x22;
      thunk_FUN_01e10808();
      if (*(int *)(unaff_x24 + 0x18) != 0) {
        return *unaff_x26;
      }
    }
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


