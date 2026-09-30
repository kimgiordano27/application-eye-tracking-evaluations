/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RunTimeUtils$$GetInterfaceComponent<object>
ENTRY_POINT: 01dbd3e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RunTimeUtils__GetInterfaceComponent<object>(void)

{
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar1;
  long *plVar2;
  
  if (*unaff_x19 != 0) {
    *(long *)(unaff_x20 + 0x28) = *unaff_x19;
    thunk_FUN_01656ef8();
    if (*unaff_x19 == 0) goto LAB_01dbd480;
    *(long *)(*unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_01656ef8();
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xd8) = unaff_x20;
    thunk_FUN_01656ef8();
    plVar2 = (long *)(lVar1 + 0xd0);
    if (*plVar2 == 0) {
      *plVar2 = unaff_x20;
      thunk_FUN_01656ef8(plVar2);
    }
    if (unaff_x22 != 0) {
      FUN_0485d1b0();
      *unaff_x21 = unaff_x20;
      thunk_FUN_01656ef8();
      *unaff_x19 = *(long *)(unaff_x20 + 0x28);
                    /* try { // try from 01dbd478 to 01ebd47b has its CatchHandler @ 01dbd554 */
                    /* try { // try from 01dbd47c to 01ebd47f has its CatchHandler @ 01dbd550 */
      thunk_FUN_01656ef8();
      return;
    }
  }
LAB_01dbd480:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01dbd480 to 01ebd56f has its CatchHandler @ 01dbd004 */
  FUN_0160eeb4();
}


