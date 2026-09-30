/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 04cf1210
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04cf130c) */
/* WARNING: Removing unreachable block (ram,0x04cf134c) */

undefined1  [16]
Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined1 auVar6 [16];
  
                    /* catch() { ... } // from try @ 04cf11f0 with catch @ 04cf1214 */
  lVar1 = FUN_04481fb8(param_2);
                    /* try { // try from 04cf1218 to 04df1223 has its CatchHandler @ 04cf1238 */
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 04cf1224 to 04df122f has its CatchHandler @ 04cf113c */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 04cf1230 to 04df1237 has its CatchHandler @ 04cf1238 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04cf1218 with catch @ 04cf1238
                       catch(type#2 @ 00000000) { ... } // from try @ 04cf1230 with catch @ 04cf1238
                        */
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04cf127c;
      }
                    /* try { // try from 04cf123c to 04df1297 has its CatchHandler @ 04cf123c
                       catch() { ... } // from try @ 04cf123c with catch @ 04cf123c
                       catch() { ... } // from try @ 04cf12b8 with catch @ 04cf123c
                       catch() { ... } // from try @ 04cf12f4 with catch @ 04cf123c
                       catch() { ... } // from try @ 04cf1324 with catch @ 04cf123c */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_04cf127c:
  auVar6 = (*(code *)*puVar2)();
                    /* try { // try from 04cf1298 to 04df12a7 has its CatchHandler @ 04cf12d8 */
  if (unaff_x19 != (long *)0x0) {
    lVar1 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
                    /* try { // try from 04cf12b0 to 04df12b7 has its CatchHandler @ 04cf12d4 */
    if (uVar4 != 0) {
                    /* try { // try from 04cf12b8 to 04df12ef has its CatchHandler @ 04cf123c */
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04cf12f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_04cf12f0:
    (*(code *)*puVar2)();
  }
  return auVar6;
}


