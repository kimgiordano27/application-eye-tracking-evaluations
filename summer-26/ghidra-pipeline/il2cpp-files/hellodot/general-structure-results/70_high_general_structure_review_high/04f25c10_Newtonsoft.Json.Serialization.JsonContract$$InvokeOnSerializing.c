/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerializing
ENTRY_POINT: 04f25c10
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerializing(void)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x28;
  
  do {
    sVar2 = FUN_04db48b0();
    if ((sVar2 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize();
    }
    else {
      FUN_04db48b0();
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*unaff_x28);
      }
      uVar3 = FUN_04f28180();
      if ((uVar3 & 1) == 0) {
        FUN_04f2908c();
        return 0;
      }
    }
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w23 < *(int *)(unaff_x22 + 0x10));
  uVar5 = *(uint *)(unaff_x19 + 0x24);
  if ((uVar5 >> 0xb & 1) == 0) {
    return 1;
  }
  if ((uVar5 >> 0xd & 1) != 0) {
    uVar3 = thunk_FUN_04db8ae0();
    uVar5 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar3 & 1) != 0) goto LAB_04f25cf0;
  }
  if ((uVar5 >> 0xe & 1) == 0) {
    return 1;
  }
  uVar3 = thunk_FUN_04db8ae0();
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar5 = *(uint *)(unaff_x19 + 0x24);
LAB_04f25cf0:
  *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
  puVar1 = PTR_DAT_065c98d0;
  lVar4 = *(long *)PTR_DAT_065c98d0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *(long *)puVar1;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar4 + 0xb8);
  return 1;
}


