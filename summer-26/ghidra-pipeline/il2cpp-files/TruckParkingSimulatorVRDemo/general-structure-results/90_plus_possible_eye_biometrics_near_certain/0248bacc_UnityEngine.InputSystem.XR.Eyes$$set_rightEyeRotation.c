/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 0248bacc
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_011f4b58(*(undefined8 *)(param_1 + 0x6c0));
  thunk_FUN_011f4b58(PTR_DAT_02ad27d0);
  thunk_FUN_011f4b58(PTR_DAT_02adb6c8);
  thunk_FUN_011f4b58(PTR_DAT_02adb6d0);
  *(undefined1 *)(unaff_x25 + 0x284) = 1;
  uVar8 = *unaff_x24;
  *(undefined4 *)(unaff_x19 + 0x94) = 100000;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
  puVar3 = PTR_DAT_02adb6a8;
  puVar2 = PTR_DAT_02ab7b60;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_011ea084();
  }
  FUN_0247d5b4();
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_011ea084();
  }
  FUN_022bb958(uVar8,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012196d8();
  }
  plVar5 = (long *)FUN_021d3c40();
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_02adaf00;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_0248bcf4;
    *(long **)(unaff_x19 + 0x58) = plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_0248bcf4;
  }
  FUN_022bb958(*(undefined8 *)PTR_DAT_02adb6a0,0);
  lVar7 = FUN_021d3c40();
  puVar2 = PTR_DAT_02adb2b8;
  if (lVar7 == 0) {
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
  }
  else {
    uVar8 = *(undefined8 *)PTR_DAT_02adb2b8;
    lVar6 = thunk_FUN_01268d44(lVar7,uVar8);
    if (lVar6 == 0) {
LAB_0248bc58:
                    /* WARNING: Subroutine does not return */
      FUN_01219998(lVar7,uVar8);
    }
    *(long *)(unaff_x19 + 0x68) = lVar6;
    uVar8 = *(undefined8 *)puVar2;
    lVar6 = thunk_FUN_01268d44(lVar7,uVar8);
    if (lVar6 == 0) goto LAB_0248bc58;
  }
  FUN_022bb958(*(undefined8 *)PTR_DAT_02ad8090,0);
  plVar5 = (long *)FUN_021d3c40();
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
LAB_0248bcfc:
    uVar8 = FUN_021d5dfc();
    *(undefined8 *)(unaff_x19 + 0x38) = uVar8;
    uVar8 = FUN_021d5dfc();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
    uVar8 = FUN_021d5b14();
    *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
    uVar4 = FUN_021d59a0();
    *(undefined4 *)(unaff_x19 + 0x94) = uVar4;
    uVar4 = FUN_021d59a0();
    *(undefined4 *)(unaff_x19 + 0x50) = uVar4;
    return;
  }
  lVar7 = *(long *)PTR_DAT_02aba0b8;
  bVar1 = *(byte *)(lVar7 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
     (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar7)) {
    *(long **)(unaff_x19 + 0x98) = plVar5;
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) == lVar7)) goto LAB_0248bcfc;
  }
LAB_0248bcf4:
                    /* WARNING: Subroutine does not return */
  FUN_01219998();
}


