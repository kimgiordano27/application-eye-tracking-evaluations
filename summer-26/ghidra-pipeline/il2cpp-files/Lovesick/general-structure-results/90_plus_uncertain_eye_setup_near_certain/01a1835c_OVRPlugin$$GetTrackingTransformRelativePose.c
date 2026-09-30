/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 01a1835c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 151
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  int in_w8;
  float *pfVar2;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x18c) = 1;
  }
  fVar10 = unaff_s11 - unaff_s12;
  fVar11 = unaff_s10 * param_2 - unaff_s8 * param_1;
  fVar12 = unaff_s8 * param_3 - unaff_s9 * param_2;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_System_Linq_Enumerable_First<MemberInfo>__;
  fVar3 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar3 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar10 = *pfVar2;
    fVar11 = pfVar2[1];
    fVar12 = pfVar2[2];
  }
  else {
    fVar10 = fVar10 / fVar3;
    fVar11 = fVar11 / fVar3;
    fVar12 = fVar12 / fVar3;
  }
  uVar9 = (ulong)(uint)fVar12;
  uVar7 = (ulong)(uint)fVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_01a38474(fVar10,uVar7,uVar9,unaff_x20 + 3,0);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  FUN_02666aac(uVar4,uVar6,uVar8,uVar5,uVar7,uVar9,param_4);
  return;
}


