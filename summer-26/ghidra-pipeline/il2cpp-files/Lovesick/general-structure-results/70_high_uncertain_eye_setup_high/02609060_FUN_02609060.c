/*
FUNCTION_NAME: FUN_02609060
ENTRY_POINT: 02609060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02609060(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = Method_System_Security_Cryptography_HMAC_set_Key__;
                    /* try { // try from 0260906c to 02709077 has its CatchHandler @ 02608cbc */
                    /* try { // try from 02609078 to 0270907f has its CatchHandler @ 0260908c */
                    /* catch() { ... } // from try @ 02609000 with catch @ 02609080 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02609044 with catch @ 0260908c
                       catch(type#2 @ 00000000) { ... } // from try @ 02609078 with catch @ 0260908c
                        */
  if ((DAT_037833d5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Security_Cryptography_HMAC_set_Key__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__
                      );
    DAT_037833d5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_020d8340(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    UNRECOVERED_JUMPTABLE = (code *)FUN_0260b158();
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02609124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar5 = param_4[2];
  fVar8 = param_3[2];
  if (DAT_03781918 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03781918 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar3 = (float)FUN_026095e8(SQRT((fVar5 - fVar8) * (fVar5 - fVar8) +
                                   (fVar3 - fVar6) * (fVar3 - fVar6) +
                                   (fVar4 - fVar7) * (fVar4 - fVar7)) / (float)param_2,param_1);
  fVar6 = param_3[2];
  fVar7 = param_4[2];
  fVar4 = (float)*(undefined8 *)param_3;
  fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  *param_5 = CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar5) * fVar3,
                      fVar4 + ((float)*(undefined8 *)param_4 - fVar4) * fVar3);
  *(float *)(param_5 + 1) = fVar6 + fVar3 * (fVar7 - fVar6);
  return;
}


