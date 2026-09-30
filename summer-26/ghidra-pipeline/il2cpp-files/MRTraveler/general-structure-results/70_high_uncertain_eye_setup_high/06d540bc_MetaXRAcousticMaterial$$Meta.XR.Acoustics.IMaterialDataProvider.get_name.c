/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 06d540bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  long *unaff_x19;
  long lVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar24;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  uint *unaff_x26;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float unaff_s14;
  undefined4 uVar35;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  ulong in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 in_stack_00000188;
  ulong in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00002580;
  long in_stack_00002588;
  
  FUN_0601da5c();
  lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
  if ((lVar13 != 0) &&
     (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0)) {
LAB_06d57348:
    uVar15 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar15,0);
  }
  if (0x33 < *unaff_x26) {
    unaff_x19[0x37] = lVar13;
    thunk_FUN_03d233cc(unaff_x19 + 0x37,lVar13);
    uVar30 = DAT_018b0494;
    lVar13 = *(long *)(*unaff_x23 + 0xb8);
    uVar25 = *(undefined4 *)(lVar13 + 0x2c);
    uVar26 = *(undefined4 *)(lVar13 + 0x30);
    uVar27 = *(undefined4 *)(lVar13 + 0x34);
    FUN_06006fd0(DAT_018b0494,uStack00000000000000a0,in_stack_00000048,&stack0x00000eb0,*unaff_x25);
    FUN_06006fd0(DAT_018b0fc4,DAT_018b0858,DAT_018b01cc,&stack0x00000ea0,*unaff_x25);
    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000e88,*unaff_x24);
    FUN_085d262c(unaff_s14 * 0.0,0);
    FUN_0601da5c(uVar25,uVar26,uVar27,&stack0x00000e50,0x34,0x33,0x35,&stack0x00002590,*unaff_x22);
    lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
    goto LAB_06d57348;
    if (0x34 < *unaff_x26) {
      unaff_x19[0x38] = lVar13;
      thunk_FUN_03d233cc(unaff_x19 + 0x38,lVar13);
      uVar25 = DAT_018b068c;
      lVar13 = *(long *)(*unaff_x23 + 0xb8);
      uVar32 = *(undefined4 *)(lVar13 + 0x2c);
      uVar35 = *(undefined4 *)(lVar13 + 0x30);
      uVar34 = *(undefined4 *)(lVar13 + 0x34);
      FUN_06006fd0(DAT_018b068c,uStack000000000000009c,uStack0000000000000044,&stack0x00000e40,
                   *unaff_x25);
      uVar28 = DAT_018b0fc8;
      uVar27 = DAT_018b0eb8;
      uVar26 = DAT_018b0970;
      FUN_06006fd0(DAT_018b0970,DAT_018b0eb8,DAT_018b0fc8,&stack0x00000e30,*unaff_x25);
      FUN_05f16e30(0,0,0,0,0,0,&stack0x00000e18,*unaff_x24);
      FUN_085d262c(fStack00000000000000bc * 0.0,0);
      FUN_0601da5c(uVar32,uVar35,uVar34,&stack0x00000de0,0x35,0x34,0x36,&stack0x00002590,*unaff_x22)
      ;
      lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
      if ((lVar13 != 0) &&
         (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
      goto LAB_06d57348;
      if (0x35 < *unaff_x26) {
        unaff_x19[0x39] = lVar13;
        thunk_FUN_03d233cc(unaff_x19 + 0x39,lVar13);
        lVar13 = *(long *)(*unaff_x23 + 0xb8);
        uVar32 = *(undefined4 *)(lVar13 + 0x2c);
        uVar34 = *(undefined4 *)(lVar13 + 0x30);
        uVar35 = *(undefined4 *)(lVar13 + 0x34);
        FUN_06006fd0(DAT_018b014c,uStack000000000000003c,uStack0000000000000040,&stack0x00000dd0,
                     *unaff_x25);
        FUN_06006fd0(uVar26,uVar27,uVar28,&stack0x00000dc0,*unaff_x25);
        FUN_05f16e30(0,0,0,0,0,0,&stack0x00000da8,*unaff_x24);
        FUN_085d262c(fStack00000000000000bc * 0.0,0);
        FUN_0601da5c(uVar32,uVar34,uVar35,&stack0x00000d70,0x36,0x35,0xffffffff,&stack0x00002590,
                     *unaff_x22);
        lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
        goto LAB_06d57348;
        if (0x36 < *unaff_x26) {
          unaff_x19[0x3a] = lVar13;
          thunk_FUN_03d233cc(unaff_x19 + 0x3a,lVar13);
          lVar13 = *(long *)(*unaff_x23 + 0xb8);
          uVar26 = *(undefined4 *)(lVar13 + 0x2c);
          uVar27 = *(undefined4 *)(lVar13 + 0x30);
          uVar28 = *(undefined4 *)(lVar13 + 0x34);
          FUN_06006fd0(DAT_018b0bec,uStack00000000000000a4,uStack0000000000000038,&stack0x00000d60,
                       *unaff_x25);
          FUN_06006fd0(uStack00000000000000ac,uStack00000000000000b0,uStack00000000000000b4,
                       &stack0x00000d50,*unaff_x25);
          FUN_05f16e30(0,0,0,0,0,0,&stack0x00000d38,*unaff_x24);
          FUN_085d262c(fStack00000000000000bc * 0.0,0);
          FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000d00,0x37,0x2d,0x38,&stack0x00002590,
                       *unaff_x22);
          lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
          if ((lVar13 != 0) &&
             (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
          goto LAB_06d57348;
          if (0x37 < *unaff_x26) {
            unaff_x19[0x3b] = lVar13;
            thunk_FUN_03d233cc(unaff_x19 + 0x3b,lVar13);
            lVar13 = *(long *)(*unaff_x23 + 0xb8);
            uVar26 = *(undefined4 *)(lVar13 + 0x2c);
            uVar27 = *(undefined4 *)(lVar13 + 0x30);
            uVar28 = *(undefined4 *)(lVar13 + 0x34);
            FUN_06006fd0(DAT_018b0690,uStack0000000000000034,uStack0000000000000038,&stack0x00000cf0
                         ,*unaff_x25);
            FUN_06006fd0(DAT_018b05f8,DAT_018b0498,DAT_018afd90,&stack0x00000ce0,*unaff_x25);
            FUN_05f16e30(0,0,0,0,0,0,&stack0x00000cc8,*unaff_x24);
            FUN_085d262c(fStack00000000000000bc * 0.0,0);
            FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000c90,0x38,0x37,0x39,&stack0x00002590,
                         *unaff_x22);
            lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
            if ((lVar13 != 0) &&
               (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0)
               ) goto LAB_06d57348;
            if (0x38 < *unaff_x26) {
              unaff_x19[0x3c] = lVar13;
              thunk_FUN_03d233cc(unaff_x19 + 0x3c,lVar13);
              lVar13 = *(long *)(*unaff_x23 + 0xb8);
              uVar26 = *(undefined4 *)(lVar13 + 0x2c);
              uVar27 = *(undefined4 *)(lVar13 + 0x30);
              uVar28 = *(undefined4 *)(lVar13 + 0x34);
              FUN_06006fd0(DAT_018b0cb0,uStack00000000000000a0,uStack000000000000008c,
                           &stack0x00000c80,*unaff_x25);
              FUN_06006fd0(DAT_018b085c,DAT_018b0d5c,DAT_018b0008,&stack0x00000c70,*unaff_x25);
              FUN_05f16e30(0,0,0,0,0,0,&stack0x00000c58,*unaff_x24);
              FUN_085d262c(fStack00000000000000bc * 0.0,0);
              FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000c20,0x39,0x38,0x3a,&stack0x00002590,
                           *unaff_x22);
              lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                 lVar14 == 0)) goto LAB_06d57348;
              if (0x39 < *unaff_x26) {
                unaff_x19[0x3d] = lVar13;
                thunk_FUN_03d233cc(unaff_x19 + 0x3d,lVar13);
                lVar13 = *(long *)(*unaff_x23 + 0xb8);
                uVar32 = *(undefined4 *)(lVar13 + 0x2c);
                uVar35 = *(undefined4 *)(lVar13 + 0x30);
                uVar34 = *(undefined4 *)(lVar13 + 0x34);
                FUN_06006fd0(DAT_018b000c,uStack0000000000000030,uStack000000000000008c,
                             &stack0x00000c10,*unaff_x25);
                uVar28 = DAT_018b0d60;
                uVar27 = DAT_018b08ec;
                uVar26 = DAT_018aff4c;
                FUN_06006fd0(DAT_018b08ec,DAT_018b0d60,DAT_018aff4c,&stack0x00000c00,*unaff_x25);
                FUN_05f16e30(0,0,0,0,0,0,&stack0x00000be8,*unaff_x24);
                FUN_085d262c(fStack00000000000000bc * 0.0,0);
                FUN_0601da5c(uVar32,uVar35,uVar34,&stack0x00000bb0,0x3a,0x39,0x3b,&stack0x00002590,
                             *unaff_x22);
                lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                   lVar14 == 0)) goto LAB_06d57348;
                if (0x3a < *unaff_x26) {
                  unaff_x19[0x3e] = lVar13;
                  thunk_FUN_03d233cc(unaff_x19 + 0x3e,lVar13);
                  lVar13 = *(long *)(*unaff_x23 + 0xb8);
                  uVar32 = *(undefined4 *)(lVar13 + 0x2c);
                  uVar34 = *(undefined4 *)(lVar13 + 0x30);
                  uVar35 = *(undefined4 *)(lVar13 + 0x34);
                  FUN_06006fd0(DAT_018b0564,uStack000000000000002c,uStack0000000000000028,
                               &stack0x00000ba0,*unaff_x25);
                  FUN_06006fd0(uVar27,uVar28,uVar26,&stack0x00000b90,*unaff_x25);
                  FUN_05f16e30(0,0,0,0,0,0,&stack0x00000b78,*unaff_x24);
                  FUN_085d262c(fStack00000000000000bc * 0.0,0);
                  FUN_0601da5c(uVar32,uVar34,uVar35,&stack0x00000b40,0x3b,0x3a,0xffffffff,
                               &stack0x00002590,*unaff_x22);
                  lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                  if ((lVar13 != 0) &&
                     (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar14 == 0)) goto LAB_06d57348;
                  if (0x3b < *unaff_x26) {
                    unaff_x19[0x3f] = lVar13;
                    thunk_FUN_03d233cc(unaff_x19 + 0x3f,lVar13);
                    lVar13 = *(long *)(*unaff_x23 + 0xb8);
                    uVar26 = *(undefined4 *)(lVar13 + 0x2c);
                    uVar27 = *(undefined4 *)(lVar13 + 0x30);
                    uVar28 = *(undefined4 *)(lVar13 + 0x34);
                    FUN_06006fd0(DAT_018b0264,uStack000000000000001c,uStack0000000000000094,
                                 &stack0x00000b30,*unaff_x25);
                    FUN_06006fd0(uStack00000000000000ac,uStack00000000000000b0,
                                 uStack00000000000000b4,&stack0x00000b20,*unaff_x25);
                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000b08,*unaff_x24);
                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                    FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000ad0,0x3c,0x2d,0x3d,
                                 &stack0x00002590,*unaff_x22);
                    lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                    if ((lVar13 != 0) &&
                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar14 == 0)) goto LAB_06d57348;
                    if (0x3c < *unaff_x26) {
                      unaff_x19[0x40] = lVar13;
                      thunk_FUN_03d233cc(unaff_x19 + 0x40,lVar13);
                      lVar13 = *(long *)(*unaff_x23 + 0xb8);
                      uVar26 = *(undefined4 *)(lVar13 + 0x2c);
                      uVar27 = *(undefined4 *)(lVar13 + 0x30);
                      uVar28 = *(undefined4 *)(lVar13 + 0x34);
                      FUN_06006fd0(DAT_018afe9c,uStack0000000000000020,uStack0000000000000024,
                                   &stack0x00000ac0,*unaff_x25);
                      FUN_06006fd0(DAT_018b0ac0,DAT_018b073c,DAT_018b03c4,&stack0x00000ab0,
                                   *unaff_x25);
                      FUN_05f16e30(0,0,0,0,0,0,&stack0x00000a98,*unaff_x24);
                      FUN_085d262c(fStack00000000000000bc * 0.0,0);
                      FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000a60,0x3d,0x3c,0x3e,
                                   &stack0x00002590,*unaff_x22);
                      lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                      if ((lVar13 != 0) &&
                         (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar14 == 0)) goto LAB_06d57348;
                      if (0x3d < *unaff_x26) {
                        unaff_x19[0x41] = lVar13;
                        thunk_FUN_03d233cc(unaff_x19 + 0x41,lVar13);
                        lVar13 = *(long *)(*unaff_x23 + 0xb8);
                        uVar26 = *(undefined4 *)(lVar13 + 0x2c);
                        uVar27 = *(undefined4 *)(lVar13 + 0x30);
                        uVar28 = *(undefined4 *)(lVar13 + 0x34);
                        FUN_06006fd0(DAT_018b0a18,uStack000000000000009c,uStack0000000000000018,
                                     &stack0x00000a50,*unaff_x25);
                        FUN_06006fd0(DAT_018b08f0,DAT_018b0a1c,DAT_018b0bf0,&stack0x00000a40,
                                     *unaff_x25);
                        FUN_05f16e30(0,0,0,0,0,0,&stack0x00000a28,*unaff_x24);
                        FUN_085d262c(fStack00000000000000bc * 0.0,0);
                        FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x000009f0,0x3e,0x3d,0x3f,
                                     &stack0x00002590,*unaff_x22);
                        lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                        if ((lVar13 != 0) &&
                           (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar14 == 0)) goto LAB_06d57348;
                        if (0x3e < *unaff_x26) {
                          unaff_x19[0x42] = lVar13;
                          thunk_FUN_03d233cc(unaff_x19 + 0x42,lVar13);
                          lVar13 = *(long *)(*unaff_x23 + 0xb8);
                          uVar28 = *(undefined4 *)(lVar13 + 0x2c);
                          uVar32 = *(undefined4 *)(lVar13 + 0x30);
                          uVar34 = *(undefined4 *)(lVar13 + 0x34);
                          FUN_06006fd0(uVar25,uStack00000000000000b8,in_stack_00000078._4_4_,
                                       &stack0x000009e0,*unaff_x25);
                          uVar27 = DAT_018b07d8;
                          uVar26 = DAT_018b0568;
                          uVar25 = DAT_018b0268;
                          FUN_06006fd0(DAT_018b0568,DAT_018b07d8,DAT_018b0268,&stack0x000009d0,
                                       *unaff_x25);
                          FUN_05f16e30(0,0,0,0,0,0,&stack0x000009b8,*unaff_x24);
                          FUN_085d262c(fStack00000000000000bc * 0.0,0);
                          FUN_0601da5c(uVar28,uVar32,uVar34,&stack0x00000980,0x3f,0x3e,0x40,
                                       &stack0x00002590,*unaff_x22);
                          lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                          if ((lVar13 != 0) &&
                             (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)(*unaff_x19 + 0x40))
                             , lVar14 == 0)) goto LAB_06d57348;
                          if (0x3f < *unaff_x26) {
                            unaff_x19[0x43] = lVar13;
                            thunk_FUN_03d233cc(unaff_x19 + 0x43,lVar13);
                            lVar13 = *(long *)(*unaff_x23 + 0xb8);
                            uVar28 = *(undefined4 *)(lVar13 + 0x2c);
                            uVar32 = *(undefined4 *)(lVar13 + 0x30);
                            uVar34 = *(undefined4 *)(lVar13 + 0x34);
                            FUN_06006fd0(DAT_018b0cb4,uStack0000000000000014,uStack0000000000000088,
                                         &stack0x00000970,*unaff_x25);
                            FUN_06006fd0(uVar26,uVar27,uVar25,&stack0x00000960,*unaff_x25);
                            FUN_05f16e30(0,0,0,0,0,0,&stack0x00000948,*unaff_x24);
                            FUN_085d262c(fStack00000000000000bc * 0.0,0);
                            FUN_0601da5c(uVar28,uVar32,uVar34,&stack0x00000910,0x40,0x3f,0xffffffff,
                                         &stack0x00002590,*unaff_x22);
                            lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                            if ((lVar13 != 0) &&
                               (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)),
                               lVar14 == 0)) goto LAB_06d57348;
                            if (0x40 < *unaff_x26) {
                              unaff_x19[0x44] = lVar13;
                              thunk_FUN_03d233cc(unaff_x19 + 0x44,lVar13);
                              lVar13 = *(long *)(*unaff_x23 + 0xb8);
                              uVar25 = *(undefined4 *)(lVar13 + 0x2c);
                              uVar26 = *(undefined4 *)(lVar13 + 0x30);
                              uVar27 = *(undefined4 *)(lVar13 + 0x34);
                              FUN_06006fd0(DAT_018b0150,uStack0000000000000010,
                                           uStack00000000000000a8,&stack0x00000900,*unaff_x25);
                              FUN_06006fd0(DAT_018b026c,DAT_018afe18,DAT_018b0cb8,&stack0x000008f0,
                                           *unaff_x25);
                              FUN_05f16e30(0,0,0,0,0,0,&stack0x000008d8,*unaff_x24);
                              FUN_085d262c(fStack00000000000000bc * 0.0,0);
                              FUN_0601da5c(uVar25,uVar26,uVar27,&stack0x000008a0,0x41,0x2d,0x42,
                                           &stack0x00002590,*unaff_x22);
                              lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                              if ((lVar13 != 0) &&
                                 (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                 lVar14 == 0)) goto LAB_06d57348;
                              if (0x41 < *unaff_x26) {
                                unaff_x19[0x45] = lVar13;
                                thunk_FUN_03d233cc(unaff_x19 + 0x45,lVar13);
                                lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                uVar25 = *(undefined4 *)(lVar13 + 0x2c);
                                uVar26 = *(undefined4 *)(lVar13 + 0x30);
                                uVar27 = *(undefined4 *)(lVar13 + 0x34);
                                FUN_06006fd0(uStack0000000000000084,uStack0000000000000008,
                                             uStack000000000000000c,&stack0x00000890,*unaff_x25);
                                FUN_06006fd0(DAT_018b0fcc,DAT_018b0bf4,DAT_018b03c8,&stack0x00000880
                                             ,*unaff_x25);
                                FUN_05f16e30(0,0,0,0,0,0,&stack0x00000868,*unaff_x24);
                                FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                FUN_0601da5c(uVar25,uVar26,uVar27,&stack0x00000830,0x42,0x41,0x43,
                                             &stack0x00002590,*unaff_x22);
                                lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                if ((lVar13 != 0) &&
                                   (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                   lVar14 == 0)) goto LAB_06d57348;
                                if (0x42 < *unaff_x26) {
                                  unaff_x19[0x46] = lVar13;
                                  thunk_FUN_03d233cc(unaff_x19 + 0x46,lVar13);
                                  lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                  uVar25 = *(undefined4 *)(lVar13 + 0x2c);
                                  uVar26 = *(undefined4 *)(lVar13 + 0x30);
                                  uVar27 = *(undefined4 *)(lVar13 + 0x34);
                                  FUN_06006fd0(DAT_018b009c,uStack00000000000000b8,
                                               uStack0000000000000090,&stack0x00000820,*unaff_x25);
                                  FUN_06006fd0(DAT_018b0328,DAT_018b0154,DAT_018b032c,
                                               &stack0x00000810,*unaff_x25);
                                  FUN_05f16e30(0,0,0,0,0,0,&stack0x000007f8,*unaff_x24);
                                  FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                  FUN_0601da5c(uVar25,uVar26,uVar27,&stack0x000007c0,0x43,0x42,0x44,
                                               &stack0x00002590,*unaff_x22);
                                  lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                  if ((lVar13 != 0) &&
                                     (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                     lVar14 == 0)) goto LAB_06d57348;
                                  if (0x43 < *unaff_x26) {
                                    unaff_x19[0x47] = lVar13;
                                    thunk_FUN_03d233cc(unaff_x19 + 0x47,lVar13);
                                    lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                    uVar27 = *(undefined4 *)(lVar13 + 0x2c);
                                    uVar28 = *(undefined4 *)(lVar13 + 0x30);
                                    uVar32 = *(undefined4 *)(lVar13 + 0x34);
                                    FUN_06006fd0(uVar30,in_stack_00000000._4_4_,
                                                 in_stack_00000060._4_4_,&stack0x000007b0,*unaff_x25
                                                );
                                    uVar26 = DAT_018b07dc;
                                    uVar25 = DAT_018b0740;
                                    uVar30 = DAT_018afe1c;
                                    FUN_06006fd0(DAT_018afe1c,DAT_018b0740,DAT_018b07dc,
                                                 &stack0x000007a0,*unaff_x25);
                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000788,*unaff_x24);
                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                    FUN_0601da5c(uVar27,uVar28,uVar32,&stack0x00000750,0x44,0x43,
                                                 0x45,&stack0x00002590,*unaff_x22);
                                    lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                    if ((lVar13 != 0) &&
                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                       lVar14 == 0)) goto LAB_06d57348;
                                    if (0x44 < *unaff_x26) {
                                      unaff_x19[0x48] = lVar13;
                                      thunk_FUN_03d233cc(unaff_x19 + 0x48,lVar13);
                                      lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                      uVar27 = *(undefined4 *)(lVar13 + 0x2c);
                                      uVar28 = *(undefined4 *)(lVar13 + 0x30);
                                      uVar32 = *(undefined4 *)(lVar13 + 0x34);
                                      FUN_06006fd0(DAT_018b0ac4,uStack0000000000000098,
                                                   uStack0000000000000080,&stack0x00000740,
                                                   *unaff_x25);
                                      FUN_06006fd0(uVar30,uVar25,uVar26,&stack0x00000730,*unaff_x25)
                                      ;
                                      FUN_05f16e30(0,0,0,0,0,0,&stack0x00000718,*unaff_x24);
                                      FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                      FUN_0601da5c(uVar27,uVar28,uVar32,&stack0x000006e0,0x45,0x44,
                                                   0xffffffff,&stack0x00002590,*unaff_x22);
                                      lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                      if ((lVar13 != 0) &&
                                         (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                         lVar14 == 0)) goto LAB_06d57348;
                                      if (0x45 < *unaff_x26) {
                                        unaff_x19[0x49] = lVar13;
                                        thunk_FUN_03d233cc(unaff_x19 + 0x49,lVar13);
                                        uVar25 = DAT_018aff50;
                                        uVar30 = DAT_018aff24;
                                        lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                        uVar26 = *(undefined4 *)(lVar13 + 0x38);
                                        uVar27 = *(undefined4 *)(lVar13 + 0x3c);
                                        uVar28 = *(undefined4 *)(lVar13 + 0x40);
                                        FUN_06006fd0(DAT_018b0bf8,DAT_018aff50,DAT_018aff24,
                                                     &stack0x000006d0,*unaff_x25);
                                        FUN_06006fd0(DAT_018afd94,DAT_018b0330,DAT_018b0270,
                                                     &stack0x000006c0,*unaff_x25);
                                        FUN_05f16e30(0,0,0,0,0,0,&stack0x000006a8,*unaff_x24);
                                        FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                        FUN_0601da5c(uVar26,uVar27,uVar28,&stack0x00000670,0x46,1,
                                                     0x47,&stack0x00002590,*unaff_x22);
                                        lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                        if ((lVar13 != 0) &&
                                           (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                           , lVar14 == 0)) goto LAB_06d57348;
                                        if (0x46 < *unaff_x26) {
                                          unaff_x19[0x4a] = lVar13;
                                          thunk_FUN_03d233cc(unaff_x19 + 0x4a,lVar13);
                                          uVar26 = DAT_018b0d64;
                                          lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                          uVar27 = *(undefined4 *)(lVar13 + 0x38);
                                          uVar28 = *(undefined4 *)(lVar13 + 0x3c);
                                          uVar32 = *(undefined4 *)(lVar13 + 0x40);
                                          FUN_06006fd0(DAT_018b0ac8,DAT_018b0d64,
                                                       uStack00000000000000a8,&stack0x00000660,
                                                       *unaff_x25);
                                          FUN_06006fd0(DAT_018b0bfc,DAT_018b0694,DAT_018b07e0,
                                                       &stack0x00000650,*unaff_x25);
                                          FUN_05f16e30(0,0,0,0,0,0,&stack0x00000638,*unaff_x24);
                                          FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                          FUN_0601da5c(uVar27,uVar28,uVar32,&stack0x00000600,0x47,
                                                       0x46,0x48,&stack0x00002590,*unaff_x22);
                                          lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                          if ((lVar13 != 0) &&
                                             (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar14 == 0))
                                          goto LAB_06d57348;
                                          if (0x47 < *unaff_x26) {
                                            unaff_x19[0x4b] = lVar13;
                                            thunk_FUN_03d233cc(unaff_x19 + 0x4b,lVar13);
                                            uVar32 = DAT_018b0e08;
                                            uVar28 = DAT_018b0744;
                                            uVar27 = DAT_018aff54;
                                            FUN_06006fd0(DAT_018b0744,DAT_018b0e08,DAT_018aff54,
                                                         &stack0x000005f0,*unaff_x25);
                                            FUN_06006fd0(DAT_018b07e4,DAT_018aff58,DAT_018b0a20,
                                                         &stack0x000005e0,*unaff_x25);
                                            FUN_05f16e30(0,0,0,0,0,0,&stack0x000005c8,*unaff_x24);
                                            FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                            FUN_0601da5c(DAT_018b0acc,DAT_018b0b64,DAT_018b0b68,
                                                         &stack0x00000590,0x48,0x47,0x49,
                                                         &stack0x00002590,*unaff_x22);
                                            lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                            if ((lVar13 != 0) &&
                                               (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                               lVar14 == 0)) goto LAB_06d57348;
                                            if (0x48 < *unaff_x26) {
                                              unaff_x19[0x4c] = lVar13;
                                              thunk_FUN_03d233cc(unaff_x19 + 0x4c,lVar13);
                                              FUN_06006fd0(uVar28,uVar32,uVar27,&stack0x00000580,
                                                           *unaff_x25);
                                              FUN_06006fd0(DAT_018b0a24,DAT_018b03cc,DAT_018afe20,
                                                           &stack0x00000570,*unaff_x25);
                                              FUN_05f16e30(0,0,0,0,0,0,&stack0x00000558,*unaff_x24);
                                              FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                              uVar28 = DAT_018afd00;
                                              FUN_0601da5c(0x427e0000,DAT_018afd00,DAT_018b0c00,
                                                           &stack0x00000520,0x49,0x48,0x4a,
                                                           &stack0x00002590,*unaff_x22);
                                              lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                              if ((lVar13 != 0) &&
                                                 (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                 lVar14 == 0)) goto LAB_06d57348;
                                              if (0x49 < *unaff_x26) {
                                                unaff_x19[0x4d] = lVar13;
                                                thunk_FUN_03d233cc(unaff_x19 + 0x4d,lVar13);
                                                uVar5 = DAT_018b0b6c;
                                                uVar35 = DAT_018b0a28;
                                                FUN_06006fd0(DAT_018b0010,&stack0x00000510,
                                                             *unaff_x25);
                                                FUN_06006fd0(DAT_018b0158,DAT_018afd04,DAT_018b0334,
                                                             &stack0x00000500,*unaff_x25);
                                                FUN_05f16e30(0,0,0,0,0,0,&stack0x000004e8,*unaff_x24
                                                            );
                                                FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                uVar34 = DAT_018b0698;
                                                FUN_0601da5c(DAT_018afe24,DAT_018b0698,DAT_018b0a2c,
                                                             &stack0x000004b0,0x4a,0x49,0x4b,
                                                             &stack0x00002590,*unaff_x22);
                                                lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21);
                                                if ((lVar13 != 0) &&
                                                   (lVar14 = thunk_FUN_03cf5138(lVar13,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar14 == 0))
                                                goto LAB_06d57348;
                                                if (0x4a < *unaff_x26) {
                                                  unaff_x19[0x4e] = lVar13;
                                                  thunk_FUN_03d233cc(unaff_x19 + 0x4e,lVar13);
                                                  uVar6 = DAT_018b0b70;
                                                  uVar4 = DAT_018b0748;
                                                  FUN_06006fd0(DAT_018b015c,&stack0x000004a0,
                                                               *unaff_x25);
                                                  FUN_06006fd0(DAT_018afe28,DAT_018b0d68,
                                                               DAT_018b049c,&stack0x00000490,
                                                               *unaff_x25);
                                                  FUN_05f16e30(0,0,0,0,0,0,&stack0x00000478,
                                                               *unaff_x24);
                                                  FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                  uVar3 = DAT_018b0338;
                                                  FUN_0601da5c(DAT_018b0f2c,DAT_018b0338,
                                                               DAT_018b0274,&stack0x00000440,0x4b,
                                                               0x4a,0x4c,&stack0x00002590,*unaff_x22
                                                              );
                                                  lVar13 = FUN_065dee50(&stack0x00002590,*unaff_x21)
                                                  ;
                                                  if ((lVar13 != 0) &&
                                                     (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x4b < *unaff_x26) {
                                                    unaff_x19[0x4f] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x4f,lVar13);
                                                    uVar7 = DAT_018b0e0c;
                                                    uVar2 = DAT_018afe7c;
                                                    FUN_06006fd0(DAT_018b05fc,&stack0x00000430,
                                                                 *unaff_x25);
                                                    FUN_06006fd0(DAT_018b0860,DAT_018b01d0,
                                                                 DAT_018b00a0,&stack0x00000420,
                                                                 *unaff_x25);
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000408,
                                                                 *unaff_x24);
                                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                    FUN_0601da5c(DAT_018b03d0,0x42c50000,
                                                                 DAT_018b0974,&stack0x000003d0,0x4c,
                                                                 0x4b,0xffffffff,&stack0x00002590,
                                                                 *unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x4c < *unaff_x26) {
                                                    unaff_x19[0x50] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x50,lVar13);
                                                    lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                                    uVar29 = *(undefined4 *)(lVar13 + 0x2c);
                                                    uVar31 = *(undefined4 *)(lVar13 + 0x30);
                                                    uVar33 = *(undefined4 *)(lVar13 + 0x34);
                                                    FUN_06006fd0(DAT_018b0e8c,uVar25,uVar30,
                                                                 &stack0x000003c0,*unaff_x25);
                                                    FUN_06006fd0(DAT_018b0978,DAT_018b0cbc,
                                                                 DAT_018b00a4,&stack0x000003b0,
                                                                 *unaff_x25);
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000398,
                                                                 *unaff_x24);
                                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                    FUN_0601da5c(uVar29,uVar31,uVar33,
                                                                 &stack0x00000360,0x4d,1,0x4e,
                                                                 &stack0x00002590,*unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x4d < *unaff_x26) {
                                                    unaff_x19[0x51] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x51,lVar13);
                                                    lVar13 = *(long *)(*unaff_x23 + 0xb8);
                                                    uVar30 = *(undefined4 *)(lVar13 + 0x2c);
                                                    uVar25 = *(undefined4 *)(lVar13 + 0x30);
                                                    uVar29 = *(undefined4 *)(lVar13 + 0x34);
                                                    FUN_06006fd0(DAT_018afe2c,uVar26,
                                                                 uStack00000000000000a8,
                                                                 &stack0x00000350,*unaff_x25);
                                                    FUN_06006fd0(DAT_018b0600,DAT_018b1050,
                                                                 DAT_018b0ebc,&stack0x00000340,
                                                                 *unaff_x25);
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000328,
                                                                 *unaff_x24);
                                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                    FUN_0601da5c(uVar30,uVar25,uVar29,
                                                                 &stack0x000002f0,0x4e,0x4d,0x4f,
                                                                 &stack0x00002590,*unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x4e < *unaff_x26) {
                                                    unaff_x19[0x52] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x52,lVar13);
                                                    uVar30 = DAT_018b0a30;
                                                    FUN_06006fd0(DAT_018b0a30,uVar32,uVar27,
                                                                 &stack0x000002e0,*unaff_x25);
                                                    FUN_06006fd0(DAT_018b0604,DAT_018b0ad0,
                                                                 DAT_018b0608,&stack0x000002d0,
                                                                 *unaff_x25);
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x000002b8,
                                                                 *unaff_x24);
                                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                    FUN_0601da5c(DAT_018b08f4,DAT_018b069c,
                                                                 0xc3000000,&stack0x00000280,0x4f,
                                                                 0x4e,0x50,&stack0x00002590,
                                                                 *unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x4f < *unaff_x26) {
                                                    unaff_x19[0x53] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x53,lVar13);
                                                    FUN_06006fd0(uVar30,uVar32,uVar27,
                                                                 &stack0x00000270,*unaff_x25);
                                                    FUN_06006fd0(DAT_018b04a0,DAT_018b0c04,
                                                                 DAT_018b0d6c,&stack0x00000260,
                                                                 *unaff_x25);
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x00000248,
                                                                 *unaff_x24);
                                                    FUN_085d262c(fStack00000000000000bc * 0.0,0);
                                                    FUN_0601da5c(0xc2e90000,uVar28,DAT_018b06a0,
                                                                 &stack0x00000210,0x50,0x4f,0x51,
                                                                 &stack0x00002590,*unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x50 < *unaff_x26) {
                                                    unaff_x19[0x54] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x54,lVar13);
                                                    FUN_06006fd0(DAT_018b03d4,uVar35,uVar5,
                                                                 &stack0x00000200,*unaff_x25);
                                                    FUN_06006fd0(DAT_018b08f8,DAT_018afd08,
                                                                 DAT_018b07e8,&stack0x000001f0,
                                                                 *unaff_x25);
                                                    in_stack_000001d8 = 0;
                                                    in_stack_000001e0 = 0;
                                                    in_stack_000001e8 = 0;
                                                    FUN_05f16e30(0,0,0,0,0,0,&stack0x000001d8,
                                                                 *unaff_x24);
                                                    FUN_085d262c(in_stack_000001e0._4_4_ *
                                                                 fStack00000000000000bc,0);
                                                    in_stack_000001d0 = 0;
                                                    in_stack_000001b8 = 0;
                                                    in_stack_000001b0 = 0;
                                                    in_stack_000001c8 = 0;
                                                    in_stack_000001c0 = 0;
                                                    in_stack_000001a8 = 0;
                                                    in_stack_000001a0 = 0;
                                                    FUN_0601da5c(DAT_018b033c,uVar34,DAT_018b04a4,
                                                                 &stack0x000001a0,0x51,0x50,0x52,
                                                                 &stack0x00002590,*unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x51 < *unaff_x26) {
                                                    unaff_x19[0x55] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x55,lVar13);
                                                    in_stack_00000198 = 0;
                                                    in_stack_00000190 = 0;
                                                    FUN_06006fd0(DAT_018b06a4,uVar6,uVar4,
                                                                 &stack0x00000190,*unaff_x25);
                                                    in_stack_00000188 = 0;
                                                    _uStack0000000000000180 = 0;
                                                    FUN_06006fd0(DAT_018afea0,DAT_018b0d70,
                                                                 DAT_018b0cc0,&stack0x00000180,
                                                                 *unaff_x25);
                                                    in_stack_00000168 = 0;
                                                    in_stack_00000170 = 0;
                                                    in_stack_00000178 = 0;
                                                    FUN_05f16e30(in_stack_00000190 & 0xffffffff,
                                                                 in_stack_00000190._4_4_,
                                                                 in_stack_00000198,
                                                                 uStack0000000000000180,
                                                                 uStack0000000000000184,
                                                                 in_stack_00000188,&stack0x00000168,
                                                                 *unaff_x24);
                                                    FUN_085d262c(in_stack_00000170._4_4_ *
                                                                 fStack00000000000000bc,0);
                                                    in_stack_00000160 = 0;
                                                    in_stack_00000148 = 0;
                                                    in_stack_00000140 = 0;
                                                    in_stack_00000158 = 0;
                                                    in_stack_00000150 = 0;
                                                    in_stack_00000138 = 0;
                                                    in_stack_00000130 = 0;
                                                    FUN_0601da5c(DAT_018b0d74,uVar3,DAT_018b0d78,
                                                                 &stack0x00000130,0x52,0x51,0x53,
                                                                 &stack0x00002590,*unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x52 < *unaff_x26) {
                                                    unaff_x19[0x56] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x56,lVar13);
                                                    in_stack_00000128 = 0;
                                                    in_stack_00000120 = 0;
                                                    FUN_06006fd0(DAT_018b0d7c,uVar2,uVar7,
                                                                 &stack0x00000120,*unaff_x25);
                                                    in_stack_00000118 = 0;
                                                    _uStack0000000000000110 = 0;
                                                    FUN_06006fd0(DAT_018b03d8,DAT_018b0e10,
                                                                 DAT_018b0864,&stack0x00000110,
                                                                 *unaff_x25);
                                                    in_stack_000000f8 = 0;
                                                    in_stack_00000100 = 0;
                                                    in_stack_00000108 = 0;
                                                    FUN_05f16e30(in_stack_00000120 & 0xffffffff,
                                                                 in_stack_00000120._4_4_,
                                                                 in_stack_00000128,
                                                                 uStack0000000000000110,
                                                                 uStack0000000000000114,
                                                                 in_stack_00000118,&stack0x000000f8,
                                                                 *unaff_x24);
                                                    FUN_085d262c(in_stack_00000100._4_4_ *
                                                                 fStack00000000000000bc,0);
                                                    in_stack_000000f0 = 0;
                                                    in_stack_000000d8 = 0;
                                                    in_stack_000000d0 = 0;
                                                    in_stack_000000e8 = 0;
                                                    in_stack_000000e0 = 0;
                                                    in_stack_000000c8 = 0;
                                                    in_stack_000000c0 = 0;
                                                    FUN_0601da5c(DAT_018b0fd0,DAT_018b04a8,
                                                                 DAT_018b04ac,&stack0x000000c0,0x53,
                                                                 0x52,0xffffffff,&stack0x00002590,
                                                                 *unaff_x22);
                                                    lVar13 = FUN_065dee50(&stack0x00002590,
                                                                          *unaff_x21);
                                                    if ((lVar13 != 0) &&
                                                       (lVar14 = thunk_FUN_03cf5138(lVar13,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar14 == 0))
                                                  goto LAB_06d57348;
                                                  if (0x53 < *unaff_x26) {
                                                    unaff_x19[0x57] = lVar13;
                                                    thunk_FUN_03d233cc(unaff_x19 + 0x57,lVar13);
                                                    *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x48)
                                                         = unaff_x19;
                                                    thunk_FUN_03d233cc();
                                                    uVar15 = thunk_FUN_03cf5234(*unaff_x23);
                                                    FUN_06d49f54();
                                                    puVar16 = (undefined8 *)
                                                              (*(long *)(*unaff_x23 + 0xb8) + 0x50);
                                                    *puVar16 = uVar15;
                                                    thunk_FUN_03d233cc(puVar16,uVar15);
                                                    puVar9 = PTR_DAT_08e8ea88;
                                                    puVar8 = PTR_DAT_08e8e888;
                                                    lVar13 = *(long *)(*(long *)(*unaff_x23 + 0xb8)
                                                                      + 0x48);
                                                    if (lVar13 != 0) {
                                                      uVar22 = *(uint *)(lVar13 + 0x18);
                                                      if (0 < (int)uVar22) {
                                                        uVar19 = 0;
                                                        do {
                                                          if (uVar22 <= uVar19) goto LAB_06d57344;
                                                          lVar21 = (long)(int)uVar19;
                                                          lVar14 = *(long *)(lVar13 + lVar21 * 8 +
                                                                            0x20);
                                                          if (lVar14 == 0) goto LAB_06d57340;
                                                          if (uVar19 != *(uint *)(lVar14 + 0x10)) {
                                                            lVar13 = thunk_FUN_03ce5214(
                                                  PTR_DAT_08e8e888);
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(lVar13 + 0xb8) + 0x48);
                                                  FUN_036f8b10(uVar15);
                                                  FUN_037100c0(uVar15,lVar21);
                                                  FUN_036f8b10();
                                                  uVar15 = thunk_FUN_03ce5214(PTR_DAT_08e8e8b8);
                                                  uVar15 = thunk_FUN_03cf4e64(uVar15,&
                                                  stack0x00002590);
                                                  lVar13 = thunk_FUN_03ce5214(puVar8);
                                                  uVar23 = *(undefined8 *)
                                                            (*(long *)(lVar13 + 0xb8) + 0x48);
                                                  FUN_036f8b10(uVar23);
                                                  FUN_037100c0(uVar23,lVar21);
                                                  FUN_036f8b10();
                                                  uVar23 = thunk_FUN_03ce5214(PTR_DAT_08e699d0);
                                                  uVar23 = thunk_FUN_03cf4e64(uVar23,&
                                                  stack0x00002510);
                                                  uVar17 = thunk_FUN_03ce5214(PTR_DAT_08e8eaa0);
                                                  uVar15 = FUN_06f75240(uVar17,uVar15,uVar23,0);
                                                  uVar23 = thunk_FUN_03ce5214(PTR_DAT_08e8eaa8);
                                                  uVar15 = FUN_06f683f8(uVar23,uVar15,0);
                                                  thunk_FUN_03ce5214(PTR_DAT_08e695a0);
                                                  uVar23 = thunk_FUN_03cf5234();
                                                  FUN_071396dc(uVar23,uVar15,0);
                                                  uVar15 = thunk_FUN_03ce5214(PTR_DAT_08e8eab0);
                    /* WARNING: Subroutine does not return */
                                                  FUN_03c8f9fc(uVar23,uVar15);
                                                  }
                                                  uVar19 = uVar19 + 1;
                                                  } while ((int)uVar19 < (int)uVar22);
                                                  }
                                                  lVar13 = thunk_FUN_03cf5234(*(undefined8 *)
                                                                               PTR_DAT_08e8ea98);
                                                  FUN_069a34ac(lVar13,*(undefined8 *)puVar9);
                                                  puVar12 = PTR_DAT_08e8ea90;
                                                  puVar11 = PTR_DAT_08e8ea80;
                                                  puVar10 = PTR_DAT_08e6a9a0;
                                                  puVar9 = PTR_DAT_08e6a940;
                                                  puVar8 = PTR_DAT_08e6a938;
                                                  lVar21 = *(long *)(*unaff_x23 + 0xb8);
                                                  lVar14 = *(long *)(lVar21 + 0x48);
                                                  if (lVar14 != 0) {
                                                    uVar18 = *(ulong *)(lVar14 + 0x18);
                                                    if (0 < (int)uVar18) {
                                                      uVar22 = 0;
                                                      do {
                                                        if ((uint)uVar18 <= uVar22)
                                                        goto LAB_06d57344;
                                                        lVar14 = *(long *)(lVar14 + (long)(int)
                                                  uVar22 * 8 + 0x20);
                                                  if (lVar14 == 0) goto LAB_06d57340;
                                                  iVar1 = *(int *)(lVar14 + 0x14);
                                                  if (iVar1 != -1) {
                                                    if (lVar13 == 0) goto LAB_06d57340;
                                                    uVar18 = FUN_069a5d1c(lVar13,iVar1,
                                                                          &stack0x00002588,
                                                                          *(undefined8 *)puVar11);
                                                    if ((uVar18 & 1) == 0) {
                                                      in_stack_00002588 =
                                                           thunk_FUN_03cf5234(*(undefined8 *)puVar8)
                                                      ;
                                                      FUN_051c01c0(in_stack_00002588,
                                                                   *(undefined8 *)puVar9);
                                                      FUN_069a4278(lVar13,iVar1,in_stack_00002588,
                                                                   *(undefined8 *)puVar12);
                                                    }
                                                    if (in_stack_00002588 == 0) goto LAB_06d57340;
                                                    lVar14 = *(long *)(in_stack_00002588 + 0x10);
                                                    lVar21 = *(long *)puVar10;
                                                    *(int *)(in_stack_00002588 + 0x1c) =
                                                         *(int *)(in_stack_00002588 + 0x1c) + 1;
                                                    if (lVar14 == 0) goto LAB_06d57340;
                                                    uVar19 = *(uint *)(in_stack_00002588 + 0x18);
                                                    if (uVar19 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(in_stack_00002588 + 0x18) =
                                                           uVar19 + 1;
                                                      *(uint *)(lVar14 + (long)(int)uVar19 * 4 +
                                                               0x20) = uVar22;
                                                    }
                                                    else {
                                                      FUN_051c0a14(in_stack_00002588,uVar22,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  }
                                                  lVar21 = *(long *)(*unaff_x23 + 0xb8);
                                                  lVar14 = *(long *)(lVar21 + 0x48);
                                                  if (lVar14 == 0) goto LAB_06d57340;
                                                  uVar18 = *(ulong *)(lVar14 + 0x18);
                                                  uVar22 = uVar22 + 1;
                                                  } while ((int)uVar22 < (int)uVar18);
                                                  }
                                                  puVar10 = PTR_DAT_08e8ea78;
                                                  puVar9 = PTR_DAT_08e85330;
                                                  puVar8 = PTR_DAT_08e6cfd8;
                                                  if (0 < (int)uVar18) {
                                                    uVar22 = 0;
                                                    plVar20 = (long *)(lVar21 + 0x48);
                                                    do {
                                                      if ((uint)uVar18 <= uVar22) goto LAB_06d57344;
                                                      lVar14 = *(long *)(lVar14 + (long)(int)uVar22
                                                                                  * 8 + 0x20);
                                                      if ((lVar14 == 0) ||
                                                         (FUN_065def7c(lVar14,*plVar20,
                                                                       *(undefined8 *)puVar10),
                                                         lVar13 == 0)) goto LAB_06d57340;
                                                      uVar18 = FUN_069a5d1c(lVar13,uVar22,
                                                                            &stack0x00002580,
                                                                            *(undefined8 *)puVar11);
                                                      lVar14 = *(long *)(*(long *)(*unaff_x23 + 0xb8
                                                                                  ) + 0x48);
                                                      if (lVar14 == 0) goto LAB_06d57340;
                                                      if (*(uint *)(lVar14 + 0x18) <= uVar22)
                                                      goto LAB_06d57344;
                                                      lVar14 = *(long *)(lVar14 + (long)(int)uVar22
                                                                                  * 8 + 0x20);
                                                      if ((uVar18 & 1) == 0) {
                                                        lVar24 = *(long *)puVar9;
                                                        lVar21 = *(long *)(lVar24 + 0x38);
                                                        if (lVar21 == 0) {
                                                          FUN_03cf12a0(lVar24);
                                                          lVar21 = *(long *)(lVar24 + 0x38);
                                                        }
                                                        lVar21 = *(long *)(lVar21 + 0x10);
                                                        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                                                          lVar21 = FUN_03cf1244();
                                                        }
                                                        if (*(int *)(lVar21 + 0xe0) == 0) {
                                                          thunk_FUN_03cd7500();
                                                        }
                                                        lVar21 = *(long *)(*(long *)(lVar24 + 0x38)
                                                                          + 0x10);
                                                        if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                                                          lVar21 = FUN_03cf1244();
                                                        }
                                                        if (lVar14 == 0) goto LAB_06d57340;
                                                        uVar15 = **(undefined8 **)(lVar21 + 0xb8);
                                                      }
                                                      else if ((in_stack_00002580 == 0) ||
                                                              (uVar15 = 
                                                  System_Collections_Generic_List<UICharInfo>__System_Collections_IList_get_Item
                                                            (in_stack_00002580,*(undefined8 *)puVar8
                                                            ), lVar14 == 0)) goto LAB_06d57340;
                                                  *(undefined8 *)(lVar14 + 0x50) = uVar15;
                                                  thunk_FUN_03d233cc((undefined8 *)(lVar14 + 0x50));
                                                  plVar20 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                    0x48);
                                                  lVar14 = *plVar20;
                                                  if (lVar14 == 0) goto LAB_06d57340;
                                                  uVar18 = (ulong)*(uint *)(lVar14 + 0x18);
                                                  uVar22 = uVar22 + 1;
                                                  } while ((int)uVar22 <
                                                           (int)*(uint *)(lVar14 + 0x18));
                                                  }
                                                  return;
                                                  }
                                                  }
LAB_06d57340:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03c8fb30();
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
      }
    }
  }
LAB_06d57344:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


