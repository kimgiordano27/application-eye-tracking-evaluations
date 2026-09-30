/*
FUNCTION_NAME: FUN_056e97ac
ENTRY_POINT: 056e97ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_056e97ac(long param_1,undefined4 param_2,long *param_3,int *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_4e8;
  long *local_4e0;
  undefined8 auStack_4d8 [19];
  undefined1 auStack_440 [120];
  long local_3c8;
  undefined1 auStack_3c0 [120];
  undefined4 local_348;
  undefined1 auStack_340 [88];
  undefined1 auStack_2e8 [88];
  undefined1 local_290 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [12];
  undefined4 local_174;
  undefined8 local_e8;
  long *local_e0;
  undefined1 auStack_d8 [120];
  
  if ((DAT_066d21c7 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__);
                    /* try { // try from 056e9804 to 057e985f has its CatchHandler @ 056e9804
                       catch() { ... } // from try @ 056e9804 with catch @ 056e9804
                       catch() { ... } // from try @ 056e98ac with catch @ 056e9804
                       catch() { ... } // from try @ 056e98ec with catch @ 056e9804
                       catch() { ... } // from try @ 056e98fc with catch @ 056e9804
                       catch() { ... } // from try @ 056e9940 with catch @ 056e9804 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
                );
    DAT_066d21c7 = 1;
  }
  memset(auStack_180,0,0xa8);
  local_210 = 0;
  local_290._8_8_ = 0;
  local_290._0_8_ = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_278 = 0;
  local_280 = 0;
                    /* try { // try from 056e9860 to 057e986b has its CatchHandler @ 056e9908 */
  if ((*param_3 != 0) && (0 < *param_4)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar11 = *param_3;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
                    /* try { // try from 056e988c to 057e988f has its CatchHandler @ 056e98fc */
                    /* try { // try from 056e9890 to 057e98ab has its CatchHandler @ 056e9900 */
      uVar6 = FUN_04c088a0(*(undefined8 *)(lVar11 + lVar9 + 0x20),*param_5,5,0);
                    /* try { // try from 056e98ac to 057e98e7 has its CatchHandler @ 056e9804 */
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_04c088a0(*(undefined8 *)(lVar11 + lVar9 + 0x28),param_5[1],5,0),
         (uVar6 & 1) != 0)) {
        lVar11 = lVar11 + lVar9;
        memcpy(&local_4e8,param_5,0x78);
        memmove(auStack_2e8,(void *)(lVar11 + 0x30),0x58);
                    /* try { // try from 056e98e8 to 057e98eb has its CatchHandler @ 056e9908 */
                    /* try { // try from 056e98ec to 057e98f7 has its CatchHandler @ 056e9804 */
        memcpy(auStack_340,auStack_4d8,0x58);
                    /* try { // try from 056e98f8 to 057e98fb has its CatchHandler @ 056e9904 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e988c with catch @ 056e98fc
                       try { // try from 056e98fc to 057e9923 has its CatchHandler @ 056e9804 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e9890 with catch @ 056e9900
                        */
        uVar6 = FUN_056fb31c(auStack_2e8,auStack_340,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e98f8 with catch @ 056e9904
                        */
        if ((uVar6 & 1) != 0) {
          memmove((void *)(lVar11 + 0x20),param_5,0x78);
          thunk_FUN_02bb0e9c(lVar11 + 0x20,0);
          goto LAB_056e994c;
        }
      }
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e9860 with catch @ 056e9908
                       catch(type#1 @ 05fbf508) { ... } // from try @ 056e98e8 with catch @ 056e9908
                        */
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x78;
    } while ((long)uVar10 < (long)*param_4);
  }
  puVar1 = Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__;
                    /* try { // try from 056e9924 to 057e9927 has its CatchHandler @ 056e9934 */
  memcpy(&local_4e8,param_5,0x78);
                    /* catch() { ... } // from try @ 056e9924 with catch @ 056e9934 */
                    /* try { // try from 056e9938 to 057e993f has its CatchHandler @ 056e9948 */
                    /* try { // try from 056e9940 to 057e994b has its CatchHandler @ 056e9804 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056e9938 with catch @ 056e9948
                        */
  FUN_030f175c(param_3,param_4,&local_4e8,10,*(undefined8 *)puVar1);
