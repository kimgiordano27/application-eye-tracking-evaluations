/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 07a3616c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_s3;
  
  if ((DAT_0989526b & 1) == 0) {
    FUN_04077588(PTR_DAT_092ecf08);
    DAT_0989526b = 1;
  }
  puVar1 = PTR_DAT_092ecf08;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 != 0) {
    fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20) * 0.017453292;
    fVar7 = *(float *)(lVar2 + 0x38) * DAT_01aed080;
    uVar3 = FUN_089b9180((float)*(undefined8 *)(lVar2 + 0x30) * 0.017453292,fVar5,fVar7,0);
    if (DAT_098854ea == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854ea = '\x01';
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
    uVar3 = FUN_089b9694(uVar3,fVar5,fVar7,in_s3,*(undefined4 *)(lVar2 + 0x3c),
                         *(undefined4 *)(lVar2 + 0x40),*(undefined4 *)(lVar2 + 0x44),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_07a573d4(uVar3,fVar5,fVar7,param_3 + 3,0);
    param_1[1] = 0;
    param_1[2] = 0;
    uVar8 = param_3[2];
    uVar4 = *param_3;
    uVar6 = param_3[1];
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_089d99f0(uVar4,uVar6,uVar8,uVar3,fVar5,fVar7,in_s3,param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


