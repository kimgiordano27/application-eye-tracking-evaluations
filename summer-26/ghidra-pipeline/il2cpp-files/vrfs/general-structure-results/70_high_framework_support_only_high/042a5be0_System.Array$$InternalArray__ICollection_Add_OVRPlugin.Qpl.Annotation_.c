/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 042a5be0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation>(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined4 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  long in_stack_000002f8;
  
  puVar9 = *(undefined8 **)(unaff_x20 + 0xcd8);
  uVar4 = FUN_0160edfc();
  FUN_02df8d44(uVar4,*puVar9,0);
  FUN_042a5498(&stack0x00000208,uVar4);
  uVar12 = unaff_x23[0x2b];
  uVar4 = unaff_x23[0x2a];
  if (4 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined4 *)(unaff_x19 + 0x80) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
    lVar5 = FUN_0160edfc(*unaff_x22,2);
    if (lVar5 == 0) {
LAB_042a61f8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((*(int *)(lVar5 + 0x18) != 0) &&
       (*(undefined4 *)(lVar5 + 0x20) = 0x1e, *(int *)(lVar5 + 0x18) != 1)) {
      *(undefined4 *)(lVar5 + 0x24) = 0xf;
      in_stack_000001d8 = 0;
      in_stack_000001e0 = 0;
      in_stack_000001e8 = 0;
      FUN_042a5498(&stack0x000001d8);
      in_stack_000001c8 = unaff_x23[0x25];
      in_stack_000001c0 = unaff_x23[0x24];
      in_stack_000001d0 = in_stack_000001e8;
      if (5 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined4 *)(unaff_x19 + 0x94) = in_stack_000001e8;
        *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_000001c8;
        *(undefined8 *)(unaff_x19 + 0x84) = in_stack_000001c0;
        puVar2 = PTR_DAT_06e051c0;
        uVar4 = FUN_0160edfc(*unaff_x22,3);
        FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
        in_stack_000001a8 = 0;
        in_stack_000001b0 = 0;
        in_stack_000001b8 = 0;
        FUN_042a5498(&stack0x000001a8,uVar4);
        in_stack_00000198 = unaff_x23[0x1f];
        in_stack_00000190 = unaff_x23[0x1e];
        in_stack_000001a0 = in_stack_000001b8;
        if (6 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined4 *)(unaff_x19 + 0xa8) = in_stack_000001b8;
          *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000198;
          *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000190;
          lVar5 = FUN_0160edfc(*unaff_x22,2);
          if (lVar5 == 0) goto LAB_042a61f8;
          if ((*(int *)(lVar5 + 0x18) != 0) &&
             (*(undefined4 *)(lVar5 + 0x20) = 0x32, *(int *)(lVar5 + 0x18) != 1)) {
            *(undefined4 *)(lVar5 + 0x24) = 0x19;
            in_stack_00000178 = 0;
            in_stack_00000180 = 0;
            in_stack_00000188 = 0;
            FUN_042a5498(&stack0x00000178);
            in_stack_00000168 = unaff_x23[0x19];
            in_stack_00000160 = unaff_x23[0x18];
            in_stack_00000170 = in_stack_00000188;
            if (7 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined4 *)(unaff_x19 + 0xbc) = in_stack_00000188;
              *(undefined8 *)(unaff_x19 + 0xb4) = in_stack_00000168;
              *(undefined8 *)(unaff_x19 + 0xac) = in_stack_00000160;
              puVar2 = PTR_DAT_06db3788;
              uVar4 = FUN_0160edfc(*unaff_x22,3);
              FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
              in_stack_00000148 = 0;
              in_stack_00000150 = 0;
              in_stack_00000158 = 0;
              FUN_042a5498(&stack0x00000148,uVar4);
              in_stack_00000138 = unaff_x23[0x13];
              in_stack_00000130 = unaff_x23[0x12];
              in_stack_00000140 = in_stack_00000158;
              if (8 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined4 *)(unaff_x19 + 0xd0) = in_stack_00000158;
                *(undefined8 *)(unaff_x19 + 200) = in_stack_00000138;
                *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000130;
                puVar2 = PTR_DAT_06dfb8f8;
                uVar4 = FUN_0160edfc(*unaff_x22,3);
                FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                in_stack_00000118 = 0;
                in_stack_00000120 = 0;
                in_stack_00000128 = 0;
                FUN_042a5498(&stack0x00000118,uVar4);
                in_stack_00000108 = unaff_x23[0xd];
                in_stack_00000100 = unaff_x23[0xc];
                in_stack_00000110 = in_stack_00000128;
                if (9 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined4 *)(unaff_x19 + 0xe4) = in_stack_00000128;
                  *(undefined8 *)(unaff_x19 + 0xdc) = in_stack_00000108;
                  *(undefined8 *)(unaff_x19 + 0xd4) = in_stack_00000100;
                  puVar2 = PTR_DAT_06dddfd8;
                  uVar4 = FUN_0160edfc(*unaff_x22,3);
                  FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                  in_stack_000000e8 = 0;
                  in_stack_000000f0 = 0;
                  in_stack_000000f8 = 0;
                  FUN_042a5498(&stack0x000000e8,uVar4);
                  in_stack_000000d8 = unaff_x23[7];
                  in_stack_000000d0 = unaff_x23[6];
                  in_stack_000000e0 = in_stack_000000f8;
                  if (10 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined4 *)(unaff_x19 + 0xf8) = in_stack_000000f8;
                    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000d8;
                    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000d0;
                    puVar2 = PTR_DAT_06d8a3a0;
                    uVar4 = FUN_0160edfc(*unaff_x22,3);
                    FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                    in_stack_000000b8 = 0;
                    in_stack_000000c0 = 0;
                    in_stack_000000c8 = 0;
                    FUN_042a5498(&stack0x000000b8,uVar4);
                    in_stack_000000a8 = unaff_x23[1];
                    in_stack_000000a0 = *unaff_x23;
                    in_stack_000000b0 = in_stack_000000c8;
                    if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x104) = in_stack_000000a8;
                      *(undefined8 *)(unaff_x19 + 0xfc) = in_stack_000000a0;
                      *(undefined4 *)(unaff_x19 + 0x10c) = in_stack_000000c8;
                      puVar2 = PTR_DAT_06e33638;
                      uVar4 = FUN_0160edfc(*unaff_x22,3);
                      FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                      in_stack_00000088 = 0;
                      in_stack_00000090 = 0;
                      in_stack_00000098 = 0;
                      FUN_042a5498(&stack0x00000088,uVar4);
                      in_stack_00000080 = in_stack_00000098;
                      in_stack_00000078 = in_stack_00000090;
                      in_stack_00000070 = in_stack_00000088;
                      if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000098;
                        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000090;
                        *(undefined8 *)(unaff_x19 + 0x110) = in_stack_00000088;
                        puVar2 = PTR_DAT_06de2228;
                        uVar4 = FUN_0160edfc(*unaff_x22,4);
                        FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                        in_stack_00000058 = 0;
                        in_stack_00000060 = 0;
                        in_stack_00000068 = 0;
                        FUN_042a5498(&stack0x00000058,uVar4);
                        in_stack_00000050 = in_stack_00000068;
                        in_stack_00000048 = in_stack_00000060;
                        in_stack_00000040 = in_stack_00000058;
                        if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined4 *)(unaff_x19 + 0x134) = in_stack_00000068;
                          *(undefined8 *)(unaff_x19 + 300) = in_stack_00000060;
                          *(undefined8 *)(unaff_x19 + 0x124) = in_stack_00000058;
                          puVar2 = PTR_DAT_06e1e1d8;
                          uVar4 = FUN_0160edfc(*unaff_x22,4);
                          FUN_02df8d44(uVar4,*(undefined8 *)puVar2,0);
                          in_stack_00000028 = 0;
                          in_stack_00000030 = 0;
                          in_stack_00000038 = 0;
                          FUN_042a5498(&stack0x00000028,uVar4);
                          puVar2 = PTR_DAT_06de0848;
                          if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined4 *)(unaff_x19 + 0x148) = in_stack_00000038;
                            *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000030;
                            *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000028;
                            puVar3 = PTR_DAT_06de7c70;
                            lVar5 = *(long *)puVar2;
                            if (*(int *)(lVar5 + 0xe0) == 0) {
                              thunk_FUN_016466fc();
                              lVar5 = *(long *)puVar2;
                            }
                            **(long **)(lVar5 + 0xb8) = unaff_x19;
                            thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar2 + 0xb8));
                            uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
                            lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
                            puVar3 = PTR_DAT_06e10c90;
                            if (lVar5 != 0) {
                              FUN_02f305bc(lVar5,uVar4,*(undefined8 *)PTR_DAT_06d8f410);
                              plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                              *plVar6 = lVar5;
                              thunk_FUN_01656ef8(plVar6,lVar5);
                              lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
                              if (lVar5 != 0) {
                                FUN_046ed038(lVar5,*(undefined8 *)PTR_DAT_06e3b0c0);
                                plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                                *plVar6 = lVar5;
                                thunk_FUN_01656ef8(plVar6,lVar5);
                                puVar3 = PTR_DAT_06dc3458;
                                lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
                                if (lVar5 != 0) {
                                  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                                    uVar10 = 0;
                                    uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                                    lVar11 = lVar5 + 0x28;
                                    do {
                                      if (uVar8 <= uVar10) goto LAB_042a61f4;
                                      lVar7 = *(long *)puVar2;
                                      uVar1 = *(undefined4 *)(lVar11 + -4);
                                      if (*(int *)(lVar7 + 0xe0) == 0) {
                                        thunk_FUN_016466fc();
                                        lVar7 = *(long *)puVar2;
                                      }
                                      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                                      if (lVar7 == 0) goto LAB_042a61f8;
                                      FUN_046edfd0(lVar7,uVar1,&stack0x000002e0,
                                                   *(undefined8 *)puVar3);
                                      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                                      uVar10 = uVar10 + 1;
                                      lVar11 = lVar11 + 0x14;
                                    } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
                                  }
                                  if (*(long *)(unaff_x21 + 0x28) == in_stack_000002f8) {
                                    return;
                                  }
                    /* WARNING: Subroutine does not return */
                                  __stack_chk_fail();
                                }
                              }
                            }
                            goto LAB_042a61f8;
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
LAB_042a61f4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


