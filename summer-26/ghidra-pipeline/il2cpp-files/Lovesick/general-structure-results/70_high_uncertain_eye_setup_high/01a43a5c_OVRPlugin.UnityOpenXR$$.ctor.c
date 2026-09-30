/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 01a43a5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR___ctor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x24;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x24 + 0x108);
  iVar1 = FUN_0178a528();
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0;
    iVar1 = 0;
    do {
      uVar4 = FUN_0178a588();
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar8);
      }
      iVar2 = FUN_0169e4d0(uVar4,0);
      iVar1 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_0178a528();
    } while (iVar3 < iVar2);
  }
  if (*(int *)(*plVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0169d924(iVar1,0);
  iVar1 = FUN_0178a528();
  if (0 < iVar1) {
    iVar1 = 0;
    uVar7 = uVar4;
    do {
      uVar5 = FUN_0178a588();
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar8);
      }
      FUN_0169ebe4(uVar5,uVar7,0,0);
      lVar6 = FUN_017bd588(uVar7,0);
      uVar7 = FUN_0178a588();
      iVar3 = FUN_0169e4d0(uVar7,0);
      uVar7 = FUN_017bd57c(lVar6 + iVar3,0);
      iVar1 = iVar1 + 1;
      iVar3 = FUN_0178a528();
    } while (iVar1 < iVar3);
  }
  return uVar4;
}


