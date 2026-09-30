/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<LckTelemetry.GeoLocation>
ENTRY_POINT: 04cf1560
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


undefined1  [16]
Newtonsoft_Json_JsonSerializer__Deserialize<LckTelemetry_GeoLocation>
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined1 auVar5 [16];
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_04481fb8(param_2);
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_2) {
                    /* try { // try from 04cf15b0 to 04df15b7 has its CatchHandler @ 04cf15d4 */
                    /* try { // try from 04cf15b8 to 04df15ef has its CatchHandler @ 04cf153c */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_04cf15bc;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 04cf1598 to 04df15a7 has its CatchHandler @ 04cf15d8 */
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_04cf15bc:
  auVar5 = (*(code *)*puVar1)();
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 04cf15b0 with catch @ 04cf15d4
                        */
  return auVar5;
}


