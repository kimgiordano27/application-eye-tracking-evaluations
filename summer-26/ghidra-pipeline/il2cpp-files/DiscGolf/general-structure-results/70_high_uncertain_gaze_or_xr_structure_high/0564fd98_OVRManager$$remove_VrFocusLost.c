/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 0564fd98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_1
*/


void OVRManager__remove_VrFocusLost(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar8;
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
  
  FUN_02d965b8(PTR_DAT_06a0f1a0);
  FUN_02d965b8(System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IList<XmlNode>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x334) = 1;
  lVar8 = *unaff_x29;
  in_stack_00000050 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  if ((((int)unaff_x25[1] < 1) || (*unaff_x25 == 0)) ||
     (lVar7 = FUN_036eca00(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 0564fe38 to 0574fea7 has its CatchHandler @ 0564fe38
                       catch() { ... } // from try @ 0564fe38 with catch @ 0564fe38
                       catch() { ... } // from try @ 0564ffa8 with catch @ 0564fe38
                       catch() { ... } // from try @ 056500b4 with catch @ 0564fe38
                       catch() { ... } // from try @ 0565011c with catch @ 0564fe38 */
    uVar3 = FUN_036ec914(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
    uVar3 = FUN_055339f0(uVar3,0);
  }
  lVar8 = *unaff_x29;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  puVar1 = System_Collections_Generic_IList<XmlNode>_TypeInfo;
  if ((((int)unaff_x26[1] < 1) || (*unaff_x26 == 0)) ||
     (lVar7 = FUN_036eca00(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
    uVar4 = FUN_055339f0(uVar4,0);
  }
  lVar8 = *(long *)puVar1;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(long *)(lVar7 + 0x38) == 0) {
    FUN_02dcfd74(lVar7);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)unaff_x24[1] < 1) || (*unaff_x24 == 0)) ||
     (lVar7 = FUN_036ec9f4(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x28)),
     lVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec908(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IList<TextureBlitter_BlitInfo>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_0564ffe4(unaff_w23,unaff_w22,unaff_w21,unaff_w20,uVar3,uVar4,uVar5,&stack0x00000010);
  uVar6 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar6 & 1) == 0) {
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
    memcpy(unaff_x19,&stack0x00000010,0x48);
  }
  return;
}


