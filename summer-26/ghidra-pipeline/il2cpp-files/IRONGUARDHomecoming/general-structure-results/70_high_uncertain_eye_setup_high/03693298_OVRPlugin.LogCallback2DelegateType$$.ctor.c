/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$.ctor
ENTRY_POINT: 03693298
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType___ctor(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
                    /* try { // try from 03693298 to 037932a3 has its CatchHandler @ 03693010 */
  lVar2 = FUN_035afcfc(param_1,param_2,0);
  puVar1 = 
  Method_Unity_VisualScripting_Antlr3_Runtime_Collections_HashList_HashListEnumerator_get_Entry__;
  if (lVar2 != 0) {
                    /* try { // try from 036932a4 to 037932ab has its CatchHandler @ 036932ac */
                    /* catch() { ... } // from try @ 03693290 with catch @ 036932ac
                       catch() { ... } // from try @ 036932a4 with catch @ 036932ac */
    uVar4 = *(undefined8 *)
             Method_Unity_VisualScripting_Antlr3_Runtime_Collections_HashList_HashListEnumerator_get_Entry__
    ;
    lVar3 = thunk_FUN_01f116d0(lVar2,uVar4);
    if (lVar3 != 0) {
      *unaff_x19 = lVar3;
      uVar4 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_01f116d0(lVar2,uVar4);
      if (lVar3 != 0) goto LAB_036932f0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar2,uVar4);
  }
  *unaff_x19 = 0;
LAB_036932f0:
  thunk_FUN_01f51358();
  return;
}


