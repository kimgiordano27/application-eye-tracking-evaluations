/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode.<get_DeepChildren>d__45$$System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator
ENTRY_POINT: 052c1a78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void OVRSimpleJSON_JSONNode_<get_DeepChildren>d__45__System_Collections_Generic_IEnumerable<OVRSimpleJSON_JSONNode>_GetEnumerator
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_02f08768();
  FUN_02f08768(Mono_Net_Security_AsyncHandshakeRequest_TypeInfo);
  FUN_02f08768(System_Xml_AsyncHelper_TypeInfo);
  FUN_02f08768(UnityEngine_AsyncInstantiateOperation_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xebb) = 1;
  if (*(char *)(unaff_x19 + 0x28) != '\0') {
    return;
  }
  uVar5 = *(undefined8 *)System_Xml_AsyncHelper_TypeInfo;
  lVar2 = FUN_060ed87c();
  if (lVar2 != 0) {
    uVar3 = thunk_FUN_060f6130(lVar2,0);
    lVar2 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,6);
    if (lVar2 != 0) {
      uVar4 = *(uint *)(lVar2 + 0x18);
      if ((((uVar4 != 0) &&
           (*(undefined8 *)(lVar2 + 0x20) =
                 *(undefined8 *)UnityEngine_AsyncInstantiateOperation_TypeInfo, uVar4 != 1)) &&
          (*(undefined8 *)(lVar2 + 0x28) = uVar5, 2 < uVar4)) &&
         ((*(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)System_Threading_AsyncFlowControl_TypeInfo
          , uVar4 != 3 &&
          (*(undefined8 *)(lVar2 + 0x38) = uVar3, puVar1 = System_AsyncCallback_TypeInfo, 4 < uVar4)
          ))) {
        *(undefined8 *)(lVar2 + 0x40) =
             *(undefined8 *)Mono_Net_Security_AsyncHandshakeRequest_TypeInfo;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          uVar4 = *(uint *)(lVar2 + 0x18);
        }
        if (5 < uVar4) {
          *(undefined8 *)(lVar2 + 0x48) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar5 = FUN_04f6fd20(lVar2,0);
          if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
          }
          FUN_060aa024(uVar5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


