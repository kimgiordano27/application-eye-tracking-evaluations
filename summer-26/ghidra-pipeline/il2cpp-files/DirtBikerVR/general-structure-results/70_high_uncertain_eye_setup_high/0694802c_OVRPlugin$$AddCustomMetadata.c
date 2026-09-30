/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 0694802c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AddCustomMetadata
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *in_x9;
  ulong unaff_x25;
  long *unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  
  (*in_x9)();
  lVar2 = FUN_07c98f88();
  FUN_0694a0b0();
  if (lVar2 == 0) goto LAB_069484b8;
  FUN_07cadf5c(lVar2,0);
  FUN_07d31014(in_stack_00000010,0);
  if ((in_stack_00000018 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6620,0);
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar2,*(undefined8 *)PTR_DAT_084b6650,0);
    if ((lVar2 == 0) || (lVar3 = FUN_07c9c69c(lVar2,0), lVar3 == 0)) goto LAB_069484b8;
    FUN_07cacdbc();
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6608,0);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b66b8,0);
    if (lVar3 == 0) goto LAB_069484b8;
    lVar4 = FUN_07c9c69c(lVar3,0);
    uVar5 = FUN_07c9c69c(lVar2,0);
    if (lVar4 == 0) goto LAB_069484b8;
    FUN_07cacdbc(lVar4,uVar5,0);
    lVar4 = FUN_07c98f88();
    lVar6 = FUN_07c9c69c(lVar3,0);
    if (lVar4 == 0) goto LAB_069484b8;
    uVar7 = FUN_07cac280(lVar4,0);
    fVar11 = param_2;
    fVar12 = param_3;
    uVar8 = FUN_07cac4e0(lVar4,0);
    if (lVar6 == 0) goto LAB_069484b8;
    FUN_07cad038(uVar7,param_2,param_3,uVar8,fVar11,fVar12,param_4,lVar6,0);
    lVar4 = FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_08494af8);
    if (lVar4 == 0) goto LAB_069484b8;
    FUN_07c46614(0x42a00000,lVar4,0);
    FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_084b65c0);
    lVar3 = FUN_045614d0(lVar3,*(undefined8 *)PTR_DAT_084b65d0);
    uVar5 = FUN_07c98f88();
    if (lVar3 == 0) goto LAB_069484b8;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_03afed3c();
    FUN_07c998cc(lVar3,*(undefined8 *)PTR_DAT_08489ea0,0);
    FUN_045614d0(lVar2,*(undefined8 *)PTR_DAT_084b65c8);
  }
  if ((unaff_x25 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
    puVar1 = PTR_DAT_08487320;
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
    FUN_07c9d2fc(lVar2,*(undefined8 *)PTR_DAT_084b6638,0);
    lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b6688,0);
    if ((((lVar2 != 0) && (lVar4 = FUN_07c9c69c(lVar2,0), lVar4 != 0)) &&
        (FUN_07cacdbc(), lVar3 != 0)) && (lVar4 = FUN_07c9c69c(lVar3,0), lVar4 != 0)) {
      FUN_07cacdbc();
      lVar4 = FUN_07c9c69c(lVar2,0);
      fVar9 = (float)FUN_07cac280();
      fVar11 = param_2;
      fVar12 = param_3;
      fVar10 = (float)FUN_07cac7a8();
      if (lVar4 != 0) {
        param_3 = param_3 - fVar12;
        param_2 = param_2 - fVar11;
        FUN_07cac358(fVar9 - fVar10,param_2,param_3,lVar4,0);
        lVar4 = FUN_07c9c69c(lVar3,0);
        fVar9 = (float)FUN_07cac280();
        fVar11 = param_2;
        fVar12 = param_3;
        fVar10 = (float)FUN_07cac7a8();
        if (lVar4 != 0) {
          FUN_07cac358(fVar9 + fVar10,param_2 + fVar11,param_3 + fVar12,lVar4,0);
          puVar1 = PTR_DAT_084b5a40;
          FUN_07c998ec(lVar2,*(undefined8 *)PTR_DAT_084b5a40,0);
          FUN_07c998ec(lVar3,*(undefined8 *)puVar1,0);
          goto LAB_06948418;
        }
      }
    }
LAB_069484b8:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_06948418:
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
  FUN_06939cec();
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
  return;
}


