/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$Awake
ENTRY_POINT: 01453d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__Awake
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,uint param_6,undefined8 param_7,int param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_w8;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  int *in_stack_00000080;
  int *in_stack_00000088;
  
  piVar4 = in_stack_00000088;
  piVar3 = in_stack_00000080;
  fVar5 = (float)param_8;
  fVar7 = (float)(*(int *)(unaff_x19 + 0x1c) + in_w8);
  if (fVar7 <= fVar5) {
    fVar6 = (float)in_w8 / fVar7;
    param_11 = 0;
    param_12 = 0;
    FUN_0268834c(0,0,0x3f800000,fVar6,&param_11,0);
    param_4[1] = param_12;
    *param_4 = param_11;
    fVar7 = (float)*(int *)(unaff_x19 + 0x1c) / fVar7;
  }
  else {
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    fVar7 = (fVar5 / fVar7) * (float)in_w8;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar6 = -2.1474836e+09;
    if ((float)(int)fVar7 != INFINITY) {
      fVar6 = (float)(int)fVar7;
    }
    fVar6 = fVar6 / fVar5;
    fVar7 = 1.0 - fVar6;
    param_11 = 0;
    param_12 = 0;
    FUN_0268834c(0,0,0x3f800000,fVar6,&param_11,0);
    param_4[1] = param_12;
    *param_4 = param_11;
  }
  FUN_0268834c(0,fVar6,0x3f800000,fVar7);
  param_5[1] = 0;
  *param_5 = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(unaff_x19 + 0x10);
  if (iVar2 < iVar1) {
    if ((param_6 & 1) != 0) goto LAB_01453f28;
    fVar7 = (float)iVar2 / (float)iVar1;
    param_4 = param_5;
  }
  else {
    if (iVar2 <= iVar1) goto LAB_01453f28;
    fVar7 = (float)iVar1 / (float)iVar2;
  }
  FUN_026884cc(fVar7,param_4,0);
LAB_01453f28:
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x18) <= *(int *)(unaff_x19 + 0x18)) {
    iVar1 = *(int *)(unaff_x19 + 0x18);
  }
  *piVar3 = iVar1;
  *piVar4 = *(int *)(unaff_x19 + 0x1c) + *(int *)(param_2 + 0x1c);
  return;
}


