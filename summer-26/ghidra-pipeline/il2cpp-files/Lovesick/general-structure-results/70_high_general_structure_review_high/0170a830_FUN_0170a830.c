/*
FUNCTION_NAME: FUN_0170a830
ENTRY_POINT: 0170a830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5
*/


undefined8
FUN_0170a830(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if ((DAT_037789d0 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    DAT_037789d0 = 1;
  }
  puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
  puVar5 = System_Func<Spectrum_Point,_float>_TypeInfo;
  if (param_5 != 0x10000000) {
    if ((param_5 >> 0x1e & 1) == 0) {
      if ((param_5 & 0xdfffffe0) != 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar2 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar5 = 
        Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
        ;
        goto Newtonsoft_Json_JsonSerializer__set_SerializationBinder;
      }
      if (param_4 == 0) {
        return 1;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ + 0xe0
                  ) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03778a3f == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
        DAT_03778a3f = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      if (**(char **)(lVar3 + 0xb8) == '\0') {
        uVar2 = FUN_0170abd0(param_1,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      if (DAT_037780a3 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_037780a3 = '\x01';
      }
      uVar2 = FUN_015fd038(param_4,0);
      param_4 = (ulong)*(uint *)(param_4 + 0x10);
      if ((param_5 & 1) == 0) {
        if (DAT_03778a40 == '\0') {
          thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
          thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
          DAT_03778a40 = '\x01';
        }
        puVar5 = Method_System_Configuration_IgnoreSection_IsModified__;
        uVar4 = FUN_01120480(param_2,param_3,
                             *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
        uVar6 = *(undefined8 *)puVar5;
        goto LAB_0170aacc;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      goto LAB_0170aa28;
    }
    if (param_5 != 0x40000000) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar2 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar5 = StringLiteral_5433;
Newtonsoft_Json_JsonSerializer__set_SerializationBinder:
      uVar4 = thunk_FUN_00d48444(puVar5);
      uVar6 = thunk_FUN_00d48444(
                                Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__
                                );
      FUN_016ec624(uVar2,uVar4,uVar6,0);
      uVar4 = thunk_FUN_00d48444(OVRSimpleJSON_JSONArray_<get_Children>d__24_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar2,uVar4);
    }
    if (DAT_037780a3 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_037780a3 = '\x01';
      if (param_4 != 0) goto LAB_0170a9d8;
LAB_0170aa78:
      uVar2 = 0;
    }
    else {
      if (param_4 == 0) goto LAB_0170aa78;
LAB_0170a9d8:
      uVar2 = FUN_015fd038(param_4,0);
      param_4 = (ulong)*(uint *)(param_4 + 0x10);
    }
    if (DAT_03778a40 == '\0') {
      thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      DAT_03778a40 = '\x01';
    }
    puVar5 = Method_System_Configuration_IgnoreSection_IsModified__;
    uVar4 = FUN_01120480(param_2,param_3,
                         *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
    uVar6 = *(undefined8 *)puVar5;
LAB_0170aacc:
    uVar2 = FUN_01120480(uVar2,param_4,uVar6);
    uVar2 = FUN_01785574(uVar4,param_3 & 0xffffffff,uVar2,param_4 & 0xffffffff,0);
    return uVar2;
  }
  if (DAT_037780a3 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_037780a3 = '\x01';
    if (param_4 != 0) goto Newtonsoft_Json_JsonSerializer__get_ReferenceResolver;
LAB_0170aa08:
    uVar2 = 0;
  }
  else {
    if (param_4 == 0) goto LAB_0170aa08;
Newtonsoft_Json_JsonSerializer__get_ReferenceResolver:
    uVar2 = FUN_015fd038(param_4,0);
    param_4 = (ulong)*(uint *)(param_4 + 0x10);
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
LAB_0170aa28:
  uVar2 = FUN_0170a540(param_2,param_3,uVar2,param_4);
  return uVar2;
}


