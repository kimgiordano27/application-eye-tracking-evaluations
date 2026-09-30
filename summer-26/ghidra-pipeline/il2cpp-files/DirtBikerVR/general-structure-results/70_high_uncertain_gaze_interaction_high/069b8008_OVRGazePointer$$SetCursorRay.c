/*
FUNCTION_NAME: OVRGazePointer$$SetCursorRay
ENTRY_POINT: 069b8008
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;keyword_support
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


void OVRGazePointer__SetCursorRay(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_084b8800;
  puVar2 = PTR_DAT_084b7640;
  if ((DAT_0897f1b4 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7640);
    FUN_03a8a718(PTR_DAT_084b8800);
    FUN_03a8a718(PTR_DAT_084b8808);
    FUN_03a8a718(PTR_DAT_084b8810);
    FUN_03a8a718(PTR_DAT_084b8818);
    FUN_03a8a718(PTR_DAT_084b8820);
    DAT_0897f1b4 = 1;
  }
  puVar5 = PTR_DAT_084b8820;
  puVar4 = PTR_DAT_084b8818;
  FUN_05da172c(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar7 = FUN_06990030(param_2,0);
  uVar6 = FUN_067aa74c(uVar7,0);
  lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
  FUN_04de7dc0(lVar8,(ulong)uVar6,*(undefined8 *)puVar4);
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = lVar8;
  thunk_FUN_03afed3c(plVar12,lVar8);
  puVar4 = PTR_DAT_084b8810;
  puVar3 = PTR_DAT_084b8808;
  if (0 < (int)uVar6) {
    uVar13 = 0;
    do {
      lVar14 = *plVar12;
      uVar7 = FUN_067aa750(uVar13,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar8);
      }
      uVar7 = FUN_0698ffac(param_2,uVar7,0);
      uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_069b7f10(uVar9,uVar7);
      if (lVar14 == 0) {
LAB_069b81ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *(long *)(lVar14 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_069b81ec;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_03afed3c(puVar10,uVar9);
      }
      else {
        FUN_04de85b0(lVar14,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
  }
  return;
}


