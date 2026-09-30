/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$<>m__Finally4
ENTRY_POINT: 05ab4004
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__<>m__Finally4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  long unaff_x19;
  int unaff_w20;
  byte unaff_w21;
  long *unaff_x25;
  float fVar4;
  
  if (param_1 != 0) {
    fVar4 = (float)FUN_05ab38d4();
    if (fVar4 == 0.0) {
      unaff_w21 = 0;
    }
    else {
      if (*(char *)(unaff_x19 + 5) != '\0') {
        bVar2 = FUN_05ac9f70();
        unaff_w21 = bVar2 & 1 | unaff_w21 << 1;
      }
      if (*(char *)(unaff_x19 + 4) != '\0') {
        if (fVar4 == 1.0) {
          bVar1 = false;
          uVar3 = 0x7f;
        }
        else {
          bVar1 = fVar4 < 2.0;
          if (!bVar1) {
            fVar4 = fVar4 + -2.0;
          }
          uVar3 = Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose
                            (fVar4);
        }
        unaff_w21 = bVar1 | unaff_w21 << 1;
        goto LAB_05ab402c;
      }
    }
  }
  uVar3 = 0x7f;
LAB_05ab402c:
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  *(byte *)(*(long *)(unaff_x19 + 0x228) + (long)unaff_w20) = unaff_w21;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x238) + (long)unaff_w20) = uVar3;
  return;
}


