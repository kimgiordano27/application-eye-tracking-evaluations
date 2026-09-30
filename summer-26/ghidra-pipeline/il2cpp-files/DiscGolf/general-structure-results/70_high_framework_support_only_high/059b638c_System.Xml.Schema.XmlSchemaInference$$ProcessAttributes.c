/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaInference$$ProcessAttributes
ENTRY_POINT: 059b638c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_12;validity_or_gating_hits_7;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x059b66d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Xml_Schema_XmlSchemaInference__ProcessAttributes(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  undefined4 *puVar7;
  long *plVar8;
  int iVar9;
  int in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  int iStack000000000000005c;
  undefined4 *in_stack_00000068;
  
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  iStack000000000000005c = -1;
  *unaff_x19 = 0xffffffff;
  uStack0000000000000040 = param_1;
  uVar1 = FUN_04b88fc8(&stack0x00000040,*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo);
  *(undefined8 *)(in_stack_00000068 + 0xc) = uVar1;
  LeanTween__value();
                    /* try { // try from 059b6420 to 05ab6447 has its CatchHandler @ 059b66b4 */
  if (iStack000000000000005c == 1) {
    iStack000000000000005c = -1;
    _in_stack_00000030 = *(undefined1 (*) [16])(in_stack_00000068 + 0x12);
    *(undefined8 *)(in_stack_00000068 + 0x12) = 0;
    *(undefined8 *)(in_stack_00000068 + 0x14) = 0;
    *in_stack_00000068 = 0xffffffff;
  }
  else {
    if (*(long *)(in_stack_00000068 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 059b66d4 with catch @ 059b66e0 */
      FUN_02d96860();
    }
    FUN_059b6808();
                    /* try { // try from 059b64e8 to 05ab64ef has its CatchHandler @ 059b66a0 */
    if (*(long *)(in_stack_00000068 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b66e4 to 05ab66eb has its CatchHandler @ 059b66f4 */
      FUN_02d96860();
    }
    if (*(long *)(*(long *)(in_stack_00000068 + 0xc) + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_059b68a8();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b66ec to 05ab66f7 has its CatchHandler @ 059b6358 */
      FUN_02d96860();
    }
                    /* try { // try from 059b64fc to 05ab6503 has its CatchHandler @ 059b669c */
    _in_stack_00000030 = FUN_0481d044(lVar4,0,*(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo);
                    /* try { // try from 059b6514 to 05ab651b has its CatchHandler @ 059b6694 */
    uVar5 = FUN_04b88f80(&stack0x00000030,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 059b6530 to 05ab6537 has its CatchHandler @ 059b6678 */
      iStack000000000000005c = 1;
      *in_stack_00000068 = 1;
      *(undefined1 (*) [16])(in_stack_00000068 + 0x12) = _in_stack_00000030;
      LeanTween__value(in_stack_00000068 + 0x12,0);
      puVar7 = in_stack_00000068;
                    /* try { // try from 059b6554 to 05ab6567 has its CatchHandler @ 059b668c */
                    /* try { // try from 059b656c to 05ab6577 has its CatchHandler @ 059b6688 */
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)OVRPlugin_OVRP_1_94_0_TypeInfo,extraout_x1,in_stack_00000068);
      }
                    /* try { // try from 059b6580 to 05ab6583 has its CatchHandler @ 059b66ac */
                    /* try { // try from 059b6584 to 05ab661f has its CatchHandler @ 059b6358 */
      FUN_031e7168(puVar7 + 2,&stack0x00000030,in_stack_00000068,
                   *(undefined8 *)OVRPlugin_Sizef_TypeInfo);
      uVar1 = 0;
      iVar9 = 5;
      goto LAB_059b646c;
    }
  }
  uVar1 = FUN_04b88fc8(&stack0x00000030,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
  iVar9 = 8;
LAB_059b646c:
                    /* try { // try from 059b6484 to 05ab64af has its CatchHandler @ 059b66b0 */
  if ((iStack000000000000005c < 0) &&
     (plVar8 = *(long **)(in_stack_00000068 + 0xc), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_059b660c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_059b660c:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
  }
                    /* try { // try from 059b6620 to 05ab6627 has its CatchHandler @ 059b66b8 */
  if (iVar9 == 8) {
                    /* catch() { ... } // from try @ 059b6644 with catch @ 059b6680 */
                    /* catch() { ... } // from try @ 059b6638 with catch @ 059b6684 */
                    /* catch() { ... } // from try @ 059b656c with catch @ 059b6688 */
                    /* catch() { ... } // from try @ 059b6554 with catch @ 059b668c */
                    /* catch() { ... } // from try @ 059b6634 with catch @ 059b6690 */
    lVar4 = *(long *)OVRPlugin_OVRP_1_94_0_TypeInfo;
    puVar7 = in_stack_00000068 + 2;
                    /* catch() { ... } // from try @ 059b6514 with catch @ 059b6694 */
    *in_stack_00000068 = 0xfffffffe;
                    /* catch() { ... } // from try @ 059b6630 with catch @ 059b6698 */
                    /* catch() { ... } // from try @ 059b64fc with catch @ 059b669c */
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 059b64e8 with catch @ 059b66a0 */
      thunk_FUN_02df485c();
    }
                    /* catch() { ... } // from try @ 059b662c with catch @ 059b66a4 */
                    /* catch() { ... } // from try @ 059b6628 with catch @ 059b66a8 */
                    /* catch() { ... } // from try @ 059b6580 with catch @ 059b66ac */
                    /* catch() { ... } // from try @ 059b6484 with catch @ 059b66b0 */
                    /* catch() { ... } // from try @ 059b6420 with catch @ 059b66b4 */
                    /* catch() { ... } // from try @ 059b6620 with catch @ 059b66b8 */
    FUN_040b19d8(puVar7,uVar1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
  }
  else if (iVar9 == 0) {
                    /* try { // try from 059b6628 to 05ab662b has its CatchHandler @ 059b66a8 */
                    /* try { // try from 059b662c to 05ab662f has its CatchHandler @ 059b66a4 */
                    /* try { // try from 059b6630 to 05ab6633 has its CatchHandler @ 059b6698 */
                    /* try { // try from 059b6634 to 05ab6637 has its CatchHandler @ 059b6690 */
                    /* try { // try from 059b6638 to 05ab663b has its CatchHandler @ 059b6684 */
                    /* try { // try from 059b663c to 05ab663f has its CatchHandler @ 059b667c */
    uVar1 = *(undefined8 *)(&stack0x00000020 + (long)(in_stack_00000028 + -1) * 8);
    puVar7 = in_stack_00000068 + 2;
                    /* try { // try from 059b6644 to 05ab666b has its CatchHandler @ 059b6680 */
    *in_stack_00000068 = 0xfffffffe;
    lVar4 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_94_0_TypeInfo);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = thunk_FUN_02dfd288(OVRPlugin_UnityOpenXR_TypeInfo);
                    /* try { // try from 059b666c to 05ab66d3 has its CatchHandler @ 059b6358 */
    FUN_040b1c24(puVar7,uVar1,uVar3);
                    /* catch() { ... } // from try @ 059b6530 with catch @ 059b6678 */
                    /* catch() { ... } // from try @ 059b663c with catch @ 059b667c */
  }
  return;
}


