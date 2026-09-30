/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 05d4121c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x20 + 0xaf3) = 1;
  plVar1 = (long *)FUN_05d41138();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05d4128c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 05d41278 to 05e4133b has its CatchHandler @ 05d41278
                       catch() { ... } // from try @ 05d41278 with catch @ 05d41278
                       catch() { ... } // from try @ 05d413a8 with catch @ 05d41278
                       catch() { ... } // from try @ 05d41454 with catch @ 05d41278
                       catch() { ... } // from try @ 05d4151c with catch @ 05d41278
                       catch() { ... } // from try @ 05d4157c with catch @ 05d41278
                       catch() { ... } // from try @ 05d415b0 with catch @ 05d41278
                       catch() { ... } // from try @ 05d415f8 with catch @ 05d41278
                       catch() { ... } // from try @ 05d41614 with catch @ 05d41278
                       catch() { ... } // from try @ 05d4165c with catch @ 05d41278
                       catch() { ... } // from try @ 05d41678 with catch @ 05d41278
                       catch() { ... } // from try @ 05d416b8 with catch @ 05d41278 */
  puVar2 = (undefined8 *)FUN_02feb5b8(plVar1,*(long *)PTR_DAT_06fb4b60,0);
LAB_05d4128c:
                    /* WARNING: Could not recover jumptable at 0x05d4129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


