/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 0709a2a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  uint in_w11;
  long *unaff_x19;
  undefined8 uVar6;
  long *unaff_x21;
  
  if ((((uint)in_x10 <= in_w11) && (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) == in_x9))
     && ((char)unaff_x19[0x19] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0709a3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 600))();
    return;
  }
  plVar2 = unaff_x19;
  if (param_1 != *unaff_x21) {
    plVar2 = (long *)0x0;
  }
  if (plVar2 == (long *)0x0) {
    uVar6 = *(undefined8 *)PTR_DAT_08ea2988;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0710fcf0(uVar6,0);
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e9c2e0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0709a37c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_0709a37c:
    plVar2 = (long *)(*(code *)*puVar1)();
    lVar3 = *unaff_x21;
    if ((plVar2 == (long *)0x0) || (*plVar2 != lVar3)) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar3);
      }
      FUN_0709a118();
      return;
    }
  }
  return;
}


