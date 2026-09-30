/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 056a0ba8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  int iVar4;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    *(undefined1 *)(unaff_x21 + 0x8a2) = 1;
  }
  puVar1 = PTR_DAT_069ffab0;
  if (0 < unaff_w20) {
    iVar4 = unaff_w20 + 1;
    do {
      lVar3 = FUN_02d966a4(*(undefined8 *)puVar1,2);
      if (lVar3 == 0) {
LAB_056a0c5c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((*(int *)(lVar3 + 0x18) == 0) ||
         (*(undefined2 *)(lVar3 + 0x20) = 0x2f, *(int *)(lVar3 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(undefined2 *)(lVar3 + 0x22) = 0x5c;
      if (unaff_x19 == 0) goto LAB_056a0c5c;
      iVar2 = FUN_05372d78(unaff_x19,lVar3,0);
      if (iVar2 == -1) {
        return unaff_x19;
      }
      unaff_x19 = FUN_0536f444(unaff_x19,0,iVar2,0);
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
  }
  return unaff_x19;
}


