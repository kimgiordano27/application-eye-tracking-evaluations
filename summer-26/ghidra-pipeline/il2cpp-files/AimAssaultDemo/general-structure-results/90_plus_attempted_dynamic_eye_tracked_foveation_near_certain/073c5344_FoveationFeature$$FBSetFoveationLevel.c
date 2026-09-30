/*
FUNCTION_NAME: FoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 073c5344
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 99
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_13;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__FBSetFoveationLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_0373b518(PTR_DAT_07d86440);
  FUN_0373b518(System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
  FUN_0373b518(System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo);
  FUN_0373b518(System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo);
  FUN_0373b518(System_Data_NewDiffgramGen_TypeInfo);
  FUN_0373b518(System_Linq_Expressions_NewExpression_TypeInfo);
  FUN_0373b518(System_Linq_Expressions_Interpreter_NewInstruction_TypeInfo);
                    /* try { // try from 073c53a0 to 074c53ab has its CatchHandler @ 073c53d0 */
  FUN_0373b518(System_Linq_Expressions_Interpreter_NotInstruction_TypeInfo);
                    /* try { // try from 073c53ac to 074c53eb has its CatchHandler @ 073c5274 */
  FUN_0373b518(UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo);
  FUN_0373b518(Unity_Multiplayer_Tools_Adapters_Ngo1WithUtp2_Ngo1WithUtp2AdapterInitializer_TypeInfo
              );
  FUN_0373b518(Unity_Netcode_NotListeningException_TypeInfo);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073c532c with catch @ 073c53cc
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073c53a0 with catch @ 073c53d0
                        */
  FUN_0373b518(UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 073c5334 with catch @ 073c53d4
                        */
  FUN_0373b518(System_Data_NoNullAllowedException_TypeInfo);
  FUN_0373b518(Unity_Netcode_NotMeRpcTarget_TypeInfo);
  FUN_0373b518(Unity_Netcode_NotOwnerRpcTarget_TypeInfo);
  FUN_0373b518(Unity_Netcode_NotServerException_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x696) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if ((long *)unaff_x19[0x14] != (long *)0x0) {
    uVar4 = (**(code **)(*(long *)unaff_x19[0x14] + 0x178))();
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar8 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Unity_Multiplayer_Tools_Adapters_Ngo1WithUtp2_Ngo1WithUtp2AdapterInitializer_TypeInfo
             ) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_073c549c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_073c549c:
      (*(code *)*puVar5)();
      if (unaff_x19[0x14] != 0) {
        iVar3 = FUN_0520175c(unaff_x19[0x14],*(undefined8 *)System_NotImplementedException_TypeInfo)
        ;
        if (iVar3 < 1) {
LAB_073c561c:
          if (unaff_x19[0x13] != 0) {
            iVar3 = FUN_0520175c(unaff_x19[0x13],
                                 *(undefined8 *)
                                  System_Linq_Expressions_Interpreter_NotEqualInstruction_TypeInfo);
            if (iVar3 < 1) {
LAB_073c5798:
              if ((long *)unaff_x19[0x14] != (long *)0x0) {
                uVar4 = (**(code **)(*(long *)unaff_x19[0x14] + 0x1a8))();
                if ((uVar4 & 1) == 0) {
                  return;
                }
                if (unaff_x19[0x1c] != 0) {
                  FUN_045b9744();
                  if (unaff_x19[0x26] != 0) {
                    _in_stack_00000018 =
                         FUN_0480eb20(unaff_x19[0x26],&stack0x00000028,
                                      *(undefined8 *)Unity_Netcode_NotListeningException_TypeInfo);
                    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0373b7b4();
                    }
                    *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
                    thunk_FUN_037aeb94();
                    if (in_stack_00000028 != 0) {
                      *(long **)(in_stack_00000028 + 0x18) = unaff_x20;
                      thunk_FUN_037aeb94();
                      (**(code **)(*unaff_x19 + 0x288))();
                      FUN_04fafd58(&stack0x00000018,
                                   *(undefined8 *)Unity_Netcode_NotMeRpcTarget_TypeInfo);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                }
              }
            }
            else {
              plVar6 = (long *)unaff_x19[0x13];
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x1c8))
                          (plVar6,unaff_x19[0x1e],*(undefined8 *)(*plVar6 + 0x1d0));
                if (unaff_x19[0x1e] != 0) {
                  FUN_049cf910(unaff_x19[0x1e],
                               *(undefined8 *)System_Data_NoNullAllowedException_TypeInfo);
                  puVar2 = UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo;
                  puVar1 = System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo;
                  in_stack_00000038 = in_stack_00000008;
                  in_stack_00000030 = in_stack_00000000;
                  in_stack_00000040 = in_stack_00000010;
                  do {
                    do {
                      uVar4 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar1);
                      if ((uVar4 & 1) == 0) {
                        FUN_05d64e94(&stack0x00000030,
                                     *(undefined8 *)
                                      System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
                        goto LAB_073c5798;
                      }
                      plVar6 = (long *)thunk_FUN_037787d0(in_stack_00000040,*(undefined8 *)puVar2);
                    } while (plVar6 == (long *)0x0);
                    lVar9 = *plVar6;
                    lVar8 = *(long *)puVar2;
                    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar4 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == lVar8) {
                          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_073c5700;
                        }
                        uVar4 = uVar4 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_0377596c(plVar6,lVar8,0);
LAB_073c5700:
                    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                  } while (plVar6 != unaff_x20);
                  uVar7 = FUN_060b76a8(*(undefined8 *)Unity_Netcode_NotServerException_TypeInfo);
                  uVar7 = System_Convert__ToInt32
                                    (uVar7,*(undefined8 *)Unity_Netcode_NotOwnerRpcTarget_TypeInfo,0
                                    );
                  if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  FUN_0755df88(uVar7);
                  puVar5 = &stack0x00000030;
                  puVar10 = (undefined8 *)System_Linq_Expressions_NewArrayInitExpression_TypeInfo;
                  goto LAB_073c5778;
                }
              }
            }
          }
        }
        else {
          plVar6 = (long *)unaff_x19[0x14];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x1c8))(plVar6,unaff_x19[0x1d],*(undefined8 *)(*plVar6 + 0x1d0));
            if (unaff_x19[0x1d] != 0) {
              FUN_049cf910(unaff_x19[0x1d],
                           *(undefined8 *)UnityEngine_Rendering_NoInterpTextureParameter_TypeInfo);
              puVar2 = UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo;
              puVar1 = System_Data_NewDiffgramGen_TypeInfo;
              in_stack_00000058 = in_stack_00000008;
              in_stack_00000050 = in_stack_00000000;
              in_stack_00000060 = in_stack_00000010;
              do {
                do {
                  uVar4 = FUN_05d64e98(&stack0x00000050,*(undefined8 *)puVar1);
                  if ((uVar4 & 1) == 0) {
                    FUN_05d64e94(&stack0x00000050,
                                 *(undefined8 *)
                                  System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo
                                );
                    goto LAB_073c561c;
                  }
                  plVar6 = (long *)thunk_FUN_037787d0(in_stack_00000060,*(undefined8 *)puVar2);
                } while (plVar6 == (long *)0x0);
                lVar9 = *plVar6;
                lVar8 = *(long *)puVar2;
                uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar4 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar8) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_073c558c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_0377596c(plVar6,lVar8,0);
LAB_073c558c:
                plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
              } while (plVar6 != unaff_x20);
              uVar7 = FUN_060b76a8(*(undefined8 *)Unity_Netcode_NotServerException_TypeInfo);
              uVar7 = System_Convert__ToInt32
                                (uVar7,*(undefined8 *)Unity_Netcode_NotOwnerRpcTarget_TypeInfo,0);
              if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0755df88(uVar7);
              puVar5 = &stack0x00000050;
              puVar10 = (undefined8 *)
                        System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo;
LAB_073c5778:
              FUN_05d64e94(puVar5,*puVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


