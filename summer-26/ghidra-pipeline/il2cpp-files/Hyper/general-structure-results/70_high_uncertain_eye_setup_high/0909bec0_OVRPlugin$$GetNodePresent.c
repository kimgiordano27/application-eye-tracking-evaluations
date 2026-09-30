/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 0909bec0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePresent(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long lVar4;
  long *unaff_x21;
  
  FUN_08fdfe38();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
    uVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac78d50);
    FUN_082c161c(uVar2,*(undefined8 *)PTR_DAT_0ac78d48);
    **(undefined8 **)(*unaff_x21 + 0xb8) = uVar2;
                    /* try { // try from 0909bf08 to 0919c087 has its CatchHandler @ 0909bf08
                       catch() { ... } // from try @ 0909bf08 with catch @ 0909bf08
                       catch() { ... } // from try @ 0909c14c with catch @ 0909bf08
                       catch() { ... } // from try @ 0909c2b4 with catch @ 0909bf08
                       catch() { ... } // from try @ 0909c30c with catch @ 0909bf08 */
    thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8),uVar2);
    (**(code **)(*unaff_x19 + 0x368))();
  }
  if (unaff_x19[0x19] != 0) {
    lVar3 = FUN_05b00790(unaff_x19[0x19],*(undefined8 *)PTR_DAT_0ac76680);
    unaff_x19[0x27] = lVar3;
    thunk_FUN_049ee3d8(unaff_x19 + 0x27,lVar3);
    if (unaff_x19[0x24] == 0) {
      lVar3 = FUN_0a178414();
      if (lVar3 == 0) goto LAB_0909bff8;
      FUN_05bde8d8(lVar3,*(undefined8 *)PTR_DAT_0ac76688);
      FUN_0909bffc();
    }
    puVar1 = PTR_DAT_0ac78be8;
    if (unaff_x19[0x19] != 0) {
      lVar4 = unaff_x19[0x26];
      uVar2 = FUN_0a17834c(unaff_x19[0x19],0);
      lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_0909ab00(lVar3,lVar4,uVar2);
      unaff_x19[0x28] = lVar3;
      thunk_FUN_049ee3d8(unaff_x19 + 0x28,lVar3);
      FUN_08fdfedc();
      return;
    }
  }
LAB_0909bff8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


