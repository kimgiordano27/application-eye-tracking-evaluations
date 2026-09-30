/*
FUNCTION_NAME: FUN_036bdb50
ENTRY_POINT: 036bdb50
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long * FUN_036bdb50(undefined8 param_1,ulong param_2,long *param_3,long *param_4,undefined8 param_5,
                   undefined4 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  short sVar14;
  short sVar15;
  undefined4 uVar16;
  byte extraout_var;
  int iVar20;
  int iVar21;
  char cVar10;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  double local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  double local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  double local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  double local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  double local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  double local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined1 local_e0 [12];
  undefined1 local_d0 [12];
  undefined1 local_c0 [12];
  undefined1 local_b0 [12];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((DAT_0453875b & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(Method_DebugUISample_<Start>b__2_0__);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo);
    FUN_01c5d288(Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    FUN_01c5d288(PTR_DAT_0422f960);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(PTR_DAT_042304a8);
    FUN_01c5d288(
                Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Vector2Field>__
                );
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(PTR_DAT_04230588);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(UnityEngine_UIElements_ITextEdition_TypeInfo);
    FUN_01c5d288(TMPro_ITextPreprocessor_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_ITextSelection_TypeInfo);
    FUN_01c5d288(System_Threading_IThreadPoolWorkItem_TypeInfo);
    FUN_01c5d288(Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_ITrafficRecorder_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_ITransform_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo);
    FUN_01c5d288(System_Runtime_CompilerServices_ITuple_TypeInfo);
    FUN_01c5d288(System_ITupleInternal_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230a80);
    FUN_01c5d288(PTR_DAT_042306a0);
    FUN_01c5d288(PTR_DAT_042305a8);
    FUN_01c5d288(PTR_DAT_04230670);
    DAT_0453875b = 1;
  }
  local_b0._8_4_ = 0;
  local_b0._0_8_ = 0;
  local_c0._8_4_ = 0;
  local_c0._0_8_ = 0;
  local_d0._8_4_ = 0;
  local_d0._0_8_ = 0;
  local_e0._8_4_ = 0;
  local_e0._0_8_ = 0;
  local_e8[0] = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  if ((0x27 < (uint)param_2) || ((1L << (param_2 & 0x3f) & 0x800c002020U) == 0)) {
    plVar23 = (long *)FUN_036c39b4(param_3,param_5,param_6,param_7);
    plVar38 = (long *)FUN_036c39b4(param_4,param_5,param_6,param_7);
    if ((plVar23 == (long *)0x0) || (uVar34 = thunk_FUN_01c5d21c(plVar23,0), plVar38 == (long *)0x0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar35 = thunk_FUN_01c5d21c(plVar38,0);
    puVar4 = Method_System_Reflection_CustomAttributeTypedArgument__ctor__;
    if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) == 0
       ) {
      thunk_FUN_01c1d1e8(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__);
    }
    uVar16 = FUN_0373014c(uVar34,0);
    uVar17 = FUN_0373014c(uVar35,0);
    uVar18 = FUN_0373035c(uVar16,0);
    uVar19 = FUN_0373035c(uVar17,0);
    if ((uVar18 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_037308e4(plVar23,0);
      plVar36 = plVar23;
      if ((uVar24 & 1) != 0) goto LAB_036c23bc;
    }
    if ((uVar19 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_037308e4(plVar38,0);
      plVar36 = plVar38;
      if ((uVar24 & 1) != 0) goto LAB_036c23bc;
    }
    puVar4 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)puVar4;
    }
    plVar36 = (long *)**(undefined8 **)(lVar22 + 0xb8);
    if (plVar23 != plVar36) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        plVar36 = (long *)**(undefined8 **)(lVar22 + 0xb8);
      }
      if (plVar38 != plVar36) {
        if (param_3 == (long *)0x0) {
          plVar36 = (long *)0x0;
          if (((uVar18 | uVar19) & 1) != 0) goto LAB_036be040;
LAB_036bf110:
          if (param_4 == (long *)0x0) {
            plVar37 = (long *)0x0;
          }
          else {
            plVar37 = param_4;
            if (*param_4 != *(long *)Method_DebugUISample_<Start>b__2_0__) {
              plVar37 = (long *)0x0;
            }
          }
          uVar25 = FUN_036c5078(param_1,uVar16,uVar17,plVar36 != (long *)0x0,plVar37 != (long *)0x0,
                                param_2 & 0xffffffff);
        }
        else {
          plVar36 = param_3;
          if (*param_3 != *(long *)Method_DebugUISample_<Start>b__2_0__) {
            plVar36 = (long *)0x0;
          }
          if (((uVar18 | uVar19) & 1) == 0) goto LAB_036bf110;
LAB_036be040:
          uVar25 = FUN_036c4c90(param_1,uVar16,uVar17,0,0,param_2 & 0xffffffff);
        }
        uVar18 = (uint)uVar25;
        if (uVar18 == 0) {
          FUN_036c3980(uVar25,param_2 & 0xffffffff,uVar34,uVar35);
          goto LAB_036c2498;
        }
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        goto LAB_036bdda4;
      }
    }
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
LAB_036bed48:
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    goto LAB_036bed54;
  }
  lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
  }
  uVar18 = 0;
  plVar38 = (long *)**(undefined8 **)(lVar22 + 0xb8);
  plVar23 = plVar38;
LAB_036bdda4:
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
  }
  puVar8 = Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Vector2Field>__;
  puVar7 = Method_System_Reflection_CustomAttributeTypedArgument__ctor__;
  puVar6 = UnityEngine_UIElements_ITextSelection_TypeInfo;
  puVar5 = PTR_DAT_04230a80;
  puVar4 = PTR_DAT_0422f960;
  switch((uint)param_2) {
  case 5:
    if ((param_4 == (long *)0x0) ||
       (*param_4 !=
        *(long *)
         Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Vector2Field>__)) {
      uVar34 = FUN_036ca030(0);
      uVar35 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar34,uVar35);
    }
    lVar27 = FUN_036c39b4(param_3,param_5,param_6,param_7);
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar22);
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (lVar27 != **(long **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) goto LAB_036c2538;
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(lVar27,0);
        if ((uVar24 & 1) != 0) {
          lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
          goto LAB_036bde9c;
        }
      }
      puVar4 = PTR_DAT_0422fa08;
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
      puVar5 = Method_System_Reflection_CustomAttributeTypedArgument__ctor__;
      if (*param_4 != *(long *)puVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      if (0 < *(int *)((long)param_4 + 0x24)) {
        lVar22 = 0;
        do {
          lVar29 = param_4[5];
          if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(uint *)(lVar29 + 0x18) <= (uint)lVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          plVar23 = *(long **)(lVar29 + lVar22 * 8 + 0x20);
          if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar29 = (**(code **)(*plVar23 + 0x198))(plVar23,*(undefined8 *)(*plVar23 + 0x1a0));
          lVar28 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar28 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
          }
          if (lVar29 != **(long **)(lVar28 + 0xb8)) {
            uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
            if ((uVar24 & 1) != 0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar24 = FUN_037308e4(lVar29,0);
              if ((uVar24 & 1) != 0) goto LAB_036bf034;
            }
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            uVar34 = thunk_FUN_01c5d21c(lVar27,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar16 = FUN_0373014c(uVar34,0);
            iVar20 = FUN_036c39ec(param_1,lVar27,lVar29,uVar16,7,0);
            if (iVar20 == 0) {
              local_a0[0] = 1;
              plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
              break;
            }
          }
LAB_036bf034:
          lVar22 = lVar22 + 1;
        } while ((int)lVar22 < *(int *)((long)param_4 + 0x24));
      }
      goto LAB_036c23bc;
    }
LAB_036bde9c:
    if (*(int *)(lVar22 + 0xe0) != 0) goto LAB_036bf384;
    thunk_FUN_01c1d1e8(lVar22);
LAB_036bf378:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    goto LAB_036bf384;
  default:
    uVar34 = FUN_036ca460(param_2 & 0xffffffff,0);
    uVar35 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar34,uVar35);
  case 7:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036bec38;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036bec38;
        }
        iVar20 = FUN_036c39ec(param_1,plVar23,plVar38,uVar18,7,0);
        local_a0[0] = iVar20 == 0;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036bec38:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 8:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036be99c;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036be99c;
        }
        iVar20 = FUN_036c39ec(param_1,plVar23,plVar38,uVar18,8,0);
        local_a0[0] = 0 < iVar20;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036be99c:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 9:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036beb40;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036beb40;
        }
        uVar24 = FUN_036c39ec(param_1,plVar23,plVar38,uVar18,9,0);
        local_a0._0_8_ = CONCAT71(local_a0._1_7_,(char)(uVar24 >> 0x1f)) & 0xffffffffffffff01;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036beb40:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 10:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
LAB_036c2498:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036be704;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036be704;
        }
        FUN_036c39ec(param_1,plVar23,plVar38,uVar18,10,0);
        local_a0[0] = (byte)~extraout_var >> 7;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036be704:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 0xb:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036be8a4;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036be8a4;
        }
        iVar20 = FUN_036c39ec(param_1,plVar23,plVar38,uVar18,0xb,0);
        local_a0[0] = iVar20 < 1;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036be8a4:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 0xc:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) goto LAB_036bed30;
      }
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      }
      if (plVar38 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) goto LAB_036bed30;
        }
        iVar20 = FUN_036c39ec(param_1,plVar23,plVar38,uVar18,0xc,0);
        local_a0[0] = iVar20 != 0;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
        goto LAB_036c23bc;
      }
    }
LAB_036bed30:
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      goto LAB_036bed48;
    }
    break;
  case 0xd:
    lVar22 = FUN_036c39b4(param_3,param_5,param_6,param_7);
    lVar27 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar27 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (lVar22 == **(long **)(lVar27 + 0xb8)) {
LAB_036bea44:
      local_a0[0] = 1;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(lVar22,0);
        if ((uVar24 & 1) != 0) goto LAB_036bea44;
      }
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
    }
    goto LAB_036c23bc;
  case 0xf:
    switch(uVar18) {
    case 4:
    case 0x12:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar34 = FUN_03253ffc(plVar23,uVar34,0);
      uVar35 = FUN_036c499c(param_1);
      uVar35 = FUN_03253ffc(plVar38,uVar35,0);
      plVar36 = (long *)FUN_03146988(uVar34,uVar35,0);
      break;
    case 5:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      cVar9 = FUN_03250c30(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      cVar10 = FUN_03250c30(plVar38,uVar34,0);
      local_a0._0_4_ = (int)cVar10 + (int)cVar9;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03250c30(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230588,&local_150);
      break;
    case 6:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251284(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251284(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar19 & 0xff) + (uVar18 & 0xff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03251284(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,&local_150);
      break;
    case 7:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      sVar14 = FUN_032517ac(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      sVar15 = FUN_032517ac(plVar38,uVar34,0);
      local_a0._0_4_ = (int)sVar15 + (int)sVar14;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_032517ac(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,&local_150);
      break;
    case 8:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251bb4(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251bb4(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar19 & 0xffff) + (uVar18 & 0xffff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_03251bb4(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042306a0,&local_150);
      break;
    case 9:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar20 = FUN_032520fc(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      iVar21 = FUN_032520fc(plVar38,uVar34,0);
      if (SCARRY4(iVar20,iVar21)) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = iVar21 + iVar20;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      break;
    case 10:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_0325256c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_0325256c(plVar38,uVar34,0);
      if ((ulong)uVar19 + (ulong)uVar18 >> 0x20 != 0) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = uVar19 + uVar18;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305a8,local_a0);
      break;
    case 0xb:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar22 = FUN_03252aa8(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      lVar27 = FUN_03252aa8(plVar38,uVar34,0);
      if (((-1 < lVar27) && (0x7fffffffffffffff - lVar27 < lVar22)) ||
         ((lVar22 < 0 && (lVar27 < -0x8000000000000000 - lVar22)))) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_8_ = lVar27 + lVar22;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,local_a0);
      break;
    case 0xc:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_03252f8c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar30 = FUN_03252f8c(plVar38,uVar34,0);
      if (CARRY8(uVar30,uVar24)) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_8_ = uVar30 + uVar24;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230670,local_a0);
      break;
    case 0xd:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar39 = (float)FUN_0325344c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      fVar40 = (float)FUN_0325344c(plVar38,uVar34,0);
      local_a0._0_4_ = fVar39 + fVar40;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,local_a0);
      break;
    case 0xe:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar41 = (double)FUN_03253790(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      dVar42 = (double)FUN_03253790(plVar38,uVar34,0);
      local_a0._0_8_ = dVar41 + dVar42;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304a8,local_a0);
      break;
    case 0xf:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar43 = FUN_03253964(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      auVar44 = FUN_03253964(plVar38,uVar34,0);
      puVar4 = PTR_DAT_04230108;
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_03330458(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x10:
      if (plVar23 != (long *)0x0) {
        lVar22 = *plVar23;
        lVar27 = *(long *)PTR_DAT_0422f960;
        if (lVar22 == *(long *)PTR_DAT_04230a80) {
          if (plVar38 != (long *)0x0) {
            if (*plVar38 == lVar27) {
              lVar22 = lVar27;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(lVar27);
                lVar27 = *(long *)puVar4;
                lVar22 = *plVar38;
              }
              if (*(long *)(lVar22 + 0x40) != *(long *)(lVar27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar38);
              }
              puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
              if (*(long *)(*plVar23 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar23);
              }
              uVar34 = *puVar33;
              puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
              local_a0._0_8_ = FUN_032b4d8c(uVar34,*puVar33,0);
              plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
              break;
            }
            goto LAB_036c1820;
          }
LAB_036c2590:
          plVar38 = (long *)0x0;
        }
        else {
LAB_036c1820:
          if (lVar22 == lVar27) {
            if (plVar38 == (long *)0x0) goto LAB_036c2590;
            if (*plVar38 == *(long *)PTR_DAT_04230a80) {
              lVar27 = lVar22;
              if (*(int *)(lVar22 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar22 = *plVar23;
                lVar27 = *(long *)puVar4;
              }
              if (*(long *)(lVar22 + 0x40) != *(long *)(lVar27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar23);
              }
              puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
              if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar38);
              }
              uVar34 = *puVar33;
              puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
              local_a0._0_8_ = FUN_032b4d8c(uVar34,*puVar33,0);
              plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
              break;
            }
          }
        }
      }
    default:
switchD_036be094_caseD_10:
      FUN_019b2708(plVar23);
      uVar34 = thunk_FUN_01c5d21c(plVar23,0);
      FUN_019b2708(plVar38);
      uVar35 = thunk_FUN_01c5d21c(plVar38,0);
      FUN_036c3980(uVar35,param_2 & 0xffffffff,uVar34,uVar35);
LAB_036c2538:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    case 0x11:
      lVar22 = *(long *)PTR_DAT_04230a80;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar22);
        lVar22 = *(long *)puVar5;
      }
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(*plVar23 + 0x40) != *(long *)(lVar22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar23);
      }
      puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
      if (plVar38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar38);
      }
      uVar34 = *puVar33;
      puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
      local_a0._0_8_ = FUN_032e8e1c(uVar34,*puVar33,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar5,local_a0);
      break;
    case 0x1c:
      uVar12 = FUN_0373a5e8(plVar23,0);
      uVar13 = FUN_0373a5e8(plVar38,0);
      puVar4 = TMPro_ITextPreprocessor_TypeInfo;
      if (*(int *)(*(long *)TMPro_ITextPreprocessor_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_0370e548(uVar12,uVar13,0);
      local_a0._0_2_ = uVar12;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x1f:
      if (plVar23 != (long *)0x0) {
        if (*plVar23 == *(long *)PTR_DAT_04230a80) {
          if (plVar38 == (long *)0x0) goto LAB_036c2590;
          if (*plVar38 == *(long *)UnityEngine_UIElements_ITextSelection_TypeInfo) {
            local_b0 = FUN_0373cdf0(plVar38,0);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar6);
            }
            uVar34 = FUN_03711108(local_b0,0);
            puVar4 = PTR_DAT_0422f960;
            if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if (*(long *)(*plVar23 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar23);
            }
            puVar33 = (undefined8 *)thunk_FUN_01c49834();
            local_150 = (double)FUN_032b4d8c(uVar34,*puVar33,0);
            uVar34 = thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_150);
            auVar45 = FUN_0373cdf0(uVar34,0);
            local_a0._0_8_ = auVar45._0_8_;
            local_a0._8_4_ = auVar45._8_4_;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar6,local_a0);
            break;
          }
        }
        if (*plVar23 == *(long *)UnityEngine_UIElements_ITextSelection_TypeInfo) {
          if (plVar38 == (long *)0x0) goto LAB_036c2590;
          if (*plVar38 == *(long *)PTR_DAT_04230a80) {
            local_c0 = FUN_0373cdf0(plVar23,0);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar6);
            }
            uVar34 = FUN_03711108(local_c0,0);
            puVar4 = PTR_DAT_0422f960;
            if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar38);
            }
            puVar33 = (undefined8 *)thunk_FUN_01c49834();
            local_150 = (double)FUN_032b4d8c(uVar34,*puVar33,0);
            uVar34 = thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_150);
            auVar45 = FUN_0373cdf0(uVar34,0);
            local_a0._0_8_ = auVar45._0_8_;
            local_a0._8_4_ = auVar45._8_4_;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar6,local_a0);
            break;
          }
        }
      }
      goto switchD_036be094_caseD_10;
    case 0x20:
      FUN_0373ba74(&local_150,plVar23,0);
      local_a0._8_8_ = uStack_148;
      local_a0._0_8_ = local_150;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_140);
      FUN_0373ba74(&local_170,plVar38,0);
      puVar4 = System_Threading_IThreadPoolWorkItem_TypeInfo;
      uStack_148 = uStack_168;
      local_150 = local_170;
      local_140 = CONCAT44(local_140._4_4_,(undefined4)local_160);
      if (*(int *)(*(long *)System_Threading_IThreadPoolWorkItem_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_108 = local_a0._8_8_;
      local_110 = (double)local_a0._0_8_;
      local_100 = (undefined4)local_90;
      uStack_128 = uStack_148;
      local_130 = local_150;
      local_120 = (undefined4)local_140;
      FUN_037145cc(&local_190,&local_110,&local_130,0);
      uStack_168 = uStack_188;
      local_170 = local_190;
      local_160 = CONCAT44(local_160._4_4_,(undefined4)local_180);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_190);
      break;
    case 0x21:
      auVar43 = FUN_0373b32c(plVar23,0);
      auVar44 = FUN_0373b32c(plVar38,0);
      puVar4 = Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo;
      if (*(int *)(*(long *)Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_03718cf8(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x23:
      uVar16 = FUN_0373a7c4(plVar23,0);
      uVar17 = FUN_0373a7c4(plVar38,0);
      puVar4 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_4_ = FUN_0371b1c4(uVar16,uVar17,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x24:
      uVar34 = FUN_0373aa70(plVar23,0);
      uVar35 = FUN_0373aa70(plVar38,0);
      puVar4 = ExitGames_Client_Photon_ITrafficRecorder_TypeInfo;
      if (*(int *)(*(long *)ExitGames_Client_Photon_ITrafficRecorder_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_0371c610(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x25:
      auVar43 = FUN_0373ae3c(plVar23,0);
      auVar44 = FUN_0373ae3c(plVar38,0);
      puVar4 = UnityEngine_UIElements_ITransform_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_ITransform_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371db94(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x26:
      auVar43 = FUN_0373c7dc(plVar23,0);
      auVar44 = FUN_0373c7dc(plVar38,0);
      puVar4 = UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371f5c4(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x27:
      uVar34 = FUN_0373c114(plVar23,0);
      uVar35 = FUN_0373c114(plVar38,0);
      puVar4 = System_Runtime_CompilerServices_ITuple_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ITuple_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_03720da4(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x28:
      FUN_0373d54c(&local_150,plVar23,0);
      local_a0._8_8_ = uStack_148;
      local_a0._0_8_ = local_150;
      uStack_88 = uStack_138;
      local_90 = local_140;
      FUN_0373d54c(&local_170,plVar38,0);
      puVar4 = System_ITupleInternal_TypeInfo;
      uStack_148 = uStack_168;
      local_150 = local_170;
      uStack_138 = uStack_158;
      local_140 = local_160;
      if (*(int *)(*(long *)System_ITupleInternal_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_1a8 = local_a0._8_8_;
      local_1b0 = (double)local_a0._0_8_;
      uStack_198 = uStack_88;
      uStack_1a0 = local_90;
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = local_140;
      FUN_0372260c(&local_190,&local_1b0,&local_1d0,0);
      uStack_168 = uStack_188;
      local_170 = local_190;
      uStack_158 = uStack_178;
      local_160 = local_180;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_190);
    }
    goto LAB_036c23bc;
  case 0x10:
    switch(uVar18) {
    case 5:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      cVar9 = FUN_03250c30(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      cVar10 = FUN_03250c30(plVar38,uVar34,0);
      local_a0._0_4_ = (int)cVar9 - (int)cVar10;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03250c30(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230588,&local_150);
      break;
    case 6:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251284(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251284(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar18 & 0xff) - (uVar19 & 0xff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03251284(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,&local_150);
      break;
    case 7:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      sVar14 = FUN_032517ac(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      sVar15 = FUN_032517ac(plVar38,uVar34,0);
      local_a0._0_4_ = (int)sVar14 - (int)sVar15;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_032517ac(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,&local_150);
      break;
    case 8:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251bb4(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251bb4(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar18 & 0xffff) - (uVar19 & 0xffff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_03251bb4(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042306a0,&local_150);
      break;
    case 9:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar20 = FUN_032520fc(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      iVar21 = FUN_032520fc(plVar38,uVar34,0);
      if (((long)iVar20 - (long)iVar21) + 0x80000000U >> 0x20 != 0) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = iVar20 - iVar21;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      break;
    case 10:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_0325256c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_0325256c(plVar38,uVar34,0);
      if ((ulong)uVar18 - (ulong)uVar19 >> 0x20 != 0) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = uVar18 - uVar19;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305a8,local_a0);
      break;
    case 0xb:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar22 = FUN_03252aa8(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar24 = FUN_03252aa8(plVar38,uVar34,0);
      if (((-1 < (long)uVar24) && (lVar22 < (long)(uVar24 ^ 0x8000000000000000))) ||
         (((long)uVar24 < 0 && ((long)(uVar24 + 0x7fffffffffffffff) < lVar22)))) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_8_ = lVar22 - uVar24;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,local_a0);
      break;
    case 0xc:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_03252f8c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar30 = FUN_03252f8c(plVar38,uVar34,0);
      local_a0._0_8_ = uVar24 - uVar30;
      if (uVar24 < uVar30) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230670,local_a0);
      break;
    case 0xd:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar39 = (float)FUN_0325344c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      fVar40 = (float)FUN_0325344c(plVar38,uVar34,0);
      local_a0._0_4_ = fVar39 - fVar40;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,local_a0);
      break;
    case 0xe:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar41 = (double)FUN_03253790(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      dVar42 = (double)FUN_03253790(plVar38,uVar34,0);
      local_a0._0_8_ = dVar41 - dVar42;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304a8,local_a0);
      break;
    case 0xf:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar43 = FUN_03253964(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      auVar44 = FUN_03253964(plVar38,uVar34,0);
      puVar4 = PTR_DAT_04230108;
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0333050c(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x10:
      lVar22 = *(long *)PTR_DAT_0422f960;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar22);
        lVar22 = *(long *)puVar4;
      }
      if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(*plVar23 + 0x40) != *(long *)(lVar22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar23);
      }
      puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
      if (plVar38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)PTR_DAT_04230a80 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar38);
      }
      uVar34 = *puVar33;
      puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
      local_a0._0_8_ = FUN_032b4e8c(uVar34,*puVar33,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x11:
      if ((plVar23 == (long *)0x0) || (lVar22 = *(long *)PTR_DAT_0422f960, *plVar23 != lVar22)) {
        lVar22 = *(long *)PTR_DAT_04230a80;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar22);
          lVar22 = *(long *)puVar5;
        }
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar23 + 0x40) != *(long *)(lVar22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar23);
        }
        puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
        if (plVar38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar38);
        }
        uVar34 = *puVar33;
        puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
        local_a0._0_8_ = Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost(uVar34,*puVar33,0);
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar5,local_a0);
      }
      else {
        lVar27 = lVar22;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar22 = *plVar23;
          lVar27 = *(long *)puVar4;
        }
        if (*(long *)(lVar22 + 0x40) != *(long *)(lVar27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar23);
        }
        puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar23);
        if (plVar38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar38);
        }
        uVar34 = *puVar33;
        puVar33 = (undefined8 *)thunk_FUN_01c49834(plVar38);
        local_a0._0_8_ = FUN_032b4f84(uVar34,*puVar33,0);
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230a80,local_a0);
      }
      break;
    default:
      goto switchD_036be094_caseD_10;
    case 0x1c:
      uVar12 = FUN_0373a5e8(plVar23,0);
      uVar13 = FUN_0373a5e8(plVar38,0);
      puVar4 = TMPro_ITextPreprocessor_TypeInfo;
      if (*(int *)(*(long *)TMPro_ITextPreprocessor_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_0370e678(uVar12,uVar13,0);
      local_a0._0_2_ = uVar12;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x1f:
      if (plVar23 != (long *)0x0) {
        if (*plVar23 == *(long *)PTR_DAT_04230a80) {
          if (plVar38 == (long *)0x0) goto LAB_036c2590;
          if (*plVar38 == *(long *)UnityEngine_UIElements_ITextSelection_TypeInfo) {
            local_d0 = FUN_0373cdf0(plVar38,0);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar6);
            }
            uVar34 = FUN_03711108(local_d0,0);
            puVar4 = PTR_DAT_0422f960;
            if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if (*(long *)(*plVar23 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar23);
            }
            puVar33 = (undefined8 *)thunk_FUN_01c49834();
            local_150 = (double)FUN_032b4e8c(uVar34,*puVar33,0);
            uVar34 = thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_150);
            auVar45 = FUN_0373cdf0(uVar34,0);
            local_a0._0_8_ = auVar45._0_8_;
            local_a0._8_4_ = auVar45._8_4_;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar6,local_a0);
            break;
          }
        }
        if (*plVar23 == *(long *)UnityEngine_UIElements_ITextSelection_TypeInfo) {
          if (plVar38 == (long *)0x0) goto LAB_036c2590;
          if (*plVar38 == *(long *)PTR_DAT_04230a80) {
            local_e0 = FUN_0373cdf0(plVar23,0);
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar6);
            }
            uVar34 = FUN_03711108(local_e0,0);
            puVar4 = PTR_DAT_0422f960;
            if (*(int *)(*(long *)PTR_DAT_0422f960 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if (*(long *)(*plVar38 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar38);
            }
            puVar33 = (undefined8 *)thunk_FUN_01c49834();
            local_150 = (double)FUN_032b4e8c(uVar34,*puVar33,0);
            uVar34 = thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_150);
            auVar45 = FUN_0373cdf0(uVar34,0);
            local_a0._0_8_ = auVar45._0_8_;
            local_a0._8_4_ = auVar45._8_4_;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar6,local_a0);
            break;
          }
        }
      }
      goto switchD_036be094_caseD_10;
    case 0x20:
      FUN_0373ba74(&local_150,plVar23,0);
      local_a0._8_8_ = uStack_148;
      local_a0._0_8_ = local_150;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_140);
      FUN_0373ba74(&local_170,plVar38,0);
      puVar4 = System_Threading_IThreadPoolWorkItem_TypeInfo;
      uStack_148 = uStack_168;
      local_150 = local_170;
      local_140 = CONCAT44(local_140._4_4_,(undefined4)local_160);
      if (*(int *)(*(long *)System_Threading_IThreadPoolWorkItem_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_1e8 = local_a0._8_8_;
      local_1f0 = (double)local_a0._0_8_;
      local_1e0 = (undefined4)local_90;
      uStack_208 = uStack_148;
      local_210 = local_150;
      local_200 = (undefined4)local_140;
      FUN_037150a8(&local_190,&local_1f0,&local_210,0);
      uStack_168 = uStack_188;
      local_170 = local_190;
      local_160 = CONCAT44(local_160._4_4_,(undefined4)local_180);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_190);
      break;
    case 0x21:
      auVar43 = FUN_0373b32c(plVar23,0);
      auVar44 = FUN_0373b32c(plVar38,0);
      puVar4 = Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo;
      if (*(int *)(*(long *)Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_03718e24(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x23:
      uVar16 = FUN_0373a7c4(plVar23,0);
      uVar17 = FUN_0373a7c4(plVar38,0);
      puVar4 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_4_ = FUN_0371b2d4(uVar16,uVar17,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x24:
      uVar34 = FUN_0373aa70(plVar23,0);
      uVar35 = FUN_0373aa70(plVar38,0);
      puVar4 = ExitGames_Client_Photon_ITrafficRecorder_TypeInfo;
      if (*(int *)(*(long *)ExitGames_Client_Photon_ITrafficRecorder_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_0371c754(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x25:
      auVar43 = FUN_0373ae3c(plVar23,0);
      auVar44 = FUN_0373ae3c(plVar38,0);
      puVar4 = UnityEngine_UIElements_ITransform_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_ITransform_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371dce0(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x26:
      auVar43 = FUN_0373c7dc(plVar23,0);
      auVar44 = FUN_0373c7dc(plVar38,0);
      puVar4 = UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371f774(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x27:
      uVar34 = FUN_0373c114(plVar23,0);
      uVar35 = FUN_0373c114(plVar38,0);
      puVar4 = System_Runtime_CompilerServices_ITuple_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ITuple_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_03720ec0(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
    }
    goto LAB_036c23bc;
  case 0x11:
    switch(uVar18) {
    case 5:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      cVar9 = FUN_03250c30(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      cVar10 = FUN_03250c30(plVar38,uVar34,0);
      local_a0._0_4_ = (int)cVar10 * (int)cVar9;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03250c30(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230588,&local_150);
      break;
    case 6:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251284(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251284(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar19 & 0xff) * (uVar18 & 0xff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03251284(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,&local_150);
      break;
    case 7:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      sVar14 = FUN_032517ac(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      sVar15 = FUN_032517ac(plVar38,uVar34,0);
      local_a0._0_4_ = (int)sVar15 * (int)sVar14;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_032517ac(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,&local_150);
      break;
    case 8:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251bb4(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251bb4(plVar38,uVar34,0);
      local_a0._0_4_ = (uVar19 & 0xffff) * (uVar18 & 0xffff);
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_03251bb4(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042306a0,&local_150);
      break;
    case 9:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar20 = FUN_032520fc(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      iVar21 = FUN_032520fc(plVar38,uVar34,0);
      if ((long)iVar21 * (long)iVar20 - (long)(int)((long)iVar21 * (long)iVar20) != 0) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = iVar21 * iVar20;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      break;
    case 10:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_0325256c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_0325256c(plVar38,uVar34,0);
      if ((ulong)uVar18 * (ulong)uVar19 >> 0x20 != 0) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_4_ = uVar19 * uVar18;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305a8,local_a0);
      break;
    case 0xb:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_03252aa8(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar30 = FUN_03252aa8(plVar38,uVar34,0);
      if (uVar24 != 0) {
        uVar31 = -uVar30;
        if (-1 < (long)uVar30) {
          uVar31 = uVar30;
        }
        uVar1 = -uVar24;
        if (-1 < (long)uVar24) {
          uVar1 = uVar24;
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = 0x7fffffffffffffff / uVar1;
        }
        if (uVar2 < uVar31) {
          uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar34,*(undefined8 *)
                               Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
        }
      }
      local_a0._0_8_ = uVar30 * uVar24;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,local_a0);
      break;
    case 0xc:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_03252f8c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar30 = FUN_03252f8c(plVar38,uVar34,0);
      if ((uVar30 != 0) &&
         (auVar43._8_8_ = 0, auVar43._0_8_ = uVar30, auVar44._8_8_ = 0, auVar44._0_8_ = uVar24,
         SUB168(auVar43 * auVar44,8) != 0)) {
        uVar34 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar34,*(undefined8 *)
                             Method_UnityEngine_UIElements_EnumField_OnPointerMoveEvent__);
      }
      local_a0._0_8_ = uVar30 * uVar24;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230670,local_a0);
      break;
    case 0xd:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar39 = (float)FUN_0325344c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      fVar40 = (float)FUN_0325344c(plVar38,uVar34,0);
      local_a0._0_4_ = fVar39 * fVar40;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,local_a0);
      break;
    case 0xe:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar41 = (double)FUN_03253790(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      dVar42 = (double)FUN_03253790(plVar38,uVar34,0);
      local_a0._0_8_ = dVar41 * dVar42;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304a8,local_a0);
      break;
    case 0xf:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar43 = FUN_03253964(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      auVar44 = FUN_03253964(plVar38,uVar34,0);
      puVar4 = PTR_DAT_04230108;
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_033305c0(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    default:
      goto switchD_036be094_caseD_10;
    case 0x1c:
      uVar12 = FUN_0373a5e8(plVar23,0);
      uVar13 = FUN_0373a5e8(plVar38,0);
      puVar4 = TMPro_ITextPreprocessor_TypeInfo;
      if (*(int *)(*(long *)TMPro_ITextPreprocessor_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_0370e7a8(uVar12,uVar13,0);
      local_a0._0_2_ = uVar12;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x20:
      FUN_0373ba74(&local_150,plVar23,0);
      local_a0._8_8_ = uStack_148;
      local_a0._0_8_ = local_150;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_140);
      FUN_0373ba74(&local_170,plVar38,0);
      puVar4 = System_Threading_IThreadPoolWorkItem_TypeInfo;
      uStack_148 = uStack_168;
      local_150 = local_170;
      local_140 = CONCAT44(local_140._4_4_,(undefined4)local_160);
      if (*(int *)(*(long *)System_Threading_IThreadPoolWorkItem_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_228 = local_a0._8_8_;
      local_230 = (double)local_a0._0_8_;
      local_220 = (undefined4)local_90;
      uStack_248 = uStack_148;
      local_250 = local_150;
      local_240 = (undefined4)local_140;
      FUN_03715188(&local_190,&local_230,&local_250,0);
      uStack_168 = uStack_188;
      local_170 = local_190;
      local_160 = CONCAT44(local_160._4_4_,(undefined4)local_180);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_190);
      break;
    case 0x21:
      auVar43 = FUN_0373b32c(plVar23,0);
      auVar44 = FUN_0373b32c(plVar38,0);
      puVar4 = Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo;
      if (*(int *)(*(long *)Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_03718f50(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x23:
      uVar16 = FUN_0373a7c4(plVar23,0);
      uVar17 = FUN_0373a7c4(plVar38,0);
      puVar4 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_4_ = FUN_0371b3e4(uVar16,uVar17,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x24:
      uVar34 = FUN_0373aa70(plVar23,0);
      uVar35 = FUN_0373aa70(plVar38,0);
      puVar4 = ExitGames_Client_Photon_ITrafficRecorder_TypeInfo;
      if (*(int *)(*(long *)ExitGames_Client_Photon_ITrafficRecorder_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_0371c88c(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x25:
      auVar43 = FUN_0373ae3c(plVar23,0);
      auVar44 = FUN_0373ae3c(plVar38,0);
      puVar4 = UnityEngine_UIElements_ITransform_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_ITransform_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371de1c(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x26:
      auVar43 = FUN_0373c7dc(plVar23,0);
      auVar44 = FUN_0373c7dc(plVar38,0);
      puVar4 = UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371f920(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x27:
      uVar34 = FUN_0373c114(plVar23,0);
      uVar35 = FUN_0373c114(plVar38,0);
      puVar4 = System_Runtime_CompilerServices_ITuple_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ITuple_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_03720fdc(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
    }
    goto LAB_036c23bc;
  case 0x12:
    switch(uVar18) {
    case 5:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      cVar9 = FUN_03250c30(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      cVar10 = FUN_03250c30(plVar38,uVar34,0);
      sVar14 = 0;
      if (cVar10 != '\0') {
        sVar14 = (short)cVar9 / (short)cVar10;
      }
      local_a0._0_4_ = (int)sVar14;
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03250c30(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230588,&local_150);
      break;
    case 6:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251284(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251284(plVar38,uVar34,0);
      local_a0._0_4_ = 0;
      if ((uVar19 & 0xff) != 0) {
        local_a0._0_4_ = (uVar18 & 0xff) / (uVar19 & 0xff);
      }
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar11 = FUN_03251284(uVar34,uVar35,0);
      local_150 = (double)CONCAT71(local_150._1_7_,uVar11);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303a0,&local_150);
      break;
    case 7:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      sVar14 = FUN_032517ac(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      sVar15 = FUN_032517ac(plVar38,uVar34,0);
      local_a0._0_4_ = 0;
      if (sVar15 != 0) {
        local_a0._0_4_ = (int)sVar14 / (int)sVar15;
      }
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_032517ac(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,&local_150);
      break;
    case 8:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_03251bb4(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_03251bb4(plVar38,uVar34,0);
      local_a0._0_4_ = 0;
      if ((uVar19 & 0xffff) != 0) {
        local_a0._0_4_ = (uVar18 & 0xffff) / (uVar19 & 0xffff);
      }
      uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      uVar35 = FUN_036c499c(param_1);
      uVar12 = FUN_03251bb4(uVar34,uVar35,0);
      local_150 = (double)CONCAT62(local_150._2_6_,uVar12);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042306a0,&local_150);
      break;
    case 9:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar20 = FUN_032520fc(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      iVar21 = FUN_032520fc(plVar38,uVar34,0);
      local_a0._0_4_ = 0;
      if (iVar21 != 0) {
        local_a0._0_4_ = iVar20 / iVar21;
      }
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,local_a0);
      break;
    case 10:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar18 = FUN_0325256c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar19 = FUN_0325256c(plVar38,uVar34,0);
      local_a0._0_4_ = 0;
      if (uVar19 != 0) {
        local_a0._0_4_ = uVar18 / uVar19;
      }
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305a8,local_a0);
      break;
    case 0xb:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar22 = FUN_03252aa8(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      lVar27 = FUN_03252aa8(plVar38,uVar34,0);
      local_a0._0_8_ = 0;
      if (lVar27 != 0) {
        local_a0._0_8_ = lVar22 / lVar27;
      }
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,local_a0);
      break;
    case 0xc:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_03252f8c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      uVar30 = FUN_03252f8c(plVar38,uVar34,0);
      local_a0._0_8_ = 0;
      if (uVar30 != 0) {
        local_a0._0_8_ = uVar24 / uVar30;
      }
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230670,local_a0);
      break;
    case 0xd:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar39 = (float)FUN_0325344c(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      fVar40 = (float)FUN_0325344c(plVar38,uVar34,0);
      local_a0._0_4_ = fVar39 / fVar40;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,local_a0);
      break;
    case 0xe:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      dVar41 = (double)FUN_03253790(plVar38,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      dVar42 = (double)FUN_03253790(plVar23,uVar34,0);
      local_a0._0_8_ = dVar42 / dVar41;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304a8,local_a0);
      break;
    case 0xf:
      uVar34 = FUN_036c499c(param_1);
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      auVar43 = FUN_03253964(plVar23,uVar34,0);
      uVar34 = FUN_036c499c(param_1);
      auVar44 = FUN_03253964(plVar38,uVar34,0);
      puVar4 = PTR_DAT_04230108;
      if (*(int *)(*(long *)PTR_DAT_04230108 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_03330670(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    default:
      goto switchD_036be094_caseD_10;
    case 0x1c:
      uVar12 = FUN_0373a5e8(plVar23,0);
      uVar13 = FUN_0373a5e8(plVar38,0);
      puVar4 = TMPro_ITextPreprocessor_TypeInfo;
      if (*(int *)(*(long *)TMPro_ITextPreprocessor_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_0370e8dc(uVar12,uVar13,0);
      local_a0._0_2_ = uVar12;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x20:
      FUN_0373ba74(&local_150,plVar23,0);
      local_a0._8_8_ = uStack_148;
      local_a0._0_8_ = local_150;
      local_90 = CONCAT44(local_90._4_4_,(undefined4)local_140);
      FUN_0373ba74(&local_170,plVar38,0);
      puVar4 = System_Threading_IThreadPoolWorkItem_TypeInfo;
      uStack_148 = uStack_168;
      local_150 = local_170;
      local_140 = CONCAT44(local_140._4_4_,(undefined4)local_160);
      if (*(int *)(*(long *)System_Threading_IThreadPoolWorkItem_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_268 = local_a0._8_8_;
      local_270 = (double)local_a0._0_8_;
      local_260 = (undefined4)local_90;
      uStack_288 = uStack_148;
      local_290 = local_150;
      local_280 = (undefined4)local_140;
      FUN_03715ac8(&local_190,&local_270,&local_290,0);
      uStack_168 = uStack_188;
      local_170 = local_190;
      local_160 = CONCAT44(local_160._4_4_,(undefined4)local_180);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,&local_190);
      break;
    case 0x21:
      auVar43 = FUN_0373b32c(plVar23,0);
      auVar44 = FUN_0373b32c(plVar38,0);
      puVar4 = Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo;
      if (*(int *)(*(long *)Unity_Services_Core_Scheduler_Internal_ITimeProvider_TypeInfo + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371907c(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x23:
      uVar16 = FUN_0373a7c4(plVar23,0);
      uVar17 = FUN_0373a7c4(plVar38,0);
      puVar4 = System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_4_ = FUN_0371b530(uVar16,uVar17,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x24:
      uVar34 = FUN_0373aa70(plVar23,0);
      uVar35 = FUN_0373aa70(plVar38,0);
      puVar4 = ExitGames_Client_Photon_ITrafficRecorder_TypeInfo;
      if (*(int *)(*(long *)ExitGames_Client_Photon_ITrafficRecorder_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_0371c9d8(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x25:
      auVar43 = FUN_0373ae3c(plVar23,0);
      auVar44 = FUN_0373ae3c(plVar38,0);
      puVar4 = UnityEngine_UIElements_ITransform_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_ITransform_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371dfa4(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x26:
      auVar43 = FUN_0373c7dc(plVar23,0);
      auVar44 = FUN_0373c7dc(plVar38,0);
      puVar4 = UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_Experimental_ITransitionAnimations_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0 = FUN_0371fa5c(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      break;
    case 0x27:
      uVar34 = FUN_0373c114(plVar23,0);
      uVar35 = FUN_0373c114(plVar38,0);
      puVar4 = System_Runtime_CompilerServices_ITuple_TypeInfo;
      if (*(int *)(*(long *)System_Runtime_CompilerServices_ITuple_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      local_a0._0_8_ = FUN_037210f8(uVar34,uVar35,0);
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
    }
    goto LAB_036c23bc;
  case 0x14:
    if (uVar18 < 0x26) {
      if ((1L << ((ulong)uVar18 & 0x3f) & 0x3810000fe0U) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_0373035c(uVar18,0);
        if ((uVar24 & 1) == 0) {
          uVar34 = FUN_036c499c(param_1);
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar27 = FUN_03252aa8(plVar23,uVar34,0);
          uVar34 = FUN_036c499c(param_1);
          lVar29 = FUN_03252aa8(plVar38,uVar34,0);
          lVar22 = 0;
          if (lVar29 != 0) {
            lVar22 = lVar27 / lVar29;
          }
          local_a0._0_8_ = lVar27 - lVar22 * lVar29;
          uVar34 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,local_a0);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar35 = FUN_03730268(uVar18,0);
          uVar25 = FUN_036c499c(param_1);
          plVar36 = (long *)FUN_0324f628(uVar34,uVar35,uVar25,0);
        }
        else {
          auVar43 = FUN_0373ae3c(plVar23,0);
          auVar44 = FUN_0373ae3c(plVar38,0);
          puVar4 = UnityEngine_UIElements_ITransform_TypeInfo;
          if (*(int *)(*(long *)UnityEngine_UIElements_ITransform_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          local_f8 = FUN_0371e0f4(auVar43._0_8_,auVar43._8_8_,auVar44._0_8_,auVar44._8_8_,0);
          if (uVar18 == 0x1c) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar12 = FUN_0371e5fc(local_f8,0);
            local_a0._0_2_ = uVar12;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)TMPro_ITextPreprocessor_TypeInfo,
                                                 local_a0);
          }
          else if (uVar18 == 0x23) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            local_a0._0_4_ = FUN_0371e6bc(local_f8,0);
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                  System_Runtime_Remoting_Services_ITrackingHandler_TypeInfo
                                                 ,local_a0);
          }
          else if (uVar18 == 0x24) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            local_a0._0_8_ = FUN_0371e720(local_f8,0);
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                  ExitGames_Client_Photon_ITrafficRecorder_TypeInfo,
                                                 local_a0);
          }
          else {
            local_a0 = local_f8;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
          }
        }
        goto LAB_036c23bc;
      }
      if ((ulong)uVar18 == 0xc) {
        uVar34 = FUN_036c499c(param_1);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar30 = FUN_03252f8c(plVar23,uVar34,0);
        uVar34 = FUN_036c499c(param_1);
        uVar31 = FUN_03252f8c(plVar38,uVar34,0);
        uVar24 = 0;
        if (uVar31 != 0) {
          uVar24 = uVar30 / uVar31;
        }
        local_a0._0_8_ = uVar30 - uVar24 * uVar31;
        plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230670,local_a0);
        goto LAB_036c23bc;
      }
    }
    goto switchD_036be094_caseD_10;
  case 0x1a:
    plVar23 = (long *)FUN_036c39b4(param_3,param_5,param_6,param_7);
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar22);
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(plVar23,0);
        if ((uVar24 & 1) != 0) {
          lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
          goto LAB_036be538;
        }
      }
      puVar5 = UnityEngine_UIElements_ITextEdition_TypeInfo;
      puVar4 = PTR_DAT_0422fa08;
      if (plVar23 == (long *)0x0) {
LAB_036c2470:
        plVar38 = (long *)FUN_036c39b4(param_4,param_5,param_6,param_7);
      }
      else {
        lVar22 = *plVar23;
        if (lVar22 == *(long *)PTR_DAT_0422fa08) {
          pcVar26 = (char *)thunk_FUN_01c49834(plVar23);
          if (*pcVar26 == '\0') {
            local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
            goto LAB_036c23bc;
          }
        }
        else {
          if (lVar22 != *(long *)UnityEngine_UIElements_ITextEdition_TypeInfo) goto LAB_036c2470;
          if (*(long *)(lVar22 + 0x40) !=
              *(long *)(*(long *)UnityEngine_UIElements_ITextEdition_TypeInfo + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar23);
          }
          puVar32 = (undefined1 *)thunk_FUN_01c49834(plVar23);
          local_e8[0] = *puVar32;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_0370d83c(local_e8,0);
          if ((uVar24 & 1) != 0) {
            local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
            goto LAB_036c23bc;
          }
        }
        plVar38 = (long *)FUN_036c39b4(param_4,param_5,param_6,param_7);
        lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar22);
          lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
        }
        if (plVar38 == (long *)**(undefined8 **)(lVar22 + 0xb8)) {
LAB_036bf368:
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar22);
            goto LAB_036bf378;
          }
          goto LAB_036bf384;
        }
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar24 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0
                      ) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar24 = FUN_037308e4(plVar38,0);
          if ((uVar24 & 1) != 0) {
            lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
            goto LAB_036bf368;
          }
        }
        puVar5 = UnityEngine_UIElements_ITextEdition_TypeInfo;
        if (plVar38 != (long *)0x0) {
          lVar22 = *plVar38;
          if (lVar22 == *(long *)puVar4) {
            puVar32 = (undefined1 *)thunk_FUN_01c49834(plVar38);
            local_a0[0] = *puVar32;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
            goto LAB_036c23bc;
          }
          if (lVar22 == *(long *)UnityEngine_UIElements_ITextEdition_TypeInfo) {
            if (*(long *)(lVar22 + 0x40) !=
                *(long *)(*(long *)UnityEngine_UIElements_ITextEdition_TypeInfo + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar38);
            }
            puVar32 = (undefined1 *)thunk_FUN_01c49834(plVar38);
            local_e8[0] = *puVar32;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_0370d82c(local_e8,0);
            local_a0._0_8_ = CONCAT71(local_a0._1_7_,uVar11) & 0xffffffffffffff01;
            plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
            goto LAB_036c23bc;
          }
        }
      }
      goto switchD_036be094_caseD_10;
    }
LAB_036be538:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar22);
      goto LAB_036bf378;
    }
LAB_036bf384:
    plVar23 = *(long **)(lVar22 + 0xb8);
    goto LAB_036bed58;
  case 0x1b:
    plVar23 = (long *)FUN_036c39b4(param_3,param_5,param_6,param_7);
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (plVar23 != (long *)**(undefined8 **)(lVar22 + 0xb8)) {
      if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01c1d1e8();
      }
      uVar24 = FUN_037308e4(plVar23,0);
      puVar4 = PTR_DAT_0422fa08;
      if ((uVar24 & 1) == 0) {
        if (plVar23 != (long *)0x0) {
          lVar22 = *plVar23;
          if ((lVar22 == *(long *)PTR_DAT_0422fa08) ||
             (lVar22 == *(long *)UnityEngine_UIElements_ITextEdition_TypeInfo)) {
            if (*(long *)(lVar22 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fa08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(plVar23);
            }
            pcVar26 = (char *)thunk_FUN_01c49834(plVar23);
            if (*pcVar26 != '\0') {
              local_a0[0] = 1;
              plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
              goto LAB_036c23bc;
            }
            goto LAB_036bed60;
          }
        }
        plVar38 = (long *)FUN_036c39b4(param_4,param_5,param_6,param_7);
        goto switchD_036be094_caseD_10;
      }
    }
LAB_036bed60:
    plVar38 = (long *)FUN_036c39b4(param_4,param_5,param_6,param_7);
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    puVar4 = Method_System_Reflection_CustomAttributeTypedArgument__ctor__;
    plVar36 = plVar23;
    if (plVar38 == (long *)**(undefined8 **)(lVar22 + 0xb8)) goto LAB_036c23bc;
    if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0) == 0
       ) {
      thunk_FUN_01c1d1e8();
    }
    uVar24 = FUN_037308e4(plVar38,0);
    if ((uVar24 & 1) != 0) goto LAB_036c23bc;
    lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar22 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    plVar36 = plVar38;
    if (plVar23 == (long *)**(undefined8 **)(lVar22 + 0xb8)) goto LAB_036c23bc;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar24 = FUN_037308e4(plVar23,0);
    puVar5 = UnityEngine_UIElements_ITextEdition_TypeInfo;
    puVar4 = PTR_DAT_0422fa08;
    if ((uVar24 & 1) != 0) goto LAB_036c23bc;
    if (plVar38 != (long *)0x0) {
      lVar22 = *plVar38;
      if (lVar22 == *(long *)PTR_DAT_0422fa08) {
        pcVar26 = (char *)thunk_FUN_01c49834(plVar38);
        uVar11 = *pcVar26 != '\0';
      }
      else {
        if (lVar22 != *(long *)UnityEngine_UIElements_ITextEdition_TypeInfo)
        goto switchD_036be094_caseD_10;
        if (*(long *)(lVar22 + 0x40) !=
            *(long *)(*(long *)UnityEngine_UIElements_ITextEdition_TypeInfo + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar38);
        }
        puVar32 = (undefined1 *)thunk_FUN_01c49834(plVar38);
        local_e8[0] = *puVar32;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_0370d82c(local_e8,0);
      }
      local_a0._0_8_ = CONCAT71(local_a0._1_7_,uVar11) & 0xffffffffffffff01;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)puVar4,local_a0);
      goto LAB_036c23bc;
    }
    goto switchD_036be094_caseD_10;
  case 0x27:
    lVar22 = FUN_036c39b4(param_3,param_5,param_6,param_7);
    lVar27 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar27 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    }
    if (lVar22 == **(long **)(lVar27 + 0xb8)) {
LAB_036be7ac:
      local_a0._0_8_ = local_a0._0_8_ & 0xffffffffffffff00;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar24 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_Reflection_CustomAttributeTypedArgument__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar24 = FUN_037308e4(lVar22,0);
        if ((uVar24 & 1) != 0) goto LAB_036be7ac;
      }
      local_a0[0] = 1;
      plVar36 = (long *)thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_a0);
    }
    goto LAB_036c23bc;
  }
LAB_036bed54:
  plVar23 = *(long **)(lVar22 + 0xb8);
LAB_036bed58:
  plVar36 = (long *)*plVar23;
LAB_036c23bc:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar36;
}


