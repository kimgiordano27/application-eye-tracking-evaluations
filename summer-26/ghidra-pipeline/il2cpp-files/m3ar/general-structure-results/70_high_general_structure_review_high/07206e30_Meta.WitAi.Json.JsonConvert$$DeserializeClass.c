/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeClass
ENTRY_POINT: 07206e30
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeClass(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 07206e48 to 07306e53 has its CatchHandler @ 07206f14 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07206dd4 with catch @ 07206e54
                       try { // try from 07206e54 to 07306e6f has its CatchHandler @ 07206d30 */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f65880) {
                    /* try { // try from 07206ee4 to 07306ef3 has its CatchHandler @ 07206f04 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_07206ee8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 07206e70 to 07306e87 has its CatchHandler @ 07206f04 */
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_07206ee8:
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07206eb0 with catch @ 07206ef8
                        */
                    /* WARNING: Could not recover jumptable at 0x07206efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 07206e8c with catch @ 07206efc
                        */
  (*(code *)*puVar1)();
  return;
}


