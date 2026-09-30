/*
FUNCTION_NAME: FUN_01cf5f0c
ENTRY_POINT: 01cf5f0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


long FUN_01cf5f0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_UnityEngine_Component_GetComponent<PlayableDirector>__;
  if ((DAT_0377f18b & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_get_Current__);
    thunk_FUN_00d48444(StringLiteral_4121);
    thunk_FUN_00d48444(StringLiteral_14195);
    thunk_FUN_00d48444(PTR_DAT_033ec0b8);
                    /* try { // try from 01cf5f64 to 01df5f6f has its CatchHandler @ 01cf612c */
    thunk_FUN_00d48444(PTR_DAT_033f6cc0);
                    /* try { // try from 01cf5f70 to 01df5f87 has its CatchHandler @ 01cf6128 */
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<OVRColocationSession_Result>>__);
    thunk_FUN_00d48444(System_Func<Object,_InstanceHandle>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_ContainsKey__
                      );
                    /* try { // try from 01cf5f94 to 01df5f9b has its CatchHandler @ 01cf6124 */
    thunk_FUN_00d48444(StringLiteral_2730);
    thunk_FUN_00d48444(StringLiteral_6252);
                    /* try { // try from 01cf5fa4 to 01df5faf has its CatchHandler @ 01cf6120 */
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<PlayableDirector>__);
    DAT_0377f18b = 1;
  }
  puVar2 = StringLiteral_6252;
                    /* try { // try from 01cf5fc0 to 01df5fcf has its CatchHandler @ 01cf611c */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01cf5fd0 to 01df610f has its CatchHandler @ 01cf5cb0 */
  uVar4 = FUN_01d05080(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar3 = FUN_01d04f98(uVar4,0);
  puVar1 = StringLiteral_4121;
  switch(uVar3) {
  case 7:
    lVar6 = **(long **)(*(long *)StringLiteral_4121 + 0xb8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_14195);
      if (lVar6 == 0) {
LAB_01cf625c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01cc8c00(lVar6,0);
      **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
    }
    break;
  case 8:
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x18);
    if (lVar6 == 0) {
                    /* try { // try from 01cf6188 to 01df61af has its CatchHandler @ 01cf61d0 */
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)System_Func<Object,_InstanceHandle>_TypeInfo);
      if (lVar6 == 0) goto LAB_01cf625c;
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
    }
    break;
  case 9:
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 8);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec0b8);
      if (lVar6 == 0) goto LAB_01cf625c;
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar6;
    }
    break;
  case 10:
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x20);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_ContainsKey__
                                );
      if (lVar6 == 0) goto LAB_01cf625c;
                    /* try { // try from 01cf6110 to 01df6113 has its CatchHandler @ 01cf6118 */
                    /* try { // try from 01cf6114 to 01df6117 has its CatchHandler @ 01cf611c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf6110 with catch @ 01cf6118
                       try { // try from 01cf6118 to 01df6143 has its CatchHandler @ 01cf5cb0 */
      FUN_01cc8c00(lVar6,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf5fc0 with catch @ 01cf611c
                       catch(type#1 @ 03274860) { ... } // from try @ 01cf6114 with catch @ 01cf611c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf5fa4 with catch @ 01cf6120
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf5f94 with catch @ 01cf6124
                        */
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar6;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf5f70 with catch @ 01cf6128
                        */
    }
    break;
  case 0xb:
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x10);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f6cc0);
      if (lVar6 == 0) goto LAB_01cf625c;
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
    }
    break;
  case 0xc:
                    /* try { // try from 01cf61b0 to 01df61bb has its CatchHandler @ 01cf5cb0 */
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x28);
    if (lVar6 == 0) {
                    /* try { // try from 01cf61bc to 01df61c3 has its CatchHandler @ 01cf61d0 */
                    /* catch() { ... } // from try @ 01cf6144 with catch @ 01cf61c4 */
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2730);
      if (lVar6 == 0) goto LAB_01cf625c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01cf6188 with catch @ 01cf61d0
                       catch(type#2 @ 00000000) { ... } // from try @ 01cf61bc with catch @ 01cf61d0
                        */
                    /* try { // try from 01cf61d4 to 01df64a3 has its CatchHandler @ 01cf61d4
                       catch() { ... } // from try @ 01cf61d4 with catch @ 01cf61d4
                       catch() { ... } // from try @ 01cf64f0 with catch @ 01cf61d4
                       catch() { ... } // from try @ 01cf66dc with catch @ 01cf61d4
                       catch() { ... } // from try @ 01cf67ac with catch @ 01cf61d4
                       catch() { ... } // from try @ 01cf6808 with catch @ 01cf61d4
                       catch() { ... } // from try @ 01cf68c0 with catch @ 01cf61d4 */
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar6;
    }
    break;
  case 0xd:
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x30);
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRTask_FromResult<OVRResult<OVRColocationSession_Result>>__
                                );
      if (lVar6 == 0) goto LAB_01cf625c;
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar6;
    }
    break;
  case 0xe:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01cf5f64 with catch @ 01cf612c
                        */
    lVar6 = *(long *)(*(long *)(*(long *)StringLiteral_4121 + 0xb8) + 0x38);
    if (lVar6 == 0) {
                    /* try { // try from 01cf6144 to 01df6147 has its CatchHandler @ 01cf61c4 */
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray_Enumerator<XRRaycastHit>_get_Current__
                                );
      if (lVar6 == 0) goto LAB_01cf625c;
      FUN_01cc8c00(lVar6,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = lVar6;
    }
    break;
  default:
    uVar4 = FUN_01d0375c(0);
    uVar5 = thunk_FUN_00d48444(
                              Method_Oculus_Interaction_PoseDetection_ShapeRecognizer_GetFingerFeatureConfigs__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  return lVar6;
}


