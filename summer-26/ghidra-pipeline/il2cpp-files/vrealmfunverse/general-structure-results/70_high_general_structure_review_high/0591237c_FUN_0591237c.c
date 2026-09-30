/*
FUNCTION_NAME: FUN_0591237c
ENTRY_POINT: 0591237c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0591237c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long local_428;
  long **local_420;
  long local_418;
  long *local_410;
  undefined1 local_408 [16];
  undefined1 auStack_3f8 [200];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_260 [304];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_066d35c2 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_Init__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
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
    DAT_066d35c2 = 1;
  }
  local_408._0_8_ = 0;
  local_408._8_8_ = 0;
  local_418 = 0;
  local_410 = (long *)0x0;
  memset(auStack_130,0,200);
  memset(auStack_260,0,0x130);
  if (param_3 != 0) {
    lVar8 = FUN_0590661c(param_3,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__
                        );
    if (lVar8 != 0) {
      local_408 = FUN_059291f0(lVar8,0);
      uVar18 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN_0590759c(param_1);
      puVar5 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__;
      if (param_2 != 0) {
        local_410 = (long *)FUN_032fa71c(param_2,uVar18,&local_418,uVar9,
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_get_Value__
                                         ,0xa5,*(undefined8 *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<Color>__ctor__
                                        );
        local_420 = &local_410;
        local_428 = 0;
        lVar10 = FUN_0590661c(param_3,*(undefined8 *)puVar5);
        uVar9 = FUN_0590661c(param_3,*(undefined8 *)
                                      Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                            );
        uVar18 = FUN_0590661c(param_3,*(undefined8 *)
                                       Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                             );
        FUN_059121ac(param_1,uVar9,&local_418);
        puVar6 = Method_System_Collections_Generic_List<XmlNode>_Add__;
        puVar5 = PTR_DAT_06322b80;
        lVar11 = *(long *)(param_1 + 0xf0);
        if (lVar11 != 0) {
          uVar19 = 0;
          do {
            iVar7 = FUN_059a1570(lVar11,0);
            plVar17 = local_410;
            if (iVar7 < (int)uVar19) {
              auVar20 = FUN_05928ee8(lVar8,0);
              if (plVar17 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              lVar11 = *plVar17;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 == 0) goto TMPro_TMP_InputField__get_onSubmit;
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_05912774;
            }
            lVar11 = FUN_059291a8(lVar8,0);
            if (lVar11 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_059132c4;
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar19) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              goto LAB_059132c4;
            }
            if (DAT_066d2bb0 == '\0') {
              FUN_02b3c81c(puVar5);
              DAT_066d2bb0 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (DAT_066d2bb1 == '\0') {
              FUN_02b3c81c(puVar5);
              DAT_066d2bb1 = '\x01';
            }
            uVar3 = *(ushort *)(lVar11 + (long)(int)uVar19 * 0x10 + 0x22);
            iVar7 = (uint)uVar3 << 0x10;
            if (uVar3 != 0) {
              lVar11 = *(long *)puVar5;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar11 = *(long *)puVar5;
              }
              piVar14 = *(int **)(lVar11 + 0xb8);
              if (iVar7 != *piVar14) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  piVar14 = *(int **)(*(long *)puVar5 + 0xb8);
                }
                if (iVar7 != piVar14[1]) goto LAB_05912714;
              }
              plVar17 = local_410;
              lVar11 = FUN_059291a8(lVar8,0);
              if (lVar11 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar19) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_059132c4;
              }
              if (plVar17 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_059132c4;
              }
              lVar11 = lVar11 + (long)(int)uVar19 * 0x10;
              lVar15 = *plVar17;
              uVar9 = *(undefined8 *)(lVar11 + 0x20);
              uVar1 = *(undefined8 *)(lVar11 + 0x28);
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
                    puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_059126f8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02b7654c(plVar17,*(long *)
                                              Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                                     ,0);
LAB_059126f8:
              (*(code *)*puVar12)(plVar17,uVar9,uVar1,uVar19,2,puVar12[1]);
            }
LAB_05912714:
            lVar11 = *(long *)(param_1 + 0xf0);
            uVar19 = uVar19 + 1;
          } while (lVar11 != 0);
        }
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_059132c4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar14 = piVar14 + 4;
    if (uVar16 == 0) break;
LAB_05912774:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
      puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
      goto LAB_059127ac;
    }
  }
TMPro_TMP_InputField__get_onSubmit:
  puVar12 = (undefined8 *)
            FUN_02b7654c(plVar17,*(long *)
                                  Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                         ,4);
LAB_059127ac:
  (*(code *)*puVar12)(plVar17,auVar20._0_8_,auVar20._8_8_,1,puVar12[1]);
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    uVar19 = (uint)(ushort)local_408._2_2_;
    if (local_408._2_2_ != 0) {
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar5;
      }
      piVar14 = *(int **)(lVar8 + 0xb8);
      if (uVar19 << 0x10 != *piVar14) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar14 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        if (uVar19 << 0x10 != piVar14[1]) goto LAB_05912bbc;
      }
      plVar17 = local_410;
      if (local_410 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      lVar8 = *local_410;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05912ba8;
          }
          uVar16 = uVar16 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(local_410,
                             *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0);
LAB_05912ba8:
      (*(code *)*puVar12)(plVar17,local_408,1,puVar12[1]);
    }
  }
  else {
    lVar11 = FUN_059291a8(lVar8,0);
    if (lVar11 == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_059132c4;
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*(uint *)(lVar11 + 0x18) < 5) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_059132c4;
    }
    if (DAT_066d2bb0 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb0 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d2bb1 == '\0') {
      FUN_02b3c81c(PTR_DAT_06322b80);
      DAT_066d2bb1 = '\x01';
    }
    iVar7 = (uint)*(ushort *)(lVar11 + 0x62) << 0x10;
    if (*(ushort *)(lVar11 + 0x62) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar11 = *(long *)puVar5;
      }
      piVar14 = *(int **)(lVar11 + 0xb8);
      if (iVar7 != *piVar14) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          piVar14 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        if (iVar7 != piVar14[1]) goto TMPro_TMP_InputField__get_onValidateInput;
      }
      plVar17 = local_410;
      lVar11 = FUN_059291a8(lVar8,0);
      if (lVar11 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      if (*(uint *)(lVar11 + 0x18) < 5) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_059132c4;
      }
      if (plVar17 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      lVar15 = *plVar17;
      uVar9 = *(undefined8 *)(lVar11 + 0x60);
      uVar1 = *(undefined8 *)(lVar11 + 0x68);
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_05912a10;
          }
          uVar16 = uVar16 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(plVar17,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                             ,2);
LAB_05912a10:
      (*(code *)*puVar12)(plVar17,uVar9,uVar1,0,1,puVar12[1]);
    }
TMPro_TMP_InputField__get_onValidateInput:
    if (*(char *)(param_1 + 0x100) != '\0') {
      lVar11 = FUN_059291a8(lVar8,0);
      if (lVar11 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_059132c4;
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(uint *)(lVar11 + 0x18) < 6) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_059132c4;
      }
      if (DAT_066d2bb0 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb0 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d2bb1 == '\0') {
        FUN_02b3c81c(PTR_DAT_06322b80);
        DAT_066d2bb1 = '\x01';
      }
      iVar7 = (uint)*(ushort *)(lVar11 + 0x72) << 0x10;
      if (*(ushort *)(lVar11 + 0x72) != 0) {
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar11 = *(long *)puVar5;
        }
        piVar14 = *(int **)(lVar11 + 0xb8);
        if (iVar7 != *piVar14) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            piVar14 = *(int **)(*(long *)puVar5 + 0xb8);
          }
          if (iVar7 != piVar14[1]) goto LAB_05912bbc;
        }
        plVar17 = local_410;
        lVar8 = FUN_059291a8(lVar8,0);
        if (lVar8 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059132c4;
        }
        if (*(uint *)(lVar8 + 0x18) < 6) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          goto LAB_059132c4;
        }
        if (plVar17 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_059132c4;
        }
        lVar11 = *plVar17;
        uVar9 = *(undefined8 *)(lVar8 + 0x70);
        uVar1 = *(undefined8 *)(lVar8 + 0x78);
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
              puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_05912b7c;
            }
            uVar16 = uVar16 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02b7654c(plVar17,*(long *)
                                        Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                               ,2);
LAB_05912b7c:
        (*(code *)*puVar12)(plVar17,uVar9,uVar1,1,1,puVar12[1]);
      }
    }
  }
LAB_05912bbc:
  if (local_418 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar8 = *(long *)(local_418 + 0x28);
    if (lVar8 == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    else {
      uVar2 = *(undefined4 *)(lVar8 + 0x198);
      uVar9 = *(undefined8 *)(param_1 + 0xd8);
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      FUN_0596d748(&local_330,uVar9,lVar10,lVar8,uVar18,uVar2,0);
      memcpy(auStack_130,&local_330,200);
      if (lVar10 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      }
      else {
        uStack_328 = *(undefined8 *)(param_1 + 0xc0);
        local_330 = *(undefined8 *)(param_1 + 0xb8);
        uStack_318 = *(undefined8 *)(param_1 + 0xd0);
        uStack_320 = *(undefined8 *)(param_1 + 200);
        uVar9 = *(undefined8 *)(lVar10 + 0x18);
        uVar18 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)
                      Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        memcpy(auStack_3f8,auStack_130,200);
        uStack_448 = uStack_328;
        local_450 = local_330;
        uStack_438 = uStack_318;
        uStack_440 = uStack_320;
        FUN_05cc6bc4(auStack_260,uVar9,uVar18,auStack_3f8,&local_450,0);
        lVar8 = local_418;
        auVar21 = FUN_05882028(param_2,auStack_260,0);
        plVar17 = local_410;
        lVar10 = local_418;
        if (lVar8 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
        }
        else {
          *(undefined1 (*) [12])(lVar8 + 0x30) = auVar21;
          if (local_418 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else if (local_410 == (long *)0x0) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else {
            lVar8 = *local_410;
            uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar16 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
                  puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                  goto FUN_05912d04;
                }
                uVar16 = uVar16 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar16 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_02b7654c(local_410,
                                   *(long *)
                                    Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,9);
FUN_05912d04:
            (*(code *)*puVar12)(plVar17,lVar10 + 0x30,puVar12[1]);
            plVar17 = local_410;
            if (local_410 == (long *)0x0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
            }
            else {
              lVar8 = *local_410;
              uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar16 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
                    puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
                    goto LAB_05912d74;
                  }
                  uVar16 = uVar16 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar16 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02b7654c(local_410,
                                     *(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc)
              ;
LAB_05912d74:
              (*(code *)*puVar12)(plVar17,1,puVar12[1]);
              plVar17 = local_410;
              lVar8 = *(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
              ;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar8 = *(long *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                ;
              }
              puVar12 = *(undefined8 **)(lVar8 + 0xb8);
              lVar10 = puVar12[1];
              if (lVar10 == 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar12 = *(undefined8 **)
                             (*(long *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                             + 0xb8);
                }
                uVar9 = *puVar12;
                lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                             Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_Init__
                                           );
                FUN_03e02810(lVar10,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__ctor__
                             ,0);
                plVar13 = (long *)(*(long *)(*(long *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                                            + 0xb8) + 8);
                *plVar13 = lVar10;
                thunk_FUN_02bb0e9c(plVar13,lVar10);
              }
              if (plVar17 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
              }
              else {
                lVar8 = *plVar17;
                lVar11 = *(long *)
                          Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_StartTween__;
                uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar16 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x20)) {
                      lVar8 = lVar8 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                      0x10 + 0x138;
                      goto TMPro_TMP_InputField__set_keepTextSelectionVisible;
                    }
                    uVar16 = uVar16 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar16 != 0);
                }
                lVar8 = FUN_02b7654c(plVar17);
TMPro_TMP_InputField__set_keepTextSelectionVisible:
                lVar8 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar8 + 8),lVar11);
                (**(code **)(lVar8 + 8))(plVar17,lVar10,lVar8);
                plVar17 = *local_420;
                if (plVar17 != (long *)0x0) {
                  lVar8 = *plVar17;
                  uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar16 != 0) {
                    piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
                        puVar12 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_05912f00;
                      }
                      uVar16 = uVar16 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02b7654c(plVar17,*(long *)PTR_DAT_06312f78,0);
LAB_05912f00:
                  (*(code *)*puVar12)(plVar17,puVar12[1]);
                }
                if (local_428 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    return;
                  }
                }
                else if (*(long *)(lVar4 + 0x28) == local_68) {
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


