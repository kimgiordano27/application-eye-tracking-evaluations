/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 03668f04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(void)

{
  long lVar1;
  ulong uVar2;
  code *in_x9;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  (*in_x9)();
  lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                            );
  FUN_04051010(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_040529fc(lVar1,in_stack_00000018,0);
  FUN_0405313c(lVar1,0,in_stack_00000000,0);
  FUN_0405460c(lVar1,in_stack_00000008,0,0);
  FUN_04054ce4(lVar1,0);
  FUN_04054de0(lVar1,0);
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_04050cd0(*(long *)(unaff_x19 + 0x28),lVar1,0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_04073094(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_04050c14(*(long *)(unaff_x19 + 0x28),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_040c2334(lVar1,uVar3,0);
  }
  return;
}


