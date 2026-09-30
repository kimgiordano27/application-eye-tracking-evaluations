/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 0170ba2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent
          (undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((DAT_037789d6 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    DAT_037789d6 = 1;
  }
  puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
  if ((param_3 == 0) || (param_2 == 0)) {
    puVar1 = Method_System_Collections_Generic_List_Enumerator<IXRInteractionGroup>_MoveNext__;
    if (param_2 == 0) {
      puVar1 = StringLiteral_3570;
    }
    uVar3 = thunk_FUN_00d48444(puVar1);
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<KeyValuePair<int,_int>>__);
    FUN_016f4460(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<IAsyncLocal,_object>_TryGetValue__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      if (param_4 == 0x40000000) {
        uVar6 = 4;
      }
      else if (param_4 == 0x10000000) {
        uVar6 = 5;
      }
      else {
        if (0x1f < param_4) {
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
        if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ +
                    0xe0) == 0) {
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
          uVar3 = FUN_0170bc50(param_1,param_2,param_3,param_4);
          return uVar3;
        }
        uVar6 = param_4 & 1 | 4;
      }
      uVar3 = FUN_015fdeb8(param_2,param_3,uVar6,0);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


