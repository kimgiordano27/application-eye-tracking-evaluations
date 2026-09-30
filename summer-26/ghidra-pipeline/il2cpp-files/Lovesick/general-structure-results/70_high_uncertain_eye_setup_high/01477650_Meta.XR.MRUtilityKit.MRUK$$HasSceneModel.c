/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$HasSceneModel
ENTRY_POINT: 01477650
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__HasSceneModel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Method_Unity_XR_CoreUtils_Datums_DatumProperty<float,_FloatDatum>__ctor__;
  if ((*(byte *)(unaff_x19 + 0xb23) & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor>_get_Current__
                      );
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_DatumProperty<float,_FloatDatum>__ctor__);
    *(undefined1 *)(unaff_x19 + 0xb23) = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) goto Meta_XR_MRUtilityKit_MRUK__get_Instance;
    FUN_016f27fc(lVar4,uVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor>_get_Current__,
                 0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
  }
  if (*(int *)(*(long *)
                Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__ + 0xe0
              ) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_017efd20(lVar4,0);
  if (lVar3 != 0) {
    FUN_017e7d94(lVar3,0,0);
    return;
  }
Meta_XR_MRUtilityKit_MRUK__get_Instance:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


