/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 066ea530
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__PopulateInternal(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  uint unaff_w24;
  long *unaff_x25;
  
  while( true ) {
                    /* try { // try from 066ea538 to 067ea54f has its CatchHandler @ 066ea584 */
    FUN_065d8050();
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    plVar2 = (long *)*unaff_x25;
                    /* try { // try from 066ea550 to 067ea573 has its CatchHandler @ 066ea240 */
    if (plVar2 == (long *)0x0) {
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (lVar3 != 0) {
      FUN_065d8050();
                    /* try { // try from 066ea574 to 067ea583 has its CatchHandler @ 066ea584 */
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
      plVar2 = (long *)*unaff_x25;
                    /* catch() { ... } // from try @ 066ea538 with catch @ 066ea584
                       catch() { ... } // from try @ 066ea574 with catch @ 066ea584 */
      if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
                    /* try { // try from 066ea588 to 067ea58b has its CatchHandler @ 066ea594 */
                    /* try { // try from 066ea58c to 067ea597 has its CatchHandler @ 066ea240 */
      (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 066ea588 with catch @ 066ea594
                        */
      FUN_065d8050();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    unaff_w24 = unaff_w24 + 1;
    if ((int)uVar4 <= (int)unaff_w24) {
      FUN_065d8050();
      return;
    }
    if (unaff_w24 != 0) {
      FUN_065d8050();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
    }
    if (uVar4 <= unaff_w24) break;
    unaff_x25 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    plVar2 = (long *)*unaff_x25;
    if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
    if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
    uVar1 = (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
    if ((uVar1 & 1) != 0) {
      uVar1 = (**(code **)(*plVar2 + 1000))(plVar2,*(undefined8 *)(*plVar2 + 0x3f0));
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
        if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
      }
    }
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


