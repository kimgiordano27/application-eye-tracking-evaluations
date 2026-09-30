/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 05650108
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_1
*/


void OVRManager__remove_InputFocusLost(long param_1)

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
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long lVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x1a0));
                    /* catch() { ... } // from try @ 05650104 with catch @ 05650110 */
                    /* try { // try from 05650114 to 0575011b has its CatchHandler @ 05650124 */
  FUN_02d965b8(System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo);
                    /* try { // try from 0565011c to 05750127 has its CatchHandler @ 0564fe38 */
                    /* catch() { ... } // from try @ 05650114 with catch @ 05650124 */
  FUN_02d965b8(System_Collections_Generic_IList<XmlNode>_TypeInfo);
  FUN_02d965b8(System_Buffers_IMemoryOwner<IntPtr>_TypeInfo);
  *(undefined1 *)(unaff_x28 + 0x335) = 1;
  lVar9 = *unaff_x20;
  in_stack_00000060 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  if ((((int)unaff_x25[1] < 1) || (*unaff_x25 == 0)) ||
     (lVar8 = FUN_036eca00(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec914(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar3 = FUN_055339f0(uVar3,0);
  }
  lVar9 = *unaff_x20;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  if ((((int)unaff_x27[1] < 1) || (*unaff_x27 == 0)) ||
     (lVar8 = FUN_036eca00(*unaff_x27,unaff_x27[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec914(*unaff_x27,unaff_x27[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar4 = FUN_055339f0(uVar4,0);
  }
  lVar9 = *unaff_x20;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_02dcfd74(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02dcfd74(lVar8);
  }
  puVar1 = System_Collections_Generic_IList<XmlNode>_TypeInfo;
  if ((((int)unaff_x26[1] < 1) || (*unaff_x26 == 0)) ||
     (lVar8 = FUN_036eca00(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
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
  if ((((int)unaff_x24[1] < 1) || (*unaff_x24 == 0)) ||
     (lVar8 = FUN_036ec9f4(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_036ec908(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
  }
  puVar2 = System_Buffers_IMemoryOwner<IntPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_056503d0(unaff_w23,unaff_w22,unaff_w21,in_stack_00000018._4_4_,uVar3,uVar4,uVar5,uVar6
                      );
  uVar7 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar7 & 1) == 0) {
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000020,0x48);
  }
  return;
}


