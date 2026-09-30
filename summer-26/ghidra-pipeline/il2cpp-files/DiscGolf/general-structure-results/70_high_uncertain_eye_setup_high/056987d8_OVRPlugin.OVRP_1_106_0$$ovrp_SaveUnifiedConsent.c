/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 056987d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  lVar1 = FUN_054a6408(*(undefined8 *)(param_1 + 0x20),param_3,0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      if ((int)*(long *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar1 = FUN_054a6098(*(undefined8 *)(lVar1 + 0x20),
                           *(undefined8 *)
                            System_Linq_Expressions_PrimitiveParameterExpression<object[]>_TypeInfo,
                           0);
      if (lVar1 == 0) goto LAB_056988cc;
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *unaff_x21;
      }
      if (**(int **)(lVar2 + 0xb8) != *(int *)(lVar1 + 0x18)) {
        in_stack_00000008._4_4_ = *(int *)(lVar1 + 0x18);
        uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                   (long)&stack0x00000008 + 4);
        uVar3 = FUN_0536388c(*(undefined8 *)
                              System_Predicate<XRDebugLineVisualizer_DebugLine>_TypeInfo,uVar3,0);
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
        }
        FUN_0630b598(uVar3,0);
        lVar2 = *unaff_x21;
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *unaff_x21;
      }
      **(undefined4 **)(lVar2 + 0xb8) = (int)*(undefined8 *)(lVar1 + 0x18);
    }
    return;
  }
LAB_056988cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


