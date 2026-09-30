/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRRayInteractor$$GetLinePoints
ENTRY_POINT: 02493554
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRRayInteractor__GetLinePoints
               (float param_1,undefined1 *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  double __x;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 uVar28;
  char cVar29;
  long lVar30;
  undefined4 *puVar31;
  long lVar32;
  float *pfVar33;
  code *pcVar34;
  uint uVar35;
  long lVar36;
  float *pfVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar43;
  long lVar44;
  long *plVar45;
  uint uVar46;
  long *unaff_x23;
  uint *unaff_x24;
  long *plVar47;
  long unaff_x27;
  long lVar48;
  long *plVar49;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  float fVar56;
  uint uVar57;
  ulong uVar58;
  float fVar59;
  float unaff_s8;
  float unaff_s9;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float unaff_s12;
  float fVar65;
  float unaff_s13;
  float fVar66;
  undefined4 uVar67;
  float unaff_s14;
  float fVar68;
  float unaff_s15;
  float fVar69;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  uint uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_00000110;
  float in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000138;
  int in_stack_00000140;
  uint *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000890;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
  do {
                    /* try { // try from 02493554 to 0259355b has its CatchHandler @ 024935cc */
    param_1 = unaff_s14 - param_1;
    fVar52 = (float)FUN_026fd454(param_2,param_3);
                    /* try { // try from 0249355c to 0259355f has its CatchHandler @ 02493578 */
                    /* try { // try from 02493560 to 02593567 has its CatchHandler @ 02493574 */
                    /* catch() { ... } // from try @ 02493550 with catch @ 02493568
                       try { // try from 02493568 to 02593597 has its CatchHandler @ 024933b4 */
                    /* catch() { ... } // from try @ 0249354c with catch @ 0249356c */
                    /* catch() { ... } // from try @ 02493494 with catch @ 02493570 */
                    /* catch() { ... } // from try @ 024934a4 with catch @ 02493574
                       catch() { ... } // from try @ 02493560 with catch @ 02493574 */
                    /* catch() { ... } // from try @ 0249348c with catch @ 02493578
                       catch() { ... } // from try @ 0249355c with catch @ 02493578 */
                    /* catch() { ... } // from try @ 0249346c with catch @ 0249357c */
    fVar56 = unaff_s15 +
             (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             unaff_s13 * (unaff_s9 + unaff_s9 + unaff_s8 + fVar52);
    fStack00000000000000e8 = unaff_s15;
    fVar52 = fVar56;
    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar53 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar52 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar51 = fVar53 * unaff_s13 * (unaff_s9 + in_stack_00000128 + fVar52);
      fVar52 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar63 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s14 = unaff_s14 + 0.0;
      param_1 = param_1 + 0.0;
      fVar53 = fVar53 * unaff_s13 * (((fVar52 - fVar63) - in_stack_00000128) - unaff_s9);
      fVar52 = fVar56 + fVar53;
      fVar63 = unaff_s15 + fVar51;
      fVar54 = (fVar51 - fVar53) * 0.5;
      unaff_s15 = (unaff_s15 + fVar53) - fVar54;
      fVar56 = (fVar56 + fVar51) - fVar54;
      fStack00000000000000e8 = fVar63 - fVar54;
      fVar52 = fVar52 - fVar54;
    }
                    /* try { // try from 024935a4 to 025935bb has its CatchHandler @ 02493710 */
    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
      fVar54 = 0.0;
      fVar60 = 0.0;
      fVar61 = 0.0;
      fVar53 = 0.0;
      fVar51 = param_1;
      fVar63 = unaff_s14;
      fStack00000000000000ec = unaff_s15;
    }
    else {
      thunk_FUN_026935f0(_uStack0000000000000060,0);
                    /* catch() { ... } // from try @ 02493598 with catch @ 024935bc
                       try { // try from 024935bc to 025935eb has its CatchHandler @ 024933b4 */
                    /* catch() { ... } // from try @ 02493448 with catch @ 024935c8 */
      fVar64 = (fVar56 + unaff_s15) * 0.5;
                    /* catch() { ... } // from try @ 024934b4 with catch @ 024935cc
                       catch() { ... } // from try @ 02493554 with catch @ 024935cc */
      fVar66 = (param_1 + unaff_s14) * 0.5;
                    /* catch() { ... } // from try @ 02493430 with catch @ 024935d0 */
      fVar60 = unaff_s14 - fVar66;
      fVar53 = 0.0;
      fVar63 = fVar60;
      fStack00000000000000e8 =
           (float)FUN_02692df0(fStack00000000000000e8 - fVar64,_uStack0000000000000060,0);
                    /* try { // try from 024935ec to 025935ef has its CatchHandler @ 024935fc */
      fStack00000000000000e8 = fVar64 + fStack00000000000000e8;
                    /* catch() { ... } // from try @ 024935ec with catch @ 024935fc */
      fVar53 = fVar53 + 0.0;
                    /* try { // try from 02493604 to 0259361b has its CatchHandler @ 02493710 */
      param_1 = param_1 - fVar66;
      fVar54 = 0.0;
      fVar51 = param_1;
                    /* catch() { ... } // from try @ 0249341c with catch @ 0249361c
                       try { // try from 0249361c to 02593637 has its CatchHandler @ 024933b4 */
      fStack00000000000000ec = (float)FUN_02692df0(unaff_s15 - fVar64,_uStack0000000000000060,0);
      fStack00000000000000ec = fVar64 + fStack00000000000000ec;
      fVar54 = fVar54 + 0.0;
                    /* try { // try from 02493638 to 0259364f has its CatchHandler @ 02493700 */
      fVar61 = 0.0;
      fVar56 = (float)FUN_02692df0(fVar56 - fVar64,_uStack0000000000000060,0);
                    /* try { // try from 02493650 to 025936ef has its CatchHandler @ 024933b4 */
      fVar56 = fVar64 + fVar56;
      unaff_s14 = fVar66 + fVar60;
      fVar61 = fVar61 + 0.0;
      fVar60 = 0.0;
      fVar52 = (float)FUN_02692df0(fVar52 - fVar64,_uStack0000000000000060,0);
      fVar52 = fVar64 + fVar52;
      param_1 = fVar66 + param_1;
      fVar60 = fVar60 + 0.0;
      fVar51 = fVar66 + fVar51;
      fVar63 = fVar66 + fVar63;
    }
    if (*unaff_x23 == 0) goto LAB_0249920c;
    lVar30 = *(long *)(*unaff_x23 + 0x38);
    uVar22 = (ulong)(uint)unaff_s13;
    if (lVar30 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*unaff_x24 * unaff_x27;
    *(float *)(lVar30 + 0x120) = fVar51;
    *(float *)(lVar30 + 0x11c) = fStack00000000000000ec;
    *(float *)(lVar30 + 0x124) = fVar54;
                    /* try { // try from 024936f0 to 025936ff has its CatchHandler @ 02493700 */
                    /* catch() { ... } // from try @ 02493638 with catch @ 02493700
                       catch() { ... } // from try @ 024936f0 with catch @ 02493700 */
    if ((*unaff_x23 == 0) || (lVar30 = *(long *)(*unaff_x23 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
                    /* try { // try from 02493704 to 02593707 has its CatchHandler @ 02493710 */
                    /* try { // try from 02493708 to 02593713 has its CatchHandler @ 024933b4 */
                    /* catch() { ... } // from try @ 024935a4 with catch @ 02493710
                       catch() { ... } // from try @ 02493604 with catch @ 02493710
                       catch() { ... } // from try @ 02493704 with catch @ 02493710 */
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* try { // try from 02493714 to 025938df has its CatchHandler @ 02493714
                       catch() { ... } // from try @ 02493714 with catch @ 02493714
                       catch() { ... } // from try @ 0249394c with catch @ 02493714
                       catch() { ... } // from try @ 024939a4 with catch @ 02493714
                       catch() { ... } // from try @ 024939c4 with catch @ 02493714
                       catch() { ... } // from try @ 024939f4 with catch @ 02493714 */
    lVar30 = lVar30 + (int)*unaff_x24 * unaff_x27;
    *(float *)(lVar30 + 0x114) = fVar63;
    *(float *)(lVar30 + 0x110) = fStack00000000000000e8;
    *(float *)(lVar30 + 0x118) = fVar53;
    if ((*unaff_x23 == 0) || (lVar30 = *(long *)(*unaff_x23 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*unaff_x24 * unaff_x27;
    *(float *)(lVar30 + 0x128) = fVar56;
    *(float *)(lVar30 + 300) = unaff_s14;
    *(float *)(lVar30 + 0x130) = fVar61;
    if ((*unaff_x23 == 0) || (lVar30 = *(long *)(*unaff_x23 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *unaff_x24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*unaff_x24 * unaff_x27;
    *(float *)(lVar30 + 0x134) = fVar52;
    *(float *)(lVar30 + 0x138) = param_1;
    *(float *)(lVar30 + 0x13c) = fVar60;
    if ((*unaff_x23 == 0) || (lVar30 = *(long *)(*unaff_x23 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    uVar15 = *unaff_x24;
    lVar44 = (long)(int)uVar15;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar30 + lVar44 * unaff_x27;
    *(int *)(lVar36 + 0x140) = (int)unaff_x19[199];
    fVar53 = *(float *)(unaff_x19 + 0x9a);
    uVar23 = (ulong)(uint)fVar53;
    fVar52 = *(float *)((long)unaff_x19 + 0x614);
    *(float *)(lVar36 + 0x15c) = (fVar56 - fStack00000000000000ec) / (fVar63 - fVar51);
    *(float *)(lVar36 + 0x14c) = (in_stack_00000130._4_4_ - fVar53) + fVar52;
    in_stack_00000120 = in_stack_00000120 * unaff_s13;
    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      in_stack_00000120 = in_stack_00000120 / in_stack_000000f0._4_4_;
      in_stack_00000110 = (in_stack_00000110 * unaff_s13) / in_stack_000000f0._4_4_;
    }
    else {
      in_stack_00000110 = in_stack_00000110 * unaff_s13;
    }
    uVar19 = *(uint *)(unaff_x19 + 0x92);
    bVar12 = unaff_w29 != 0;
    in_stack_00000120 = fVar52 + in_stack_00000120;
    bVar13 = uVar15 != uVar19;
    if (bVar13 && bVar12) {
      fVar52 = *(float *)(unaff_x19 + 0x98);
      lVar30 = lVar30 + lVar44 * unaff_x27;
      *(float *)(lVar30 + 0x154) = fVar52;
      in_stack_00000110 = *(float *)((long)unaff_x19 + 0x4c4);
                    /* try { // try from 024938e0 to 025938e7 has its CatchHandler @ 024939a4 */
      *(float *)(lVar30 + 0x148) = fVar52 - fVar53;
      *(float *)(lVar30 + 0x158) = in_stack_00000110;
      *(float *)(unaff_x19 + 0x97) = fVar52 - fVar53;
      in_stack_00000110 = in_stack_00000110 - fVar53;
      *(float *)(lVar30 + 0x150) = in_stack_00000110;
    }
    else {
      in_stack_00000110 = fVar52 + in_stack_00000110;
      fVar56 = in_stack_00000120;
      fVar54 = in_stack_00000110;
      if (fVar52 != 0.0) {
        fVar56 = (in_stack_00000120 - fVar52) / *(float *)((long)unaff_x19 + 0x3fc);
        fVar54 = (in_stack_00000110 - fVar52) / *(float *)((long)unaff_x19 + 0x3fc);
        if (fVar56 <= in_stack_00000120) {
          fVar56 = in_stack_00000120;
        }
        if (in_stack_00000110 <= fVar54) {
          fVar54 = in_stack_00000110;
        }
      }
      lVar30 = lVar30 + lVar44 * unaff_x27;
      fVar52 = fVar56;
      if (fVar56 <= *(float *)(unaff_x19 + 0x98)) {
        fVar52 = *(float *)(unaff_x19 + 0x98);
      }
      fVar51 = fVar54;
      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar54) {
        fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
      in_stack_00000110 = in_stack_00000110 - fVar53;
      *(float *)(unaff_x19 + 0x98) = fVar52;
      *(float *)(lVar30 + 0x154) = fVar56;
      *(float *)(lVar30 + 0x158) = fVar54;
      *(float *)(lVar30 + 0x148) = in_stack_00000120 - fVar53;
      *(float *)(unaff_x19 + 0x97) = in_stack_00000120 - fVar53;
      *(float *)(lVar30 + 0x150) = in_stack_00000110;
    }
                    /* try { // try from 024938f8 to 0259394b has its CatchHandler @ 024939a8 */
    *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000110;
    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
      if (!bVar13 || !bVar12) {
        *(float *)(unaff_x19 + 0x96) = fVar52;
        if (unaff_x19[0x1f] != 0) {
          fVar52 = *(float *)((long)unaff_x19 + 0x4b4);
          fVar56 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
          in_stack_000000f0._4_4_ = (unaff_s13 * fVar56) / in_stack_000000f0._4_4_;
          uVar23 = (ulong)*(uint *)(unaff_x19 + 0x9a);
          if (fVar52 <= in_stack_000000f0._4_4_) {
            fVar52 = in_stack_000000f0._4_4_;
          }
          *(float *)((long)unaff_x19 + 0x4b4) = fVar52;
          goto LAB_02493948;
        }
        goto LAB_0249920c;
      }
    }
    else {
LAB_02493948:
                    /* try { // try from 0249394c to 0259398b has its CatchHandler @ 02493714 */
      if ((!bVar13 || !bVar12) && (float)uVar23 == 0.0) {
        fVar52 = *(float *)(in_stack_00000070 + 0x208);
        if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000120) {
          fVar52 = in_stack_00000120;
        }
        *(float *)(in_stack_00000070 + 0x208) = fVar52;
      }
    }
    lVar30 = *unaff_x23;
    if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0)) goto LAB_0249920c;
    uVar57 = *in_stack_00000148;
                    /* try { // try from 0249398c to 025939a3 has its CatchHandler @ 024939a8 */
    if (*(uint *)(lVar44 + 0x18) <= uVar57)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + (int)uVar57 * unaff_x27;
    *(undefined1 *)(lVar44 + 0x194) = 0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 024938e0 with catch @ 024939a4
                       try { // try from 024939a4 to 025939bf has its CatchHandler @ 02493714 */
    uVar35 = *(uint *)(unaff_x19 + 0x4e);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 024938f8 with catch @ 024939a8
                       catch(type#1 @ 03274860) { ... } // from try @ 0249398c with catch @ 024939a8
                        */
    iVar18 = (int)unaff_x27;
                    /* try { // try from 024939c0 to 025939c3 has its CatchHandler @ 024939e4 */
                    /* try { // try from 024939c4 to 025939e7 has its CatchHandler @ 02493714 */
    if (((in_stack_000017bc == 9) ||
        ((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0xad)))) ||
       (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
        (*(int *)((long)unaff_x19 + 0x63c) == 1)))) {
      *(undefined1 *)(lVar44 + 0x194) = 1;
      pfVar33 = _fStack0000000000000088;
      pfVar37 = _fStack0000000000000098;
      if (unaff_w20 != 0) {
        lVar30 = *(long *)(lVar30 + 0x50);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        pfVar37 = (float *)(lVar30 + 0x60);
        pfVar33 = (float *)(lVar30 + 100);
      }
      fVar56 = *pfVar37;
      fVar53 = *pfVar33;
      fVar52 = *(float *)(unaff_x19 + 0x6b);
      fVar54 = *(float *)(unaff_x19 + 199);
      fStack00000000000000d4 = (in_stack_00000090 - fVar56) - fVar53;
      bVar12 = true;
      if ((fVar52 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar52))) {
        bVar12 = fVar52 == -1.0;
      }
      if (!bVar12) {
        fStack00000000000000d4 = fVar52;
      }
      fVar52 = 0.0;
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar52 = (float)FUN_026fd474(&stack0x00001770,0);
        uVar23 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      }
      fVar61 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
      fVar60 = (float)uVar23;
      if (in_stack_000017bc != 0xad) {
        fStack00000000000000d0 = unaff_s13;
      }
      fVar64 = 0.0;
      if ((0.0 < fVar60) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar64 = (*(float *)(unaff_x19 + 0x96) - (fVar61 - fVar60)) + fVar64;
      uVar57 = *in_stack_00000148;
      if (fVar64 <= fStack00000000000000a4) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
        plVar45 = (long *)System_Threading_Mutex_TypeInfo;
        fVar60 = 1.0 - fVar51;
        uVar23 = (ulong)(uint)fVar60;
        fVar54 = ABS(fVar54) + fVar52 * fVar60 * fStack00000000000000d0;
        fVar52 = _DAT_0294c6e8;
        if ((uVar35 & 0x18) == 0) {
          fVar52 = 1.0;
        }
        if (fVar54 <= fVar52 * fStack00000000000000d4) {
LAB_02494950:
          if (in_stack_000017bc == 0xad) {
            if ((*in_stack_00000150 != 0) &&
               (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
              if (*in_stack_00000148 < *(uint *)(lVar30 + 0x18)) {
                *(undefined1 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
                goto LAB_02494abc;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
          }
          else if (in_stack_000017bc == 9) {
            lVar30 = *in_stack_00000150;
            if ((lVar30 != 0) && (lVar44 = *(long *)(lVar30 + 0x38), lVar44 != 0)) {
              uVar57 = *in_stack_00000148;
              if (*(uint *)(lVar44 + 0x18) <= uVar57)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              *(undefined1 *)(lVar44 + (int)uVar57 * unaff_x27 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x49c) = uVar57;
              lVar44 = *(long *)(lVar30 + 0x50);
              if (lVar44 != 0) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar44 + 0x18)) {
                  lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar44 + 0x2c) = *(int *)(lVar44 + 0x2c) + 1;
                  goto LAB_024949c4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
            }
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
              (**(code **)(*unaff_x19 + 0x8c8))();
            }
            else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
              (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,unaff_s9);
            }
            uVar57 = *in_stack_00000148;
            if (((uint)fStack0000000000000058 & 1) != 0) {
              *(uint *)(in_stack_00000070 + 0x1f0) = uVar57;
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar57;
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            if ((unaff_x19[0x6c] != 0) && (lVar30 = *(long *)(unaff_x19[0x6c] + 0x50), lVar30 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar30 + 0x18)) {
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fStack0000000000000058 = 0.0;
                *(float *)(lVar30 + 0x60) = fVar56;
                *(float *)(lVar30 + 100) = fVar53;
                goto LAB_02494abc;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
          }
          goto LAB_0249920c;
        }
        if (((char)unaff_x19[0x5a] == '\0') || (uVar57 == *(uint *)(unaff_x19 + 0x92))) {
          if (((char)unaff_x19[0x46] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if (fVar51 < fVar61) {
              fVar56 = fVar54 / fVar60;
              if (fVar51 <= 0.0) {
                fVar56 = fVar54;
              }
              fVar51 = fVar51 + (fVar54 - fVar52 * (fStack00000000000000d4 + DAT_02958218)) / fVar56
              ;
              goto LAB_0249929c;
            }
            fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar23 = (ulong)(uint)fVar60;
            fVar51 = *(float *)(unaff_x19 + 0x49);
            if (fVar60 <= fVar51) goto LAB_02493e34;
LAB_02499210:
            fVar52 = (fVar60 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar52 <= DAT_028aa298) {
              fVar52 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar60;
            fVar56 = (fVar60 - fVar52) * 20.0 + 0.5;
            fVar52 = DAT_02958220;
            if (fVar56 != INFINITY) {
              fVar52 = (float)(int)fVar56 / 20.0;
            }
            if (fVar52 <= fVar51) {
              fVar52 = fVar51;
            }
LAB_02495fd8:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar52;
            return;
          }
LAB_02493e34:
          iVar14 = (int)unaff_x19[0x5b];
          if (iVar14 == 1) {
            lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *plVar45;
            }
            plVar49 = (long *)StringLiteral_302;
            lVar44 = *(long *)(lVar30 + 0xb8);
            lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
              lVar30 = FUN_00d5941c(lVar30);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
            if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
              lVar30 = FUN_00d5941c();
            }
            piVar25 = (int *)thunk_FUN_00d32ed4(lVar44 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0);
            if (*piVar25 == 0) goto LAB_02495f00;
            lVar30 = *plVar45;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *plVar45;
            }
            FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_02494358;
          }
          if (iVar14 != 6) {
            if (iVar14 == 3) {
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              goto LAB_02493ec0;
            }
            goto LAB_02494950;
          }
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar49 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar30 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar22 = FUN_02681b9c(lVar30,0,0);
          if ((uVar22 & 1) != 0) {
            plVar47 = (long *)unaff_x19[0x5c];
            uVar24 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x558))(plVar47,uVar24,*(undefined8 *)(*plVar47 + 0x560));
            lVar30 = unaff_x19[0x5c];
            if (lVar30 == 0) goto LAB_0249920c;
            *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar47 = (long *)unaff_x19[0x5c];
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
LAB_02494484:
          uVar22 = uVar23;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        else {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            lVar30 = *in_stack_00000150;
            if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar51 = *(float *)(unaff_x19 + 0x9a);
            fVar60 = 0.0;
            if ((0.0 < fVar51) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar60 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar60 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                     *(float *)(lVar44 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                     (fVar60 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
          }
          else {
            lVar30 = unaff_x19[0x6c];
            *(undefined1 *)((long)unaff_x19 + 700) = 1;
            if (lVar30 == 0) goto LAB_0249920c;
            fVar51 = *(float *)(unaff_x19 + 0x9a);
            fVar60 = *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
          }
          puVar10 = System_Threading_Mutex_TypeInfo;
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 == 0) goto LAB_0249920c;
          uVar39 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar30 + 0x18) <= uVar39) ||
             (uVar46 = uVar39 - 1, *(uint *)(lVar30 + 0x18) <= uVar46))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar23 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x96));
          fVar64 = (fVar60 + *(float *)(unaff_x19 + 0x96) + fVar51) -
                   *(float *)(lVar30 + (int)uVar39 * unaff_x27 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar30 + (long)(int)uVar46 * (long)iVar18 + 0x20) != 0xad) ||
             ((fStack00000000000000a4 <= fVar64 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar30 + (int)uVar39 * unaff_x27 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
              plVar49 = (long *)StringLiteral_302;
              plVar45 = (long *)System_Threading_Mutex_TypeInfo;
              uVar22 = uVar23;
              goto LAB_02492630;
            }
            if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
              fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
              fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if ((fVar61 <= fVar51) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)))
              {
                fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
                uVar23 = (ulong)(uint)fVar60;
                fVar51 = *(float *)(unaff_x19 + 0x49);
                if ((fVar51 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_02499210;
                goto LAB_024946c0;
              }
LAB_024992ac:
              fVar56 = fVar54;
              if (0.0 < fVar51) {
                fVar56 = fVar54 / (1.0 - fVar51);
              }
              fVar51 = fVar51 + (fVar54 - fVar52 * (fStack00000000000000d4 + DAT_02958218)) / fVar56
              ;
LAB_0249929c:
              if (fVar61 <= fVar51) {
                fVar51 = fVar61;
              }
              *(float *)((long)unaff_x19 + 0x2cc) = fVar51;
              return;
            }
LAB_024946c0:
            lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *(long *)puVar10;
            }
            iVar14 = *(int *)(*(long *)(lVar30 + 0xb8) + 0xe78);
            if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
               (((bStack000000000000005c ^ 1) & 1) == 0)) {
              if (*(int *)(lVar30 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0)) goto LAB_0249920c;
              uVar46 = *in_stack_00000148 - 1;
              if (*(uint *)(lVar30 + 0x18) <= uVar46)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fStack0000000000000034 = (float)iVar14;
              if (*(short *)(lVar30 + (long)(int)uVar46 * (long)iVar18 + 0x20) == 0xad) {
                *in_stack_00000148 = uVar46;
                goto LAB_024947b4;
              }
            }
            if (fStack00000000000000a4 < fVar64) {
              if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              }
              plVar49 = (long *)StringLiteral_302;
              plVar45 = (long *)System_Threading_Mutex_TypeInfo;
              if ((char)unaff_x19[0x46] != '\0') {
                fVar51 = *(float *)(unaff_x19 + 0x58);
                if ((fVar51 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                  fVar52 = *(float *)((long)unaff_x19 + 0x2b4) +
                           ((in_stack_00000018._4_4_ - fVar64) / (float)((int)unaff_x19[0x94] + 1))
                           / fStack0000000000000054;
                  if (fVar52 <= fVar51) {
                    fVar52 = fVar51;
                  }
LAB_024964c8:
                  *(float *)((long)unaff_x19 + 0x2b4) = fVar52;
                  return;
                }
                fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar51 < fVar61) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_024992ac;
                fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
                uVar23 = (ulong)(uint)fVar60;
                fVar51 = *(float *)(unaff_x19 + 0x49);
                if ((fVar51 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_02499210;
              }
              switch((int)unaff_x19[0x5b]) {
              case 0:
              case 2:
              case 4:
                FUN_024d7014(fStack0000000000000054,uVar22,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                             fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
                break;
              case 1:
                lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar30 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar30 = *plVar45;
                }
                lVar44 = *(long *)(lVar30 + 0xb8);
                lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
                  lVar30 = FUN_00d5941c(lVar30);
                }
                lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
                if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
                  lVar30 = FUN_00d5941c();
                }
                piVar25 = (int *)thunk_FUN_00d32ed4(lVar44 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0)
                ;
                if (*piVar25 == 0) {
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_02495f00;
                }
                lVar30 = *plVar45;
                if (*(int *)(lVar30 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar30 = *plVar45;
                }
                FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                iVar14 = FUN_024d66ec();
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494364;
              case 3:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                in_stack_00000068._4_1_ = 0;
                goto LAB_0249408c;
              case 5:
                *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                FUN_024d7014(fStack0000000000000054,uVar22,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                             fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
                *(undefined4 *)(unaff_x19 + 0x99) = 0;
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                break;
              case 6:
                lVar30 = unaff_x19[0x5c];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar22 = FUN_02681b9c(lVar30,0,0);
                if ((uVar22 & 1) != 0) {
                  plVar47 = (long *)unaff_x19[0x5c];
                  uVar24 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar47 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar47 + 0x558))(plVar47,uVar24,*(undefined8 *)(*plVar47 + 0x560));
                  lVar30 = unaff_x19[0x5c];
                  if (lVar30 == 0) goto LAB_0249920c;
                  *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar47 = (long *)unaff_x19[0x5c];
                  if (plVar47 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494484;
              default:
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494950;
              }
              in_stack_00000068._4_1_ = 0;
              bStack000000000000005c = 1;
              fStack0000000000000058 = 1.4013e-45;
              plVar49 = (long *)StringLiteral_302;
              plVar45 = (long *)System_Threading_Mutex_TypeInfo;
            }
            else {
              FUN_024d7014(fStack0000000000000054,uVar22,fStack00000000000000c8,
                           *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                           fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
              bStack000000000000005c = 1;
              in_stack_00000068._4_1_ = 0;
              fStack0000000000000058 = 1.4013e-45;
              plVar49 = (long *)StringLiteral_302;
              plVar45 = (long *)System_Threading_Mutex_TypeInfo;
            }
          }
          else {
            *in_stack_00000148 = uVar46;
LAB_024947b4:
            in_stack_000017a8 = CONCAT44(0x2d,uVar46);
            in_stack_00000068._4_1_ = 0;
            plVar49 = (long *)StringLiteral_302;
            plVar45 = (long *)System_Threading_Mutex_TypeInfo;
            uVar22 = uVar23;
            in_stack_00001788 = in_stack_00001788 - 1;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar57;
        }
        plVar49 = (long *)StringLiteral_302;
        plVar45 = (long *)System_Threading_Mutex_TypeInfo;
        uVar24 = DAT_02941c08;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar66 = *(float *)(unaff_x19 + 0x58);
          if (((fVar66 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar60)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar52 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar64) / (float)(int)unaff_x19[0x94]) /
                     fStack0000000000000054;
            if (fVar52 <= fVar66) {
              fVar52 = fVar66;
            }
            goto LAB_024964c8;
          }
          fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar60 = *(float *)(unaff_x19 + 0x49);
          uVar23 = (ulong)(uint)fVar60;
          if ((fVar60 < fVar64) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar52 = (fVar64 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar52 <= DAT_028aa298) {
              fVar52 = DAT_028aa298;
            }
            fVar56 = (fVar64 - fVar52) * 20.0 + 0.5;
            fVar52 = DAT_02958220;
            if (fVar56 != INFINITY) {
              fVar52 = (float)(int)fVar56 / 20.0;
            }
            if (fVar52 <= fVar60) {
              fVar52 = fVar60;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar64;
            goto LAB_02495fd8;
          }
        }
        switch((int)unaff_x19[0x5b]) {
        case 1:
          lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar30 = *plVar45;
          }
          lVar44 = *(long *)(lVar30 + 0xb8);
          lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
            lVar30 = FUN_00d5941c(lVar30);
          }
          plVar49 = (long *)StringLiteral_302;
          lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
          if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
            lVar30 = FUN_00d5941c();
          }
          piVar25 = (int *)thunk_FUN_00d32ed4(lVar44 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0);
          if (*piVar25 == 0) {
LAB_02495f00:
            in_stack_000017a8 = DAT_02941c08;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            uVar22 = uVar23;
            in_stack_00001788 = 0xffffffff;
          }
          else {
            lVar30 = *plVar45;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *plVar45;
            }
            FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
            iVar14 = FUN_024d66ec();
LAB_02494364:
            iVar50 = *(int *)((long)unaff_x19 + 0x48c) + -1;
            *(int *)((long)unaff_x19 + 0x48c) = iVar50;
            in_stack_00000140 = in_stack_00000140 + 1;
            uVar22 = uVar23;
            in_stack_00001788 = iVar14 - 1;
            in_stack_000017a8 = CONCAT44(0x2026,iVar50);
          }
          goto LAB_02492630;
        default:
          goto 
          UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
          ;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
LAB_02493ec0:
          plVar49 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          break;
        case 5:
          if ((uVar57 == 0) || ((int)in_stack_00001788 < 0)) {
            *in_stack_00000148 = 0;
            plVar49 = (long *)StringLiteral_302;
            plVar45 = (long *)System_Threading_Mutex_TypeInfo;
            uVar22 = uVar23;
            in_stack_00001788 = 0xffffffff;
            in_stack_000017a8 = uVar24;
          }
          else {
            fVar52 = *(float *)(unaff_x19 + 0x98);
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (fStack00000000000000a4 < fVar52 - fVar61) break;
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            uVar22 = *(ulong *)(*(long *)(*plVar45 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar30 = NEON_rev64(uVar22,4);
            unaff_x19[0x98] = lVar30;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          }
          goto LAB_02492630;
        case 6:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          plVar49 = (long *)StringLiteral_302;
          lVar30 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar22 = FUN_02681b9c(lVar30,0,0);
          if ((uVar22 & 1) != 0) {
            plVar47 = (long *)unaff_x19[0x5c];
            uVar24 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x558))(plVar47,uVar24,*(undefined8 *)(*plVar47 + 0x560));
            lVar30 = unaff_x19[0x5c];
            if (lVar30 == 0) goto LAB_0249920c;
            *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar47 = (long *)unaff_x19[0x5c];
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
LAB_0249408c:
        uVar22 = uVar23;
        in_stack_000017a8 = CONCAT44(3,uVar57);
      }
    }
    else {
                    /* catch() { ... } // from try @ 024939c0 with catch @ 024939e4 */
                    /* try { // try from 024939e8 to 025939f3 has its CatchHandler @ 02493a08 */
      if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                    /* try { // try from 024939f4 to 025939ff has its CatchHandler @ 02493714 */
                    /* try { // try from 02493a00 to 02593a07 has its CatchHandler @ 02493a08 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024939e8 with catch @ 02493a08
                       catch(type#2 @ 00000000) { ... } // from try @ 02493a00 with catch @ 02493a08
                        */
        fVar52 = 0.0;
                    /* try { // try from 02493a0c to 02593b27 has its CatchHandler @ 02493a0c
                       catch() { ... } // from try @ 02493a0c with catch @ 02493a0c
                       catch() { ... } // from try @ 02493b5c with catch @ 02493a0c
                       catch() { ... } // from try @ 02493b80 with catch @ 02493a0c
                       catch() { ... } // from try @ 02493ba8 with catch @ 02493a0c
                       catch() { ... } // from try @ 02493cd0 with catch @ 02493a0c */
        if ((0.0 < (float)uVar23) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        uVar22 = (ulong)(uint)fStack00000000000000a4;
        if (fStack00000000000000a4 <
            (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar23)) +
            fVar52) {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar57;
          }
          plVar49 = (long *)StringLiteral_302;
          plVar45 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          lVar30 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar23 = FUN_02681b9c(lVar30,0,0);
          if ((uVar23 & 1) != 0) {
            plVar47 = (long *)unaff_x19[0x5c];
            uVar24 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x558))(plVar47,uVar24,*(undefined8 *)(*plVar47 + 0x560));
            lVar30 = unaff_x19[0x5c];
            if (lVar30 == 0) goto LAB_0249920c;
            *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar47 = (long *)unaff_x19[0x5c];
            if (plVar47 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_000017a8 = CONCAT44(3,uVar57);
          goto LAB_02492630;
        }
      }
      if ((((in_stack_000017bc - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
        if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0x2060)) {
          lVar30 = *in_stack_00000150;
          if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x50), lVar44 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(int *)(lVar44 + 0x2c) = *(int *)(lVar44 + 0x2c) + 1;
          *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016fa418(in_stack_000017bc,0);
        if ((uVar22 & 1) != 0) goto LAB_024944e4;
      }
      if (in_stack_000017bc == 0xa0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
        *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
      }
LAB_02494abc:
      if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar52 = *(float *)(unaff_x19 + 0x3c);
        iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar53 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar30 = unaff_x19[0xc9];
        fVar56 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar56 = 1.0;
        }
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
        fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar61 = *(float *)(lVar30 + 0x2c);
        fVar54 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
        fVar60 = *_fStack0000000000000098;
        fVar54 = fVar51 * (fVar52 / (float)iVar14) * fVar53 * fVar56 * fVar61 * fVar54;
        fVar52 = *_fStack0000000000000088;
        if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])
           ) {
          if ((*in_stack_00000150 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
          uVar57 = *(int *)((long)unaff_x19 + 0x48c) - 1;
          if (*(uint *)(lVar30 + 0x18) <= uVar57)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar56 = *(float *)(lVar30 + (long)(int)uVar57 * (long)iVar18 + 0x60);
          iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar30 = unaff_x19[0xc9];
          fVar53 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar53 = 1.0;
          }
          if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
          fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar64 = *(float *)(lVar30 + 0x2c);
          fVar54 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
          if ((*in_stack_00000150 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          fVar60 = *(float *)(lVar30 + 0x60);
          fVar52 = *(float *)(lVar30 + 100);
          fVar54 = fVar61 * (fVar56 / (float)iVar14) * fVar51 * fVar53 * fVar64 * fVar54;
        }
        fVar61 = *(float *)(unaff_x19 + 0x9a);
        fVar53 = *(float *)(unaff_x19 + 0x96);
        fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar56 = 0.0;
        fVar51 = 0.0;
        if ((0.0 < fVar61) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar66 = *(float *)(unaff_x19 + 199);
        if ((char)unaff_x19[0x1d] == '\0') {
          if ((unaff_x19[0xc9] == 0) || (lVar30 = *(long *)(unaff_x19[0xc9] + 0x20), lVar30 == 0))
          goto LAB_0249920c;
          FUN_026fd62c(&stack0x00000880,lVar30,0);
          unaff_x28 = &stack0x00000880;
          fVar56 = (float)FUN_026fd474(&stack0x000016e0,0);
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        fVar59 = *(float *)(unaff_x19 + 0x6b);
        fVar52 = (in_stack_00000090 - fVar60) - fVar52;
        bVar12 = true;
        if ((fVar59 <= fVar52) && (bVar12 = false, !NAN(fVar59))) {
          bVar12 = fVar59 == -1.0;
        }
        if (!bVar12) {
          fVar52 = fVar59;
        }
        fVar60 = _DAT_0294c6e8;
        if ((uVar35 & 0x18) == 0) {
          fVar60 = 1.0;
        }
        if (((fVar53 - (fVar64 - fVar61)) + fVar51 < fStack00000000000000a4) &&
           (ABS(fVar66) + fVar54 * fVar56 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
            fVar60 * fVar52)) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          lVar30 = *(long *)(*(long *)puVar10 + 0xb8);
          memcpy(&stack0x00000508,(void *)(lVar30 + 0x788),0x378);
          FUN_013b86dc(lVar30 + 0x11f0,&stack0x00000508,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
      fVar52 = 1.0;
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar57 = *(uint *)(unaff_x19 + 0x94);
      lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
      *(uint *)(lVar44 + 100) = uVar57;
      *(int *)(lVar44 + 0x68) = (int)unaff_x19[0x95];
      if (((unaff_w20 & 1) == 0) &&
         ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
        lVar30 = *(long *)(lVar30 + 0x50);
        if (lVar30 == 0) goto LAB_0249920c;
LAB_02494e68:
        if (*(uint *)(lVar30 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(int *)(lVar30 + (long)(int)uVar57 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      else {
        lVar30 = *(long *)(lVar30 + 0x50);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(int *)(lVar30 + (long)(int)uVar57 * 0x5c + 0x24) == 1) goto LAB_02494e68;
      }
      if (in_stack_000017bc == 9) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar54 = *(float *)(unaff_x19 + 199);
        fVar56 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
        fVar52 = unaff_s13 * fVar52 * fVar56;
        fVar53 = fVar52 * (float)(int)(fVar54 / fVar52);
        uVar22 = (ulong)(uint)fVar53;
        if (fVar53 <= fVar54) {
          fVar53 = fVar54 + fVar52;
        }
LAB_02495058:
        *(float *)(unaff_x19 + 199) = fVar53;
      }
      else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
        if ((char)unaff_x19[0x1d] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
            fVar52 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
          }
          fVar53 = *(float *)(unaff_x19 + 199);
          fVar54 = (float)FUN_026fd474(&stack0x00001770,0);
          if (unaff_x19[0x1f] != 0) {
            fVar56 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
            fVar53 = fVar53 + fVar56 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                       unaff_s13 * (fStack00000000000000ac + fVar52 * fVar54) +
                                       fStack00000000000000c8 *
                                       (in_stack_000000c0 +
                                       fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 199) = fVar53;
            goto joined_r0x02494fac;
          }
          goto LAB_0249920c;
        }
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 unaff_s13 * fStack00000000000000ac +
                 fStack00000000000000c8 *
                 (in_stack_000000c0 +
                 fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
        uVar22 = (ulong)(uint)fVar53;
        fVar53 = *(float *)(unaff_x19 + 199) - fVar53;
        *(float *)(unaff_x19 + 199) = fVar53;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          fVar52 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar22 = (ulong)(uint)fVar52;
          fVar53 = fVar53 - fVar52;
          goto LAB_02495058;
        }
      }
      else {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar56 = *(float *)(unaff_x19 + 199);
        fVar53 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                          (*(float *)((long)unaff_x19 + 0x2a4) +
                          (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                          fStack00000000000000c8 *
                          (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar53;
joined_r0x02494fac:
        if ((unaff_w29 != 0) || (uVar22 = (ulong)(uint)fVar56, in_stack_000017bc == 0x200b)) {
          fVar52 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar22 = (ulong)(uint)fVar52;
          fVar53 = fVar53 + fVar52;
          goto LAB_02495058;
        }
      }
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0)) goto LAB_0249920c;
      uVar57 = *in_stack_00000148;
      uVar35 = (uint)*(undefined8 *)(lVar44 + 0x18);
      if (uVar35 <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(float *)(lVar44 + (int)uVar57 * unaff_x27 + 0x144) = fVar53;
      uVar39 = in_stack_000017bc;
      if ((int)in_stack_000017bc < 0xd) {
        if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
        if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
           ((float)uVar57 == in_stack_00000078._4_4_)) goto LAB_024950bc;
      }
      else {
        if (1 < in_stack_000017bc - 0x2028) {
          if (in_stack_000017bc != 0xd) goto FUN_02495710;
          uVar22 = 0;
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          if ((float)uVar57 != in_stack_00000078._4_4_) goto LAB_0249572c;
        }
LAB_024950bc:
        if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
          fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (((fStack000000000000004c < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
             && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
            FUN_024d6ca8(fVar52);
            *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar52;
            *(float *)(unaff_x19 + 0x9a) = fVar52 + *(float *)(unaff_x19 + 0x9a);
            puVar10 = System_Threading_Mutex_TypeInfo;
            lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *(long *)puVar10;
            }
            lVar44 = *(long *)(lVar30 + 0xb8);
            if (*(int *)(lVar44 + 0x7ac) == (int)unaff_x19[0x94]) {
              if (*(int *)(lVar30 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              FUN_013b8de4(lVar44 + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
              memcpy((void *)(*(long *)(lVar30 + 0xb8) + 0x788),&stack0x00000880,0x378);
              lVar30 = *(long *)(lVar30 + 0xb8);
              *(float *)(lVar30 + 0x7bc) = fVar52 + *(float *)(lVar30 + 0x7bc);
              *(float *)(lVar30 + 0x800) = fVar52 + *(float *)(lVar30 + 0x800);
              memcpy(&stack0x00000190,(void *)(lVar30 + 0x788),0x378);
              FUN_013b86dc(lVar30 + 0x11f0,&stack0x00000190,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
        }
        fVar53 = *(float *)(unaff_x19 + 0x9a);
        *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
        fVar56 = *(float *)((long)unaff_x19 + 0x4c4) - fVar53;
        fVar52 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar56 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar52 = fVar56;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar52;
        fVar54 = *(float *)(unaff_x19 + 0x98);
        if (unaff_x28[0xf34] == '\0') {
          in_stack_000017b8 = fVar52;
        }
        if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
           (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
            ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
          unaff_x28[0xf34] = 1;
        }
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x50), lVar44 == 0)) goto LAB_0249920c;
        uVar57 = *(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar44 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar44 + (long)(int)uVar57 * 0x5c;
        *(int *)(lVar36 + 0x34) = (int)unaff_x19[0x92];
        iVar14 = (int)unaff_x19[0x92];
        if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
          iVar14 = *(int *)((long)unaff_x19 + 0x494);
        }
        *(int *)((long)unaff_x19 + 0x494) = iVar14;
        *(int *)(lVar36 + 0x38) = iVar14;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        *(undefined4 *)(lVar36 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        iVar14 = *(int *)((long)unaff_x19 + 0x494);
        if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
          iVar14 = *(int *)((long)unaff_x19 + 0x49c);
        }
        *(int *)((long)unaff_x19 + 0x49c) = iVar14;
        *(int *)(lVar36 + 0x40) = iVar14;
        *(int *)(lVar36 + 0x24) = (*(int *)(lVar36 + 0x3c) - *(int *)(lVar36 + 0x34)) + 1;
        *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar67 = *(undefined4 *)
                  (lVar30 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
        lVar44 = lVar44 + (long)(int)uVar57 * 0x5c;
        *(float *)(lVar44 + 0x70) = fVar56;
        *(undefined4 *)(lVar44 + 0x6c) = uVar67;
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x50), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar67 = *(undefined4 *)
                  (lVar30 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
        fVar54 = fVar54 - fVar53;
        lVar44 = lVar44 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(float *)(lVar44 + 0x78) = fVar54;
        *(undefined4 *)(lVar44 + 0x74) = uVar67;
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar36 = *(long *)(lVar30 + 0x50), lVar36 == 0)) goto LAB_0249920c;
        lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar36 + lVar21 * 0x5c;
        *(float *)(lVar44 + 0x44) = *(float *)(lVar44 + 0x74) - unaff_s13 * in_stack_00000128;
        *(float *)(lVar44 + 0x5c) = fStack00000000000000d4;
        if (*(int *)(lVar44 + 0x24) == 1) {
          *(int *)(lVar36 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        if ((*in_stack_00000138 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0))
        goto LAB_0249920c;
        lVar48 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
        uVar35 = (uint)*(undefined8 *)(lVar44 + 0x18);
        if (uVar35 <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(char *)(lVar44 + lVar48 * unaff_x27 + 0x194) == '\0') &&
           (lVar48 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar35 <= *(uint *)(unaff_x19 + 0x93)))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (fStack00000000000000c8 *
                  (in_stack_000000c0 +
                  fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
                 *(float *)((long)unaff_x19 + 0x2a4));
        fVar52 = -fVar53;
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar52 = fVar53;
        }
        lVar36 = lVar36 + lVar21 * 0x5c;
        *(float *)(lVar36 + 0x58) = *(float *)(lVar44 + lVar48 * unaff_x27 + 0x144) + fVar52;
        fVar52 = *(float *)(unaff_x19 + 0x9a);
        *(float *)(lVar36 + 0x48) = fStack0000000000000050 + (fVar54 - fVar56);
        *(float *)(lVar36 + 0x4c) = fVar54;
        uVar22 = (ulong)(uint)(0.0 - fVar52);
        *(float *)(lVar36 + 0x50) = 0.0 - fVar52;
        *(float *)(lVar36 + 0x54) = fVar56;
        plVar45 = (long *)System_Threading_Mutex_TypeInfo;
        if ((int)in_stack_000017bc < 0x2d) {
          if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar49 = (long *)StringLiteral_302;
            FUN_024d69d4();
            lVar30 = unaff_x19[0x6c];
            *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
            iVar14 = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x94) = iVar14;
            *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            if ((lVar30 != 0) && (*(long *)(lVar30 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar30 + 0x50) + 0x18) <= iVar14) {
                FUN_024d6e60();
                lVar30 = unaff_x19[0x6c];
                if (lVar30 == 0) goto LAB_0249920c;
              }
              lVar30 = *(long *)(lVar30 + 0x38);
              if (lVar30 != 0) {
                if (*in_stack_00000148 < *(uint *)(lVar30 + 0x18)) {
                  fVar52 = *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    fVar56 = 0.0;
                    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                      fVar56 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar28 = 0;
                    fVar56 = *(float *)(unaff_x19 + 0x9a) +
                             fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar56);
                  }
                  else {
                    if ((in_stack_000017bc == 0x2029) || (fVar56 = 0.0, in_stack_000017bc == 10)) {
                      fVar56 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar28 = 1;
                    fVar56 = *(float *)(unaff_x19 + 0x9a) +
                             *(float *)(unaff_x19 + 0x57) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar56);
                  }
                  *(float *)(unaff_x19 + 0x9a) = fVar56;
                  *(undefined1 *)((long)unaff_x19 + 700) = uVar28;
                  lVar30 = *plVar45;
                  if (*(int *)(lVar30 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar30 = *plVar45;
                  }
                  uVar24 = *(undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x99) = fVar52;
                  uVar22 = NEON_rev64(uVar24,4);
                  unaff_x19[0x98] = uVar22;
                  *(float *)(unaff_x19 + 199) =
                       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
                  FUN_024d69d4();
                  FUN_024d69d4();
                  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  fStack0000000000000058 = 1.4013e-45;
                  bStack000000000000005c = 1;
                  goto LAB_02492630;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
            }
            goto LAB_0249920c;
          }
          if (in_stack_000017bc == 3) {
            if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
            in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
            uVar39 = 3;
          }
        }
        else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
      }
LAB_0249572c:
      uVar57 = *in_stack_00000148;
      if (uVar35 <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (*(char *)(lVar44 + (int)uVar57 * unaff_x27 + 0x194) != '\0') {
        lVar44 = lVar44 + (int)uVar57 * unaff_x27;
        uVar23 = *(ulong *)(lVar44 + 0x11c);
        uVar22 = *(ulong *)(in_stack_00000070 + 0x230);
        *(ulong *)(in_stack_00000070 + 0x230) =
             uVar23 ^ (uVar23 ^ uVar22) &
                      CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar23 >> 0x20)),
                               -(uint)((float)uVar22 < (float)uVar23));
        uVar23 = *(ulong *)(in_stack_00000070 + 0x238);
        uVar22 = *(ulong *)(lVar44 + 0x128);
        *(ulong *)(in_stack_00000070 + 0x238) =
             uVar22 ^ (uVar22 ^ uVar23) &
                      CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar23 >> 0x20)),
                               -(uint)((float)uVar22 < (float)uVar23));
      }
      if (((int)unaff_x19[0x5b] == 5) &&
         ((0xd < uVar39 || ((1 << (ulong)(uVar39 & 0x1f) & 0x2c00U) == 0)))) {
        lVar44 = *(long *)(lVar30 + 0x58);
        if (lVar44 == 0) goto LAB_0249920c;
        iVar14 = (int)unaff_x19[0x95] + 1;
        if (*(int *)(lVar44 + 0x18) < iVar14) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147c08((long *)(lVar30 + 0x58),iVar14,1,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
          lVar30 = *in_stack_00000150;
          if (lVar30 == 0) goto LAB_0249920c;
        }
        lVar44 = *(long *)(lVar30 + 0x58);
        if (lVar44 == 0) goto LAB_0249920c;
        uVar35 = *(uint *)(unaff_x19 + 0x95);
        lVar36 = (long)(int)uVar35;
        uVar57 = *(uint *)(lVar44 + 0x18);
        if (uVar57 <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar21 = lVar44 + lVar36 * 0x14;
        fVar56 = *(float *)(lVar21 + 0x30);
        uVar22 = (ulong)(uint)fVar56;
        *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        fVar52 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar56 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar52 = fVar56;
        }
        *(float *)(lVar21 + 0x30) = fVar52;
        uVar39 = *(uint *)((long)unaff_x19 + 0x48c);
        if (uVar39 == 0 && uVar35 == 0) {
          *(uint *)(lVar44 + lVar36 * 0x14 + 0x20) = uVar39;
        }
        else {
          uVar46 = uVar39 - 1;
          if (0 < (int)uVar39) {
            lVar30 = *(long *)(lVar30 + 0x38);
            if (lVar30 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) <= uVar46)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (uVar35 != *(uint *)(lVar30 + (long)(int)uVar46 * (long)iVar18 + 0x68)) {
              if (uVar35 - 1 < uVar57) {
                *(uint *)(lVar44 + 0x20 + (long)(int)(uVar35 - 1) * 0x14 + 4) = uVar46;
                *(uint *)(lVar44 + 0x20 + lVar36 * 0x14) = uVar39;
                goto LAB_024957b0;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
          }
          if ((float)uVar39 == in_stack_00000078._4_4_) {
            *(float *)(lVar44 + lVar36 * 0x14 + 0x24) = in_stack_00000078._4_4_;
          }
        }
      }
LAB_024957b0:
      puVar10 = System_Threading_Mutex_TypeInfo;
      if (((char)unaff_x19[0x5a] != '\0') ||
         ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
        if ((unaff_w29 == 0) &&
           (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
            (in_stack_000017bc != 0xad)))) {
          if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
            if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
                 (0xfd < in_stack_000017bc - 0x1101)) ||
                (uVar23 = FUN_024e95f0(0), (uVar23 & 1) != 0)) &&
               ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                 (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
            goto LAB_024958f0;
            lVar30 = FUN_024e94b0(0);
            if ((lVar30 == 0) || (*(long *)(lVar30 + 0x10) == 0)) goto LAB_0249920c;
            uVar23 = FUN_0129aa60(*(long *)(lVar30 + 0x10),&stack0x00000880,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                 );
            if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
              lVar30 = FUN_024e94b0(0);
              if (((lVar30 != 0) && (*in_stack_00000150 != 0)) &&
                 (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
                if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148 + 1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (*(long *)(lVar30 + 0x18) != 0) {
                  in_stack_00000880 =
                       (uint)*(ushort *)
                              (lVar44 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar18 + 0x20);
                  uVar26 = FUN_0129aa60(*(long *)(lVar30 + 0x18),&stack0x00000880,
                                        *(undefined8 *)
                                         System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                       );
                  if ((uVar23 & 1) != 0) goto LAB_02495adc;
                  if ((uVar26 & 1) == 0) goto LAB_02495bc4;
                  if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
                  goto LAB_024959d4;
                }
              }
              goto LAB_0249920c;
            }
            in_stack_00000880 = in_stack_000017bc;
            if ((uVar23 & 1) == 0) {
LAB_02495bc4:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
              bStack000000000000005c = 0;
              goto LAB_02495b70;
            }
LAB_02495adc:
            if (uVar15 != uVar19 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
joined_r0x02495af4:
            if (unaff_w29 != 0) goto LAB_02495af8;
          }
          else {
LAB_024958f0:
            if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
              bStack000000000000005c = 0;
              goto LAB_02495b70;
            }
            if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
            goto joined_r0x02495af4;
LAB_02495af8:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
          }
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 1;
        }
        else {
          if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
          if (((in_stack_000017bc - 0x2007 < 0x29) &&
              ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_02495868;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 0;
          *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
        }
      }
LAB_02495b70:
      plVar45 = (long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar49 = (long *)StringLiteral_302;
      FUN_024d69d4();
      *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    }
LAB_02492630:
    do {
      fVar52 = 1.0;
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar30 = unaff_x19[0x8e];
      if (lVar30 == 0) goto LAB_0249920c;
      if ((int)*(uint *)(lVar30 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
        fVar52 = (float)uVar22;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar52 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar52 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar56 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar52 < fVar56) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar63 = (*(float *)((long)unaff_x19 + 0x234) - fVar52) * 0.5;
            if (fVar63 <= DAT_028aa298) {
              fVar63 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar52;
            fVar63 = (fVar52 + fVar63) * 20.0 + 0.5;
            fVar52 = DAT_02958220;
            if (fVar63 != INFINITY) {
              fVar52 = (float)(int)fVar63 / 20.0;
            }
            if (fVar56 <= fVar52) {
              fVar52 = fVar56;
            }
            goto LAB_02495fd8;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar24 = FUN_0176eb1c(in_stack_00000038,0);
          uVar20 = FUN_017840ac(in_stack_00000040,0);
          uVar24 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar24,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar20,0);
          if (*(int *)(*plVar49 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar49);
          }
          FUN_02660dac(uVar24,0);
        }
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
          (**(code **)(*unaff_x19 + 0x948))();
          goto LAB_02496098;
        }
        lVar30 = *plVar45;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar45;
        }
        puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        lVar30 = **(long **)(lVar30 + 0xb8);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        iVar18 = *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar30 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        FUN_024e7d94(lVar30 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        iVar14 = (int)unaff_x19[0x4d];
        fStack00000000000000c8 =
             **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        _in_stack_000000c0 =
             *(undefined8 *)
              (*(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
        lVar30 = unaff_x19[0xe2];
        _in_stack_00000090 = _in_stack_000000c0;
        fStack0000000000000098 = fStack00000000000000c8;
        if (iVar14 < 0x401) {
          if (iVar14 == 0x100) {
            if (lVar30 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar24 = *(undefined8 *)(lVar30 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar44 = *(long *)(*in_stack_00000150 + 0x58), lVar44 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar44 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar52 = *(float *)(lVar44 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
            }
            else {
              fVar52 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar30 + 0x2c);
            fVar52 = (0.0 - fVar52) - fStack0000000000000020;
          }
          else if (iVar14 == 0x200) {
            if (lVar30 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fStack0000000000000098 = (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
            uVar24 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar30 + 0x24) +
                              (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar30 = lVar30 + (long)(int)uStack000000000000002c * 0x14;
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
              fVar52 = ((fStack0000000000000020 + *(float *)(lVar30 + 0x28) +
                        *(float *)(lVar30 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
              fVar52 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar14 != 0x400) goto LAB_024965d0;
            if (lVar30 == 0) goto LAB_0249920c;
            if (*(int *)(lVar30 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar24 = *(undefined8 *)(lVar30 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar44 = *(long *)(*in_stack_00000150 + 0x58), lVar44 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar44 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              in_stack_000017b8 =
                   *(float *)(lVar44 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
            }
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar30 + 0x20);
            fVar52 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          _in_stack_00000090 = CONCAT44((float)((ulong)uVar24 >> 0x20) + 0.0,(float)uVar24 + fVar52)
          ;
        }
        else if (iVar14 == 0x800) {
          if (lVar30 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar52 = ((float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30)) *
                   0.5;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
          _in_stack_00000090 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        fVar52 + 0.0);
        }
        else {
          if (iVar14 == 0x1000) {
            if (lVar30 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar52 = (float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30);
            fVar56 = (float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
          }
          else {
            if (iVar14 != 0x2000) goto LAB_024965d0;
            if (lVar30 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar52 = (float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30);
            fVar56 = (float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
          }
          fVar52 = fVar52 * 0.5;
          _in_stack_00000090 =
               CONCAT44(fVar56 * 0.5 + 0.0,
                        fVar52 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
        }
LAB_024965d0:
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        uVar24 = FUN_0285a188(unaff_x19[0xe4],0);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar10);
        }
        uVar22 = FUN_0268b4e0(uVar24,0,0);
        lVar30 = FUN_024c933c();
        if (lVar30 == 0) goto LAB_0249920c;
        FUN_026a125c(lVar30,0);
        *(float *)(unaff_x19 + 0xe1) = fVar52;
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        iVar14 = FUN_02859798(unaff_x19[0xe4],0);
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        fVar56 = (float)FUN_028598f0(unaff_x19[0xe4],0);
        __x = DAT_028aa048;
        dVar55 = modf(DAT_028aa048,(double *)&stack0x00000880);
        if (dVar55 == 0.5) {
          fVar63 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar63 = fVar63 + 1.0;
          }
        }
        else {
          fVar63 = 255.0;
        }
        dVar55 = modf(__x,(double *)&stack0x00000880);
        if (dVar55 == 0.5) {
          fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar53 = fVar53 + 1.0;
          }
        }
        else {
          fVar53 = 255.0;
        }
        dVar55 = modf(__x,(double *)&stack0x00000880);
        if (dVar55 == 0.5) {
          fVar54 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar54 = fVar54 + 1.0;
          }
        }
        else {
          fVar54 = 255.0;
        }
        dVar55 = modf(__x,(double *)&stack0x00000880);
        if (dVar55 == 0.5) {
          fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar51 = fVar51 + 1.0;
          }
        }
        else {
          fVar51 = 255.0;
        }
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037825d3 == '\0') {
          thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
          DAT_037825d3 = '\x01';
        }
        lVar30 = *(long *)puVar11;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *(long *)puVar11;
        }
        puVar31 = *(undefined4 **)(lVar30 + 0xb8);
        uVar23 = (ulong)(uint)puVar31[1];
        uVar26 = (ulong)(uint)puVar31[2];
        uVar58 = (ulong)(uint)puVar31[3];
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar31,uVar23,uVar26,uVar58,&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*plVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_0249920c;
        uVar15 = *in_stack_00000148;
        if ((int)uVar15 < 1) {
          fStack00000000000000ac = 0.0;
          iVar18 = 0;
          goto LAB_02498c58;
        }
        lVar30 = *(long *)(lVar30 + 0x38);
        fVar52 = ABS(fVar52);
        fVar60 = 1.0;
        if ((uVar22 & 1) == 0) {
          fVar60 = fVar52;
        }
        if (lVar30 == 0) goto LAB_0249920c;
        bVar9 = false;
        bVar12 = false;
        bVar8 = false;
        bVar13 = false;
        uStack0000000000000060 =
             (int)fVar63 & 0xffU | ((int)fVar53 & 0xffU) << 8 | ((int)fVar54 & 0xffU) << 0x10 |
             (int)fVar51 << 0x18;
        fStack00000000000000d0 = *(float *)(*(long *)(*plVar45 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
        fStack0000000000000058 = fStack00000000000000b0;
        _bStack000000000000005c = 0.0;
        fStack0000000000000034 = 0.0;
        fStack0000000000000088 = 0.0;
        fStack0000000000000030 = 0.0;
        uVar19 = 0;
        iVar50 = 0;
        lVar44 = 0x2e0;
        fVar53 = 0.0;
        fVar63 = 0.0;
        fStack00000000000000ac = 0.0;
        fStack0000000000000020 = 0.0;
        fStack000000000000004c = 0.0;
        fStack00000000000000a4 = fStack00000000000000b0;
        fStack00000000000000a8 = fStack00000000000000b4;
        fStack0000000000000050 = fStack00000000000000b4;
        fStack0000000000000054 = (float)uStack00000000000000a0;
        in_stack_00000078._4_4_ = fStack00000000000000b4;
        fStack0000000000000080 = fStack00000000000000b0;
        in_stack_00000068._4_4_ = uStack00000000000000a0;
        uVar57 = 0;
        uVar35 = 1;
        goto LAB_02496a50;
      }
      if (*(uint *)(lVar30 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar15 = *(uint *)(lVar30 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar15 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar24 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar20 = FUN_0176eb1c(&stack0x00001788,0);
        uVar24 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar24,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar20,0);
        if (*(int *)(*plVar49 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar49);
        }
        FUN_026610e4(uVar24,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar15 != 0x3c)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar30 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar30 + 0x58);
        unaff_x19[0x1f] = *(long *)(lVar30 + 0x38);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        uVar23 = FUN_024d0688();
        if (((uVar23 & 1) != 0) &&
           (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar15,
           *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
      }
      if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      uVar19 = *in_stack_00000148;
      if (*(uint *)(lVar30 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = (long)(int)uVar19;
      bVar3 = *(byte *)(lVar30 + lVar36 * unaff_x27 + 0x5c);
      unaff_w21 = (uint)bVar3;
      *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
      lVar44 = unaff_x19[0x23];
      if ((uint)in_stack_000017a8 == uVar19) {
        uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
        unaff_w20 = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        if (uVar15 == 0x2026) {
          lVar21 = unaff_x19[0xc9];
          lVar30 = lVar30 + lVar36 * unaff_x27;
          *(undefined4 *)(lVar30 + 0x2c) = 0;
          *(long *)(lVar30 + 0x30) = lVar21;
          *(long *)(lVar30 + 0x38) = unaff_x19[0xca];
          *(long *)(lVar30 + 0x50) = unaff_x19[0xcb];
          *(int *)(lVar30 + 0x58) = (int)unaff_x19[0xcc];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
        }
        else if (uVar15 == 3) {
          if ((*in_stack_00000138 == 0) ||
             (lVar21 = FUN_024b11ac(*in_stack_00000138,0), lVar21 == 0)) goto LAB_0249920c;
          FUN_01299bc0(lVar21,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
          if (*(uint *)(lVar30 + 0x18) <= uVar19)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          unaff_w20 = 1;
          *(ulong *)(lVar30 + lVar36 * unaff_x27 + 0x30) =
               CONCAT44(in_stack_00000884,in_stack_00000880);
          uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      else {
        unaff_w20 = 0;
      }
      in_stack_000017bc = uVar15;
      if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)uVar19 * (long)iVar18;
        *(undefined1 *)(lVar30 + 0x194) = 0;
        *(undefined2 *)(lVar30 + 0x20) = 0x200b;
        *(undefined4 *)(lVar30 + 100) = 0;
        *in_stack_00000148 = uVar19 + 1;
        goto LAB_02492630;
      }
      iVar14 = *(int *)((long)unaff_x19 + 0x63c);
      fVar56 = fVar52;
      if (iVar14 == 0) {
        uVar19 = *(uint *)((long)unaff_x19 + 0x254);
        if ((uVar19 >> 4 & 1) == 0) {
          if ((uVar19 >> 3 & 1) == 0) {
            if ((uVar19 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar23 = FUN_016f92d4(uVar15,0);
              if ((uVar23 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar15 = FUN_016f95a8(uVar15,0);
                uVar15 = uVar15 & 0xffff;
                fVar56 = fStack0000000000000028;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar23 = FUN_016f9218(uVar15,0);
            if ((uVar23 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_016f9724(uVar15,0);
              goto LAB_02492a0c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar23 = FUN_016f92d4(uVar15,0);
          fVar56 = 1.0;
          if ((uVar23 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
            uVar15 = uVar15 & 0xffff;
            fVar56 = 1.0;
          }
        }
        iVar14 = *(int *)((long)unaff_x19 + 0x63c);
        in_stack_000017bc = uVar15;
        if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
        if (iVar14 != 1) {
          lVar30 = *in_stack_00000150;
          in_stack_000000f0 = CONCAT44(fVar56,fVar63);
          fVar52 = 0.0;
          if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
            fVar52 = unaff_s13;
          }
          in_stack_00000130._4_4_ = 0.0;
          if (lVar30 == 0) goto LAB_0249920c;
          in_stack_00000120 = 0.0;
          in_stack_00000110 = 0.0;
          fStack00000000000000d0 = unaff_s13;
          goto LAB_02492e2c;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
        lVar36 = *(long *)(lVar30 + 0x40);
        unaff_x19[0xd2] = lVar36;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar30 + 0x48);
        if ((lVar36 == 0) || (lVar30 = FUN_024ebfa0(lVar36,0), lVar30 == 0)) goto LAB_0249920c;
        FUN_0132138c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        lVar36 = CONCAT44(in_stack_00000884,in_stack_00000880);
        if (lVar36 != 0) {
          if (in_stack_000017bc == 0x3c) {
            in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          }
          else {
            lVar30 = *plVar45;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *plVar45;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                 *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
          fVar53 = *(float *)(unaff_x19 + 0x3c);
          memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
          iVar14 = FUN_026fd110(&stack0x00001700,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
          fVar51 = (float)FUN_026fd120(&stack0x00001700,0);
          fVar54 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar54 = 1.0;
          }
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fVar54 = (fVar53 / (float)iVar14) * fVar51 * fVar54;
          iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          fVar53 = *(float *)(unaff_x19 + 0x3c);
          if (iVar14 < 1) {
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar51 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
            in_stack_00000110 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              in_stack_00000110 = fVar52;
            }
            if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
            fVar52 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
            if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0249920c;
            FUN_026fd62c(&stack0x00000880,*(long *)(lVar36 + 0x20),0);
            fVar60 = (float)FUN_026fd45c(&stack0x000016e0,0);
            if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0249920c;
            fVar61 = *(float *)(lVar36 + 0x2c);
            fVar64 = (float)FUN_026fd668(*(long *)(lVar36 + 0x20),0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar66 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
            if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
            in_stack_00000130._4_4_ = fVar54 * fVar66 * fVar59 * in_stack_00000130._4_4_;
            in_stack_00000110 = (fVar53 / (float)iVar14) * fVar51 * in_stack_00000110;
            fStack00000000000000d0 = in_stack_00000110 * (fVar52 / fVar60) * fVar61 * fVar64;
            in_stack_00000110 = in_stack_00000110 / fStack00000000000000d0;
            in_stack_00000120 = in_stack_00000110 * in_stack_00000120;
            fVar52 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000110 = in_stack_00000110 * fVar52;
          }
          else {
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar52 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (*(long *)(lVar36 + 0x20) == 0) goto LAB_0249920c;
            fVar60 = *(float *)(lVar36 + 0x2c);
            fVar51 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar51 = 1.0;
            }
            fVar61 = (float)FUN_026fd668(*(long *)(lVar36 + 0x20),0);
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            in_stack_00000120 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar64 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000130._4_4_ = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            in_stack_00000130._4_4_ = fVar54 * fVar64 * fVar66 * in_stack_00000130._4_4_;
            fStack00000000000000d0 = (fVar53 / (float)iVar14) * fVar52 * fVar51 * fVar60 * fVar61;
            in_stack_00000110 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
          }
          lVar30 = unaff_x19[0x6c];
          unaff_x19[200] = lVar36;
          if ((lVar30 == 0) || (lVar36 = *(long *)(lVar30 + 0x38), lVar36 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar36 = lVar36 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)(lVar36 + 0x2c) = 1;
          *(float *)(lVar36 + 0x160) = fStack00000000000000d0;
          in_stack_00000128 = 0.0;
          *(long *)(lVar36 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar36 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar36 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar44;
          goto LAB_02492e14;
        }
        goto LAB_02492630;
      }
      if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      uVar19 = *in_stack_00000148;
      uVar15 = *(uint *)(lVar30 + 0x18);
      if (uVar15 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = *(long *)(lVar30 + (int)uVar19 * unaff_x27 + 0x30);
      unaff_x19[200] = lVar44;
    } while (lVar44 == 0);
    lVar36 = lVar30 + (int)uVar19 * unaff_x27;
    lVar44 = *(long *)(lVar36 + 0x38);
    unaff_x19[0x1f] = lVar44;
    unaff_x19[0x22] = *(long *)(lVar36 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar36 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar44 == 0) goto LAB_0249920c;
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar44 + 0x50,0);
      lVar30 = unaff_x19[0x1f];
    }
    else {
      lVar36 = unaff_x19[0x8e];
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar36 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar44 == 0) goto LAB_0249920c;
      fVar53 = *(float *)(lVar30 + (long)(int)(uVar19 - 1) * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(lVar44 + 0x50,0);
      lVar30 = *in_stack_00000138;
    }
    if (lVar30 == 0) goto LAB_0249920c;
    fVar51 = (float)FUN_026fd120(lVar30 + 0x50,0);
    fVar54 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar54 = fVar52;
    }
    in_stack_00000110 = 0.0;
    in_stack_00000120 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      in_stack_00000110 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar30 = unaff_x19[200];
    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
    fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar60 = *(float *)(lVar30 + 0x2c);
    fStack00000000000000d0 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar61 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
    in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar30 = unaff_x19[0x6c];
    if ((lVar30 == 0) || (lVar44 = *(long *)(lVar30 + 0x38), lVar44 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar44 + 0x2c) = 0;
    fVar54 = ((fVar56 * fVar53) / (float)iVar14) * fVar51 * fVar54;
    fStack00000000000000d0 = fVar54 * fVar52 * fVar60 * fStack00000000000000d0;
    *(float *)(lVar44 + 0x160) = fStack00000000000000d0;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    in_stack_00000130._4_4_ = fVar54 * fVar61 * fVar64 * in_stack_00000130._4_4_;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar44 = unaff_x19[0xe0];
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = *(long *)(lVar44 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar44 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar44 + 0x104);
    }
LAB_02492e14:
    in_stack_000000f0 = CONCAT44(fVar56,fVar63);
    fVar52 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar52 = fStack00000000000000d0;
    }
LAB_02492e2c:
    unaff_s12 = 1.0;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
    *(short *)(lVar30 + 0x20) = (short)in_stack_000017bc;
    *(int *)(lVar30 + 0x60) = (int)unaff_x19[0x3c];
    *(undefined4 *)(lVar30 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
    if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
    if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined4 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x154);
    if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    uVar15 = *in_stack_00000148;
    FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)uVar15 * unaff_x27;
    *(undefined4 *)(lVar30 + 0x18c) = in_stack_00000890;
    *(undefined8 *)(lVar30 + 0x184) = in_stack_00000888;
    *(ulong *)(lVar30 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined4 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x254);
    if ((unaff_x19[200] == 0) || (lVar30 = *(long *)(unaff_x19[200] + 0x20), lVar30 == 0))
    goto LAB_0249920c;
    FUN_026fd62c(&stack0x00000bf8,lVar30,0);
    puVar10 = 
    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
    unaff_x28 = &stack0x00000880;
    if ((int)in_stack_000017bc < 0x10000) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_016f68bc(in_stack_000017bc,0);
      unaff_w29 = uVar15 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
      fStack00000000000000ac = 0.0;
      fVar63 = 0.0;
      fVar56 = 0.0;
    }
    else {
      if (unaff_x19[200] == 0) goto LAB_0249920c;
      uVar19 = *in_stack_00000148;
      uVar15 = *(uint *)(unaff_x19[200] + 0x28);
      if ((int)uVar19 < (int)in_stack_00000078._4_4_) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar19 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = *(long *)(lVar30 + (long)(int)(uVar19 + 1) * (long)iVar18 + 0x30);
        if ((((lVar30 == 0) || (*in_stack_00000138 == 0)) ||
            (lVar44 = *(long *)(*in_stack_00000138 + 0x128), lVar44 == 0)) ||
           (lVar44 = *(long *)(lVar44 + 0x18), lVar44 == 0)) goto LAB_0249920c;
        in_stack_00000880 = uVar15 | *(int *)(lVar30 + 0x28) << 0x10;
        uVar22 = FUN_0129eff4(lVar44,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        uVar67 = 0;
        if ((uVar22 & 1) == 0) {
          fStack00000000000000ac = 0.0;
          fVar63 = 0.0;
          fVar56 = 0.0;
        }
        else {
          if (in_stack_000016d8 == 0) goto LAB_0249920c;
          fVar56 = *(float *)(in_stack_000016d8 + 0x14);
          fVar63 = *(float *)(in_stack_000016d8 + 0x18);
          fStack00000000000000ac = *(float *)(in_stack_000016d8 + 0x1c);
          uVar67 = *(undefined4 *)(in_stack_000016d8 + 0x20);
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
        uVar19 = *in_stack_00000148;
      }
      else {
        uVar67 = 0;
        fStack00000000000000ac = 0.0;
        fVar63 = 0.0;
        fVar56 = 0.0;
      }
      if (0 < (int)uVar19) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= (uint)((long)(int)uVar19 + -1))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = *(long *)(lVar30 + ((long)(int)uVar19 + -1) * unaff_x27 + 0x30);
        if (((lVar30 == 0) || (*in_stack_00000138 == 0)) ||
           ((lVar44 = *(long *)(*in_stack_00000138 + 0x128), lVar44 == 0 ||
            (lVar44 = *(long *)(lVar44 + 0x18), lVar44 == 0)))) goto LAB_0249920c;
        in_stack_00000880 = *(uint *)(lVar30 + 0x28) | uVar15 << 0x10;
        uVar22 = FUN_0129eff4(lVar44,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        if ((uVar22 & 1) != 0) {
          if ((in_stack_000016d8 == 0) ||
             (fVar56 = (float)FUN_024bb1bc(fVar56,fVar63,fStack00000000000000ac,uVar67,
                                           *(undefined4 *)(in_stack_000016d8 + 0x28),
                                           *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                           *(undefined4 *)(in_stack_000016d8 + 0x30),
                                           *(undefined4 *)(in_stack_000016d8 + 0x34),0),
             in_stack_000016d8 == 0)) goto LAB_0249920c;
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
      }
      *(float *)((long)unaff_x19 + 0x2f4) = fStack00000000000000ac;
    }
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar54 = *(float *)(unaff_x19 + 199);
      fVar53 = (float)FUN_026fd474(&stack0x00001770,0);
      fVar54 = fVar54 - fVar52 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
      *(float *)(unaff_x19 + 199) = fVar54;
      if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
        *(float *)(unaff_x19 + 199) =
             fVar54 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      }
    }
    fVar53 = *(float *)(unaff_x19 + 0x55);
    fStack0000000000000080 = 0.0;
    if (fVar53 != 0.0) {
      fVar54 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack0000000000000080 =
           (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fVar53 * 0.5 - fVar52 * (fVar54 * 0.5 + fVar51));
      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
    }
    if (((bVar3 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
      lVar30 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_02681b9c(lVar30,0,0);
      unaff_s9 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar30 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar30 == 0) goto LAB_0249920c;
        uVar22 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        unaff_s9 = 0.0;
        if ((uVar22 & 1) != 0) {
          lVar30 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar30 == 0) goto LAB_0249920c;
          fVar53 = (float)FUN_0267f610(lVar30,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
          fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          unaff_s9 = fVar54 * fVar53 * fVar51 * 0.25;
          if (fVar53 < in_stack_00000128 + unaff_s9) {
            in_stack_00000128 = fVar53 - unaff_s9;
          }
        }
      }
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
    }
    else {
      lVar30 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_02681b9c(lVar30,0,0);
      in_stack_000000c0 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar30 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar30 == 0) goto LAB_0249920c;
        uVar22 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((uVar22 & 1) != 0) {
          lVar30 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar30 == 0) goto LAB_0249920c;
          uVar22 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          if ((uVar22 & 1) != 0) {
            lVar30 = unaff_x19[0x22];
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar30 != 0) {
              fVar53 = (float)FUN_0267f610(lVar30,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
              if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                fVar51 = *(float *)(*in_stack_00000138 + 0x1a8);
                fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                unaff_s9 = fVar54 * fVar53 * fVar51 * 0.25;
                if (fVar53 < in_stack_00000128 + unaff_s9) {
                  in_stack_00000128 = fVar53 - unaff_s9;
                }
                goto LAB_024934bc;
              }
            }
            goto LAB_0249920c;
          }
        }
      }
      unaff_s9 = 0.0;
    }
LAB_024934bc:
    fVar54 = *(float *)(unaff_x19 + 199);
    fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
    unaff_s15 = fVar54 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                         fVar52 * (fVar56 + ((fVar53 - in_stack_00000128) - unaff_s9));
    fVar56 = (float)FUN_026fd46c(&stack0x00001770,0);
    unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                ((in_stack_00000130._4_4_ + fVar52 * (fVar63 + in_stack_00000128 + fVar56)) -
                *(float *)(unaff_x19 + 0x9a));
    fVar56 = (float)FUN_026fd45c(&stack0x00001770,0);
    unaff_s8 = in_stack_00000128 + in_stack_00000128;
    param_1 = fVar52 * (unaff_s8 + fVar56);
    param_2 = &stack0x00001770;
    param_3 = 0;
    unaff_x23 = in_stack_00000150;
    unaff_x24 = in_stack_00000148;
    unaff_s13 = fVar52;
  } while( true );
LAB_02496a50:
  do {
    uVar15 = uVar35 - 1;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x50), lVar36 == 0))
    goto LAB_0249920c;
    lVar48 = (long)(int)uVar15;
    lVar21 = lVar30 + lVar48 * 0x178;
    uVar39 = *(uint *)(lVar21 + 100);
    if (*(uint *)(lVar36 + 0x18) <= uVar39)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = *(long *)(lVar21 + 0x38);
    uVar4 = *(ushort *)(lVar21 + 0x20);
    lVar38 = (long)(int)uVar39;
    lVar36 = lVar36 + lVar38 * 0x5c;
    uVar6 = *(uint *)(lVar36 + 0x3c);
    iVar16 = *(int *)(lVar36 + 0x28);
    iVar17 = *(int *)(lVar36 + 0x2c);
    uVar7 = *(uint *)(lVar36 + 0x40);
    lVar21 = (long)(int)uVar7;
    uVar46 = *(uint *)(lVar36 + 0x68);
    fVar65 = *(float *)(lVar36 + 0x5c);
    fVar69 = *(float *)(lVar36 + 0x60);
    iVar2 = *(int *)(lVar36 + 0x20);
    fVar61 = *(float *)(lVar36 + 0x4c);
    fVar66 = *(float *)(lVar36 + 0x54);
    fVar54 = *(float *)(lVar36 + 0x58);
    fVar62 = *(float *)(lVar36 + 0x6c);
    fVar59 = *(float *)(lVar36 + 0x70);
    fVar51 = *(float *)(lVar36 + 0x74);
    fVar64 = *(float *)(lVar36 + 0x78);
    fVar68 = fVar65 + fVar69;
    uVar43 = (uint)uVar4;
    if ((int)uVar46 < 9) {
      switch(uVar46) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar69 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar54;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar69 + fVar65 * 0.5) - fVar54 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar68 - fVar54;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar68;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      _in_stack_000000c0 = 0;
    }
    else if (uVar46 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar43 != 3) && (uVar43 != 10)) goto LAB_02496bac;
      }
      else if ((uVar43 != 0xad) && ((uVar43 != 0x200b && (uVar43 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar30 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar30 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9f84(uVar5,0);
        if ((uVar22 & 1) == 0) {
          bVar1 = (int)uVar39 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar54 <= fVar65) && (!bVar1 && (uVar46 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar69;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar68;
          }
          goto LAB_02496c90;
        }
        if (((uVar35 == 1) || (uVar39 != uVar57)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar69;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar68;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          _in_stack_000000c0 = 0;
        }
        else {
          cVar29 = (char)unaff_x19[0x1d];
          fVar68 = -fVar54;
          if (cVar29 != '\0') {
            fVar68 = fVar54;
          }
          if (*(uint *)(lVar30 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar54 = 1.0;
          iVar17 = (int)*(char *)(lVar30 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar43 == 9) {
LAB_02498bb8:
            fVar54 = 1.0 - fVar54;
          }
          else {
            if (uVar43 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016fa418(uVar4,0);
              cVar29 = (char)unaff_x19[0x1d];
              if ((uVar22 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar54 = ((fVar65 + fVar68) * fVar54) / (float)iVar17;
          if (cVar29 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar54;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar54;
          }
        }
      }
    }
    else if (uVar46 == 0x20) {
      fVar54 = fVar62 + fVar51;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar46 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar46 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar30 + lVar48 * 0x178;
    fVar68 = fStack0000000000000098 + fStack00000000000000c8;
    fVar54 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar65 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar30 + lVar48 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar39,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar32 = lVar30 + lVar48 * 0x178;
      *(undefined4 *)(lVar32 + 0x84) = 0;
      *(undefined4 *)(lVar32 + 0xac) = 0;
      *(undefined4 *)(lVar32 + 0xd4) = 0x3f800000;
      fVar53 = 1.0;
      break;
    case 1:
      fVar64 = *(float *)(lVar30 + lVar48 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar32 = lVar30 + lVar48 * 0x178;
        fVar51 = (fStack00000000000000c8 + fVar64) - *(float *)(in_stack_00000070 + 0x230);
        fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar32 = lVar30 + lVar48 * 0x178;
      fVar51 = fVar51 - fVar62;
      *(float *)(lVar32 + 0x84) = fVar53 + (fVar64 - fVar62) / fVar51;
      *(float *)(lVar32 + 0xac) = fVar53 + (*(float *)(lVar32 + 0x98) - fVar62) / fVar51;
      *(float *)(lVar32 + 0xd4) = fVar53 + (*(float *)(lVar32 + 0xc0) - fVar62) / fVar51;
      fVar53 = fVar53 + (*(float *)(lVar32 + 0xe8) - fVar62) / fVar51;
      break;
    case 2:
      lVar32 = lVar30 + lVar48 * 0x178;
      fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar51 = (fStack00000000000000c8 + *(float *)(lVar32 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar32 + 0x84) = fVar53 + fVar51 / fVar64;
      *(float *)(lVar32 + 0xac) =
           fVar53 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar32 + 0xd4) =
           fVar53 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar53 = fVar53 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar32 = lVar30 + lVar48 * 0x178;
        *(undefined4 *)(lVar32 + 0x88) = 0;
        *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xd8) = 0;
        *(undefined4 *)(lVar32 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar32 = lVar30 + lVar48 * 0x178;
        fVar64 = fVar64 - fVar59;
        fVar51 = fVar53 + (*(float *)(lVar32 + 0x74) - fVar59) / fVar64;
        fVar64 = fVar53 + (*(float *)(lVar32 + 0x9c) - fVar59) / fVar64;
        *(float *)(lVar32 + 0x88) = fVar51;
        *(float *)(lVar32 + 0xb0) = fVar64;
        *(float *)(lVar32 + 0xd8) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar64;
        break;
      case 2:
        lVar32 = lVar30 + lVar48 * 0x178;
        fVar51 = fVar53 + (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar32 + 0x88) = fVar51;
        fVar64 = *(float *)(unaff_x19 + 0x9b);
        fVar59 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar32 + 0xd8) = fVar51;
        fVar51 = fVar53 + (*(float *)(lVar32 + 0x9c) - fVar64) / (fVar59 - fVar64);
        *(float *)(lVar32 + 0xb0) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar46 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar46 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar48 * 0x178;
      fVar51 = *(float *)(lVar32 + 0x15c);
      fVar64 = (1.0 - (*(float *)(lVar32 + 0x88) + *(float *)(lVar32 + 0xb0)) * fVar51) * 0.5;
      fVar59 = fVar53 + *(float *)(lVar32 + 0x88) * fVar51 + fVar64;
      fVar53 = fVar53 + fVar64 + *(float *)(lVar32 + 0xb0) * fVar51;
      *(float *)(lVar32 + 0x84) = fVar59;
      *(float *)(lVar32 + 0xac) = fVar59;
      *(float *)(lVar32 + 0xd4) = fVar53;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar30 + lVar48 * 0x178 + 0xfc) = fVar53;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar46 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar48 * 0x178;
      *(undefined4 *)(lVar32 + 0x88) = 0;
      *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar46) {
        lVar32 = lVar30 + lVar48 * 0x178;
        fVar61 = fVar61 - fVar66;
        fVar53 = (*(float *)(lVar32 + 0x74) - fVar66) / fVar61;
        fVar61 = (*(float *)(lVar32 + 0x9c) - fVar66) / fVar61;
        *(float *)(lVar32 + 0x88) = fVar53;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar46 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar48 * 0x178;
      fVar53 = (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar32 + 0x88) = fVar53;
      fVar61 = (*(float *)(lVar32 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar32 + 0xb0) = fVar61;
      *(float *)(lVar32 + 0xd8) = fVar61;
      *(float *)(lVar32 + 0x100) = fVar53;
      break;
    case 3:
      if (uVar46 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar48 * 0x178;
      fVar61 = *(float *)(lVar32 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar32 + 0x84) + *(float *)(lVar32 + 0xd4)) / fVar61) * 0.5;
      fVar53 = *(float *)(lVar32 + 0x84) / fVar61 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar32 + 0xd4) / fVar61;
      *(float *)(lVar32 + 0x88) = fVar53;
      *(float *)(lVar32 + 0xb0) = fVar51;
      *(float *)(lVar32 + 0x100) = fVar53;
      *(float *)(lVar32 + 0xd8) = fVar51;
    }
    if (uVar46 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar32 = lVar30 + lVar48 * 0x178;
    fVar53 = *(float *)(lVar32 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar32 + 0x5c) == '\0') && ((*(byte *)(lVar30 + lVar48 * 0x178 + 400) & 1) != 0))
    {
      fVar53 = -fVar53;
    }
    fVar51 = fVar52;
    if (((iVar14 == 2) || (fVar51 = fVar60, iVar14 == 1)) || (fVar51 = fVar52 / fVar56, iVar14 == 0)
       ) {
      fVar53 = fVar51 * fVar53;
    }
    lVar32 = lVar30 + lVar48 * 0x178;
    fVar61 = *(float *)(lVar32 + 0x88);
    fVar64 = *(float *)(lVar32 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar64 != INFINITY) {
      fVar51 = (float)(int)fVar64;
    }
    fVar59 = *(float *)(lVar32 + 0xd4);
    fVar62 = *(float *)(lVar32 + 0xd8);
    fVar66 = -2.1474836e+09;
    if (fVar61 != INFINITY) {
      fVar66 = (float)(int)fVar61;
    }
    uVar67 = FUN_024e0374(fVar64 - fVar51,fVar61 - fVar66);
    *(undefined4 *)(lVar32 + 0x84) = uVar67;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar62 = fVar62 - fVar66;
    *(float *)(lVar32 + 0x88) = fVar53;
    uVar67 = FUN_024e0374(fVar64 - fVar51,fVar62);
    *(undefined4 *)(lVar30 + lVar48 * 0x178 + 0xac) = uVar67;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar59 = fVar59 - fVar51;
    *(float *)(lVar30 + lVar48 * 0x178 + 0xb0) = fVar53;
    fVar51 = (float)FUN_024e0374(fVar59,fVar62);
    *(float *)(lVar32 + 0xd4) = fVar51;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar32 + 0xd8) = fVar53;
    uVar67 = FUN_024e0374(fVar59,fVar61 - fVar66);
    *(undefined4 *)(lVar30 + lVar48 * 0x178 + 0xfc) = uVar67;
    uVar46 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar46 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar30 + lVar48 * 0x178 + 0x100) = fVar53;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= (int)fStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar39 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar46 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar30 + lVar48 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar65 + *(float *)(lVar36 + 0x78);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar30 + lVar48 * 0x178;
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar65 + *(float *)(lVar36 + 0xa0);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar30 + lVar48 * 0x178;
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar65 + *(float *)(lVar36 + 200);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar30 + lVar48 * 0x178;
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar65 + *(float *)(lVar36 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar34 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar39 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar46 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar30 + lVar48 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar36 = lVar30 + lVar48 * 0x178;
        *(ulong *)(lVar36 + 0x70) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar36 + 0x70));
        *(float *)(lVar36 + 0x78) = fVar65 + *(float *)(lVar36 + 0x78);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar30 + lVar48 * 0x178;
        *(ulong *)(lVar36 + 0x98) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar36 + 0x98));
        *(float *)(lVar36 + 0xa0) = fVar65 + *(float *)(lVar36 + 0xa0);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar30 + lVar48 * 0x178;
        *(ulong *)(lVar36 + 0xc0) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar36 + 0xc0));
        *(float *)(lVar36 + 200) = fVar65 + *(float *)(lVar36 + 200);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar30 + lVar48 * 0x178;
        *(ulong *)(lVar36 + 0xe8) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar36 + 0xe8));
        *(float *)(lVar36 + 0xf0) = fVar65 + *(float *)(lVar36 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar46 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar32 = lVar30 + lVar48 * 0x178;
        uVar67 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar32 + 0x78) = uVar67;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar48 * 0x178;
        uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xa0) = uVar67;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar48 * 0x178;
        uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 200) = uVar67;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar48 * 0x178;
        uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xf0) = uVar67;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar36 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar34 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar34)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar48 * 0x178;
    uVar24 = *(undefined8 *)(lVar36 + 0x11c);
    *(undefined8 *)(lVar36 + 0x11c) =
         CONCAT44(fVar54 + (float)((ulong)uVar24 >> 0x20),fVar68 + (float)uVar24);
    *(float *)(lVar36 + 0x124) = fVar65 + *(float *)(lVar36 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar48 * 0x178;
    *(ulong *)(lVar36 + 0x110) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar36 + 0x110));
    *(float *)(lVar36 + 0x118) = fVar65 + *(float *)(lVar36 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar48 * 0x178;
    *(ulong *)(lVar36 + 0x128) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar36 + 0x128));
    *(float *)(lVar36 + 0x130) = fVar65 + *(float *)(lVar36 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar48 * 0x178;
    *(float *)(lVar36 + 0x134) = fVar68 + *(float *)(lVar36 + 0x134);
    *(ulong *)(lVar36 + 0x138) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar36 + 0x138));
    lVar36 = *in_stack_00000150;
    if ((lVar36 == 0) || (lVar32 = *(long *)(lVar36 + 0x38), lVar32 == 0)) goto LAB_0249920c;
    uVar46 = *(uint *)(lVar32 + 0x18);
    if (uVar46 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar41 = lVar32 + lVar48 * 0x178;
    uVar23 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar41 + 0x140) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar41 + 0x140));
    fVar51 = fVar54 + *(float *)(lVar41 + 0x150);
    uVar26 = (ulong)(uint)fVar51;
    uVar58 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar41 + 0x148) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar41 + 0x148));
    *(ulong *)(lVar41 + 0x140) = uVar23;
    *(ulong *)(lVar41 + 0x148) = uVar58;
    *(float *)(lVar41 + 0x150) = fVar51;
    if (uVar39 == uVar57) {
      uVar57 = *in_stack_00000148 - 1;
      if (uVar15 == uVar57) goto LAB_0249788c;
    }
    else {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar41 = (long)(int)uVar57;
      lVar42 = lVar36 + lVar41 * 0x5c;
      uVar58 = (ulong)(uint)*(float *)(lVar42 + 0x58);
      fVar51 = fVar54 + *(float *)(lVar42 + 0x54);
      uVar23 = (ulong)(uint)fVar51;
      fVar61 = fVar68 + *(float *)(lVar42 + 0x58);
      uVar26 = (ulong)(uint)fVar61;
      *(ulong *)(lVar42 + 0x4c) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar42 + 0x4c));
      *(float *)(lVar42 + 0x54) = fVar51;
      *(float *)(lVar42 + 0x58) = fVar61;
      if (uVar46 <= *(uint *)(lVar42 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar67 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar36 = lVar36 + lVar41 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar51;
      *(undefined4 *)(lVar36 + 0x6c) = uVar67;
      lVar36 = *in_stack_00000150;
      if ((lVar36 == 0) || (lVar32 = *(long *)(lVar36 + 0x50), lVar32 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0249920c;
      uVar57 = *(uint *)(lVar32 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar41 * 0x5c;
      *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar57 * 0x178 + 0x128);
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      uVar57 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar57) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar32 = *(long *)(lVar36 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar41 = lVar32 + lVar38 * 0x5c;
        uVar58 = (ulong)(uint)*(float *)(lVar41 + 0x58);
        uVar23 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                          fVar54 + (float)*(undefined8 *)(lVar41 + 0x4c));
        fVar51 = fVar54 + *(float *)(lVar41 + 0x54);
        fVar68 = fVar68 + *(float *)(lVar41 + 0x58);
        uVar26 = (ulong)(uint)fVar68;
        *(ulong *)(lVar41 + 0x4c) = uVar23;
        *(float *)(lVar41 + 0x54) = fVar51;
        *(float *)(lVar41 + 0x58) = fVar68;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar41 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar67 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
        lVar32 = lVar32 + lVar38 * 0x5c;
        *(float *)(lVar32 + 0x70) = fVar51;
        *(undefined4 *)(lVar32 + 0x6c) = uVar67;
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar32 = *(long *)(lVar36 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        uVar57 = *(uint *)(lVar32 + lVar38 * 0x5c + 0x40);
        if (*(uint *)(lVar36 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar38 * 0x5c;
        *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar57 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_016f9468(uVar43,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if (bVar12) {
        if (((uVar35 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar30 + 0x18) <= uVar35 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar30 + lVar44 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f9468(uVar5,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar35)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar30 + lVar44 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f9468(uVar5,0);
            if ((uVar22 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar35 != 1) {
LAB_024985a0:
          bVar12 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f93a0(uVar43,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f68bc(uVar43,0);
          if (((uVar43 != 0x200b) && ((uVar22 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9468(uVar43,0);
        iVar16 = iVar50;
        if ((uVar22 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar35 - 2;
      }
      lVar36 = *in_stack_00000150;
      if (lVar36 == 0) goto LAB_0249920c;
      lVar32 = *(long *)(lVar36 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      uVar57 = *(uint *)(lVar36 + 0x24);
      iVar17 = *(int *)(lVar32 + 0x18);
      if (iVar17 < (int)(uVar57 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar36 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar36 = *in_stack_00000150;
        if (lVar36 == 0) goto LAB_0249920c;
      }
      lVar32 = *(long *)(lVar36 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + (long)(int)uVar57 * 0x18;
      *(uint *)(lVar32 + 0x28) = uVar19;
      *(int *)(lVar32 + 0x2c) = iVar16;
      *(uint *)(lVar32 + 0x30) = (iVar16 - uVar19) + 1;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      lVar32 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar39)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar38 * 0x5c;
      bVar12 = false;
      fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
      *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
    }
    else {
      if (!bVar12) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar36 = *in_stack_00000150;
        if (lVar36 == 0) goto LAB_0249920c;
        lVar32 = *(long *)(lVar36 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        uVar57 = *(uint *)(lVar36 + 0x24);
        iVar16 = *(int *)(lVar32 + 0x18);
        if (iVar16 < (int)(uVar57 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar36 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar36 = *in_stack_00000150;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar32 = *(long *)(lVar36 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + (long)(int)uVar57 * 0x18;
        *(uint *)(lVar32 + 0x28) = uVar19;
        *(uint *)(lVar32 + 0x2c) = uVar15;
        *(long **)(lVar32 + 0x20) = unaff_x19;
        *(uint *)(lVar32 + 0x30) = uVar35 - uVar19;
        lVar32 = *(long *)(lVar36 + 0x50);
        *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar38 * 0x5c;
        fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
        *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar12 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    uVar57 = *(uint *)(lVar36 + 0x18);
    if (uVar57 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar48 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar57 <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = *unaff_x19;
        uVar57 = *(uint *)(lVar36 + lVar44 + -0x330);
        uVar67 = *(undefined4 *)(lVar36 + lVar44 + -0x2f8);
LAB_0249805c:
        pcVar34 = *(code **)(lVar38 + 0x908);
LAB_02498064:
        uVar58 = (ulong)uVar57;
        uVar23 = (ulong)(uint)fStack0000000000000050;
        uVar26 = (ulong)(uint)fStack0000000000000054;
        (*pcVar34)(fStack0000000000000058,uVar23,uVar26,uVar58,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar67);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar36 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar63 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar36 = lVar36 + lVar48 * 0x178;
      iVar16 = *(int *)(lVar36 + 0x68);
      *(int *)(lVar36 + 0x16c) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar39)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f68bc(uVar43,0);
      if ((uVar43 != 0x200b) && ((uVar22 & 1) == 0)) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(lVar38 + lVar48 * 0x178 + 0x160);
        if (fVar63 <= fVar51) {
          fVar63 = fVar51;
        }
        if (fStack00000000000000cc <= ABS(fVar53)) {
          fStack00000000000000cc = ABS(fVar53);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar36 = *in_stack_00000150;
            if (lVar36 == 0) goto LAB_0249920c;
            lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar38 + 0x15a8);
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar61 = *(float *)(lVar36 + lVar48 * 0x178 + 0x14c);
        fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar61 = fVar61 + fVar63 * fVar51;
        if (fVar61 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar61;
        }
        uVar23 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar43,0);
          if ((uVar22 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar48 * 0x178;
        _bStack000000000000005c = *(float *)(lVar36 + 0x160);
        fStack0000000000000058 = *(float *)(lVar36 + 0x11c);
        bVar13 = fVar63 != 0.0;
        fVar51 = _bStack000000000000005c;
        if (bVar13) {
          fVar51 = fVar63;
        }
        fVar63 = fVar51;
        uStack0000000000000060 = *(uint *)(lVar36 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar51 = fVar53;
        if (bVar13) {
          fVar51 = fStack00000000000000cc;
        }
        uVar23 = (ulong)(uint)fVar51;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar51;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar15 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar48 * 0x178;
            lVar38 = *unaff_x19;
            uVar57 = *(uint *)(lVar36 + 0x128);
            uVar67 = *(undefined4 *)(lVar36 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar15 == uVar6) || ((int)uVar7 <= (int)uVar15)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar43 == 0x200b || (uVar22 & 1) != 0) {
            lVar38 = lVar21;
            if (*(uint *)(lVar36 + 0x18) <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar38 = lVar48;
            if (*(uint *)(lVar36 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar36 = lVar36 + lVar38 * 0x178;
          uVar57 = *(uint *)(lVar36 + 0x128);
          uVar67 = *(undefined4 *)(lVar36 + 0x160);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          uVar57 = *(uint *)(lVar36 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar22 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar36 + lVar44),0);
        if ((uVar22 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
            if (uVar15 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + lVar48 * 0x178;
              uVar58 = (ulong)*(uint *)(lVar36 + 0x128);
              uVar26 = (ulong)(uint)fStack0000000000000054;
              uVar23 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar23,uVar26,uVar58,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar36 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar36 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar36 = *(long *)puVar10;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar13 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar40 == 0) goto LAB_0249920c;
    uVar57 = *(uint *)(lVar36 + lVar48 * 0x178 + 400);
    fVar51 = (float)FUN_026fd1f0(lVar40 + 0x50,0);
    if ((uVar57 >> 6 & 1) == 0) {
      if (bVar8) {
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar57 = *(uint *)(lVar36 + lVar44 + -0x330);
        pcVar34 = *(code **)(*unaff_x19 + 0x908);
        fVar54 = fStack0000000000000088 * fVar51 + *(float *)(lVar36 + lVar44 + -0x30c);
LAB_02498648:
        uVar58 = (ulong)uVar57;
        uVar23 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar26 = (ulong)in_stack_00000068._4_4_;
        (*pcVar34)(fStack0000000000000080,uVar23,uVar26,uVar58,fVar54,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar8 = false;
    }
    else {
      lVar36 = *in_stack_00000150;
      if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar38 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar38 + lVar48 * 0x178 + 0x174) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar39)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar38 + lVar48 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
         (bVar8 || !bVar1)) {
LAB_02498228:
        if (!bVar8) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar43,0);
          if ((uVar22 & 1) != 0) goto LAB_02498228;
          lVar36 = *in_stack_00000150;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar48 * 0x178;
        fStack0000000000000034 = *(float *)(lVar36 + 0x60);
        fStack0000000000000088 = *(float *)(lVar36 + 0x160);
        fStack0000000000000030 = *(float *)(lVar36 + 0x14c);
        uVar23 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar36 + 0x11c);
        in_stack_00000078._4_4_ = fVar51 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar57 = *in_stack_00000148;
      if (uVar57 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar15 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar48 * 0x178;
            lVar21 = *unaff_x19;
            uVar57 = *(uint *)(lVar36 + 0x128);
            fVar54 = *(float *)(lVar36 + 0x14c);
LAB_024983d8:
            pcVar34 = *(code **)(lVar21 + 0x908);
FUN_02498644:
            fVar54 = fVar51 * fStack0000000000000088 + fVar54;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar15 == uVar6) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          uVar57 = *(uint *)(lVar36 + 0x18);
          if (uVar43 == 0x200b || (uVar22 & 1) != 0) {
            if (uVar57 <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar21 = lVar48;
            if (uVar57 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar36 = lVar36 + lVar21 * 0x178;
          fVar54 = *(float *)(lVar36 + 0x14c);
          uVar57 = *(uint *)(lVar36 + 0x128);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar57) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 != 0) && (lVar38 = *(long *)(lVar36 + 0x38), lVar38 != 0)) {
          if (uVar35 < *(uint *)(lVar38 + 0x18)) {
            if (*(float *)(lVar38 + lVar44 + -0x108) == fStack0000000000000034) {
              fVar61 = *(float *)(lVar38 + lVar44 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar23 = (ulong)(uint)fStack0000000000000030;
              uVar22 = FUN_024aa280(fVar54 + fVar61,uVar23,0);
              if ((uVar22 & 1) != 0) {
                uVar57 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar36 = *in_stack_00000150;
              if (lVar36 == 0) goto LAB_0249920c;
            }
            lVar36 = *(long *)(lVar36 + 0x38);
            if (lVar36 != 0) {
              uVar57 = *(uint *)(lVar36 + 0x18);
              if ((int)uVar15 <= (int)uVar7) goto LAB_02498620;
              if (uVar7 < uVar57) goto LAB_02498628;
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }

      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
      :
      if ((int)uVar15 < (int)uVar57) {
        iVar16 = FUN_02681c0c(lVar40,0);
        if (*(uint *)(lVar30 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar30 + lVar44 + -0x130);
        if (lVar36 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar36,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar35 - 2 < *(uint *)(lVar36 + 0x18)) {
            lVar21 = *unaff_x19;
            uVar57 = *(uint *)(lVar36 + lVar44 + -0x330);
            fVar54 = *(float *)(lVar36 + lVar44 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar8 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    uVar57 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar57 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar48 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar26 = (ulong)uStack00000000000000a0;
        uVar58 = (ulong)(uint)fStack00000000000000a4;
        uVar23 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar23,uVar26,uVar58,fStack00000000000000a8,uVar26);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar39)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar48 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar43,0);
          if ((uVar22 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        uVar57 = (uint)*(undefined8 *)(lVar36 + 0x18);
        if (uVar57 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar21 = *(long *)(lVar21 + 0xb8);
        lVar38 = lVar36 + lVar48 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar38 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar38 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar21 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar38 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar21 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar21 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar21 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar57 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + lVar48 * 0x178;
      fVar66 = *(float *)(lVar36 + 0x188);
      uVar20 = *(undefined8 *)(lVar36 + 0x17c);
      fVar62 = *(float *)(lVar36 + 0x184);
      uVar24 = *(undefined8 *)(lVar36 + 0x184);
      fVar59 = *(float *)(lVar36 + 0x18c);
      fVar54 = *(float *)(lVar36 + 0x11c);
      fVar61 = *(float *)(lVar36 + 0x128);
      fVar64 = *(float *)(lVar36 + 0x148);
      fVar51 = *(float *)(lVar36 + 0x150);
      in_stack_00000158 = uVar20;
      fStack0000000000000160 = fVar62;
      fStack0000000000000164 = fVar66;
      in_stack_00000168 = fVar59;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar22 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar36 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar54 = fVar54 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar54 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar54;
        }
        fVar51 = fVar51 - in_stack_000017a0;
        uVar23 = (ulong)(uint)fVar51;
        fVar61 = fVar61 + (float)in_stack_00001798;
        uVar26 = (ulong)(uint)fVar61;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        fVar64 = fVar64 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar58 = (ulong)(uint)fVar64;
        if (fStack00000000000000a4 <= fVar61) {
          fStack00000000000000a4 = fVar61;
        }
        if (fStack00000000000000a8 <= fVar64) {
          fStack00000000000000a8 = fVar64;
        }
      }
      else {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar54 = (fVar54 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar58 = (ulong)(uint)fVar54;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        uVar23 = (ulong)(uint)fStack00000000000000b4;
        uVar26 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar64) {
          fStack00000000000000a8 = fVar64;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar23,uVar26,uVar58,fStack00000000000000a8,uVar26);
        fStack00000000000000b4 = fVar51 - fVar59;
        fStack00000000000000a4 = fVar61 + fVar62;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar64 + fVar66;
        fStack00000000000000b0 = fVar54;
        in_stack_00001790 = uVar20;
        in_stack_00001798 = uVar24;
        in_stack_000017a0 = fVar59;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar6)) ||
         (((int)uVar7 <= (int)uVar15 || (!bVar1)))) {
        uVar26 = (ulong)uStack00000000000000a0;
        uVar58 = (ulong)(uint)fStack00000000000000a4;
        uVar23 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar23,uVar26,uVar58,fStack00000000000000a8,uVar26);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar50 = iVar50 + 1;
    lVar44 = lVar44 + 0x178;
    bVar1 = (int)uVar35 < (int)uVar15;
    uVar57 = uVar39;
    uVar35 = uVar35 + 1;
  } while (bVar1);
  lVar30 = *in_stack_00000150;
  if (lVar30 != 0) {
    iVar18 = uVar39 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar30 + 0x18) = uVar15;
    lVar44 = unaff_x19[0xd3];
    *(int *)(lVar30 + 0x2c) = iVar18;
    iVar18 = (int)fStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar18 = 1;
    }
    if (fStack00000000000000ac == 0.0) {
      iVar18 = 1;
    }
    *(int *)(lVar30 + 0x1c) = (int)lVar44;
    *(int *)(lVar30 + 0x24) = iVar18;
    *(int *)(lVar30 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar30 = unaff_x19[0xde];
    if (lVar30 != 0) {
      (**(code **)(lVar30 + 0x18))
                (*(undefined8 *)(lVar30 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar30 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar18 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar18 != 0x19) {
      lVar30 = unaff_x19[0xe4];
      if (lVar30 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar30,0);
      FUN_02859e00(lVar30,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar30 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar30 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
        if (*(int *)(lVar30 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar24 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar30 = *in_stack_00000150;
                              if (lVar30 != 0) {
                                lVar36 = 0;
                                lVar44 = 0;
                                do {
                                  uVar22 = lVar44 + 1;
                                  if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar22)
                                  goto LAB_02496098;
                                  lVar30 = *(long *)(lVar30 + 0x60);
                                  if (lVar30 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar30 + lVar36 + 0x70,0);
                                  lVar30 = unaff_x19[0xe0];
                                  if (lVar30 == 0) break;
                                  if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar20 = *(undefined8 *)(lVar30 + lVar44 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar27 = FUN_0268b4e0(uVar20,0,0);
                                  if ((uVar27 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar30 + lVar36 + 0x70,1,0);
                                    }
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266b9c4(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0x80),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266bbc8(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0x98),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266bc74(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0xa0),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266c1dc(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0xa8),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_024f0144(lVar30,0), lVar30 == 0)) break;
                                    FUN_0266ed90(lVar30,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_02738ef4(lVar30,0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar44 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar20 = FUN_024f0144(lVar21,0), lVar30 == 0)) break;
                                    FUN_02858f1c(lVar30,uVar20,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_02738ef4(lVar30,0), lVar30 == 0)) break;
                                    FUN_02858b14(uVar24,uVar23,uVar26,uVar58,lVar30,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar44 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_02738ef4(lVar30,0), lVar30 == 0)) break;
                                    FUN_02858a50(lVar30,uVar15 & 1,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar45 = *(long **)(lVar30 + lVar44 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar45 == (long *)0x0) break;
                                    (**(code **)(*plVar45 + 0x2c8))
                                              (plVar45,uVar19 & 1,*(undefined8 *)(*plVar45 + 0x2d0))
                                    ;
                                  }
                                  lVar30 = *in_stack_00000150;
                                  lVar44 = lVar44 + 1;
                                  lVar36 = lVar36 + 0x50;
                                } while (lVar30 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


