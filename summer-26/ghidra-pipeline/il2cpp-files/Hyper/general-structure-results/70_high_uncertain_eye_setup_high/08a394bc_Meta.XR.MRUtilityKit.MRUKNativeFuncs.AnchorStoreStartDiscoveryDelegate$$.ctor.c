/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartDiscoveryDelegate$$.ctor
ENTRY_POINT: 08a394bc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0x3b2) = in_w8;
  lVar2 = thunk_FUN_04983f60(*unaff_x21);
                    /* try { // try from 08a394d0 to 08b394f7 has its CatchHandler @ 08a397d0 */
  FUN_0989e6b8(lVar2,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32c483 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac52ca8);
    DAT_0b32c483 = '\x01';
  }
  lVar3 = *unaff_x22;
                    /* try { // try from 08a39508 to 08b3950f has its CatchHandler @ 08a397b8 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 08a39510 to 08b3951b has its CatchHandler @ 08a397c0 */
    thunk_FUN_049a583c();
    lVar3 = *unaff_x22;
  }
  if (lVar2 != 0) {
                    /* try { // try from 08a3951c to 08b39627 has its CatchHandler @ 08a391a0 */
    FUN_0989ec4c(lVar2,**(undefined8 **)(lVar3 + 0xb8),0);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x10),lVar2);
    lVar2 = thunk_FUN_04983f60(*unaff_x21);
    FUN_0989e6b8(lVar2,0);
    puVar1 = PTR_DAT_0ac52cb0;
    if (lVar2 != 0) {
      FUN_0989ec80(lVar2,1,0);
      *(long *)(unaff_x19 + 0x18) = lVar2;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x18),lVar2);
      *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)puVar1;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20));
      FUN_08dbf2f0();
      FUN_08a395bc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


