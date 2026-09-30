/*
FUNCTION_NAME: FUN_02d9c244
ENTRY_POINT: 02d9c244
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02d9c244(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = FUN_05c89340(param_4,0);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_05c9bf94(lVar1,0);
    param_2 = param_2 - *(float *)((long)param_4 + 0xcc);
    fVar6 = *(float *)(param_4 + 0x1a);
    param_3 = param_3 - fVar6;
    fVar5 = DAT_01031cf4;
    if (param_3 * param_3 +
        (fVar2 - *(float *)(param_4 + 0x19)) * (fVar2 - *(float *)(param_4 + 0x19)) +
        param_2 * param_2 < DAT_01031cf4) {
      fVar9 = *(float *)((long)param_4 + 0xd4);
      fVar10 = *(float *)(param_4 + 0x1b);
      fVar8 = *(float *)((long)param_4 + 0xdc);
      fVar7 = *(float *)(param_4 + 0x1c);
      fVar2 = DAT_01031cf4;
      lVar1 = FUN_05c89340(param_4,0);
      if (lVar1 == 0) goto System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector3f>;
      fVar3 = (float)FUN_05c9a10c(lVar1,0);
      fVar5 = DAT_01032680;
      if (DAT_01032680 < fVar7 * fVar6 + fVar8 * param_3 + fVar9 * fVar3 + fVar10 * fVar2)
      goto LAB_02d9c330;
    }
    *(undefined4 *)(param_4 + 0x15) = 0;
    lVar1 = FUN_05c89340(param_4,0);
    if (lVar1 != 0) {
      uVar4 = FUN_05c9bf94(lVar1,0);
      *(undefined4 *)(param_4 + 0x19) = uVar4;
      *(float *)((long)param_4 + 0xcc) = fVar5;
      *(float *)(param_4 + 0x1a) = param_3;
      lVar1 = FUN_05c89340(param_4,0);
      if (lVar1 != 0) {
        uVar4 = FUN_05c9a10c(lVar1,0);
        *(undefined4 *)((long)param_4 + 0xd4) = uVar4;
        *(float *)(param_4 + 0x1b) = fVar5;
        *(float *)((long)param_4 + 0xdc) = param_3;
        *(float *)(param_4 + 0x1c) = fVar6;
LAB_02d9c330:
        if ((int)param_4[0x15] < 2) {
          (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
          *(int *)(param_4 + 0x15) = (int)param_4[0x15] + 1;
        }
        return;
      }
    }
  }
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


