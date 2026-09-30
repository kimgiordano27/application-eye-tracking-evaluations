/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 019fe7c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(long param_1)

{
  bool bVar1;
  ulong uVar2;
  int *in_x10;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  
  uVar5 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if ((unaff_x22 != 0) &&
     (*(undefined4 *)(unaff_x22 + 0xa8) = uVar5, *(long *)(unaff_x19 + 0x18) != 0)) {
    lVar3 = *(long *)(unaff_x19 + 0x38);
    uVar5 = FUN_019fdbf8();
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0xa4) = uVar5;
      lVar3 = *(long *)(unaff_x19 + 0x38);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_0268b4e0(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_019fe888;
        bVar1 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x38) == 0;
      }
      else {
        bVar1 = true;
      }
      if (lVar3 != 0) {
        *(bool *)(lVar3 + 0xac) = bVar1;
        if ((*(long *)(unaff_x19 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
          *(bool *)(*(long *)(unaff_x19 + 0x38) + 0xa0) =
               *(int *)(*(long *)(unaff_x19 + 0x18) + 0x7c) == 2;
          FUN_019fbdd4();
          return;
        }
      }
    }
  }
LAB_019fe888:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


