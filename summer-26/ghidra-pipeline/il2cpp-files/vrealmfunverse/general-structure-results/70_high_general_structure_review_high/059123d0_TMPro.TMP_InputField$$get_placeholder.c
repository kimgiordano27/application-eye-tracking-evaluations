/*
FUNCTION_NAME: TMPro.TMP_InputField$$get_placeholder
ENTRY_POINT: 059123d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void TMPro_TMP_InputField__get_placeholder(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  long *plVar16;
  long unaff_x20;
  undefined8 uVar17;
  long unaff_x22;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000418;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
  FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
  FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
  FUN_02b3c81c(PTR_DAT_06312f78);
  FUN_02b3c81c(Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_StartTween__);
  FUN_02b3c81c(Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__);
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<Color>__ctor__
              );
  FUN_02b3c81c(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__);
  FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
  FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__ctor__
              );
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
              );
  FUN_02b3c81c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_get_Value__
              );
  *(undefined1 *)(unaff_x19 + 0x5c2) = 1;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = (long *)0x0;
  memset(&stack0x00000350,0,200);
  memset(&stack0x00000220,0,0x130);
  if (unaff_x22 != 0) {
    lVar7 = FUN_0590661c();
    if (lVar7 != 0) {
      _in_stack_00000078 = FUN_059291f0(lVar7,0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar8 = FUN_0590759c();
      if (in_stack_00000028 != 0) {
        in_stack_00000070 =
             (long *)FUN_032fa71c(in_stack_00000028,uVar17,&stack0x00000068,uVar8,
                                  *(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_get_Value__
                                  ,0xa5,*(undefined8 *)
                                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<Color>__ctor__
                                 );
        in_stack_00000060 = &stack0x00000070;
        in_stack_00000058 = 0;
        lVar9 = FUN_0590661c();
        FUN_0590661c();
        uVar8 = FUN_0590661c();
        FUN_059121ac();
        puVar5 = Method_System_Collections_Generic_List<XmlNode>_Add__;
        puVar4 = PTR_DAT_06322b80;
        lVar10 = *(long *)(unaff_x20 + 0xf0);
        if (lVar10 != 0) {
          uVar18 = 0;
          do {
            iVar6 = FUN_059a1570(lVar10,0);
            plVar16 = in_stack_00000070;
            if (iVar6 < (int)uVar18) {
              auVar19 = FUN_05928ee8(lVar7,0);
              if (plVar16 == (long *)0x0) {
                if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              lVar10 = *plVar16;
              uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar15 == 0) goto TMPro_TMP_InputField__get_onSubmit;
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_05912774;
            }
            lVar10 = FUN_059291a8(lVar7,0);
            if (lVar10 == 0) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_059132c4;
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar18) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              goto LAB_059132c4;
            }
            if (DAT_066d2bb0 == '\0') {
              FUN_02b3c81c(puVar4);
              DAT_066d2bb0 = '\x01';
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066d2bb1 == '\0') {
              FUN_02b3c81c(puVar4);
              DAT_066d2bb1 = '\x01';
            }
            uVar3 = *(ushort *)(lVar10 + (long)(int)uVar18 * 0x10 + 0x22);
            iVar6 = (uint)uVar3 << 0x10;
            if (uVar3 != 0) {
              lVar10 = *(long *)puVar4;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar10 = *(long *)puVar4;
              }
              piVar13 = *(int **)(lVar10 + 0xb8);
              if (iVar6 != *piVar13) {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
                }
                if (iVar6 != piVar13[1]) goto LAB_05912714;
              }
              plVar16 = in_stack_00000070;
              lVar10 = FUN_059291a8(lVar7,0);
              if (lVar10 == 0) {
                if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_059132c4;
              }
              if (plVar16 == (long *)0x0) {
                if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              lVar10 = lVar10 + (long)(int)uVar18 * 0x10;
              lVar14 = *plVar16;
              uVar17 = *(undefined8 *)(lVar10 + 0x20);
              uVar1 = *(undefined8 *)(lVar10 + 0x28);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
                    puVar11 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_059126f8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02b7654c(plVar16,*(long *)
                                              Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                                     ,0);
LAB_059126f8:
              (*(code *)*puVar11)(plVar16,uVar17,uVar1,uVar18,2,puVar11[1]);
            }
LAB_05912714:
            lVar10 = *(long *)(unaff_x20 + 0xf0);
            uVar18 = uVar18 + 1;
          } while (lVar10 != 0);
        }
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
    }
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_059132c4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar13 = piVar13 + 4;
    if (uVar15 == 0) break;
LAB_05912774:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
      goto LAB_059127ac;
    }
  }
TMPro_TMP_InputField__get_onSubmit:
  puVar11 = (undefined8 *)
            FUN_02b7654c(plVar16,*(long *)
                                  Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                         ,4);
LAB_059127ac:
  (*(code *)*puVar11)(plVar16,auVar19._0_8_,auVar19._8_8_,1,puVar11[1]);
  if (*(char *)(in_stack_00000028 + 0x18) == '\0') {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    uVar18 = (uint)in_stack_00000078._2_2_;
    if (in_stack_00000078._2_2_ != 0) {
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar4;
      }
      piVar13 = *(int **)(lVar7 + 0xb8);
      if (uVar18 << 0x10 != *piVar13) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        if (uVar18 << 0x10 != piVar13[1]) goto LAB_05912bbc;
      }
      plVar16 = in_stack_00000070;
      if (in_stack_00000070 == (long *)0x0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      lVar7 = *in_stack_00000070;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05912ba8;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02b7654c(in_stack_00000070,
                             *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0);
LAB_05912ba8:
      (*(code *)*puVar11)(plVar16,&stack0x00000078,1,puVar11[1]);
    }
  }
  else {
    lVar10 = FUN_059291a8(lVar7,0);
    if (lVar10 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_059132c4;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*(uint *)(lVar10 + 0x18) < 5) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_059132c4;
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    iVar6 = (uint)*(ushort *)(lVar10 + 0x62) << 0x10;
    if (*(ushort *)(lVar10 + 0x62) != 0) {
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar10 = *(long *)puVar4;
      }
      piVar13 = *(int **)(lVar10 + 0xb8);
      if (iVar6 != *piVar13) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
        }
        if (iVar6 != piVar13[1]) goto TMPro_TMP_InputField__get_onValidateInput;
      }
      plVar16 = in_stack_00000070;
      lVar10 = FUN_059291a8(lVar7,0);
      if (lVar10 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      if (*(uint *)(lVar10 + 0x18) < 5) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_059132c4;
      }
      if (plVar16 == (long *)0x0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      lVar14 = *plVar16;
      uVar17 = *(undefined8 *)(lVar10 + 0x60);
      uVar1 = *(undefined8 *)(lVar10 + 0x68);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_05912a10;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02b7654c(plVar16,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                             ,2);
LAB_05912a10:
      (*(code *)*puVar11)(plVar16,uVar17,uVar1,0,1,puVar11[1]);
    }
TMPro_TMP_InputField__get_onValidateInput:
    if (*(char *)(unaff_x20 + 0x100) != '\0') {
      lVar10 = FUN_059291a8(lVar7,0);
      if (lVar10 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(uint *)(lVar10 + 0x18) < 6) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_059132c4;
      }
      if (DAT_066d2bb0 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb0 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d2bb1 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb1 = '\x01';
      }
      iVar6 = (uint)*(ushort *)(lVar10 + 0x72) << 0x10;
      if (*(ushort *)(lVar10 + 0x72) != 0) {
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *(long *)puVar4;
        }
        piVar13 = *(int **)(lVar10 + 0xb8);
        if (iVar6 != *piVar13) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
          }
          if (iVar6 != piVar13[1]) goto LAB_05912bbc;
        }
        plVar16 = in_stack_00000070;
        lVar7 = FUN_059291a8(lVar7,0);
        if (lVar7 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059132c4;
        }
        if (*(uint *)(lVar7 + 0x18) < 6) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          goto LAB_059132c4;
        }
        if (plVar16 == (long *)0x0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059132c4;
        }
        lVar10 = *plVar16;
        uVar17 = *(undefined8 *)(lVar7 + 0x70);
        uVar1 = *(undefined8 *)(lVar7 + 0x78);
        uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
              puVar11 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_05912b7c;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_02b7654c(plVar16,*(long *)
                                        Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                               ,2);
LAB_05912b7c:
        (*(code *)*puVar11)(plVar16,uVar17,uVar1,1,1,puVar11[1]);
      }
    }
  }
LAB_05912bbc:
  if (in_stack_00000068 == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar7 = *(long *)(in_stack_00000068 + 0x28);
    if (lVar7 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    else {
      uVar2 = *(undefined4 *)(lVar7 + 0x198);
      uVar17 = *(undefined8 *)(unaff_x20 + 0xd8);
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      FUN_0596d748(&stack0x00000150,uVar17,lVar9,lVar7,uVar8,uVar2,0);
      memcpy(&stack0x00000350,&stack0x00000150,200);
      if (lVar9 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      else {
        in_stack_00000158 = *(undefined8 *)(unaff_x20 + 0xc0);
        in_stack_00000150 = *(undefined8 *)(unaff_x20 + 0xb8);
        in_stack_00000168 = *(undefined8 *)(unaff_x20 + 0xd0);
        in_stack_00000160 = *(undefined8 *)(unaff_x20 + 200);
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        uVar17 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(*(long *)
                      Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        memcpy(&stack0x00000088,&stack0x00000350,200);
        in_stack_00000038 = in_stack_00000158;
        in_stack_00000030 = in_stack_00000150;
        in_stack_00000048 = in_stack_00000168;
        in_stack_00000040 = in_stack_00000160;
        FUN_05cc6bc4(&stack0x00000220,uVar8,uVar17,&stack0x00000088,&stack0x00000030,0);
        lVar7 = in_stack_00000068;
        auVar20 = FUN_05882028(in_stack_00000028,&stack0x00000220,0);
        plVar16 = in_stack_00000070;
        lVar9 = in_stack_00000068;
        if (lVar7 == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
        }
        else {
          *(undefined1 (*) [12])(lVar7 + 0x30) = auVar20;
          if (in_stack_00000068 == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else if (in_stack_00000070 == (long *)0x0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else {
            lVar7 = *in_stack_00000070;
            uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar15 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                  goto FUN_05912d04;
                }
                uVar15 = uVar15 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_02b7654c(in_stack_00000070,
                                   *(long *)
                                    Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,9);
FUN_05912d04:
            (*(code *)*puVar11)(plVar16,lVar9 + 0x30,puVar11[1]);
            plVar16 = in_stack_00000070;
            if (in_stack_00000070 == (long *)0x0) {
              if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
            }
            else {
              lVar7 = *in_stack_00000070;
              uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar15 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                    goto LAB_05912d74;
                  }
                  uVar15 = uVar15 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02b7654c(in_stack_00000070,
                                     *(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc)
              ;
LAB_05912d74:
              (*(code *)*puVar11)(plVar16,1,puVar11[1]);
              plVar16 = in_stack_00000070;
              lVar7 = *(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
              ;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar7 = *(long *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                ;
              }
              puVar11 = *(undefined8 **)(lVar7 + 0xb8);
              lVar9 = puVar11[1];
              if (lVar9 == 0) {
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar11 = *(undefined8 **)
                             (*(long *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                             + 0xb8);
                }
                uVar8 = *puVar11;
                lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                            Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_Init__
                                          );
                FUN_03e02810(lVar9,uVar8,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__ctor__
                             ,0);
                plVar12 = (long *)(*(long *)(*(long *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                                            + 0xb8) + 8);
                *plVar12 = lVar9;
                thunk_FUN_02bb0e9c(plVar12,lVar9);
              }
              if (plVar16 == (long *)0x0) {
                if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
              }
              else {
                lVar7 = *plVar16;
                lVar10 = *(long *)
                          Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_StartTween__;
                uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar15 != 0) {
                  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x20)) {
                      lVar7 = lVar7 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x50)) *
                                      0x10 + 0x138;
                      goto TMPro_TMP_InputField__set_keepTextSelectionVisible;
                    }
                    uVar15 = uVar15 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar15 != 0);
                }
                lVar7 = FUN_02b7654c(plVar16);
TMPro_TMP_InputField__set_keepTextSelectionVisible:
                lVar7 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar7 + 8),lVar10);
                (**(code **)(lVar7 + 8))(plVar16,lVar9,lVar7);
                plVar16 = (long *)*in_stack_00000060;
                if (plVar16 != (long *)0x0) {
                  lVar7 = *plVar16;
                  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar15 != 0) {
                    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
                        puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_05912f00;
                      }
                      uVar15 = uVar15 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_02b7654c(plVar16,*(long *)PTR_DAT_06312f78,0);
LAB_05912f00:
                  (*(code *)*puVar11)(plVar16,puVar11[1]);
                }
                if (in_stack_00000058 == 0) {
                  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    return;
                  }
                }
                else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cabc();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_059132c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


