/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$CopyBackingFieldsToState
ENTRY_POINT: 052f9cd8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__CopyBackingFieldsToState
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  do {
    uVar1 = FUN_066c971c(param_1,param_2,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) goto LAB_052f9de4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_052f9de8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      FUN_066b42b8(*(undefined8 *)(lVar2 + unaff_x22),0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 == 0) {
LAB_052f9de4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_052f9de8;
    uVar3 = *(undefined8 *)(lVar2 + unaff_x22);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066c971c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x50);
      if (lVar2 == 0) goto LAB_052f9de4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_052f9de8;
      FUN_066b42b8(*(undefined8 *)(lVar2 + unaff_x22),0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_052f9de8;
    *(undefined8 *)(lVar2 + unaff_x22) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar2 + unaff_x22),0);
    lVar2 = *(long *)(unaff_x19 + 0x50);
    if (lVar2 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_052f9de8;
    *(undefined8 *)(lVar2 + unaff_x22) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar2 + unaff_x22),0);
    unaff_x22 = unaff_x22 + 8;
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x22 == 0xa0) {
      FUN_066b42b8(in_stack_00000000,0);
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_052f9de8;
    param_1 = *(undefined8 *)(lVar2 + unaff_x22);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    param_2 = 0;
  } while( true );
}


