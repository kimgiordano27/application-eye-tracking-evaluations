/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._PollNextEvent$$.ctor
ENTRY_POINT: 0431823c
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__PollNextEvent___ctor(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x24;
  
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04318290;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(param_1,*unaff_x24,1);
LAB_04318290:
  uVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  uVar4 = FUN_074c32b4(&stack0x00000008,0);
  puVar1 = PTR_DAT_08f66370;
  if (unaff_x22 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
    uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
                    /* try { // try from 043182d8 to 044182db has its CatchHandler @ 04318384 */
    FUN_07449f28();
    if (lVar5 != 0) {
      FUN_04308a60(lVar5,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


