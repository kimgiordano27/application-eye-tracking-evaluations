/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_DestroyDynamicObjectTracker
ENTRY_POINT: 033fb160
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_103_0__ovrp_DestroyDynamicObjectTracker(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x148));
  FUN_01d7d918(StringLiteral_5142);
  *(undefined1 *)(unaff_x20 + 0xbf2) = 1;
  lVar1 = thunk_FUN_01de27b8(*unaff_x21);
  FUN_033d8040(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
    thunk_FUN_01e10808();
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    thunk_FUN_01e10808();
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_033fa980();
      if (lVar2 == 0) goto LAB_033fb270;
      plVar3 = (long *)FUN_032c9a70(lVar2,0);
      if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)StringLiteral_5142)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar3);
      }
      *(long *)(lVar1 + 0x20) = (long)plVar3;
      thunk_FUN_01e10808((long *)(lVar1 + 0x20),plVar3);
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar2 = FUN_033fa9f8();
      if (lVar2 == 0) goto LAB_033fb270;
      uVar4 = FUN_032c9078(lVar2,0);
      *(undefined8 *)(lVar1 + 0x28) = uVar4;
      thunk_FUN_01e10808();
    }
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
    thunk_FUN_01e10808();
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
    thunk_FUN_01e10808();
    *(uint *)(lVar1 + 0x30) =
         *(uint *)(lVar1 + 0x30) & 0xfffffffc |
         *(uint *)(lVar1 + 0x30) & 1 | (*(uint *)(unaff_x19 + 0x30) >> 1 & 1) << 1;
    return lVar1;
  }
LAB_033fb270:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


