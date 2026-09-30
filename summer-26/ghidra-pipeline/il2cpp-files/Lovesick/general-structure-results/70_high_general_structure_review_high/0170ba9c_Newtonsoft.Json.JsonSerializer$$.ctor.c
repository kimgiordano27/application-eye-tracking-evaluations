/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 0170ba9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer___ctor(void)

{
  undefined *puVar1;
  bool in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w21;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
  if (!in_ZR) {
    if (0x1f < unaff_w21) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                                );
      uVar5 = thunk_FUN_00d48444(
                                Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__
                                );
      FUN_016ec624(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar4);
    }
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03778a3f == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
      DAT_03778a3f = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *(long *)puVar1;
    }
    if (**(char **)(lVar2 + 0xb8) == '\0') {
      FUN_0170bc50();
      return;
    }
  }
  FUN_015fdeb8();
  return;
}


