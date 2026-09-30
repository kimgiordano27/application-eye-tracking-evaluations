/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 066ea4b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(void)

{
  undefined1 in_CY;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  uint unaff_w24;
  long *plVar5;
  
  while (!(bool)in_CY) {
    plVar5 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    plVar1 = (long *)*plVar5;
    if (plVar1 == (long *)0x0) {
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
    if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
    uVar2 = (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(*plVar1 + 0x3e0));
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(*plVar1 + 1000))(plVar1,*(undefined8 *)(*plVar1 + 0x3f0));
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 066ea508 to 067ea50f has its CatchHandler @ 066ea51c */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea3b0 with catch @ 066ea510
                       try { // try from 066ea510 to 067ea537 has its CatchHandler @ 066ea240 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea460 with catch @ 066ea514
                        */
        plVar1 = (long *)(**(code **)(*plVar1 + 0x458))(plVar1,*(undefined8 *)(*plVar1 + 0x460));
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea3b4 with catch @ 066ea518
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea47c with catch @ 066ea51c
                       catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea508 with catch @ 066ea51c
                        */
        if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
      }
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea3d0 with catch @ 066ea520
                        */
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    FUN_065d8050();
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    plVar1 = (long *)*plVar5;
    if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
    lVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    if (lVar3 != 0) {
      FUN_065d8050();
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_066ea5f4;
      (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
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
    in_CY = uVar4 <= unaff_w24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


