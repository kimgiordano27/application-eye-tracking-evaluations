/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 0561ed94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar4;
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
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000088;
  long in_stack_000000d8;
  
  puVar4 = *(undefined8 **)(unaff_x27 + 0xbf8);
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  LeanTween__value((undefined8 *)(unaff_x22 + 0x50));
  uStack0000000000000064 = *(undefined4 *)(unaff_x19 + 0x1c);
  uVar3 = thunk_FUN_02dd2d7c(*unaff_x25,&stack0x00000064);
  uVar3 = FUN_0536388c(*puVar4,uVar3,0);
  puVar1 = System_Func<Expr,_Expr>_TypeInfo;
  puVar2 = System_Func<DataColumn,_Type>_TypeInfo;
  if ((*(uint *)(unaff_x22 + 0x18) & 0xfffffff8) != 0) {
    *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
    LeanTween__value((undefined8 *)(unaff_x20 + 0x58),uVar3);
    in_stack_00000060 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar1,&stack0x00000060);
    uVar3 = FUN_0536388c(*(undefined8 *)puVar2,uVar3,0);
    puVar1 = System_Func<DynamicMetaObject,_Expression>_TypeInfo;
    puVar2 = System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
    if (8 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
      LeanTween__value((undefined8 *)(unaff_x20 + 0x60),uVar3);
      uStack000000000000005c = *(undefined4 *)(unaff_x19 + 0x24);
      uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,(long)&stack0x00000058 + 4);
      uVar3 = FUN_0536388c(*(undefined8 *)puVar1,uVar3,0);
      puVar2 = System_Func<Detail,_int>_TypeInfo;
      if (9 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
        LeanTween__value((undefined8 *)(unaff_x20 + 0x68),uVar3);
        puVar1 = PTR_DAT_069fb9c0;
        uStack0000000000000058 = *(undefined1 *)(unaff_x19 + 0x28);
        uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),&stack0x00000058);
        uVar3 = FUN_0536388c(*(undefined8 *)puVar2,uVar3,0);
        if (10 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
          LeanTween__value((undefined8 *)(unaff_x20 + 0x70),uVar3);
          if (0xb < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x78) =
                 *(undefined8 *)System_Func<DebugUIHandlerWidget,_bool>_TypeInfo;
            LeanTween__value((undefined8 *)(unaff_x20 + 0x78));
            in_stack_00000050 = FUN_05656670();
            in_stack_00000040 = *unaff_x26;
            in_stack_00000048 = 0xffffffffffffffff;
            uVar3 = FUN_0551e574(&stack0x00000040,0);
            if (0xc < *(uint *)(unaff_x20 + 0x18)) {
              *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
              LeanTween__value((undefined8 *)(unaff_x20 + 0x80),uVar3);
              if (0xd < *(uint *)(unaff_x20 + 0x18)) {
                *(undefined8 *)(unaff_x20 + 0x88) =
                     *(undefined8 *)System_Func<ElementInit,_ElementInit>_TypeInfo;
                LeanTween__value();
                in_stack_00000088._4_1_ = FUN_05656680();
                in_stack_00000088._4_1_ = in_stack_00000088._4_1_ & 1;
                if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar3 = FUN_05455770((long)&stack0x00000088 + 4,0);
                if (0xe < *(uint *)(unaff_x20 + 0x18)) {
                  *(undefined8 *)(unaff_x20 + 0x90) = uVar3;
                  LeanTween__value((undefined8 *)(unaff_x20 + 0x90),uVar3);
                  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffff0) != 0) {
                    *(undefined8 *)(unaff_x20 + 0x98) =
                         *(undefined8 *)System_Func<ConstructorInfo,_int>_TypeInfo;
                    LeanTween__value((undefined8 *)(unaff_x20 + 0x98));
                    in_stack_00000028 = *unaff_x25;
                    in_stack_00000038 = *(undefined4 *)(unaff_x19 + 0x4c);
                    in_stack_00000030 = 0xffffffffffffffff;
                    uVar3 = FUN_0551e574(&stack0x00000028,0);
                    if (0x10 < *(uint *)(unaff_x20 + 0x18)) {
                      *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
                      LeanTween__value((undefined8 *)(unaff_x20 + 0xa0),uVar3);
                      if (0x11 < *(uint *)(unaff_x20 + 0x18)) {
                        *(undefined8 *)(unaff_x20 + 0xa8) =
                             *(undefined8 *)System_Func<DataObject,_SessionProperty>_TypeInfo;
                        LeanTween__value((undefined8 *)(unaff_x20 + 0xa8));
                        in_stack_00000010 = *unaff_x24;
                        in_stack_00000020 = *(undefined4 *)(unaff_x19 + 0x50);
                        in_stack_00000018 = 0xffffffffffffffff;
                        uVar3 = FUN_0551e574(&stack0x00000010,0);
                        if (0x12 < *(uint *)(unaff_x20 + 0x18)) {
                          *(undefined8 *)(unaff_x20 + 0xb0) = uVar3;
                          LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar3);
                          puVar2 = 
                          System_Func<DropdownMenuAction,_DropdownMenuAction_Status>_TypeInfo;
                          if (0x13 < *(uint *)(unaff_x20 + 0x18)) {
                            *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)PTR_DAT_06a01850;
                            LeanTween__value((undefined8 *)(unaff_x20 + 0xb8));
                            in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x54);
                            uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x28),
                                                       (long)&stack0x00000008 + 4);
                            uVar3 = FUN_0536388c(*(undefined8 *)puVar2,uVar3,0);
                            if (0x14 < *(uint *)(unaff_x20 + 0x18)) {
                              *(undefined8 *)(unaff_x20 + 0xc0) = uVar3;
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
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_0561f184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


