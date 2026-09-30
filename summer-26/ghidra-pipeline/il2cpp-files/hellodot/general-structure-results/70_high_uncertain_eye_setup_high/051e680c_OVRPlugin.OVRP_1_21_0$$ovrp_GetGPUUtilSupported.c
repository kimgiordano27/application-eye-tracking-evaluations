/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilSupported
ENTRY_POINT: 051e680c
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilSupported(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  do {
    iVar1 = (int)param_1 - in_w3;
    if (unaff_w22 <= iVar1) {
      iVar1 = unaff_w22;
    }
    FUN_04f53d58();
    in_w3 = iVar1 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = in_w3;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_051e68e8;
    param_1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    unaff_w22 = unaff_w22 - iVar1;
    if ((int)param_1 < in_w3) {
      thunk_FUN_02c7737c(PTR_DAT_065c8580);
      uVar3 = thunk_FUN_02cea894();
      FUN_04f6864c(uVar3,0);
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_066093e0);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar3,uVar4);
    }
    if (in_w3 == (int)param_1) {
      in_w3 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
  } while (0 < unaff_w22);
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_013ddd50;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar2 = FUN_05ea68d4(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
    FUN_05ea5d94(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_051e68e8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


