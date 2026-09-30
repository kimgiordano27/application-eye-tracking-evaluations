/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 05e91920
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x28;
  
  puVar1 = (undefined8 *)FUN_0367cd30();
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    lVar4 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05e91ca8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30();
LAB_05e91ca8:
    (*(code *)*puVar1)();
  }
  else {
    uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17be0);
    FUN_05e93810();
    FUN_05e888b4(uVar3,0);
  }
  if (DAT_07edf1f0 == '\0') {
    FUN_03642964(PTR_DAT_079fd3d0);
    DAT_07edf1f0 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  return;
}


