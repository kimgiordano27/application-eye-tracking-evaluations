/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateAnchoredPosition
ENTRY_POINT: 051a0300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateAnchoredPosition
               (long *param_1,long param_2)

{
  ushort uVar1;
  int in_w8;
  long lVar2;
  
  if (in_w8 != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (in_w8 != *(int *)(*param_1 + 0x18) + 1) goto LAB_051a032c;
  }
  FUN_05509628(0);
LAB_051a032c:
  lVar2 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02dcfd18(lVar2);
    lVar2 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  memcpy(&stack0x00000008,param_1 + 2,0x48);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x00000008);
  return;
}


