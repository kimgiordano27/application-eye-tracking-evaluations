/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Analytics.DownloadClosed$$.ctor
ENTRY_POINT: 04486834
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void OVA_StellarX_Core_Framework_Analytics_DownloadClosed___ctor(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  long *in_x10;
  int *piVar4;
  long *unaff_x19;
  
  if (in_x9 != 0) {
                    /* try { // try from 04486840 to 0458685f has its CatchHandler @ 044868cc */
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
                    /* try { // try from 04486878 to 04586883 has its CatchHandler @ 044868e4 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto OVA_StellarX_Core_Framework_Analytics_DownloadDelete__set_SpaceID;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
OVA_StellarX_Core_Framework_Analytics_DownloadDelete__set_SpaceID:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 != (long *)0x0) {
    if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_09289728 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    thunk_FUN_040b5044();
    (**(code **)(*unaff_x19 + 0x998))();
    FUN_089c6d28();
    *(undefined1 *)((long)unaff_x19 + 0x99) = 1;
    lVar3 = FUN_089c7604();
    if (lVar3 != 0) {
      FUN_089cabd0(lVar3,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


