/*
FUNCTION_NAME: OVRPlugin.OVRP_1_90_0$$.cctor
ENTRY_POINT: 04f9667c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_90_0___cctor(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 in_stack_000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined8 uStack00000000000001d4;
  undefined8 in_stack_000001e0;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x140));
  FUN_02b3c81c(System_Collections_IEnumerable_var);
  FUN_02b3c81c(System_Func<float[],_Vector4>_TypeInfo);
  FUN_02b3c81c(System_Func<AndroidAxis,_string>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xdfa) = 1;
  thunk_FUN_02b79644(*unaff_x23);
                    /* try { // try from 04f966b8 to 050966eb has its CatchHandler @ 04f9644c */
  FUN_04f965b8();
  lVar8 = FUN_02b3c908(*unaff_x20,0x18);
                    /* try { // try from 04f966ec to 050966ef has its CatchHandler @ 04f966fc */
                    /* try { // try from 04f966f0 to 050966f3 has its CatchHandler @ 04f966f8 */
                    /* try { // try from 04f966f4 to 05096723 has its CatchHandler @ 04f9644c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f966f0 with catch @ 04f966f8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f966ec with catch @ 04f966fc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f96628 with catch @ 04f96700
                        */
  FUN_05c99d80(0,0,0,0,0,0,0xbf800000,&stack0x000005e0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined8 *)(lVar8 + 0x2c) = 0;
    *(undefined8 *)(lVar8 + 0x24) = 0;
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x40) = 0;
    FUN_05c99d80(0,0,0,0,0,0,0xbf800000,&stack0x000005a0,0);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar8 + 0x50) = 0;
      *(undefined8 *)(lVar8 + 0x48) = 0;
      uVar5 = DAT_01032668;
      *(undefined8 *)(lVar8 + 0x5c) = 0;
      *(undefined8 *)(lVar8 + 0x54) = 0;
      uVar7 = DAT_01032748;
      uVar6 = DAT_01032744;
      uVar4 = DAT_010325b0;
      uVar3 = DAT_01032204;
      uVar2 = DAT_01032200;
      uVar1 = DAT_01031e14;
      *(undefined4 *)(lVar8 + 0x44) = 0;
      *(undefined4 *)(lVar8 + 100) = 0;
      FUN_05c99d80(uVar5,uVar2,uVar6,uVar4,uVar1,uVar3,uVar7,&stack0x00000560,0);
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x74) = 0;
        *(undefined8 *)(lVar8 + 0x6c) = 0;
        uVar4 = DAT_01032334;
        *(undefined8 *)(lVar8 + 0x80) = 0;
        *(undefined8 *)(lVar8 + 0x78) = 0;
        uVar7 = DAT_01032904;
        uVar6 = DAT_010328a8;
        uVar5 = DAT_01032464;
        uVar3 = DAT_010321a0;
        uVar2 = DAT_01031fa8;
        uVar1 = DAT_01031c64;
        *(undefined4 *)(lVar8 + 0x68) = 0;
        *(undefined4 *)(lVar8 + 0x88) = 0;
        FUN_05c99d80(uVar4,uVar5,uVar1,uVar2,uVar3,uVar7,uVar6,&stack0x00000520,0);
        uVar1 = DAT_010320c0;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
          *(undefined4 *)(lVar8 + 0x8c) = 2;
          *(undefined8 *)(lVar8 + 0x98) = 0;
          *(undefined8 *)(lVar8 + 0x90) = 0;
          uVar3 = DAT_01031d3c;
          *(undefined8 *)(lVar8 + 0xa4) = 0;
          *(undefined8 *)(lVar8 + 0x9c) = 0;
          uVar7 = DAT_010327bc;
          uVar6 = DAT_010323b0;
          uVar5 = DAT_010323ac;
          uVar4 = DAT_01031dc0;
          uVar2 = DAT_01031cc8;
          *(undefined4 *)(lVar8 + 0xac) = 0;
          FUN_05c99d80(uVar3,uVar5,uVar1,uVar2,uVar7,uVar6,uVar4,&stack0x000004e0,0);
          if (4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined4 *)(lVar8 + 0xb0) = 3;
            *(undefined8 *)(lVar8 + 0xbc) = 0;
            *(undefined8 *)(lVar8 + 0xb4) = 0;
            *(undefined8 *)(lVar8 + 200) = 0;
            *(undefined8 *)(lVar8 + 0xc0) = 0;
            uVar7 = DAT_01032908;
            uVar6 = DAT_010327c0;
            uVar5 = DAT_01032600;
            uVar4 = DAT_010322d0;
            uVar3 = DAT_01031e18;
            uVar2 = DAT_01031c68;
            *(undefined4 *)(lVar8 + 0xd0) = 0;
            FUN_05c99d80(uVar7,uVar6,uVar1,uVar4,uVar5,uVar2,uVar3,&stack0x000004a0,0);
            if (5 < *(uint *)(lVar8 + 0x18)) {
              *(undefined4 *)(lVar8 + 0xd4) = 4;
              *(undefined8 *)(lVar8 + 0xe0) = 0;
              *(undefined8 *)(lVar8 + 0xd8) = 0;
              uVar2 = DAT_01032024;
              *(undefined8 *)(lVar8 + 0xec) = 0;
              *(undefined8 *)(lVar8 + 0xe4) = 0;
              uVar7 = DAT_01032844;
              uVar6 = DAT_010326cc;
              uVar5 = DAT_0103266c;
              uVar4 = DAT_010324d4;
              uVar3 = DAT_01032028;
              uVar1 = DAT_01031dc4;
              *(undefined4 *)(lVar8 + 0xf4) = 0;
              FUN_05c99d80(uVar2,uVar6,uVar3,uVar7,uVar1,uVar5,uVar4,&stack0x00000460,0);
              if (6 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x104) = 0;
                *(undefined8 *)(lVar8 + 0xfc) = 0;
                uVar6 = DAT_010327c4;
                *(undefined8 *)(lVar8 + 0x110) = 0;
                *(undefined8 *)(lVar8 + 0x108) = 0;
                uVar7 = DAT_01032848;
                uVar5 = DAT_010326d0;
                uVar4 = DAT_01032670;
                uVar3 = DAT_01032468;
                uVar2 = DAT_01031efc;
                uVar1 = DAT_01031dc8;
                *(undefined4 *)(lVar8 + 0xf8) = 0;
                *(undefined4 *)(lVar8 + 0x118) = 0;
                FUN_05c99d80(uVar2,uVar4,uVar6,uVar5,uVar1,uVar7,uVar3,&stack0x00000420,0);
                if ((*(uint *)(lVar8 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined4 *)(lVar8 + 0x11c) = 6;
                  *(undefined8 *)(lVar8 + 0x128) = 0;
                  *(undefined8 *)(lVar8 + 0x120) = 0;
                  *(undefined8 *)(lVar8 + 0x134) = 0;
                  *(undefined8 *)(lVar8 + 300) = 0;
                  uVar7 = DAT_01032550;
                  uVar6 = DAT_01032404;
                  uVar5 = DAT_01032400;
                  uVar4 = DAT_01032338;
                  uVar3 = DAT_010321a4;
                  uVar2 = DAT_01031e90;
                  uVar1 = DAT_01031e1c;
                  *(undefined4 *)(lVar8 + 0x13c) = 0;
                  FUN_05c99d80(uVar1,uVar5,uVar6,uVar7,uVar4,uVar3,uVar2,&stack0x000003e0,0);
                  if (8 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined4 *)(lVar8 + 0x140) = 7;
                    *(undefined8 *)(lVar8 + 0x158) = 0;
                    *(undefined8 *)(lVar8 + 0x150) = 0;
                    *(undefined8 *)(lVar8 + 0x14c) = 0;
                    *(undefined8 *)(lVar8 + 0x144) = 0;
                    uVar7 = DAT_01032980;
                    uVar6 = DAT_010328ac;
                    uVar5 = DAT_010324d8;
                    uVar4 = DAT_01032408;
                    uVar3 = DAT_010323b4;
                    uVar2 = DAT_01032138;
                    uVar1 = DAT_0103202c;
                    *(undefined4 *)(lVar8 + 0x160) = 0;
                    FUN_05c99d80(uVar4,uVar7,uVar6,uVar5,uVar3,uVar1,uVar2,&stack0x000003a0,0);
                    if (9 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x170) = 0;
                      *(undefined8 *)(lVar8 + 0x168) = 0;
                      uVar2 = DAT_01032208;
                      *(undefined8 *)(lVar8 + 0x17c) = 0;
                      *(undefined8 *)(lVar8 + 0x174) = 0;
                      uVar7 = DAT_0103284c;
                      uVar6 = DAT_01032558;
                      uVar5 = DAT_01032554;
                      uVar4 = DAT_0103233c;
                      uVar3 = DAT_0103225c;
                      uVar1 = DAT_01031e94;
                      *(undefined4 *)(lVar8 + 0x164) = 0;
                      *(undefined4 *)(lVar8 + 0x184) = 0;
                      FUN_05c99d80(uVar2,uVar1,uVar4,uVar5,uVar3,uVar7,uVar6,&stack0x00000360,0);
                      if (10 < *(uint *)(lVar8 + 0x18)) {
                        *(undefined4 *)(lVar8 + 0x188) = 9;
                        *(undefined8 *)(lVar8 + 0x194) = 0;
                        *(undefined8 *)(lVar8 + 0x18c) = 0;
                        uVar3 = DAT_0103220c;
                        *(undefined8 *)(lVar8 + 0x1a0) = 0;
                        *(undefined8 *)(lVar8 + 0x198) = 0;
                        uVar7 = DAT_010328b4;
                        uVar6 = DAT_010328b0;
                        uVar5 = DAT_010325b4;
                        uVar4 = DAT_01032210;
                        uVar2 = DAT_01032030;
                        uVar1 = DAT_01031f00;
                        *(undefined4 *)(lVar8 + 0x1a8) = 0;
                        FUN_05c99d80(uVar3,uVar1,uVar4,uVar2,uVar5,uVar6,uVar7,&stack0x00000320,0);
                        if (0xb < *(uint *)(lVar8 + 0x18)) {
                          *(undefined4 *)(lVar8 + 0x1ac) = 10;
                          *(undefined8 *)(lVar8 + 0x1b8) = 0;
                          *(undefined8 *)(lVar8 + 0x1b0) = 0;
                          *(undefined8 *)(lVar8 + 0x1c4) = 0;
                          *(undefined8 *)(lVar8 + 0x1bc) = 0;
                          uVar7 = DAT_0103290c;
                          uVar6 = DAT_0103274c;
                          uVar5 = DAT_010325b8;
                          uVar4 = DAT_010323b8;
                          uVar3 = DAT_010322d4;
                          uVar2 = DAT_01032260;
                          uVar1 = DAT_01031e98;
                          *(undefined4 *)(lVar8 + 0x1cc) = 0;
                          FUN_05c99d80(uVar4,uVar6,uVar3,uVar7,uVar5,uVar2,uVar1,&stack0x000002e0,0)
                          ;
                          if (0xc < *(uint *)(lVar8 + 0x18)) {
                            *(undefined8 *)(lVar8 + 0x1e8) = 0;
                            *(undefined8 *)(lVar8 + 0x1e0) = 0;
                            uVar4 = DAT_01032910;
                            *(undefined8 *)(lVar8 + 0x1dc) = 0;
                            *(undefined8 *)(lVar8 + 0x1d4) = 0;
                            uVar5 = DAT_01032984;
                            uVar2 = DAT_01032264;
                            uVar1 = DAT_01031d40;
                            *(undefined4 *)(lVar8 + 0x1d0) = 0;
                            uVar3 = DAT_0103240c;
                            *(undefined4 *)(lVar8 + 0x1f0) = 0;
                            FUN_05c99d80(uVar2,0,uVar4,uVar1,uVar5,uVar3,DAT_01032750,
                                         &stack0x000002a0,0);
                            if (0xd < *(uint *)(lVar8 + 0x18)) {
                              *(undefined4 *)(lVar8 + 500) = 0xc;
                              *(undefined8 *)(lVar8 + 0x200) = 0;
                              *(undefined8 *)(lVar8 + 0x1f8) = 0;
                              uVar1 = DAT_01031c6c;
                              *(undefined8 *)(lVar8 + 0x20c) = 0;
                              *(undefined8 *)(lVar8 + 0x204) = 0;
                              uVar7 = DAT_01032604;
                              uVar6 = DAT_010325bc;
                              uVar5 = DAT_010324dc;
                              uVar4 = DAT_01032410;
                              uVar3 = DAT_01031fac;
                              uVar2 = DAT_01031ccc;
                              *(undefined4 *)(lVar8 + 0x214) = 0;
                              FUN_05c99d80(uVar1,uVar2,uVar5,uVar7,uVar4,uVar3,uVar6,
                                           &stack0x00000260,0);
                              if (0xe < *(uint *)(lVar8 + 0x18)) {
                                *(undefined4 *)(lVar8 + 0x218) = 0xd;
                                *(undefined8 *)(lVar8 + 0x224) = 0;
                                *(undefined8 *)(lVar8 + 0x21c) = 0;
                                uVar7 = DAT_01032988;
                                *(undefined8 *)(lVar8 + 0x230) = 0;
                                *(undefined8 *)(lVar8 + 0x228) = 0;
                                uVar6 = DAT_01032914;
                                uVar5 = DAT_010326d4;
                                uVar4 = DAT_01032674;
                                uVar3 = DAT_0103246c;
                                uVar2 = DAT_010320c4;
                                uVar1 = DAT_01032034;
                                *(undefined4 *)(lVar8 + 0x238) = 0;
                                FUN_05c99d80(uVar7,uVar1,uVar2,uVar5,uVar4,uVar6,uVar3,
                                             &stack0x00000220,0);
                                if ((*(uint *)(lVar8 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar8 + 0x248) = 0;
                                  *(undefined8 *)(lVar8 + 0x240) = 0;
                                  uVar3 = DAT_01032214;
                                  *(undefined8 *)(lVar8 + 0x254) = 0;
                                  *(undefined8 *)(lVar8 + 0x24c) = 0;
                                  uVar7 = DAT_01032918;
                                  uVar6 = DAT_01032850;
                                  uVar5 = DAT_010324e0;
                                  uVar4 = DAT_01032470;
                                  uVar2 = DAT_01031e9c;
                                  uVar1 = DAT_01031e20;
                                  *(undefined4 *)(lVar8 + 0x23c) = 0;
                                  *(undefined4 *)(lVar8 + 0x25c) = 0;
                                  in_stack_000001e0 = 0;
                                  uStack00000000000001e8 = 0;
                                  uStack00000000000001ec = 0;
                                  in_stack_000001f0 = 0;
                                  FUN_05c99d80(uVar2,uVar1,uVar3,uVar7,uVar5,uVar4,uVar6,
                                               &stack0x000001e0,0);
                                  uStack00000000000001d4 = 0;
                                  uStack00000000000001c8 = uStack00000000000001e8;
                                  in_stack_000001c0 = in_stack_000001e0;
                                  uStack00000000000001cc = uStack00000000000001ec;
                                  uStack00000000000001d0 = in_stack_000001f0;
                                  if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                    *(undefined4 *)(lVar8 + 0x260) = 0xf;
                                    *(undefined8 *)(lVar8 + 0x278) = 0;
                                    *(ulong *)(lVar8 + 0x270) =
                                         CONCAT44(in_stack_000001f0,uStack00000000000001ec);
                                    *(ulong *)(lVar8 + 0x26c) =
                                         CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
                                    *(undefined8 *)(lVar8 + 0x264) = in_stack_000001e0;
                                    FUN_05fb8c84(DAT_01031cd0,DAT_01032268,DAT_0103255c,DAT_010324e4
                                                 ,DAT_01032038,DAT_010321a8,&stack0x000001a0);
                                    return;
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


