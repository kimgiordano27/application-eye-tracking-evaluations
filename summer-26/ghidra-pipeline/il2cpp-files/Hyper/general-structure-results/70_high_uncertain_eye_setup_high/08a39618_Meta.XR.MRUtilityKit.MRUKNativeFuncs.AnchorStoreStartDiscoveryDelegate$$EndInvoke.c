/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartDiscoveryDelegate$$EndInvoke
ENTRY_POINT: 08a39618
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x3b3) = 1;
  puVar1 = PTR_DAT_0ac108d0;
  plVar5 = (long *)(unaff_x20 + 0x28);
                    /* try { // try from 08a39628 to 08b3964f has its CatchHandler @ 08a397d4 */
  if (*plVar5 != 0) {
    FUN_097ae0d8(*plVar5,0);
  }
  lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_097a99c4(lVar3,0);
  *plVar5 = lVar3;
  thunk_FUN_049ee3d8(plVar5,lVar3);
  if ((*plVar5 != 0) &&
     (lVar3 = FUN_097a9b8c(*plVar5,0), puVar2 = PTR_DAT_0ac52cc0, puVar1 = PTR_DAT_0ac09ab0,
     lVar3 != 0)) {
    lVar3 = FUN_097ba694(lVar3,0);
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_097bbe5c(uVar4,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_0ac09aa0;
    if (lVar3 != 0) {
      FUN_065552a4(lVar3,uVar4,*(undefined8 *)PTR_DAT_0ac52cb8);
      lVar3 = *plVar5;
      uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_09a6a910();
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0x20);
        *puVar6 = uVar4;
        thunk_FUN_049ee3d8(puVar6,uVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


