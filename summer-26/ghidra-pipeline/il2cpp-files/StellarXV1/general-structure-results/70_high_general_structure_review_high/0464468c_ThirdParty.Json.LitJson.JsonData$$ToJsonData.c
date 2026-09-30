/*
FUNCTION_NAME: ThirdParty.Json.LitJson.JsonData$$ToJsonData
ENTRY_POINT: 0464468c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void ThirdParty_Json_LitJson_JsonData__ToJsonData(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_1;
  uVar1 = FUN_076733cc();
  uStack0000000000000008 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04644684 with catch @ 0464469c
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04644680 with catch @ 046446a0
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 046445d0 with catch @ 046446a4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 04644614 with catch @ 046446a8
                        */
  uVar2 = FUN_076733cc();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
                    /* try { // try from 046446c4 to 047446c7 has its CatchHandler @ 046446e0 */
    thunk_FUN_040d65a8(*unaff_x22);
  }
                    /* try { // try from 046446c8 to 047446e3 has its CatchHandler @ 04643a48 */
  uVar1 = FUN_04307470(uVar1,uVar2,uVar7,0);
  plVar8 = *(long **)(unaff_x19 + 0x38);
                    /* catch() { ... } // from try @ 046446c4 with catch @ 046446e0 */
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
                    /* try { // try from 046446e4 to 047446eb has its CatchHandler @ 046446f4 */
  lVar4 = *plVar8;
                    /* try { // try from 046446ec to 047446f7 has its CatchHandler @ 04643a48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 046446e4 with catch @ 046446f4
                        */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 04644700 to 04744803 has its CatchHandler @ 04644700
                       catch() { ... } // from try @ 04644700 with catch @ 04644700
                       catch() { ... } // from try @ 04644884 with catch @ 04644700
                       catch() { ... } // from try @ 046448ec with catch @ 04644700
                       catch() { ... } // from try @ 04644910 with catch @ 04644700 */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09288c48) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x21) * 0x10 + 0x138);
        goto LAB_04644740;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09288c48,0x21);
LAB_04644740:
  (*(code *)*puVar3)(plVar8,uVar1,puVar3[1]);
  return;
}


