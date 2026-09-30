/*
FUNCTION_NAME: FUN_024708d4
ENTRY_POINT: 024708d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024708d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 auStack_538 [536];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined1 local_308 [8];
  undefined8 local_300;
  undefined1 auStack_2f8 [320];
  undefined1 auStack_1b8 [320];
  long local_78;
  
  puVar5 = Method_System_DateTimeFormat_ParseQuoteString__;
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 024708fc to 02570903 has its CatchHandler @ 02470bc4 */
                    /* try { // try from 0247091c to 02570943 has its CatchHandler @ 02470bc8 */
  local_300 = param_2;
  if ((DAT_0378254a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_DateTimeFormat_ParseQuoteString__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_52__);
    thunk_FUN_00d48444(System_Collections_Generic_List<JToken>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
                    /* try { // try from 02470954 to 02570973 has its CatchHandler @ 02470bd4 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Expression>__ctor__);
    thunk_FUN_00d48444(RotationalVelocitySoundSpawner_<SoundOnCorourtine>d__17_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
                      );
    DAT_0378254a = 1;
  }
  puVar3 = System_Collections_Generic_List<JToken>_TypeInfo;
                    /* try { // try from 02470990 to 025709ab has its CatchHandler @ 02470bf4 */
  local_308[0] = 0;
  local_310 = 0;
  uStack_318 = 0;
  local_320 = 0;
  memset(auStack_1b8,0,0x13c);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    /* try { // try from 024709b0 to 025709d7 has its CatchHandler @ 02470bf0 */
    thunk_FUN_00d32864();
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar7 = FUN_023a0ea8(0);
  FUN_023ae3ac(local_308,lVar7,*(undefined8 *)(param_1 + 0x170),0);
  uVar14 = 0x3f800000;
                    /* try { // try from 024709f0 to 025709f7 has its CatchHandler @ 02470bd8 */
  uVar10 = 0;
  if (*(char *)(param_1 + 0x178) != '\0') {
    uVar10 = uVar14;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 02470a10 to 02570a37 has its CatchHandler @ 02470be8 */
  FUN_026a991c(0,0,0,uVar10,lVar7,**(undefined4 **)(*(long *)puVar3 + 0xb8),0);
  uVar8 = FUN_0244ce3c(param_3 + 2,0);
  puVar3 = Method_System_Collections_Generic_List<Expression>__ctor__;
  bVar6 = (uVar8 & 1) == 0;
  lVar9 = *(long *)Method_System_Collections_Generic_List<Expression>__ctor__;
  uVar10 = 0xbf800000;
  if (bVar6) {
    uVar10 = uVar14;
  }
  if (bVar6) {
    uVar14 = 0;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *(long *)puVar3;
  }
  FUN_026a991c(uVar10,uVar14,uVar10,0x3f800000,lVar7,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x90)
               ,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&local_300,lVar7,0);
  FUN_026a8aa4(lVar7,0);
  if (*(char *)(param_1 + 0x178) == '\0') {
    uVar10 = 0x17;
  }
  else {
    uVar10 = *(undefined4 *)((long)param_3 + 0x11c);
  }
  if (param_3[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (((*(char *)(param_1 + 0x178) != '\0') && (*(char *)(param_3[0x2c] + 0x186) != '\0')) &&
     ((*(int *)(param_3 + 0x13) == 0 || (*(char *)((long)param_3 + 0x10c) != '\0')))) {
    uVar10 = 0x33;
  }
  local_310 = *(undefined8 *)(param_1 + 0xe8);
  uStack_318 = *(undefined8 *)(param_1 + 0xe0);
  local_320 = *(undefined8 *)(param_1 + 0xd8);
  FUN_0241b984(auStack_2f8,param_1,*(undefined8 *)(param_1 + 0x160),param_3,uVar10,0);
  memcpy(auStack_1b8,auStack_2f8,0x13c);
  memcpy(auStack_538,param_3,0x218);
  lVar9 = FUN_0241cc10(param_1,auStack_538,0);
  uVar1 = local_300;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
  ;
  if (lVar9 == 0) {
    uVar1 = *param_3;
    uVar13 = param_3[1];
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b68dc(&local_300,uVar1,uVar13,auStack_1b8,&local_320,param_1 + 0xf0,0);
  }
  else {
    lVar11 = *(long *)
              Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
    ;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *(long *)puVar3;
      }
      uVar13 = **(undefined8 **)(lVar11 + 0xb8);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_52__);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0240fb6c(lVar12,uVar13,
                   *(undefined8 *)RotationalVelocitySoundSpawner_<SoundOnCorourtine>d__17_TypeInfo,0
                  );
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar12;
    }
    FUN_0240edb8(lVar9,uVar1,lVar7,param_3,auStack_1b8,&local_320,param_1 + 0xf0,lVar12,0);
  }
  FUN_023ae3b0(local_308,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&local_300,lVar7,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023a1000(lVar7,0);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


