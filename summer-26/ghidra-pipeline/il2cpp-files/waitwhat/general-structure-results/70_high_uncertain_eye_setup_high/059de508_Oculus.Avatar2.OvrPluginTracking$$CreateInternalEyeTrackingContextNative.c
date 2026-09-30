/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContextNative
ENTRY_POINT: 059de508
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContextNative
          (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x21 + 3000);
                    /* try { // try from 059de50c to 05ade517 has its CatchHandler @ 059de560 */
  lVar1 = (**(code **)(param_1 + 0x248))(param_2,*(undefined8 *)(param_1 + 0x250));
                    /* try { // try from 059de518 to 05ade557 has its CatchHandler @ 059de49c */
  uVar2 = (**(code **)(*unaff_x20 + 0x1b8))();
  uVar3 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth(uVar2,*puVar6,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 1) {
      return 0;
    }
    plVar4 = *(long **)(lVar1 + 0x20);
                    /* try { // try from 059de558 to 05ade55b has its CatchHandler @ 059de560 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059de4ec with catch @ 059de55c
                       try { // try from 059de55c to 05ade57b has its CatchHandler @ 059de49c */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059de50c with catch @ 059de560
                       catch(type#1 @ 06cdc248) { ... } // from try @ 059de558 with catch @ 059de560
                        */
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
       plVar4 != (long *)0x0)) {
      uVar3 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
                    /* try { // try from 059de57c to 05ade57f has its CatchHandler @ 059de588 */
      if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar4 = *(long **)(lVar1 + 0x20);
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
        uVar5 = *(undefined8 *)PTR_DAT_07109640;
        if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
        }
        uVar5 = FUN_0593e698(uVar5,0);
        uVar2 = FUN_05947b18(uVar2,uVar5,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


