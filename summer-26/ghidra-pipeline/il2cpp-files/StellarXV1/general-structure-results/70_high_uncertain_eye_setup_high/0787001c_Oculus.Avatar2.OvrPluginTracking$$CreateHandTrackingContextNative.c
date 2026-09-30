/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingContextNative
ENTRY_POINT: 0787001c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingContextNative(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined4 unaff_w24;
  
  *(undefined8 *)(param_1 + 0x18) = unaff_x22;
  thunk_FUN_040ec700();
  uVar1 = *(uint *)(unaff_x21 + -0x10);
  *(undefined4 *)(unaff_x20 + 0x20) = unaff_w24;
  puVar2 = PTR_DAT_092dbf60;
  if (2 < uVar1) {
    *(long *)(unaff_x19 + 0x30) = unaff_x20;
    thunk_FUN_040ec700((long *)(unaff_x19 + 0x30));
    uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
    lVar4 = thunk_FUN_040b4efc(*unaff_x23);
    FUN_078615f4(lVar4,0,0);
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
    *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
    puVar2 = PTR_DAT_092b9698;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
      *(long *)(unaff_x19 + 0x38) = lVar4;
      thunk_FUN_040ec700((long *)(unaff_x19 + 0x38),lVar4);
      uVar3 = FUN_0768890c(*(undefined8 *)puVar2,0);
      lVar4 = thunk_FUN_040b4efc(*unaff_x23);
      FUN_078615f4(lVar4,0,0);
      *(undefined8 *)(lVar4 + 0x18) = uVar3;
      thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),uVar3);
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
      if (4 < uVar1) {
        *(long *)(unaff_x19 + 0x40) = lVar4;
        thunk_FUN_040ec700((long *)(unaff_x19 + 0x40),lVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


