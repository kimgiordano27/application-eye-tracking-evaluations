/*
FUNCTION_NAME: Meta.XR.Movement.Retargeting.PoseRetargeterConfig$$ApplyFacePose
ENTRY_POINT: 06daecf4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_Retargeting_PoseRetargeterConfig__ApplyFacePose(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  int iStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(PTR_DAT_08e8ffd8);
    FUN_03c8f898(PTR_DAT_08e8ffe8);
    *(undefined1 *)(unaff_x23 + 0xb04) = 1;
  }
  iStack000000000000001c = 0;
  FUN_07145224();
  *(undefined4 *)(unaff_x19 + 0x28) = unaff_w21;
  uVar3 = FUN_06daeddc(unaff_w22,unaff_w21,unaff_w20,&stack0x0000001c);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  puVar2 = PTR_DAT_08e8ffe8;
  puVar1 = PTR_DAT_08e69670;
  if (iStack000000000000001c != 0) {
    uVar3 = FUN_07138048();
    uVar3 = FUN_06f683f8(*(undefined8 *)puVar2,uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)puVar1);
    }
    FUN_085a437c(uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
  }
  return;
}


