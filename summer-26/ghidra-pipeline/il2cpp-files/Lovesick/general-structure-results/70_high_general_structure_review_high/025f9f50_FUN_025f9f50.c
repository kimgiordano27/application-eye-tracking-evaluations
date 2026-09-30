/*
FUNCTION_NAME: FUN_025f9f50
ENTRY_POINT: 025f9f50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_025f9f50(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined4 *param_6,byte param_7,float *param_8,float *param_9,
                 float *param_10)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = Method_System_Security_Cryptography_HMAC_set_Key__;
  if ((DAT_03783324 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Security_Cryptography_HMAC_set_Key__);
    thunk_FUN_00d48444(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__);
    DAT_03783324 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_020d8340(0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_Value__ + 0xe0) ==
        0) {
      thunk_FUN_00d32864();
    }
    UNRECOVERED_JUMPTABLE = (code *)FUN_025f9e44();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025fa05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8,param_9,
                 param_10);
      return;
    }
  }
  uVar4 = *param_4;
  param_10[2] = *(float *)(param_4 + 1);
  *(undefined8 *)param_10 = uVar4;
  fVar7 = (float)param_6[1];
  fVar9 = (float)param_6[2];
  fVar5 = (float)FUN_022743a4(*param_6,0);
  if (DAT_03781918 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03781918 = '\x01';
  }
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar8 = (float)param_5[1];
  fVar10 = (float)param_5[2];
  fVar6 = (float)FUN_022743a4(*param_5,0);
  if (DAT_03781918 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03781918 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7) /
          SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar8 * fVar8);
  if (fVar5 <= 1.0) {
    if (1.0 <= fVar5) {
      return;
    }
    fVar5 = (1.0 / fVar5 + -1.0) * (float)param_1 - (float)param_2;
    if (fVar5 < 0.0) {
      return;
    }
    fVar5 = 1.0 / (fVar5 + 1.0);
    fVar7 = (float)*(undefined8 *)(param_3 + 1) * fVar5;
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) * fVar5;
    uVar4 = CONCAT44(fVar9,fVar7);
    if ((ABS(fVar5 * *param_3) < ABS(*param_8)) || (ABS(fVar7) < ABS(param_8[1]))) {
      bVar2 = true;
    }
    else {
      bVar2 = ABS(fVar9) < ABS(param_8[2]);
    }
    fVar5 = fVar5 * *param_3;
    if ((param_7 & bVar2) != 0) {
      uVar4 = *(undefined8 *)(param_8 + 1);
      fVar5 = *param_8;
    }
  }
  else {
    fVar5 = (fVar5 + -1.0) * (float)param_1 - (float)param_2;
    if (fVar5 < 0.0) {
      return;
    }
    fVar5 = fVar5 + 1.0;
    fVar7 = (float)*(undefined8 *)(param_3 + 1) * fVar5;
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20) * fVar5;
    uVar4 = CONCAT44(fVar9,fVar7);
    if ((ABS(*param_9) < ABS(fVar5 * *param_3)) || (ABS(param_9[1]) < ABS(fVar7))) {
      bVar2 = true;
    }
    else {
      bVar2 = ABS(param_9[2]) < ABS(fVar9);
    }
    fVar5 = fVar5 * *param_3;
    if ((param_7 & bVar2) != 0) {
      uVar4 = *(undefined8 *)(param_9 + 1);
      fVar5 = *param_9;
    }
  }
  *param_10 = fVar5;
  *(undefined8 *)(param_10 + 1) = uVar4;
  return;
}


