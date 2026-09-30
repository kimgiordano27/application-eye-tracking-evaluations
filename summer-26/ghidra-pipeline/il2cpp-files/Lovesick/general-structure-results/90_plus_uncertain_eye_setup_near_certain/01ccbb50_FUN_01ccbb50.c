/*
FUNCTION_NAME: FUN_01ccbb50
ENTRY_POINT: 01ccbb50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_01ccbb50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  if ((DAT_0377efd2 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4f60);
                    /* try { // try from 01ccbb90 to 01dcbbb7 has its CatchHandler @ 01ccbcb4 */
    thunk_FUN_00d48444(
                      Method_MetaXRAcousticMap_<LoadMapAsync>d__34_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_3255);
    thunk_FUN_00d48444(Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_EndElementType__);
                    /* try { // try from 01ccbbc0 to 01dcbbc7 has its CatchHandler @ 01ccbcac */
    thunk_FUN_00d48444(UnityEngine_InputSystem_Interactions_TapInteraction_var);
                    /* try { // try from 01ccbbcc to 01dcbbdf has its CatchHandler @ 01ccbcb0 */
    thunk_FUN_00d48444(PTR_DAT_033eaab8);
    thunk_FUN_00d48444(PTR_DAT_033f5588);
                    /* try { // try from 01ccbbe4 to 01dcbbef has its CatchHandler @ 01ccbca8 */
    thunk_FUN_00d48444(StringLiteral_6252);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
                    /* try { // try from 01ccbbf4 to 01dcbbff has its CatchHandler @ 01ccbca4 */
    DAT_0377efd2 = 1;
  }
  puVar2 = StringLiteral_6252;
                    /* try { // try from 01ccbc04 to 01dcbc0b has its CatchHandler @ 01ccbca0 */
                    /* try { // try from 01ccbc0c to 01dcbc8f has its CatchHandler @ 01ccb958 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01d05080(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar3 = FUN_01d04f98(uVar4,0);
  puVar1 = PTR_DAT_033f4f60;
  switch(uVar3) {
  case 7:
    lVar6 = **(long **)(*(long *)PTR_DAT_033f4f60 + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_MetaXRAcousticMap_<LoadMapAsync>d__34_System_Collections_IEnumerator_Reset__
                                );
      if (lVar6 == 0) {
LAB_01ccbea0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017b46ec(lVar6,0);
      **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
    }
    break;
  case 8:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x18);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  UnityEngine_InputSystem_Interactions_TapInteraction_var);
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
    }
    break;
  case 9:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3255);
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    break;
  case 10:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x20);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eaab8);
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar6;
    }
    break;
  case 0xb:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x10);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__
                                );
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
    }
    break;
  case 0xc:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x28);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5588);
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar6;
    }
    break;
  case 0xd:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x30);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Xml_Schema_XdrBuilder_XDR_EndElementType__);
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar6;
    }
    break;
  case 0xe:
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_033f4f60 + 0xb8) + 0x38);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                                );
      if (lVar6 == 0) goto LAB_01ccbea0;
      FUN_017b46ec(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = lVar6;
    }
    break;
  default:
    uVar4 = FUN_01d0375c(0);
    uVar5 = thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JToken_RemoveAnnotations__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  return lVar6;
}


