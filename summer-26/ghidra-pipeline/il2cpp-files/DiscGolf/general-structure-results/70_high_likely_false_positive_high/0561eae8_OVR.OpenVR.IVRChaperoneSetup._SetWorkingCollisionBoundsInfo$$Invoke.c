/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingCollisionBoundsInfo$$Invoke
ENTRY_POINT: 0561eae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined4 *puVar8;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined1 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  byte bStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 3000));
  FUN_02d965b8(System_Func<DebugUIHandlerWidget,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<Detail,_int>_TypeInfo);
  FUN_02d965b8(System_Func<DiscMould,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo);
  FUN_02d965b8(System_Func<DynamicMetaObject,_DynamicMetaObject>_TypeInfo);
  FUN_02d965b8(System_Func<DynamicMetaObject,_Expression>_TypeInfo);
  FUN_02d965b8(System_Func<ElementInit,_ElementInit>_TypeInfo);
  FUN_02d965b8(System_Func<Enum,_int>_TypeInfo);
  FUN_02d965b8(System_Func<EnumMemberAttribute,_string>_TypeInfo);
  FUN_02d965b8(System_Func<Event,_EventBase>_TypeInfo);
  FUN_02d965b8(System_Func<Exception,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo);
  FUN_02d965b8(System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
  FUN_02d965b8(System_Func<Expr,_Expr>_TypeInfo);
  FUN_02d965b8(System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xa49) = 1;
  bStack000000000000008c = 0;
  lVar6 = FUN_02d966a4(*unaff_x20,0x15);
  puVar2 = System_Func<EnumMemberAttribute,_string>_TypeInfo;
  if (lVar6 == 0) {
    if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)System_Func<CourseProgress,_bool>_TypeInfo;
      LeanTween__value((undefined8 *)(lVar6 + 0x20));
      in_stack_00000070 = *(undefined8 *)puVar2;
      puVar8 = (undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000080 = *puVar8;
      in_stack_00000078 = 0xffffffffffffffff;
      uVar7 = FUN_0551e574(&stack0x00000070,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        LeanTween__value((undefined8 *)(lVar6 + 0x28),uVar7);
        puVar2 = System_Func<Event,_EventBase>_TypeInfo;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) =
               *(undefined8 *)System_Func<DynamicMetaObject,_DynamicMetaObject>_TypeInfo;
          LeanTween__value((undefined8 *)(lVar6 + 0x30));
          in_stack_00000090 = *(undefined8 *)puVar2;
          in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x1c);
          in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x14);
          in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x2c);
          in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x24);
          in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x3c);
          in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x34);
          in_stack_00000098 = 0xffffffffffffffff;
          in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 0x44);
          uVar7 = FUN_05542584(&stack0x00000090,0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            LeanTween__value((undefined8 *)(lVar6 + 0x38),uVar7);
            puVar5 = System_Func<Exception,_bool>_TypeInfo;
            puVar2 = System_Func<CsvHelperException,_bool>_TypeInfo;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)System_Func<DiscMould,_bool>_TypeInfo;
              LeanTween__value((undefined8 *)(lVar6 + 0x40));
              uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0x14);
              uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
              uVar7 = FUN_0536388c(*(undefined8 *)puVar2,uVar7,0);
              puVar4 = System_Func<DataTable,_IEnumerable<Type>>_TypeInfo;
              puVar2 = System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo;
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = uVar7;
                LeanTween__value((undefined8 *)(lVar6 + 0x48),uVar7);
                uStack0000000000000068 = *(undefined4 *)(unaff_x19 + 0x18);
                uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&stack0x00000068);
                uVar7 = FUN_0536388c(*(undefined8 *)puVar4,uVar7,0);
                puVar3 = System_Func<Enum,_int>_TypeInfo;
                puVar4 = System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo;
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x50) = uVar7;
                  LeanTween__value((undefined8 *)(lVar6 + 0x50),uVar7);
                  uStack0000000000000064 = *(undefined4 *)(unaff_x19 + 0x1c);
                  uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar4,(long)&stack0x00000060 + 4);
                  uVar7 = FUN_0536388c(*(undefined8 *)puVar3,uVar7,0);
                  puVar1 = System_Func<Expr,_Expr>_TypeInfo;
                  puVar3 = System_Func<DataColumn,_Type>_TypeInfo;
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar6 + 0x58) = uVar7;
                    LeanTween__value((undefined8 *)(lVar6 + 0x58),uVar7);
                    uStack0000000000000060 = *(undefined4 *)(unaff_x19 + 0x20);
                    uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar1,&stack0x00000060);
                    uVar7 = FUN_0536388c(*(undefined8 *)puVar3,uVar7,0);
                    puVar1 = System_Func<DynamicMetaObject,_Expression>_TypeInfo;
                    puVar3 = System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x60) = uVar7;
                      LeanTween__value((undefined8 *)(lVar6 + 0x60),uVar7);
                      uStack000000000000005c = *(undefined4 *)(unaff_x19 + 0x24);
                      uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,(long)&stack0x00000058 + 4);
                      uVar7 = FUN_0536388c(*(undefined8 *)puVar1,uVar7,0);
                      puVar3 = System_Func<Detail,_int>_TypeInfo;
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x68) = uVar7;
                        LeanTween__value((undefined8 *)(lVar6 + 0x68),uVar7);
                        puVar1 = PTR_DAT_069fb9c0;
                        uStack0000000000000058 = *(undefined1 *)(unaff_x19 + 0x28);
                        uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),
                                                   &stack0x00000058);
                        uVar7 = FUN_0536388c(*(undefined8 *)puVar3,uVar7,0);
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x70) = uVar7;
                          LeanTween__value((undefined8 *)(lVar6 + 0x70),uVar7);
                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x78) =
                                 *(undefined8 *)System_Func<DebugUIHandlerWidget,_bool>_TypeInfo;
                            LeanTween__value((undefined8 *)(lVar6 + 0x78));
                            in_stack_00000050 = FUN_05656670(puVar8,0);
                            in_stack_00000040 = *(undefined8 *)puVar5;
                            in_stack_00000048 = 0xffffffffffffffff;
                            uVar7 = FUN_0551e574(&stack0x00000040,0);
                            if (0xc < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x80) = uVar7;
                              LeanTween__value((undefined8 *)(lVar6 + 0x80),uVar7);
                              if (0xd < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x88) =
                                     *(undefined8 *)System_Func<ElementInit,_ElementInit>_TypeInfo;
                                LeanTween__value();
                                bStack000000000000008c = FUN_05656680(puVar8,0);
                                bStack000000000000008c = bStack000000000000008c & 1;
                                if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                uVar7 = FUN_05455770(&stack0x0000008c,0);
                                if (0xe < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x90) = uVar7;
                                  LeanTween__value((undefined8 *)(lVar6 + 0x90),uVar7);
                                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar6 + 0x98) =
                                         *(undefined8 *)System_Func<ConstructorInfo,_int>_TypeInfo;
                                    LeanTween__value((undefined8 *)(lVar6 + 0x98));
                                    in_stack_00000028 = *(undefined8 *)puVar4;
                                    in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x4c);
                                    in_stack_00000030 = 0xffffffffffffffff;
                                    uVar7 = FUN_0551e574(&stack0x00000028,0);
                                    if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined8 *)(lVar6 + 0xa0) = uVar7;
                                      LeanTween__value((undefined8 *)(lVar6 + 0xa0),uVar7);
                                      if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                        *(undefined8 *)(lVar6 + 0xa8) =
                                             *(undefined8 *)
                                              System_Func<DataObject,_SessionProperty>_TypeInfo;
                                        LeanTween__value((undefined8 *)(lVar6 + 0xa8));
                                        in_stack_00000010 = *(undefined8 *)puVar2;
                                        in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x50);
                                        in_stack_00000018 = 0xffffffffffffffff;
                                        uVar7 = FUN_0551e574(&stack0x00000010,0);
                                        if (0x12 < *(uint *)(lVar6 + 0x18)) {
                                          *(undefined8 *)(lVar6 + 0xb0) = uVar7;
                                          LeanTween__value((undefined8 *)(lVar6 + 0xb0),uVar7);
                                          puVar2 = 
                                          System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo
                                          ;
                                          if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                            *(undefined8 *)(lVar6 + 0xb8) =
                                                 *(undefined8 *)PTR_DAT_06a01850;
                                            LeanTween__value((undefined8 *)(lVar6 + 0xb8));
                                            in_stack_00000008._4_1_ =
                                                 *(undefined1 *)(unaff_x19 + 0x54);
                                            uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                                                        (puVar1 + 0x28),
                                                                       (long)&stack0x00000008 + 4);
                                            uVar7 = FUN_0536388c(*(undefined8 *)puVar2,uVar7,0);
                                            if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined8 *)(lVar6 + 0xc0) = uVar7;
                                              LeanTween__value();
                                              FUN_0536dde4(lVar6,0);
                                              if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8)
                                              {
                                                return;
                                              }
                                              goto LAB_0561f184;
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
    if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
LAB_0561f184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


