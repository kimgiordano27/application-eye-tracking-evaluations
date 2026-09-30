/*
FUNCTION_NAME: Unity.Services.Matchmaker.PayloadProxy.PayloadProxyClient.<GetPayloadProxyJwtAsync>d__2$$MoveNext
ENTRY_POINT: 05f7ed94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Services_Matchmaker_PayloadProxy_PayloadProxyClient_<GetPayloadProxyJwtAsync>d__2__MoveNext
               (void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  
  *(undefined1 *)(unaff_x20 + 0x4bd) = 1;
  puVar3 = Unity_Services_Authentication_AuthenticationService_TypeInfo;
  FUN_0552aca4();
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
  uVar13 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  *(undefined4 *)(unaff_x19 + 0x50) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x2c) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x24) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x58),0);
  *(undefined4 *)(unaff_x19 + 0x60) = 0x3f800000;
  if (DAT_06dbefd0 == '\0') {
    FUN_02d965b8(PTR_DAT_069fbf00);
    DAT_06dbefd0 = '\x01';
  }
  puVar4 = PTR_DAT_069fbf00;
  uVar8 = *(undefined8 *)puVar3;
  uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_069fbf00 + 0xb8) + 8);
  *(undefined8 *)(unaff_x19 + 0x34) = DAT_010fca98;
  *(undefined4 *)(unaff_x19 + 0x70) = 5;
  *(undefined1 *)(unaff_x19 + 0x6c) = 0;
  *(undefined8 *)(unaff_x19 + 0x3c) = 0x13f800000;
  uVar1 = _UNK_011005d8;
  uVar13 = _DAT_011005d0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined1 *)(unaff_x19 + 0x74) = 0;
  *(undefined8 *)(unaff_x19 + 100) = uVar14;
  *(undefined4 *)(unaff_x19 + 0x44) = 0;
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
  *(undefined4 *)(unaff_x19 + 0x4c) = 0x41200000;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar13;
  lVar9 = FUN_02d966a4(uVar8,2);
  in_stack_00000168 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  FUN_0633af74(0,0,0,0x3f800000,0,&stack0x00000168,0);
  if (lVar9 == 0) goto LAB_05f7f4f8;
  if (*(int *)(lVar9 + 0x18) != 0) {
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000170;
    *(undefined8 *)(lVar9 + 0x20) = in_stack_00000168;
    *(undefined4 *)(lVar9 + 0x30) = in_stack_00000178;
    in_stack_00000150 = 0;
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    FUN_0633af74(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&stack0x00000150,0);
    puVar2 = System_Net_AuthenticationSchemes_TypeInfo;
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
      *(undefined4 *)(lVar9 + 0x44) = in_stack_00000160;
      *(undefined8 *)(lVar9 + 0x3c) = in_stack_00000158;
      *(undefined8 *)(lVar9 + 0x34) = in_stack_00000150;
      lVar10 = FUN_02d966a4(*(undefined8 *)puVar2,2);
      in_stack_00000148 = 0;
      FUN_0633af84(0,0,&stack0x00000148,0);
      if (lVar10 == 0) goto LAB_05f7f4f8;
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000148;
        in_stack_00000140 = 0;
        FUN_0633af84(0x3f800000,0x3f800000,&stack0x00000140,0);
        puVar6 = Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__;
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000140;
          puVar5 = System_GC_TypeInfo;
          uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
          FUN_05fa6b04(uVar13,lVar9,lVar10,2,0xffffffff,0xffffffff,0,0);
          *(undefined8 *)(unaff_x19 + 0x90) = uVar13;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x90),uVar13);
          uVar13 = *(undefined8 *)puVar5;
          *(undefined4 *)(unaff_x19 + 0x98) = 0;
          *(undefined1 *)(unaff_x19 + 0xa5) = 1;
          *(undefined4 *)(unaff_x19 + 0xa0) = 1;
          *(undefined1 *)(unaff_x19 + 0x9c) = 0;
          *(undefined8 *)(unaff_x19 + 0xa8) = 0x3f80000000000000;
          lVar9 = thunk_FUN_02dd3144(uVar13);
          FUN_0633b0dc(lVar9,0);
          plVar12 = (long *)(unaff_x19 + 200);
          *plVar12 = lVar9;
          LeanTween__value(plVar12,lVar9);
          lVar10 = *plVar12;
          lVar9 = FUN_02d966a4(*(undefined8 *)puVar3,2);
          in_stack_00000128 = 0;
          in_stack_00000130 = 0;
          in_stack_00000138 = 0;
          FUN_0633af74(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0,&stack0x00000128,0);
          if (lVar9 == 0) goto LAB_05f7f4f8;
          if (*(int *)(lVar9 + 0x18) != 0) {
            *(undefined8 *)(lVar9 + 0x28) = in_stack_00000130;
            *(undefined8 *)(lVar9 + 0x20) = in_stack_00000128;
            *(undefined4 *)(lVar9 + 0x30) = in_stack_00000138;
            in_stack_00000110 = 0;
            in_stack_00000118 = 0;
            in_stack_00000120 = 0;
            FUN_0633af74(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,&stack0x00000110,0);
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
              *(undefined4 *)(lVar9 + 0x44) = in_stack_00000120;
              *(undefined8 *)(lVar9 + 0x3c) = in_stack_00000118;
              *(undefined8 *)(lVar9 + 0x34) = in_stack_00000110;
              lVar11 = FUN_02d966a4(*(undefined8 *)puVar2,2);
              in_stack_00000108 = 0;
              FUN_0633af84(0x3f800000,0,&stack0x00000108,0);
              if (lVar11 == 0) goto LAB_05f7f4f8;
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined8 *)(lVar11 + 0x20) = in_stack_00000108;
                in_stack_00000100 = 0;
                FUN_0633af84(0x3f800000,0x3f800000,&stack0x00000100,0);
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar11 + 0x28) = in_stack_00000100;
                  puVar3 = PTR_DAT_069fb9a0;
                  if (lVar10 != 0) {
                    FUN_0633ba80(lVar10,lVar9,lVar11,0);
                    lVar9 = FUN_02d966a4(*(undefined8 *)puVar3,2);
                    in_stack_000000e0 = 0;
                    in_stack_000000e8 = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    FUN_0630346c(0,0,0x3f800000,0x3f800000,&stack0x000000e0,0);
                    if (lVar9 != 0) {
                      if (*(int *)(lVar9 + 0x18) != 0) {
                        *(undefined8 *)(lVar9 + 0x28) = in_stack_000000e8;
                        *(undefined8 *)(lVar9 + 0x20) = in_stack_000000e0;
                        *(undefined4 *)(lVar9 + 0x38) = in_stack_000000f8;
                        *(undefined8 *)(lVar9 + 0x30) = in_stack_000000f0;
                        in_stack_000000c0 = 0;
                        in_stack_000000c8 = 0;
                        in_stack_000000d8 = 0;
                        in_stack_000000d0 = 0;
                        FUN_0630346c(0x3f800000,0x3f800000,0x3f800000,0xbf800000,&stack0x000000c0,0)
                        ;
                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined4 *)(lVar9 + 0x54) = in_stack_000000d8;
                          puVar2 = PTR_DAT_069fb998;
                          *(undefined8 *)(lVar9 + 0x4c) = in_stack_000000d0;
                          *(undefined8 *)(lVar9 + 0x44) = in_stack_000000c8;
                          *(undefined8 *)(lVar9 + 0x3c) = in_stack_000000c0;
                          uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                          FUN_06304314(uVar13,lVar9,0);
                          *(undefined8 *)(unaff_x19 + 0xb0) = uVar13;
                          LeanTween__value((undefined8 *)(unaff_x19 + 0xb0),uVar13);
                          lVar9 = FUN_02d966a4(*(undefined8 *)puVar3,2);
                          in_stack_000000a0 = 0;
                          in_stack_000000a8 = 0;
                          in_stack_000000b8 = 0;
                          in_stack_000000b0 = 0;
                          FUN_0630345c(0,0x3f800000,&stack0x000000a0,0);
                          if (lVar9 == 0) goto LAB_05f7f4f8;
                          if (*(int *)(lVar9 + 0x18) != 0) {
                            *(undefined8 *)(lVar9 + 0x28) = in_stack_000000a8;
                            *(undefined8 *)(lVar9 + 0x20) = in_stack_000000a0;
                            *(undefined4 *)(lVar9 + 0x38) = in_stack_000000b8;
                            *(undefined8 *)(lVar9 + 0x30) = in_stack_000000b0;
                            in_stack_00000080 = 0;
                            in_stack_00000088 = 0;
                            in_stack_00000098 = 0;
                            in_stack_00000090 = 0;
                            FUN_0630345c(0x3f800000,0x3f800000,&stack0x00000080,0);
                            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                              *(undefined4 *)(lVar9 + 0x54) = in_stack_00000098;
                              *(undefined8 *)(lVar9 + 0x4c) = in_stack_00000090;
                              *(undefined8 *)(lVar9 + 0x44) = in_stack_00000088;
                              *(undefined8 *)(lVar9 + 0x3c) = in_stack_00000080;
                              uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                              FUN_06304314(uVar13,lVar9,0);
                              *(undefined8 *)(unaff_x19 + 0xb8) = uVar13;
                              LeanTween__value((undefined8 *)(unaff_x19 + 0xb8),uVar13);
                              uVar13 = *(undefined8 *)puVar3;
                              *(undefined4 *)(unaff_x19 + 0x110) = 0;
                              lVar9 = FUN_02d966a4(uVar13,2);
                              in_stack_00000060 = 0;
                              in_stack_00000068 = 0;
                              in_stack_00000078 = 0;
                              in_stack_00000070 = 0;
                              FUN_0630345c(0,0,&stack0x00000060,0);
                              if (lVar9 == 0) goto LAB_05f7f4f8;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                *(undefined8 *)(lVar9 + 0x28) = in_stack_00000068;
                                *(undefined8 *)(lVar9 + 0x20) = in_stack_00000060;
                                *(undefined4 *)(lVar9 + 0x38) = in_stack_00000078;
                                *(undefined8 *)(lVar9 + 0x30) = in_stack_00000070;
                                in_stack_00000040 = 0;
                                in_stack_00000048 = 0;
                                in_stack_00000058 = 0;
                                in_stack_00000050 = 0;
                                FUN_0630345c(0x3f800000,0,&stack0x00000040,0);
                                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined4 *)(lVar9 + 0x54) = in_stack_00000058;
                                  *(undefined8 *)(lVar9 + 0x4c) = in_stack_00000050;
                                  *(undefined8 *)(lVar9 + 0x44) = in_stack_00000048;
                                  *(undefined8 *)(lVar9 + 0x3c) = in_stack_00000040;
                                  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                  FUN_06304314(uVar13,lVar9,0);
                                  *(undefined8 *)(unaff_x19 + 0x118) = uVar13;
                                  LeanTween__value(unaff_x19 + 0x118,uVar13);
                                  cVar7 = DAT_06dbefd0;
                                  uVar1 = DAT_010fc1e8;
                                  uVar13 = DAT_010fbc30;
                                  *(undefined4 *)(unaff_x19 + 0xc0) = 0;
                                  *(undefined4 *)(unaff_x19 + 0xd0) = 0x3f400000;
                                  *(undefined8 *)(unaff_x19 + 0xd4) = uVar13;
                                  *(undefined8 *)(unaff_x19 + 0xdc) = uVar1;
                                  *(undefined1 *)(unaff_x19 + 0xe4) = 0;
                                  if (cVar7 == '\0') {
                                    FUN_02d965b8(PTR_DAT_069fbf00);
                                    DAT_06dbefd0 = '\x01';
                                  }
                                  uVar13 = *(undefined8 *)puVar3;
                                  *(undefined8 *)(unaff_x19 + 0xe8) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                                  lVar9 = FUN_02d966a4(uVar13,2);
                                  in_stack_00000020 = 0;
                                  in_stack_00000028 = 0;
                                  in_stack_00000038 = 0;
                                  in_stack_00000030 = 0;
                                  FUN_0630346c(0,0,0x3f800000,0x3f800000,&stack0x00000020,0);
                                  if (lVar9 == 0) goto LAB_05f7f4f8;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
                                    *(undefined8 *)(lVar9 + 0x20) = in_stack_00000020;
                                    *(undefined4 *)(lVar9 + 0x38) = in_stack_00000038;
                                    *(undefined8 *)(lVar9 + 0x30) = in_stack_00000030;
                                    FUN_0630346c(0x3f800000,0x3f800000,0x3f800000,0xbf800000);
                                    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined4 *)(lVar9 + 0x54) = 0;
                                      *(undefined8 *)(lVar9 + 0x4c) = 0;
                                      *(undefined8 *)(lVar9 + 0x44) = 0;
                                      *(undefined8 *)(lVar9 + 0x3c) = 0;
                                      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                                      FUN_06304314(uVar13,lVar9,0);
                                      *(undefined8 *)(unaff_x19 + 0xf0) = uVar13;
                                      LeanTween__value((undefined8 *)(unaff_x19 + 0xf0),uVar13);
                                      *(undefined1 *)(unaff_x19 + 0xf8) = 0;
                                      uVar13 = DAT_010fc538;
                                      *(undefined8 *)(unaff_x19 + 0x104) = 6;
                                      *(undefined1 *)(unaff_x19 + 0x10c) = 0;
                                      *(undefined8 *)(unaff_x19 + 0xfc) = uVar13;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto Unity_Services_Matchmaker_Models_ConversionExtensions__ToMatchProperties;
                    }
                  }
LAB_05f7f4f8:
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              }
            }
          }
        }
      }
    }
  }
Unity_Services_Matchmaker_Models_ConversionExtensions__ToMatchProperties:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


