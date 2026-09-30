/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$set_GameObject
ENTRY_POINT: 01453d78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__set_GameObject
               (undefined8 param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5
               ,uint param_6,undefined8 param_7,int param_8,undefined8 param_9,undefined8 param_10,
               undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *in_stack_00000080;
  int *in_stack_00000088;
  
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  fVar3 = (float)param_8;
  fVar5 = (float)(*(int *)(param_3 + 0x1c) + iVar1);
  if (fVar5 <= fVar3) {
    fVar4 = (float)iVar1 / fVar5;
    param_11 = 0;
    param_12 = 0;
    FUN_0268834c(0,0,0x3f800000,fVar4,&param_11,0);
    param_4[1] = param_12;
    *param_4 = param_11;
    fVar5 = (float)*(int *)(param_3 + 0x1c) / fVar5;
  }
  else {
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    fVar5 = (fVar3 / fVar5) * (float)iVar1;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar4 = -2.1474836e+09;
    if ((float)(int)fVar5 != INFINITY) {
      fVar4 = (float)(int)fVar5;
    }
    fVar4 = fVar4 / fVar3;
    fVar5 = 1.0 - fVar4;
    param_11 = 0;
    param_12 = 0;
    FUN_0268834c(0,0,0x3f800000,fVar4,&param_11,0);
    param_4[1] = param_12;
    *param_4 = param_11;
  }
  FUN_0268834c(0,fVar4,0x3f800000,fVar5);
  param_5[1] = 0;
  *param_5 = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_3 + 0x10);
  if (iVar2 < iVar1) {
    if ((param_6 & 1) != 0) goto LAB_01453f28;
    fVar5 = (float)iVar2 / (float)iVar1;
    param_4 = param_5;
  }
  else {
    if (iVar2 <= iVar1) goto LAB_01453f28;
    fVar5 = (float)iVar1 / (float)iVar2;
  }
  FUN_026884cc(fVar5,param_4,0);
LAB_01453f28:
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x18) <= *(int *)(param_3 + 0x18)) {
    iVar1 = *(int *)(param_3 + 0x18);
  }
  *in_stack_00000080 = iVar1;
  *in_stack_00000088 = *(int *)(param_3 + 0x1c) + *(int *)(param_2 + 0x1c);
  return;
}


