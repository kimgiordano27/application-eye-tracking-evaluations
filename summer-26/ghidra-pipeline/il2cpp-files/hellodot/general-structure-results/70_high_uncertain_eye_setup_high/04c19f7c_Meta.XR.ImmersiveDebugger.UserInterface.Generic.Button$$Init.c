/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$Init
ENTRY_POINT: 04c19f7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__Init(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 in_stack_00000008;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x6c8))();
                    /* catch() { ... } // from try @ 04c19d6c with catch @ 04c19f98
                       try { // try from 04c19f98 to 04d19fd7 has its CatchHandler @ 04c1995c */
                    /* catch() { ... } // from try @ 04c19ed8 with catch @ 04c19f9c */
    uVar2 = FUN_04e69d60(plVar1,0,0);
                    /* catch() { ... } // from try @ 04c19d50 with catch @ 04c19fa8 */
    if ((uVar2 & 1) != 0) {
      return;
    }
                    /* catch() { ... } // from try @ 04c19ed4 with catch @ 04c19fac */
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 04c19c9c with catch @ 04c19fbc */
                    /* catch() { ... } // from try @ 04c19cdc with catch @ 04c19fc0 */
      lVar3 = (**(code **)(*plVar1 + 0x2e8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x2f0));
      if (lVar3 == 0) {
        return;
      }
      lVar7 = *(long *)(unaff_x19 + 0x18);
      plVar1 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
      in_stack_00000008._4_4_ = 0;
      lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,(long)&stack0x00000008 + 4);
      if (plVar1 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
        if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar1[4] = lVar4;
        if (lVar7 != 0) {
          System_GC__GetGeneration(lVar7,lVar3,plVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


