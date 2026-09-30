/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 0145caa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w26;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  lVar2 = thunk_FUN_00d6225c();
  if (lVar2 != 0) {
    if (4 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[8] = *unaff_x20;
      in_stack_00000070 =
           *(undefined8 *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
      in_stack_00000078 = 0xffffffffffffffff;
      in_stack_00000080 = unaff_w26;
      lVar2 = FUN_017a7f78(&stack0x00000070,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_0145d058;
      uVar5 = *(uint *)(unaff_x19 + 3);
      if (5 < uVar5) {
        unaff_x19[9] = lVar2;
        puVar1 = System_Func<double>_TypeInfo;
        if (*(long *)System_Func<double>_TypeInfo != 0) {
          lVar2 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                     *(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar2 == 0) goto LAB_0145d058;
          uVar5 = *(uint *)(unaff_x19 + 3);
        }
        if (6 < uVar5) {
          unaff_x19[10] = *(long *)puVar1;
          uVar4 = FUN_01600844();
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x22);
          }
          FUN_026610e4(uVar4,0);
          if (*(long *)(unaff_x21 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined1 *)(*(long *)(unaff_x21 + 0x38) + 0x10) = 0;
          return 0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0145d058:
  uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,0);
}


