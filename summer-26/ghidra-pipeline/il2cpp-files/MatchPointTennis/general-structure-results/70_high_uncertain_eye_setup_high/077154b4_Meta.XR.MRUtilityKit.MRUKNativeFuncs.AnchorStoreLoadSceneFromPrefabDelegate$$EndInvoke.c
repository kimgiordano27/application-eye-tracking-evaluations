/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreLoadSceneFromPrefabDelegate$$EndInvoke
ENTRY_POINT: 077154b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreLoadSceneFromPrefabDelegate__EndInvoke
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  while( true ) {
    if (in_w8 <= unaff_w20) {
      return;
    }
    uVar1 = FUN_05badb74(param_1,unaff_w20,*unaff_x22);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x23);
    }
    uVar2 = FUN_09531730(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar3 = FUN_05badb74(*(long *)(unaff_x19 + 0x20),unaff_w20,*unaff_x22), lVar3 == 0))
      break;
      FUN_0952508c(lVar3,0,0);
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == 0) break;
    in_w8 = *(int *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


