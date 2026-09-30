/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 05650c94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSetComponentStatusComplete(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar9;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
                    /* try { // try from 05650c94 to 05750c97 has its CatchHandler @ 05650ca4 */
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x970));
                    /* catch() { ... } // from try @ 05650c94 with catch @ 05650ca4 */
  FUN_02d965b8(System_Collections_Generic_Dictionary<string,_XPathParser_ParamInfo>_TypeInfo);
                    /* try { // try from 05650cac to 05750cb3 has its CatchHandler @ 05650df4 */
  FUN_02d965b8(Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo);
                    /* try { // try from 05650cb4 to 05750cff has its CatchHandler @ 0565053c */
                    /* catch() { ... } // from try @ 05650be8 with catch @ 05650cb8 */
                    /* catch() { ... } // from try @ 05650adc with catch @ 05650cbc
                       catch() { ... } // from try @ 05650bec with catch @ 05650cbc */
  FUN_02d965b8(System_IObservable<InputEventPtr>_TypeInfo);
                    /* catch() { ... } // from try @ 0565086c with catch @ 05650cc0
                       catch() { ... } // from try @ 05650c08 with catch @ 05650cc0 */
                    /* catch() { ... } // from try @ 056507d4 with catch @ 05650cc4 */
  *(undefined1 *)(unaff_x27 + 0x338) = 1;
                    /* catch() { ... } // from try @ 056506a8 with catch @ 05650cc8 */
                    /* catch() { ... } // from try @ 0565071c with catch @ 05650ccc */
  lVar9 = *unaff_x29;
                    /* catch() { ... } // from try @ 05650938 with catch @ 05650cd0 */
  uStack0000000000000064 = 0;
  in_stack_00000060 = 0;
                    /* catch() { ... } // from try @ 0565097c with catch @ 05650cd4
                       catch() { ... } // from try @ 05650bf4 with catch @ 05650cd4 */
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
                    /* catch() { ... } // from try @ 0565074c with catch @ 05650cd8
                       catch() { ... } // from try @ 05650a38 with catch @ 05650cd8 */
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
                    /* catch() { ... } // from try @ 05650808 with catch @ 05650cdc
                       catch() { ... } // from try @ 05650c04 with catch @ 05650cdc
                       catch() { ... } // from try @ 05650c1c with catch @ 05650cdc */
  lVar8 = *(long *)(lVar9 + 0x38);
                    /* catch() { ... } // from try @ 056507a0 with catch @ 05650ce0
                       catch() { ... } // from try @ 05650bf8 with catch @ 05650ce0
                       catch() { ... } // from try @ 05650c10 with catch @ 05650ce0 */
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
                    /* try { // try from 05650d00 to 05750d03 has its CatchHandler @ 05650d14 */
    FUN_02dcfd74(lVar8);
  }
                    /* catch() { ... } // from try @ 05650d00 with catch @ 05650d14 */
                    /* try { // try from 05650d1c to 05750d23 has its CatchHandler @ 05650df4 */
                    /* try { // try from 05650d24 to 05750d43 has its CatchHandler @ 0565053c */
                    /* catch() { ... } // from try @ 056509f0 with catch @ 05650d28
                       catch() { ... } // from try @ 05650be0 with catch @ 05650d28 */
  if ((((int)unaff_x24[1] < 1) || (*unaff_x24 == 0)) ||
     (lVar8 = FUN_036eca00(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec914(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
                    /* try { // try from 05650d44 to 05750d5b has its CatchHandler @ 05650de4 */
    uVar3 = FUN_055339f0(uVar3,0);
  }
  lVar9 = *unaff_x29;
  lVar8 = *(long *)(lVar9 + 0x38);
                    /* try { // try from 05650d5c to 05750dd3 has its CatchHandler @ 0565053c */
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_XPathParser_ParamInfo>_TypeInfo;
  if ((((int)unaff_x26[1] < 1) || (*unaff_x26 == 0)) ||
     (lVar8 = FUN_036eca00(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar4 = FUN_055339f0(uVar4,0);
  }
  lVar9 = *(long *)puVar1;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo;
  if ((((int)unaff_x25[1] < 1) || (*unaff_x25 == 0)) ||
     (lVar8 = FUN_036eca18(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec930(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar5 = FUN_055339f0(uVar5,0);
  }
  lVar9 = *(long *)puVar1;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)unaff_x23[1] < 1) || (*unaff_x23 == 0)) ||
     (lVar8 = FUN_036eca1c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_036ec938(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
  }
  puVar2 = System_IObservable<InputEventPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05650f64(unaff_w22,unaff_w21,unaff_w20,uVar3,uVar4,uVar5,uVar6,&stack0x00000010);
  uVar7 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x4c) = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000010,0x5c);
  }
  return;
}


