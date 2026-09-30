/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$.cctor
ENTRY_POINT: 06971ecc
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


void OVRPlugin_OVRP_1_18_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  float fVar8;
  float fStack000000000000000c;
  
  if (param_1 != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40();
  }
  piVar3 = (int *)thunk_FUN_03ac7604();
  fVar8 = *(float *)(unaff_x19 + 0x4c);
  iVar2 = -0x80000000;
  if (*(float *)(unaff_x19 + 0x50) != INFINITY) {
    iVar2 = (int)*(float *)(unaff_x19 + 0x50);
  }
  iVar1 = -iVar2;
  if ((unaff_x20 & 1) != 0) {
    iVar1 = iVar2;
  }
  fStack000000000000000c = (float)*piVar3 + (float)iVar1;
  if (0.0 <= fStack000000000000000c) {
    if (fVar8 <= fStack000000000000000c) {
      fStack000000000000000c = 0.0;
    }
  }
  else {
    fStack000000000000000c = -2.1474836e+09;
    if (fVar8 != INFINITY) {
      fStack000000000000000c = (float)(int)fVar8;
    }
  }
  plVar4 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x22 + 0x78),&stack0x0000000c);
  plVar7 = *(long **)(unaff_x19 + 0x10);
  if ((plVar7 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270)),
     plVar4 != (long *)0x0)) {
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (*(int *)(*(long *)(unaff_x22 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x22 + 0x98));
    }
    uVar5 = FUN_067846a8(uVar5,uVar6,0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_0667c5b4(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


