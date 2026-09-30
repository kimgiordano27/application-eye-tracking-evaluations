/*
FUNCTION_NAME: OVRManager$$remove_DisplayRefreshRateChanged
ENTRY_POINT: 03664a8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_DisplayRefreshRateChanged(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  byte unaff_w21;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x370));
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__);
  *(undefined1 *)(unaff_x20 + 0xd13) = 1;
  puVar3 = Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_0__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((unaff_x19 == 0) || (lVar5 = *(long *)(unaff_x19 + 0x10), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  cVar1 = *(char *)(lVar5 + 0x145);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  puVar9 = (undefined8 *)(unaff_x19 + 0x38);
  uVar8 = *puVar9;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_02310a68(uVar6,*(undefined8 *)puVar3);
  *puVar9 = uVar6;
  thunk_FUN_01f51358(puVar9,uVar6);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_04073094(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_04073094(uVar6,uVar8,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(*(long *)
                                   Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__
                                 + 0xb8) + 0x10);
      goto joined_r0x03664b80;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_04073094(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)
                               Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_87__
                             + 0xb8) + 0x18);
joined_r0x03664b80:
  if (lVar5 == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_Interaction_ListLayout_<>c_<_ctor>b__11_1__);
  FUN_03662298(uVar6,uVar7,uVar8,cVar1 != '\0' | unaff_w21 & 1);
                    /* WARNING: Could not recover jumptable at 0x03664c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),uVar6,*(undefined8 *)(lVar5 + 0x28));
  return;
}


