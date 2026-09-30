/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetEyeLayerRecommendedResolution
ENTRY_POINT: 051703a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_GetEyeLayerRecommendedResolution(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  do {
    FUN_05029918();
    iVar4 = unaff_w21 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = iVar4;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
LAB_05170478:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    unaff_w22 = unaff_w22 - unaff_w21;
    iVar5 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    if (iVar5 < iVar4) {
      thunk_FUN_02dc61f4(PTR_DAT_067608d0);
      uVar2 = thunk_FUN_02d9d534();
      FUN_0503de18(uVar2,0);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06782998);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,uVar3);
    }
    if (iVar4 == iVar5) {
      iVar4 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) {
      *(float *)(unaff_x19 + 0x28) =
           *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_01208324;
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar1 = FUN_0600f2a4(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
        FUN_0600de94(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
        return;
      }
      goto LAB_05170478;
    }
    unaff_w21 = iVar5 - iVar4;
    if (unaff_w22 <= iVar5 - iVar4) {
      unaff_w21 = unaff_w22;
    }
  } while( true );
}


