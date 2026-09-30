/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 05abb74c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x22;
  
  plVar2 = (long *)thunk_FUN_03010710();
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_03010710();
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 05abb850 to 05bbb85b has its CatchHandler @ 05abb738 */
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar4 = thunk_FUN_0301080c();
                    /* try { // try from 05abb85c to 05bbb863 has its CatchHandler @ 05abb864 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05abb844 with catch @ 05abb864
                       catch(type#2 @ 00000000) { ... } // from try @ 05abb85c with catch @ 05abb864
                        */
      uVar5 = thunk_FUN_03037804(PTR_DAT_06fac570);
                    /* try { // try from 05abb868 to 05bbba5b has its CatchHandler @ 05abb868
                       catch() { ... } // from try @ 05abb868 with catch @ 05abb868
                       catch() { ... } // from try @ 05abba9c with catch @ 05abb868
                       catch() { ... } // from try @ 05abbb10 with catch @ 05abb868
                       catch() { ... } // from try @ 05abbb84 with catch @ 05abb868
                       catch() { ... } // from try @ 05abbbb4 with catch @ 05abb868 */
      FUN_05a64d00(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03037804(PTR_DAT_06fac578);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar4,uVar5);
    }
    lVar6 = *plVar2;
                    /* try { // try from 05abb7ac to 05bbb7d3 has its CatchHandler @ 05abb810 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05abb820;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 05abb7d4 to 05bbb827 has its CatchHandler @ 05abb738 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x22,0);
LAB_05abb820:
                    /* try { // try from 05abb828 to 05bbb82b has its CatchHandler @ 05abb838 */
    iVar1 = (*(code *)*puVar3)(plVar2);
                    /* catch() { ... } // from try @ 05abb828 with catch @ 05abb838 */
    return (ulong)(uint)-iVar1;
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05abb7f8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 05abb788 to 05bbb797 has its CatchHandler @ 05abb80c */
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*unaff_x22,0);
LAB_05abb7f8:
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05abb788 with catch @ 05abb80c
                        */
                    /* WARNING: Could not recover jumptable at 0x05abb810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05abb7ac with catch @ 05abb810
                        */
  uVar7 = (*(code *)*puVar3)(plVar2);
  return uVar7;
}


