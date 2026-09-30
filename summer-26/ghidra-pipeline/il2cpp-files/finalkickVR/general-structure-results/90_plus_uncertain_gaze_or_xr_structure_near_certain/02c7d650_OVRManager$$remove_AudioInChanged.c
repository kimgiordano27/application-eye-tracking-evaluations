/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 02c7d650
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRManager__remove_AudioInChanged
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int param_4,
               int param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *pLVar7;
  long unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *in_stack_00000128;
  undefined8 *in_stack_00000130;
  undefined8 *in_stack_00000138;
  undefined8 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  long in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined8 *in_stack_00000168;
  undefined8 *in_stack_00000170;
  undefined8 *in_stack_00000178;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 uStack00000000000001e4;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  
  uStack00000000000001b4 = param_2;
  do {
    uVar4 = il2cpp_codegen_add<int,int>(param_4,param_5);
    *(undefined4 *)((long)in_stack_00000128 + 0x1ec) = uVar4;
    iVar1 = *(int *)((long)in_stack_00000128 + 0x1ec);
    pLVar7 = *(List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 **)(in_stack_00000128[0x4b] + 0x20);
    NullCheck(pLVar7);
    iVar5 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                      (pLVar7,(MethodInfo *)*in_stack_00000170);
    if (iVar5 <= iVar1) {
      return *(byte *)(unaff_x29 + -0x61) & 1;
    }
    *in_stack_00000128 = *(undefined8 *)(in_stack_00000128[0x4b] + 0x20);
    *(undefined4 *)(in_stack_00000130 + 0x2b) = *(undefined4 *)((long)in_stack_00000128 + 0x1ec);
    NullCheck((void *)*in_stack_00000128);
    List_1_get_Item_mC84A7EDAAA0611F7545EA939123B35140C6F60F6
              ((List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *)*in_stack_00000128,
               *(int *)(in_stack_00000130 + 0x2b),(MethodInfo *)*in_stack_00000178);
    memcpy(&stack0x000008e0,&stack0x000008b4,0x2c);
    memcpy((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)(unaff_x29 + -0xa0),
           &stack0x000008e0,0x2c);
    *(undefined8 *)((long)in_stack_00000130 + 0xf4) =
         *(undefined8 *)(in_stack_00000128[0x4b] + 0x20);
    *(undefined4 *)(in_stack_00000130 + 0x1e) = *(undefined4 *)((long)in_stack_00000128 + 0x1ec);
    *(undefined8 *)((long)in_stack_00000130 + 0xe4) =
         *(undefined8 *)(in_stack_00000128[0x4b] + 0x20);
    NullCheck(*(void **)((long)in_stack_00000130 + 0xe4));
    uVar4 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                      (*(List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 **)
                        ((long)in_stack_00000130 + 0xe4),(MethodInfo *)*in_stack_00000170);
    *(undefined4 *)(in_stack_00000130 + 0x1c) = uVar4;
    NullCheck(*(void **)((long)in_stack_00000130 + 0xf4));
    pLVar7 = *(List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 **)((long)in_stack_00000130 + 0xf4);
    iVar3 = il2cpp_codegen_add<int,int>(*(int *)(in_stack_00000130 + 0x1e),1);
    iVar1 = *(int *)(in_stack_00000130 + 0x1c);
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = iVar3 / iVar1;
    }
    List_1_get_Item_mC84A7EDAAA0611F7545EA939123B35140C6F60F6
              (pLVar7,iVar3 - iVar5 * iVar1,(MethodInfo *)*in_stack_00000178);
    memcpy(&stack0x00000868,&stack0x0000083c,0x2c);
    memcpy((void *)(unaff_x29 + -0xcc),&stack0x00000868,0x2c);
    bVar2 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                      ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                       (unaff_x29 + -0xa0),(MethodInfo *)0x0);
    if (((bVar2 & 1) != 0) ||
       (bVar2 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                          ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                           (unaff_x29 + -0xcc),(MethodInfo *)0x0), (bVar2 & 1) == 0)) {
      bVar2 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                        ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                         (unaff_x29 + -0xa0),(MethodInfo *)0x0);
      if (((bVar2 & 1) == 0) ||
         (bVar2 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                            ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                             (unaff_x29 + -0xcc),(MethodInfo *)0x0), (bVar2 & 1) == 0)) {
        *(undefined8 *)((long)in_stack_00000130 + 0x7c) =
             *(undefined8 *)(in_stack_00000128[0x4b] + 0x20);
        NullCheck(*(void **)((long)in_stack_00000130 + 0x7c));
        uVar4 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                          (*(List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 **)
                            ((long)in_stack_00000130 + 0x7c),(MethodInfo *)*in_stack_00000170);
        *(undefined4 *)(in_stack_00000130 + 0xf) = uVar4;
        if (*(int *)(in_stack_00000130 + 0xf) == 1) goto LAB_02c7cc60;
        in_stack_00000138[10] = in_stack_00000128[0x49];
        BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                  (unaff_x29 + -0xa0,in_stack_00000138[10]);
        in_stack_00000138[6] = *(undefined8 *)((long)in_stack_00000138 + 0x14);
        in_stack_00000138[5] = *(undefined8 *)((long)in_stack_00000138 + 0xc);
        uVar6 = in_stack_00000138[5];
        in_stack_00000128[0x27] = in_stack_00000138[6];
        in_stack_00000128[0x26] = uVar6;
        *in_stack_00000138 = in_stack_00000128[0x49];
        BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                  (unaff_x29 + -0xcc,*in_stack_00000138,0);
        *(undefined8 *)((long)in_stack_00000140 + 0xec) = in_stack_00000140[0x1a];
        *(undefined8 *)((long)in_stack_00000140 + 0xe4) = in_stack_00000140[0x19];
        uVar6 = *(undefined8 *)((long)in_stack_00000140 + 0xe4);
        in_stack_00000128[0x23] = *(undefined8 *)((long)in_stack_00000140 + 0xec);
        in_stack_00000128[0x22] = uVar6;
        *(undefined8 *)((long)in_stack_00000140 + 0xbc) = in_stack_00000128[0x49];
        uVar4 = BezierControlPoint_GetTangent_m70DB28F505C94B6132047A3E8D493FED66AF9264
                          (unaff_x29 + -0xa0,*(undefined8 *)((long)in_stack_00000140 + 0xbc),0);
        *(undefined4 *)(in_stack_00000140 + 0x14) = uVar4;
        *(undefined4 *)((long)in_stack_00000140 + 0xa4) = uStack00000000000001b4;
        *(undefined4 *)(in_stack_00000140 + 0x15) = param_3;
        *(undefined8 *)((long)in_stack_00000140 + 0xac) = in_stack_00000140[0x14];
        *(undefined4 *)((long)in_stack_00000140 + 0xb4) = *(undefined4 *)(in_stack_00000140 + 0x15);
        in_stack_00000128[0x20] = *(undefined8 *)((long)in_stack_00000140 + 0xac);
        *(undefined4 *)(in_stack_00000128 + 0x21) = *(undefined4 *)((long)in_stack_00000140 + 0xb4);
        uVar6 = in_stack_00000128[0x26];
        *(undefined8 *)((long)in_stack_00000140 + 0x8c) = in_stack_00000128[0x27];
        *(undefined8 *)((long)in_stack_00000140 + 0x84) = uVar6;
        *(undefined8 *)((long)in_stack_00000140 + 0x74) =
             *(undefined8 *)((long)in_stack_00000140 + 0x84);
        *(undefined4 *)((long)in_stack_00000140 + 0x7c) =
             *(undefined4 *)((long)in_stack_00000140 + 0x8c);
        *(undefined8 *)((long)in_stack_00000140 + 100) = in_stack_00000128[0x20];
        *(undefined4 *)((long)in_stack_00000140 + 0x6c) = *(undefined4 *)(in_stack_00000128 + 0x21);
        uVar6 = in_stack_00000128[0x22];
        *(undefined8 *)((long)in_stack_00000140 + 0x4c) = in_stack_00000128[0x23];
        *(undefined8 *)((long)in_stack_00000140 + 0x44) = uVar6;
        *(undefined8 *)((long)in_stack_00000140 + 0x34) =
             *(undefined8 *)((long)in_stack_00000140 + 0x44);
        *(undefined4 *)((long)in_stack_00000140 + 0x3c) =
             *(undefined4 *)((long)in_stack_00000140 + 0x4c);
        uVar4 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086_inline
                          ((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 *)in_stack_00000160,
                           (MethodInfo *)0x0);
        *(undefined4 *)(in_stack_00000140 + 3) = uVar4;
        *(undefined4 *)((long)in_stack_00000140 + 0x1c) = uStack00000000000001b4;
        *(undefined4 *)(in_stack_00000140 + 4) = param_3;
        *(undefined8 *)((long)in_stack_00000140 + 0x24) = in_stack_00000140[3];
        *(undefined4 *)((long)in_stack_00000140 + 0x2c) = *(undefined4 *)(in_stack_00000140 + 4);
        in_stack_00000148[0x26] = *(undefined8 *)((long)in_stack_00000140 + 0x24);
        *(undefined4 *)(in_stack_00000148 + 0x27) = *(undefined4 *)((long)in_stack_00000140 + 0x2c);
        uVar8 = *(undefined4 *)((long)in_stack_00000148 + 0x134);
        uVar9 = *(undefined4 *)(in_stack_00000148 + 0x27);
        uVar4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline
                          (*(undefined4 *)(in_stack_00000148 + 0x26),0);
        *(undefined4 *)((long)in_stack_00000148 + 0x13c) = uVar4;
        *(undefined4 *)(in_stack_00000148 + 0x28) = uVar8;
        *(undefined4 *)((long)in_stack_00000148 + 0x144) = uVar9;
        *(undefined8 *)((long)in_stack_00000140 + 0xc) = *in_stack_00000140;
        *(undefined4 *)((long)in_stack_00000140 + 0x14) = *(undefined4 *)(in_stack_00000140 + 1);
        uVar6 = in_stack_00000128[0x4b];
        in_stack_00000148[0x20] = *(undefined8 *)((long)in_stack_00000140 + 0x74);
        *(undefined4 *)(in_stack_00000148 + 0x21) = *(undefined4 *)((long)in_stack_00000140 + 0x7c);
        in_stack_00000148[0x1e] = *(undefined8 *)((long)in_stack_00000140 + 100);
        *(undefined4 *)(in_stack_00000148 + 0x1f) = *(undefined4 *)((long)in_stack_00000140 + 0x6c);
        in_stack_00000148[0x1c] = *(undefined8 *)((long)in_stack_00000140 + 0x34);
        *(undefined4 *)(in_stack_00000148 + 0x1d) = *(undefined4 *)((long)in_stack_00000140 + 0x3c);
        in_stack_00000148[0x1a] = *(undefined8 *)((long)in_stack_00000140 + 0xc);
        *(undefined4 *)(in_stack_00000148 + 0x1b) = *(undefined4 *)((long)in_stack_00000140 + 0x14);
        uStack00000000000001b4 = *(undefined4 *)((long)in_stack_00000148 + 0x104);
        param_3 = *(undefined4 *)(in_stack_00000148 + 0x21);
        uVar8 = *(undefined4 *)(in_stack_00000148 + 0x1e);
        uVar4 = BezierGrabSurface_GenerateRaycastPlane_mB9B12FC87B5805D1BC6E42B730946A58A4F900D9
                          (*(undefined4 *)(in_stack_00000148 + 0x20),uVar6,0);
        *(undefined4 *)(in_stack_00000148 + 0x22) = uVar4;
        *(undefined4 *)((long)in_stack_00000148 + 0x114) = uStack00000000000001b4;
        *(undefined4 *)(in_stack_00000148 + 0x23) = param_3;
        *(undefined4 *)((long)in_stack_00000148 + 0x11c) = uVar8;
        in_stack_00000148[0x25] = in_stack_00000148[0x23];
        in_stack_00000148[0x24] = in_stack_00000148[0x22];
        uVar6 = in_stack_00000148[0x24];
        in_stack_00000128[0x1f] = in_stack_00000148[0x25];
        in_stack_00000128[0x1e] = uVar6;
        uVar6 = *in_stack_00000160;
        in_stack_00000148[0x17] = in_stack_00000160[1];
        in_stack_00000148[0x16] = uVar6;
        in_stack_00000148[0x18] = in_stack_00000160[2];
        in_stack_00000148[0x13] = in_stack_00000148[0x17];
        in_stack_00000148[0x12] = in_stack_00000148[0x16];
        in_stack_00000148[0x14] = in_stack_00000148[0x18];
        bVar2 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0_inline
                          (&stack0x00000a00,&stack0x000004e0,&stack0x000009fc,0);
        if ((bVar2 & 1) == 0) goto LAB_02c7d63c;
        *(undefined4 *)((long)in_stack_00000148 + 0x8c) =
             *(undefined4 *)((long)in_stack_00000128 + 0xec);
        uVar4 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF
                          (*(undefined4 *)((long)in_stack_00000148 + 0x8c),in_stack_00000160);
        *(undefined4 *)((long)in_stack_00000148 + 0x74) = uVar4;
        *(undefined4 *)(in_stack_00000148 + 0xf) = uStack00000000000001b4;
        *(undefined4 *)((long)in_stack_00000148 + 0x7c) = param_3;
        in_stack_00000148[0x10] = *(undefined8 *)((long)in_stack_00000148 + 0x74);
        *(undefined4 *)(in_stack_00000148 + 0x11) = *(undefined4 *)((long)in_stack_00000148 + 0x7c);
        in_stack_00000128[0x40] = in_stack_00000148[0x10];
        *(undefined4 *)(in_stack_00000128 + 0x41) = *(undefined4 *)(in_stack_00000148 + 0x11);
        uVar6 = in_stack_00000128[0x40];
        in_stack_00000148[0xb] = in_stack_00000128[0x41];
        in_stack_00000148[10] = uVar6;
        in_stack_00000148[8] = in_stack_00000148[10];
        *(undefined4 *)(in_stack_00000148 + 9) = *(undefined4 *)(in_stack_00000148 + 0xb);
        uVar6 = in_stack_00000128[0x26];
        in_stack_00000148[5] = in_stack_00000128[0x27];
        in_stack_00000148[4] = uVar6;
        in_stack_00000148[2] = in_stack_00000148[4];
        *(undefined4 *)(in_stack_00000148 + 3) = *(undefined4 *)(in_stack_00000148 + 5);
        *in_stack_00000148 = in_stack_00000128[0x20];
        *(undefined4 *)(in_stack_00000148 + 1) = *(undefined4 *)(in_stack_00000128 + 0x21);
        uVar6 = in_stack_00000128[0x22];
        *(undefined8 *)((long)in_stack_00000150 + 0x104) = in_stack_00000128[0x23];
        *(undefined8 *)((long)in_stack_00000150 + 0xfc) = uVar6;
        *(undefined8 *)((long)in_stack_00000150 + 0xec) =
             *(undefined8 *)((long)in_stack_00000150 + 0xfc);
        *(undefined4 *)((long)in_stack_00000150 + 0xf4) =
             *(undefined4 *)((long)in_stack_00000150 + 0x104);
        uVar6 = in_stack_00000128[0x4b];
        *(undefined8 *)((long)in_stack_00000150 + 0xc4) = in_stack_00000148[8];
        *(undefined4 *)((long)in_stack_00000150 + 0xcc) = *(undefined4 *)(in_stack_00000148 + 9);
        *(undefined8 *)((long)in_stack_00000150 + 0xb4) = in_stack_00000148[2];
        *(undefined4 *)((long)in_stack_00000150 + 0xbc) = *(undefined4 *)(in_stack_00000148 + 3);
        *(undefined8 *)((long)in_stack_00000150 + 0xa4) = *in_stack_00000148;
        *(undefined4 *)((long)in_stack_00000150 + 0xac) = *(undefined4 *)(in_stack_00000148 + 1);
        *(undefined8 *)((long)in_stack_00000150 + 0x94) =
             *(undefined8 *)((long)in_stack_00000150 + 0xec);
        *(undefined4 *)((long)in_stack_00000150 + 0x9c) =
             *(undefined4 *)((long)in_stack_00000150 + 0xf4);
        uVar8 = *(undefined4 *)(in_stack_00000150 + 0x19);
        uVar9 = *(undefined4 *)((long)in_stack_00000150 + 0xcc);
        uVar4 = BezierGrabSurface_NearestPointInTriangle_m05E37236BB0D694285AD8EC59CC225E7E19068DA
                          (*(undefined4 *)((long)in_stack_00000150 + 0xc4),uVar8,uVar9,
                           *(undefined4 *)((long)in_stack_00000150 + 0xb4),
                           *(undefined4 *)(in_stack_00000150 + 0x17),
                           *(undefined4 *)((long)in_stack_00000150 + 0xbc),uVar6,&stack0x000009f8,0)
        ;
        *(undefined4 *)(in_stack_00000150 + 0x1a) = uVar4;
        *(undefined4 *)((long)in_stack_00000150 + 0xd4) = uVar8;
        *(undefined4 *)(in_stack_00000150 + 0x1b) = uVar9;
        *(undefined8 *)((long)in_stack_00000150 + 0xdc) = in_stack_00000150[0x1a];
        *(undefined4 *)((long)in_stack_00000150 + 0xe4) = *(undefined4 *)(in_stack_00000150 + 0x1b);
        uVar6 = in_stack_00000128[0x26];
        *(undefined8 *)((long)in_stack_00000150 + 0x74) = in_stack_00000128[0x27];
        *(undefined8 *)((long)in_stack_00000150 + 0x6c) = uVar6;
        *(undefined8 *)((long)in_stack_00000150 + 0x5c) =
             *(undefined8 *)((long)in_stack_00000150 + 0x6c);
        *(undefined4 *)((long)in_stack_00000150 + 100) =
             *(undefined4 *)((long)in_stack_00000150 + 0x74);
        *(undefined8 *)((long)in_stack_00000150 + 0x4c) = in_stack_00000128[0x20];
        *(undefined4 *)((long)in_stack_00000150 + 0x54) = *(undefined4 *)(in_stack_00000128 + 0x21);
        uVar6 = in_stack_00000128[0x22];
        *(undefined8 *)((long)in_stack_00000150 + 0x34) = in_stack_00000128[0x23];
        *(undefined8 *)((long)in_stack_00000150 + 0x2c) = uVar6;
        *(undefined8 *)((long)in_stack_00000150 + 0x1c) =
             *(undefined8 *)((long)in_stack_00000150 + 0x2c);
        *(undefined4 *)((long)in_stack_00000150 + 0x24) =
             *(undefined4 *)((long)in_stack_00000150 + 0x34);
        *(undefined4 *)(in_stack_00000150 + 3) = *(undefined4 *)(in_stack_00000128 + 0x1d);
        *(undefined8 *)(in_stack_00000158 + 0x128) = *(undefined8 *)((long)in_stack_00000150 + 0x5c)
        ;
        *(undefined4 *)(in_stack_00000158 + 0x130) = *(undefined4 *)((long)in_stack_00000150 + 100);
        *(undefined8 *)(in_stack_00000158 + 0x118) = *(undefined8 *)((long)in_stack_00000150 + 0x4c)
        ;
        *(undefined4 *)(in_stack_00000158 + 0x120) = *(undefined4 *)((long)in_stack_00000150 + 0x54)
        ;
        *(undefined8 *)(in_stack_00000158 + 0x108) = *(undefined8 *)((long)in_stack_00000150 + 0x1c)
        ;
        *(undefined4 *)(in_stack_00000158 + 0x110) = *(undefined4 *)((long)in_stack_00000150 + 0x24)
        ;
        uVar8 = *(undefined4 *)(in_stack_00000158 + 300);
        uVar9 = *(undefined4 *)(in_stack_00000158 + 0x130);
        uVar4 = BezierGrabSurface_EvaluateBezier_m8F7FE36D4530726E92C2130C758AF6E0599941E1
                          (*(undefined4 *)(in_stack_00000158 + 0x128),uVar8,uVar9,
                           *(undefined4 *)(in_stack_00000158 + 0x118),
                           *(undefined4 *)(in_stack_00000158 + 0x11c),
                           *(undefined4 *)(in_stack_00000158 + 0x120),0);
        *(undefined4 *)(in_stack_00000158 + 0x134) = uVar4;
        *(undefined4 *)(in_stack_00000158 + 0x138) = uVar8;
        *(undefined4 *)(in_stack_00000158 + 0x13c) = uVar9;
        *(undefined8 *)((long)in_stack_00000150 + 0xc) = *in_stack_00000150;
        *(undefined4 *)((long)in_stack_00000150 + 0x14) = *(undefined4 *)(in_stack_00000150 + 1);
        in_stack_00000128[0x44] = *(undefined8 *)((long)in_stack_00000150 + 0xc);
        *(undefined4 *)(in_stack_00000128 + 0x45) = *(undefined4 *)((long)in_stack_00000150 + 0x14);
        uVar6 = in_stack_00000128[0x26];
        *(undefined8 *)(in_stack_00000158 + 0xe8) = in_stack_00000128[0x27];
        *(undefined8 *)(in_stack_00000158 + 0xe0) = uVar6;
        *(undefined8 *)(in_stack_00000158 + 0xd8) = in_stack_000006b8;
        *(undefined8 *)(in_stack_00000158 + 0xd0) = in_stack_000006b0;
        uVar6 = in_stack_00000128[0x22];
        *(undefined8 *)(in_stack_00000158 + 0xb8) = in_stack_00000128[0x23];
        *(undefined8 *)(in_stack_00000158 + 0xb0) = uVar6;
        *(undefined8 *)(in_stack_00000158 + 0xa8) = in_stack_00000668;
        *(undefined8 *)(in_stack_00000158 + 0xa0) = in_stack_00000660;
        *(undefined4 *)(in_stack_00000158 + 0x9c) = *(undefined4 *)(in_stack_00000128 + 0x1d);
        *(undefined8 *)(in_stack_00000158 + 0x68) = *(undefined8 *)(in_stack_00000158 + 0xd8);
        *(undefined8 *)(in_stack_00000158 + 0x60) = *(undefined8 *)(in_stack_00000158 + 0xd0);
        *(undefined8 *)(in_stack_00000158 + 0x58) = *(undefined8 *)(in_stack_00000158 + 0xa8);
        *(undefined8 *)(in_stack_00000158 + 0x50) = *(undefined8 *)(in_stack_00000158 + 0xa0);
        uVar8 = *(undefined4 *)(in_stack_00000158 + 100);
        uVar9 = *(undefined4 *)(in_stack_00000158 + 0x68);
        uVar10 = *(undefined4 *)(in_stack_00000158 + 0x6c);
        uVar4 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15
                          (*(undefined4 *)(in_stack_00000158 + 0x60),0);
        *(undefined4 *)(in_stack_00000158 + 0x70) = uVar4;
        *(undefined4 *)(in_stack_00000158 + 0x74) = uVar8;
        *(undefined4 *)(in_stack_00000158 + 0x78) = uVar9;
        *(undefined4 *)(in_stack_00000158 + 0x7c) = uVar10;
        *(undefined8 *)(in_stack_00000158 + 0x88) = *(undefined8 *)(in_stack_00000158 + 0x78);
        *(undefined8 *)(in_stack_00000158 + 0x80) = *(undefined8 *)(in_stack_00000158 + 0x70);
        uVar6 = *(undefined8 *)(in_stack_00000158 + 0x80);
        *(undefined8 *)(unaff_x29 + -0x2c) = *(undefined8 *)(in_stack_00000158 + 0x88);
        *(undefined8 *)(unaff_x29 + -0x34) = uVar6;
      }
      else {
LAB_02c7cc60:
        *(undefined8 *)((long)in_stack_00000130 + 0x6c) = in_stack_00000128[0x49];
        BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                  (unaff_x29 + -0xa0,*(undefined8 *)((long)in_stack_00000130 + 0x6c));
        *(undefined8 *)((long)in_stack_00000130 + 0x54) = in_stack_00000130[7];
        *(undefined8 *)((long)in_stack_00000130 + 0x4c) = in_stack_00000130[6];
        uVar6 = *(undefined8 *)((long)in_stack_00000130 + 0x4c);
        in_stack_00000128[0x2d] = *(undefined8 *)((long)in_stack_00000130 + 0x54);
        in_stack_00000128[0x2c] = uVar6;
        *(undefined8 *)(unaff_x29 + -0xec) = in_stack_000007f8;
        *(undefined8 *)(unaff_x29 + -0xf4) = in_stack_000007f0;
        uVar4 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086_inline
                          ((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 *)in_stack_00000160,
                           (MethodInfo *)0x0);
        *(undefined4 *)(in_stack_00000130 + 3) = uVar4;
        *(undefined4 *)((long)in_stack_00000130 + 0x1c) = uStack00000000000001b4;
        *(undefined4 *)(in_stack_00000130 + 4) = param_3;
        *(undefined8 *)((long)in_stack_00000130 + 0x24) = in_stack_00000130[3];
        *(undefined4 *)((long)in_stack_00000130 + 0x2c) = *(undefined4 *)(in_stack_00000130 + 4);
        in_stack_00000138[0x22] = *(undefined8 *)((long)in_stack_00000130 + 0x24);
        *(undefined4 *)(in_stack_00000138 + 0x23) = *(undefined4 *)((long)in_stack_00000130 + 0x2c);
        uVar8 = *(undefined4 *)((long)in_stack_00000138 + 0x114);
        uVar9 = *(undefined4 *)(in_stack_00000138 + 0x23);
        uVar4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline
                          (*(undefined4 *)(in_stack_00000138 + 0x22),0);
        *(undefined4 *)((long)in_stack_00000138 + 0x11c) = uVar4;
        *(undefined4 *)(in_stack_00000138 + 0x24) = uVar8;
        *(undefined4 *)((long)in_stack_00000138 + 0x124) = uVar9;
        *(undefined8 *)((long)in_stack_00000130 + 0xc) = *in_stack_00000130;
        *(undefined4 *)((long)in_stack_00000130 + 0x14) = *(undefined4 *)(in_stack_00000130 + 1);
        uVar6 = in_stack_00000128[0x2c];
        in_stack_00000138[0x1e] = in_stack_00000128[0x2d];
        in_stack_00000138[0x1d] = uVar6;
        in_stack_00000138[0x1b] = in_stack_00000138[0x1d];
        *(undefined4 *)(in_stack_00000138 + 0x1c) = *(undefined4 *)(in_stack_00000138 + 0x1e);
        in_stack_00000138[0x19] = *(undefined8 *)((long)in_stack_00000130 + 0xc);
        *(undefined4 *)(in_stack_00000138 + 0x1a) = *(undefined4 *)((long)in_stack_00000130 + 0x14);
        in_stack_00000138[0x17] = in_stack_00000138[0x1b];
        *(undefined4 *)(in_stack_00000138 + 0x18) = *(undefined4 *)(in_stack_00000138 + 0x1c);
        uStack00000000000001b4 = *(undefined4 *)((long)in_stack_00000138 + 0xcc);
        param_3 = *(undefined4 *)(in_stack_00000138 + 0x1a);
        Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2_inline
                  (*(undefined4 *)(in_stack_00000138 + 0x19),uStack00000000000001b4,param_3,
                   *(undefined4 *)(in_stack_00000138 + 0x17),
                   *(undefined4 *)((long)in_stack_00000138 + 0xbc),
                   *(undefined4 *)(in_stack_00000138 + 0x18),&stack0x00000a60,0);
        uVar6 = *in_stack_00000160;
        in_stack_00000138[0x14] = in_stack_00000160[1];
        in_stack_00000138[0x13] = uVar6;
        in_stack_00000138[0x15] = in_stack_00000160[2];
        in_stack_00000138[0x10] = in_stack_00000138[0x14];
        in_stack_00000138[0xf] = in_stack_00000138[0x13];
        in_stack_00000138[0x11] = in_stack_00000138[0x15];
        bVar2 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0_inline
                          (&stack0x00000a60,&stack0x00000710,&stack0x00000a5c,0);
        if ((bVar2 & 1) == 0) goto LAB_02c7d63c;
        *(undefined4 *)((long)in_stack_00000138 + 0x74) =
             *(undefined4 *)((long)in_stack_00000128 + 0x14c);
        uVar4 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF
                          (*(undefined4 *)((long)in_stack_00000138 + 0x74),in_stack_00000160);
        *(undefined4 *)((long)in_stack_00000138 + 0x5c) = uVar4;
        *(undefined4 *)(in_stack_00000138 + 0xc) = uStack00000000000001b4;
        *(undefined4 *)((long)in_stack_00000138 + 100) = param_3;
        in_stack_00000138[0xd] = *(undefined8 *)((long)in_stack_00000138 + 0x5c);
        *(undefined4 *)(in_stack_00000138 + 0xe) = *(undefined4 *)((long)in_stack_00000138 + 100);
        in_stack_00000128[0x40] = in_stack_00000138[0xd];
        *(undefined4 *)(in_stack_00000128 + 0x41) = *(undefined4 *)(in_stack_00000138 + 0xe);
        PoseUtils_CopyFrom_m57A3FC8929CFDCAF56595CA8D53655258CC186EA
                  (unaff_x29 + -0x40,unaff_x29 + -0x100,0);
      }
      uVar6 = in_stack_00000128[0x40];
      *(undefined8 *)(in_stack_00000158 + 0x38) = in_stack_00000128[0x41];
      *(undefined8 *)(in_stack_00000158 + 0x30) = uVar6;
      *(undefined8 *)(in_stack_00000158 + 0x20) = *(undefined8 *)(in_stack_00000158 + 0x30);
      *(undefined4 *)(in_stack_00000158 + 0x28) = *(undefined4 *)(in_stack_00000158 + 0x38);
      uVar6 = in_stack_00000128[0x44];
      uVar4 = *(undefined4 *)(in_stack_00000158 + 8);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000168);
      uStack00000000000001e4 = (undefined4)(*(ulong *)(in_stack_00000158 + 0x20) >> 0x20);
      uStack00000000000001d0 = (undefined4)uVar6;
      uStack00000000000001d4 = (undefined4)((ulong)uVar6 >> 0x20);
      GrabPoseScore__ctor_m51EAD17BED3A12FB99565B029697E1FC0B9447E8
                (*(ulong *)(in_stack_00000158 + 0x20) & 0xffffffff,uStack00000000000001e4,
                 *(undefined4 *)(in_stack_00000158 + 0x28),uStack00000000000001d0,
                 uStack00000000000001d4,uVar4,unaff_x29 + -0xd8,0);
      param_3 = *(undefined4 *)(in_stack_00000128 + 0x3f);
      uStack00000000000001b4 = (undefined4)((ulong)in_stack_00000128[0x3e] >> 0x20);
      bVar2 = GrabPoseScore_IsBetterThan_m76019F604BD29139C0229997687BAA00B3E7296D
                        (in_stack_00000128[0x3e] & 0xffffffff,unaff_x29 + -0xd8,0);
      if ((bVar2 & 1) != 0) {
        in_stack_00000128[0x3e] = in_stack_00000128[0x31];
        *(undefined4 *)(in_stack_00000128 + 0x3f) = *(undefined4 *)(in_stack_00000128 + 0x32);
        PoseUtils_CopyFrom_m57A3FC8929CFDCAF56595CA8D53655258CC186EA
                  (in_stack_00000128[0x4a],unaff_x29 + -0x40,0);
        *(undefined1 *)(unaff_x29 + -0x61) = 1;
      }
    }
LAB_02c7d63c:
    param_4 = *(int *)((long)in_stack_00000128 + 0x1ec);
    param_5 = 1;
  } while( true );
}


