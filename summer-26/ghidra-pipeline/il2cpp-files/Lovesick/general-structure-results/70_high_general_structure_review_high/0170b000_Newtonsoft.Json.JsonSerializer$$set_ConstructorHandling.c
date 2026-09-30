/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ConstructorHandling
ENTRY_POINT: 0170b000
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializer__set_ConstructorHandling(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x27;
  long unaff_x28;
  
  thunk_FUN_00d48444(PTR_DAT_033ee010);
  *(undefined1 *)(unaff_x28 + 0xa2) = 1;
  lVar1 = unaff_x27 + (long)unaff_w23 * 2;
  if ((*(uint *)(unaff_x22 + 0x10) < unaff_w21) ||
     (*(uint *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w19)) {
    FUN_01792dd4(0x18,0);
  }
  lVar3 = FUN_015fd038();
  lVar3 = lVar3 + (long)(int)unaff_w21 * 2;
  if (unaff_w24 == 0x40000000) {
    if (DAT_03778a40 == '\0') {
      thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      DAT_03778a40 = '\x01';
    }
    puVar2 = Method_System_Configuration_IgnoreSection_IsModified__;
    uVar4 = FUN_01120480(lVar1,unaff_w20,
                         *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
    uVar6 = *(undefined8 *)puVar2;
  }
  else {
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03778a3f == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
      DAT_03778a3f = '\x01';
    }
    puVar2 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
    lVar5 = *(long *)Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar2;
    }
    if (**(char **)(lVar5 + 0xb8) == '\0') {
      FUN_0170a734();
      return;
    }
    if ((unaff_w24 & 1) != 0) {
      if (*(int *)(*(long *)System_Func<Spectrum_Point,_float>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0170a540(lVar1,unaff_w20,lVar3,unaff_w19);
      return;
    }
    if (DAT_03778a40 == '\0') {
      thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      DAT_03778a40 = '\x01';
    }
    puVar2 = Method_System_Configuration_IgnoreSection_IsModified__;
    uVar4 = FUN_01120480(lVar1,unaff_w20,
                         *(undefined8 *)Method_System_Configuration_IgnoreSection_IsModified__);
    uVar6 = *(undefined8 *)puVar2;
  }
  uVar6 = FUN_01120480(lVar3,unaff_w19,uVar6);
  FUN_01785574(uVar4,unaff_w20,uVar6,unaff_w19,0);
  return;
}


