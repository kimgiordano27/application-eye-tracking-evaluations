/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingStandingZeroPoseToRawTrackingPose$$.ctor
ENTRY_POINT: 0561ecd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x26;
  undefined8 *puVar6;
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
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000088;
  long in_stack_000000d8;
  
  puVar2 = System_Func<CsvHelperException,_bool>_TypeInfo;
  puVar6 = *(undefined8 **)(unaff_x26 + 0xc10);
  *(undefined8 *)(unaff_x20 + 0x40) = **(undefined8 **)(param_1 + 0xbd0);
  LeanTween__value((undefined8 *)(unaff_x20 + 0x40));
  uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0x14);
  uVar5 = thunk_FUN_02dd2d7c(*puVar6,&stack0x0000006c);
  uVar5 = FUN_0536388c(*(undefined8 *)puVar2,uVar5,0);
  puVar4 = System_Func<DataTable,_IEnumerable<Type>>_TypeInfo;
  puVar2 = System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo;
  if (5 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
    LeanTween__value((undefined8 *)(unaff_x20 + 0x48),uVar5);
    in_stack_00000068 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&stack0x00000068);
    uVar5 = FUN_0536388c(*(undefined8 *)puVar4,uVar5,0);
    puVar3 = System_Func<Enum,_int>_TypeInfo;
    puVar4 = System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo;
    if (6 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
      LeanTween__value((undefined8 *)(unaff_x20 + 0x50),uVar5);
      uStack0000000000000064 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar4,(long)&stack0x00000060 + 4);
      uVar5 = FUN_0536388c(*(undefined8 *)puVar3,uVar5,0);
      puVar1 = System_Func<Expr,_Expr>_TypeInfo;
      puVar3 = System_Func<DataColumn,_Type>_TypeInfo;
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff8) != 0) {
        *(undefined8 *)(unaff_x20 + 0x58) = uVar5;
        LeanTween__value((undefined8 *)(unaff_x20 + 0x58),uVar5);
        uStack0000000000000060 = *(undefined4 *)(unaff_x19 + 0x20);
        uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar1,&stack0x00000060);
        uVar5 = FUN_0536388c(*(undefined8 *)puVar3,uVar5,0);
        puVar1 = System_Func<DynamicMetaObject,_Expression>_TypeInfo;
        puVar3 = System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
        if (8 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
          LeanTween__value((undefined8 *)(unaff_x20 + 0x60),uVar5);
          uStack000000000000005c = *(undefined4 *)(unaff_x19 + 0x24);
          uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar3,(long)&stack0x00000058 + 4);
          uVar5 = FUN_0536388c(*(undefined8 *)puVar1,uVar5,0);
          puVar3 = System_Func<Detail,_int>_TypeInfo;
          if (9 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
            LeanTween__value((undefined8 *)(unaff_x20 + 0x68),uVar5);
            puVar1 = PTR_DAT_069fb9c0;
            uStack0000000000000058 = *(undefined1 *)(unaff_x19 + 0x28);
            uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),&stack0x00000058);
            uVar5 = FUN_0536388c(*(undefined8 *)puVar3,uVar5,0);
            if (10 < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined8 *)(unaff_x20 + 0x70) = uVar5;
              LeanTween__value((undefined8 *)(unaff_x20 + 0x70),uVar5);
              if (0xb < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined8 *)(unaff_x20 + 0x78) =
                     *(undefined8 *)System_Func<DebugUIHandlerWidget,_bool>_TypeInfo;
                LeanTween__value((undefined8 *)(unaff_x20 + 0x78));
                in_stack_00000050 = FUN_05656670();
                in_stack_00000040 = *puVar6;
                in_stack_00000048 = 0xffffffffffffffff;
                uVar5 = FUN_0551e574(&stack0x00000040,0);
                if (0xc < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined8 *)(unaff_x20 + 0x80) = uVar5;
                  LeanTween__value((undefined8 *)(unaff_x20 + 0x80),uVar5);
                  if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                    *(undefined8 *)(unaff_x20 + 0x88) =
                         *(undefined8 *)System_Func<ElementInit,_ElementInit>_TypeInfo;
                    LeanTween__value();
                    in_stack_00000088._4_1_ = FUN_05656680();
                    in_stack_00000088._4_1_ = in_stack_00000088._4_1_ & 1;
                    if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    uVar5 = FUN_05455770((long)&stack0x00000088 + 4,0);
                    if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined8 *)(unaff_x20 + 0x90) = uVar5;
                      LeanTween__value((undefined8 *)(unaff_x20 + 0x90),uVar5);
                      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                        *(undefined8 *)(unaff_x20 + 0x98) =
                             *(undefined8 *)System_Func<ConstructorInfo,_int>_TypeInfo;
                        LeanTween__value((undefined8 *)(unaff_x20 + 0x98));
                        in_stack_00000028 = *(undefined8 *)puVar4;
                        in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x4c);
                        in_stack_00000030 = 0xffffffffffffffff;
                        uVar5 = FUN_0551e574(&stack0x00000028,0);
                        if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
                          LeanTween__value((undefined8 *)(unaff_x20 + 0xa0),uVar5);
                          if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined8 *)(unaff_x20 + 0xa8) =
                                 *(undefined8 *)System_Func<DataObject,_SessionProperty>_TypeInfo;
                            LeanTween__value((undefined8 *)(unaff_x20 + 0xa8));
                            in_stack_00000010 = *(undefined8 *)puVar2;
                            in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x50);
                            in_stack_00000018 = 0xffffffffffffffff;
                            uVar5 = FUN_0551e574(&stack0x00000010,0);
                            if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined8 *)(unaff_x20 + 0xb0) = uVar5;
                              LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar5);
                              puVar2 = 
                              System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
                              if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                                *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)PTR_DAT_06a01850;
                                LeanTween__value((undefined8 *)(unaff_x20 + 0xb8));
                                in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x54);
                                uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x28),
                                                           (long)&stack0x00000008 + 4);
                                uVar5 = FUN_0536388c(*(undefined8 *)puVar2,uVar5,0);
                                if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                                  *(undefined8 *)(unaff_x20 + 0xc0) = uVar5;
                                  LeanTween__value();
                                  FUN_0536dde4();
                                  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
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
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_0561f184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


