/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$<>m__Finally3
ENTRY_POINT: 05ab3fb4
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


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__<>m__Finally3(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x19;
  int unaff_w20;
  byte bVar6;
  long *unaff_x23;
  float fVar7;
  
  FUN_05ac3bb4();
  if ((*(byte *)(*(long *)(*unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(*unaff_x23 + 0x20));
  }
  puVar1 = PTR_DAT_0676be30;
  uVar4 = FUN_05ab3d88();
  if (uVar4 != 0) {
    fVar7 = (float)FUN_05ab38d4();
    if (fVar7 == 0.0) {
      uVar4 = 0;
    }
    else {
      if (*(char *)(unaff_x19 + 5) != '\0') {
        uVar5 = FUN_05ac9f70();
        uVar4 = uVar5 & 1 | uVar4 << 1;
      }
      if (*(char *)(unaff_x19 + 4) != '\0') {
        if (fVar7 == 1.0) {
          bVar2 = false;
          uVar3 = 0x7f;
        }
        else {
          bVar2 = fVar7 < 2.0;
          if (!bVar2) {
            fVar7 = fVar7 + -2.0;
          }
          uVar3 = Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose
                            (fVar7);
        }
        bVar6 = bVar2 | (byte)(uVar4 << 1);
        goto LAB_05ab402c;
      }
    }
  }
  bVar6 = (byte)uVar4;
  uVar3 = 0x7f;
LAB_05ab402c:
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  *(byte *)(*(long *)(unaff_x19 + 0x228) + (long)unaff_w20) = bVar6;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x238) + (long)unaff_w20) = uVar3;
  return;
}


