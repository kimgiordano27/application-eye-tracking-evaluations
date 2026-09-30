/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 03696ed4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
               (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar4 = (float)FUN_03694cd0();
  if (DAT_0482f03f == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03f = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  fVar7 = *(float *)(unaff_x20 + 0x1c);
  fVar6 = *(float *)(unaff_x21 + 0x28);
  fVar4 = SQRT((unaff_s13 - param_3) * (unaff_s13 - param_3) +
               (unaff_s12 - fVar4) * (unaff_s12 - fVar4) +
               (unaff_s11 - param_2) * (unaff_s11 - param_2));
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  fVar5 = -fVar4;
  uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (fVar6 <= ABS(fVar4 + fVar7)) {
      if (*(float *)(unaff_x20 + 0x1c) <= fVar5) {
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x21 + 0x548))();
      if (iVar1 < 1) {
        return;
      }
    }
  }
  *(float *)(unaff_x20 + 0x1c) = fVar5;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000020;
  *(undefined8 *)(unaff_x20 + 0x38) = in_stack_00000008;
  *(undefined8 *)(unaff_x20 + 0x30) = in_stack_00000000;
  *(undefined8 *)(unaff_x20 + 0x48) = in_stack_00000018;
  *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000010;
  thunk_FUN_01f51358(unaff_x20 + 0x30,0);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x28));
  return;
}


