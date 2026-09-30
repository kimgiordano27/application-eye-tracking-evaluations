/*
FUNCTION_NAME: FUN_015d2068
ENTRY_POINT: 015d2068
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void FUN_015d2068(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 015d2084 to 016d208f has its CatchHandler @ 015d22a4 */
                    /* try { // try from 015d2090 to 016d2097 has its CatchHandler @ 015d22a0 */
                    /* try { // try from 015d209c to 016d20a3 has its CatchHandler @ 015d229c */
  if ((DAT_03777ee2 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_03777ee2 = 1;
  }
  *param_6 = 0;
  puVar2 = OVRPlugin_TrackingConfidence___TypeInfo;
  switch(param_2) {
  case 0:
    if (param_1 == 0) {
LAB_015d224c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    break;
  case 1:
    if (param_1 == 0) goto LAB_015d224c;
    if ((*(byte *)(param_1 + 0x16) >> 3 & 1) != 0) {
      uVar3 = FUN_015d1ff0(param_1);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
LAB_015d21e8:
      FUN_015d1978(param_4,uVar3,param_6,param_7);
      return;
    }
    break;
  case 2:
    if (param_1 == 0) goto LAB_015d224c;
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar3 = FUN_015d1ff0(param_1);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    if ((uVar1 >> 0x13 & 1) != 0) goto LAB_015d21e8;
    goto LAB_015d21c8;
  case 3:
    if (*(int *)(*(long *)OVRPlugin_TrackingConfidence___TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_015d1b44(param_1,param_3,param_4,param_5);
    goto FUN_015d21cc;
  default:
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0177134c(uVar3,0);
    uVar4 = thunk_FUN_00d48444(Newtonsoft_Json_Serialization_JsonDynamicContract_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar4);
  }
  uVar3 = FUN_015d1ff0(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar3 = FUN_015d1080(param_4,uVar3);
  *param_6 = uVar3;
  uVar3 = FUN_015d1ff0(param_1);
LAB_015d21c8:
  uVar3 = FUN_015d190c(param_4,uVar3);
FUN_015d21cc:
  *param_7 = uVar3;
  return;
}


