/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorType
ENTRY_POINT: 0697488c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorType(void)

{
  float fVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x21;
  float fVar7;
  double dVar8;
  double dVar9;
  float fStack0000000000000004;
  double in_stack_00000008;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x20 + 0x119) = 1;
  puVar2 = PTR_DAT_08486738;
  fStack0000000000000004 = 0.0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_06926324(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar2);
  }
  uVar4 = FUN_07c9c218(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar5 = FUN_06926324(0);
  if (lVar5 == 0) goto LAB_06974a24;
  fVar7 = (float)FUN_06926524(lVar5,0);
  fVar1 = DAT_015c5a20;
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar9 = (double)(fVar7 * fVar1);
  dVar8 = modf(dVar9,&stack0x00000008);
  if (0.0 <= fVar7 * fVar1) {
    if (dVar8 == 0.5) {
      dVar8 = 1.0;
      goto LAB_06974998;
    }
    dVar9 = (double)(long)(dVar9 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar8 = -1.0;
LAB_06974998:
    dVar9 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar9 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar9 = (double)(long)(dVar9 + -0.5);
  }
  plVar6 = *(long **)(unaff_x19 + 0x40);
  fStack0000000000000004 = -2.1474836e+09;
  if (dVar9 != INFINITY) {
    fStack0000000000000004 = (float)(int)dVar9;
  }
  fStack0000000000000004 = ABS(fStack0000000000000004);
  uVar3 = FUN_067637c8(&stack0x00000004,0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x5f0));
    return;
  }
LAB_06974a24:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


