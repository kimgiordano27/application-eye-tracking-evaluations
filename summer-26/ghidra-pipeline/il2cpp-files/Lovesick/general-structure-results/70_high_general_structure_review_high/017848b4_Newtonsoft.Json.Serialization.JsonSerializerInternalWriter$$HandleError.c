/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 017848b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(void)

{
  ulong uVar1;
  int in_w8;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  int iVar3;
  long unaff_x22;
  long lVar4;
  int unaff_w23;
  long unaff_x25;
  long unaff_x26;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eb120);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    *(undefined1 *)(unaff_x25 + 0xaee) = 1;
  }
  if ((unaff_w21 == unaff_w23) && ((unaff_w21 == 0 || (uVar1 = FUN_00bd738c(), (uVar1 & 1) != 0))))
  {
    uVar2 = 0xff800000;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x68);
    if (*(char *)(unaff_x26 + 0x618) == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      *(undefined1 *)(unaff_x26 + 0x618) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_015fd038(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(char *)(unaff_x25 + 0xaee) == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033eb120);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      *(undefined1 *)(unaff_x25 + 0xaee) = 1;
    }
    if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_00bd738c(), (uVar1 & 1) == 0)))) {
      return 0;
    }
    uVar2 = 0x7fc00000;
  }
  *unaff_x19 = uVar2;
  return 1;
}