LAB_056e994c:
                    /* try { // try from 056e994c to 057e99a7 has its CatchHandler @ 056e994c
                       catch() { ... } // from try @ 056e994c with catch @ 056e994c
                       catch() { ... } // from try @ 056e99f4 with catch @ 056e994c
                       catch() { ... } // from try @ 056e9a34 with catch @ 056e994c
                       catch() { ... } // from try @ 056e9a44 with catch @ 056e994c
                       catch() { ... } // from try @ 056e9a88 with catch @ 056e994c */
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Key__
  ;
  memcpy(auStack_440,param_5,0x78);
  memset(&local_3c8,0,0x88);
  local_3c8 = param_1;
  thunk_FUN_02bb0e9c(&local_3c8,param_1);
  memcpy(auStack_3c0,auStack_440,0x78);
  thunk_FUN_02bb0e9c(auStack_3c0,0);
  lVar9 = local_3c8;
                    /* try { // try from 056e99a8 to 057e99b3 has its CatchHandler @ 056e9a50 */
  local_348 = param_2;
  memcpy(auStack_d8,auStack_3c0,0x78);
  memset(&local_4e8,0,0xa8);
                    /* try { // try from 056e99d4 to 057e99d7 has its CatchHandler @ 056e9a44 */
                    /* try { // try from 056e99d8 to 057e99f3 has its CatchHandler @ 056e9a48 */
  FUN_056ee60c(&local_4e8,lVar9,auStack_d8,param_2);
  memcpy(auStack_180,&local_4e8,0xa8);
  puVar1 = PTR_DAT_06312310;
                    /* try { // try from 056e99f4 to 057e9a2f has its CatchHandler @ 056e994c */
  while( true ) {
    uVar10 = FUN_056e93b0(auStack_180);
    if ((uVar10 & 1) == 0) {
      return;
    }
    local_4e0 = (long *)0x0;
    auStack_4d8[0] = 0;
    local_4e8 = local_e8;
    thunk_FUN_02bb0e9c(&local_4e8);
    local_4e0 = local_e0;
    thunk_FUN_02bb0e9c(&local_4e0);
    uVar5 = local_174;
    plVar4 = local_4e0;
    uVar3 = local_4e8;
                    /* try { // try from 056e9a30 to 057e9a33 has its CatchHandler @ 056e9a50 */
    if (param_1 == 0) break;
                    /* try { // try from 056e9a34 to 057e9a3f has its CatchHandler @ 056e994c */
                    /* try { // try from 056e9a40 to 057e9a43 has its CatchHandler @ 056e9a4c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e99d4 with catch @ 056e9a44
                       try { // try from 056e9a44 to 057e9a6b has its CatchHandler @ 056e994c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e99d8 with catch @ 056e9a48
                        */
    uVar7 = FUN_05701134(param_1,local_174,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e9a40 with catch @ 056e9a4c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056e99a8 with catch @ 056e9a50
                       catch(type#1 @ 05fbf508) { ... } // from try @ 056e9a30 with catch @ 056e9a50
                        */
    uVar8 = FUN_057010b8(param_1,uVar5,0);
                    /* try { // try from 056e9a6c to 057e9a6f has its CatchHandler @ 056e9a7c */
    FUN_056ea0b8(&local_4e8,uVar7,uVar8,param_5[1],*param_5);
                    /* catch() { ... } // from try @ 056e9a6c with catch @ 056e9a7c */
                    /* try { // try from 056e9a80 to 057e9a87 has its CatchHandler @ 056e9a90 */
    memcpy(&local_200,&local_4e8,0x80);
                    /* try { // try from 056e9a88 to 057e9a93 has its CatchHandler @ 056e994c */
    if ((char)local_200 != '\0') {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056e9a80 with catch @ 056e9a90
                        */
      uVar7 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_04d96104(uVar7,0);
      FUN_03ae1368(&local_4e8,&local_200,*(undefined8 *)puVar2);
      memcpy(&local_280,&local_4e8,0x78);
      auVar12 = FUN_057138d8(&uStack_218,uVar5,0);
      local_290 = auVar12;
      uVar7 = FUN_05714658(local_290,0);
      FUN_04cb81fc(plVar4,uVar3,uVar7,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


