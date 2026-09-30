/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$Default<object>
ENTRY_POINT: 010453b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style__Default<object>(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x21;
  long in_stack_00000008;
  
  FUN_026f2c70();
  if (*(long *)(unaff_x21 + 0x90) != 0) {
    FUN_00fde460(*(long *)(unaff_x21 + 0x90),0);
    if (*(long *)(unaff_x21 + 0xa0) != 0) {
      FUN_00fde460(*(long *)(unaff_x21 + 0xa0),0);
    }
    if (*(long *)(unaff_x21 + 0x80) != 0) {
      FUN_0268ace8(*(long *)(unaff_x21 + 0x80),1,0);
      puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(long *)(unaff_x21 + 0x80) != 0) {
        FUN_010e5c4c(*(long *)(unaff_x21 + 0x80),1,&stack0x00000008,
                     *(undefined8 *)
                      System_Collections_Generic_IReadOnlyList<ParameterExpression>_TypeInfo);
        lVar2 = in_stack_00000008;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_0268b5e4(lVar2,0);
        if ((uVar3 & 1) != 0) {
          if (lVar2 == 0) goto LAB_01045488;
          FUN_026f2c70(lVar2,1,0);
        }
        return 0;
      }
    }
  }
LAB_01045488:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


