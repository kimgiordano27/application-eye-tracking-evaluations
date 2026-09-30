/*
FUNCTION_NAME: QFSW.QC.Utilities.SceneUtilities.<GetLoadedScenes>d__1$$MoveNext
ENTRY_POINT: 029610d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029611fc) */

void QFSW_QC_Utilities_SceneUtilities_<GetLoadedScenes>d__1__MoveNext(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  char cStack000000000000001c;
  
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cdcac0 + 0x130);
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cdcac0))
    {
      uVar2 = FUN_02ecdd94();
      uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      cStack000000000000001c = '\0';
      FUN_027e0bd8(uVar4,&stack0x0000001c,0);
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*(long *)(unaff_x19 + 0x20),uVar2,*(undefined8 *)PTR_DAT_03d06150);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)PTR_DAT_03d06158,0);
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ecdce8(lVar3,uVar2,*(undefined8 *)(unaff_x19 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


