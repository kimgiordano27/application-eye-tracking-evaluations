/*
FUNCTION_NAME: UniGLTF.BlendShapeExporter.<>c__DisplayClass0_0$$.ctor
ENTRY_POINT: 02f8ac58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8add4) */
/* WARNING: Removing unreachable block (ram,0x02f8adc8) */

void UniGLTF_BlendShapeExporter_<>c__DisplayClass0_0___ctor(ulong param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  char cStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    if (((unaff_w23 < *(int *)(unaff_x20 + 0x20)) || (uVar4 = FUN_02f8b74c(), (uVar4 & 1) != 0)) &&
       ((*(int *)(unaff_x20 + 0x24) < *(int *)(unaff_x20 + 0x1c) ||
        (uVar4 = FUN_02f8b74c(), (uVar4 & 1) != 0)))) {
      cStack000000000000001c = '\0';
      FUN_027e0bd8();
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(unaff_x20 + 0x24);
      iVar2 = FUN_02f89ff4();
      *(int *)(unaff_x20 + 0x24) = iVar2 + iVar1;
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
    }
  }
  else {
                    /* try { // try from 02f8ac5c to 0308ac63 has its CatchHandler @ 02f8ae74 */
    cStack000000000000001c = '\0';
    FUN_027e0bd8();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_02f897c4();
    if (iVar1 != -1) {
      plVar3 = *(long **)(unaff_x22 + 0x18);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x3d8))(plVar3,iVar1,*(undefined8 *)(*plVar3 + 0x3e0));
      *(int *)(unaff_x20 + 0x24) = *(int *)(unaff_x20 + 0x24) + -1;
    }
    if (cStack000000000000001c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
  }
  return;
}


