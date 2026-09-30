/*
FUNCTION_NAME: UnityEngine.Rendering.PostProcessing.LensDistortion$$IsEnabledAndSupported
ENTRY_POINT: 06571064
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
UnityEngine_Rendering_PostProcessing_LensDistortion__IsEnabledAndSupported(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint in_w8;
  undefined8 *unaff_x19;
  undefined8 uVar7;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long lVar8;
  int unaff_w26;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x28;
  long *unaff_x29;
  long *plVar12;
  uint uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  long in_stack_00000118;
  
  uStack0000000000000108 = param_1._8_8_;
  uStack0000000000000100 = param_1._0_8_;
  uStack000000000000001c = in_w8;
  _uStack00000000000000b0 = FUN_06576bf8();
  uVar2 = thunk_FUN_032a52d0(*(undefined8 *)
                              Method_UnityEngine_UIElements_CustomStyleProperty<int>__ctor__,
                             &stack0x000000b0);
  in_stack_00000060 = 0;
  FUN_06576e94(&stack0x00000060,unaff_w22,unaff_w21,0);
  uVar3 = FUN_03986da4(uVar2,in_stack_00000060,
                       *(undefined8 *)
                        Method_Unity_AppUI_UI_ContextChangedEvent<ScaleContext>_get_context__);
  uVar2 = 0;
  if ((unaff_x23 != 0) && ((uVar3 & 1) != 0)) {
    if (0 < (int)*(ulong *)(unaff_x23 + 0x18)) {
      uVar3 = 0;
      uVar10 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
      lVar9 = 0x20;
      do {
        if (uVar10 <= uVar3) goto LAB_065717b4;
        memcpy(&stack0x000000b0,(void *)(unaff_x23 + lVar9),0x48);
        if ((uStack00000000000000b0 & 0xfffffffe) == 0x30) {
          if (iStack00000000000000b4 == 1) {
LAB_06571148:
            puVar1 = PTR_DAT_07279510;
            uVar2 = *(undefined8 *)Method_Unity_VisualScripting_CrossProduct<Vector3>__ctor__;
            if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            lVar9 = FUN_059324dc(uVar2,0);
            lVar8 = *unaff_x29;
            if ((unaff_w22 == 1) && ((unaff_w21 & 0xfffffffe) == 4)) {
              lVar8 = *(long *)Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__;
              uVar2 = *(undefined8 *)
                       Method_UnityEngine_UIElements_BaseField<Enum>_get_showMixedValue__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              lVar9 = FUN_059324dc(uVar2,0);
            }
            lVar11 = *(long *)PTR_DAT_072798c8;
            uVar3 = FUN_057aa92c(lVar8,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__
                                 ,0);
            if ((uVar3 & 1) != 0) {
              if (unaff_w22 == 1) {
                in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w21);
                uVar2 = thunk_FUN_032a52d0(*(undefined8 *)
                                            Method_Unity_AppUI_UI_ContextChangedEvent<SizeContext>_get_context__
                                           ,&stack0x00000060);
                lVar11 = FUN_057a25c4(*(undefined8 *)PTR_DAT_07299138,uVar2,0);
              }
              else {
                in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w22);
                uVar2 = thunk_FUN_032a52d0(*(undefined8 *)
                                            Method_UnityEngine_UIElements_CustomStyleProperty<float>__ctor__
                                           ,&stack0x00000060);
                in_stack_000000a0._4_4_ = unaff_w21;
                uVar7 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,
                                           (long)&stack0x000000a0 + 4);
                lVar11 = FUN_057ab61c(*(undefined8 *)
                                       Method_UnityEngine_UIElements_CustomStyleProperty<float>_get_name__
                                      ,uVar2,uVar7,0);
              }
            }
            in_stack_00000068 = unaff_x19[1];
            in_stack_00000060 = *unaff_x19;
            in_stack_00000078 = unaff_x19[3];
            in_stack_00000070 = unaff_x19[2];
            in_stack_00000090 = unaff_x19[6];
            in_stack_00000088 = unaff_x19[5];
            in_stack_00000080 = unaff_x19[4];
            if (*(int *)(*(long *)PTR_DAT_07280a10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            in_stack_00000028 = in_stack_00000068;
            in_stack_00000020 = in_stack_00000060;
            in_stack_00000038 = in_stack_00000078;
            in_stack_00000030 = in_stack_00000070;
            in_stack_00000048 = in_stack_00000088;
            in_stack_00000040 = in_stack_00000080;
            in_stack_00000050 = in_stack_00000090;
            in_stack_000000f8 = FUN_064cf710(&stack0x00000020,0);
            uVar3 = FUN_057ab1f0(unaff_x19[3],0);
            if ((uVar3 & 1) == 0) {
              uVar3 = FUN_057ab1f0(unaff_x19[2],0);
              if ((uVar3 & 1) != 0) goto LAB_06571304;
              lVar5 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,5);
              if (lVar5 == 0) goto LAB_065717b8;
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_065717b4;
              *(undefined8 *)(lVar5 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__;
              thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x20));
              if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_065717b4;
              *(undefined8 *)(lVar5 + 0x28) = unaff_x19[2];
              thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x28));
              if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_065717b4;
              *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_0727c6b0;
              thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x30));
              if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_065717b4;
              *(undefined8 *)(lVar5 + 0x38) = unaff_x19[3];
              thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x38));
              if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_065717b4;
              *(long *)(lVar5 + 0x40) = lVar11;
              thunk_FUN_0333a630((long *)(lVar5 + 0x40),lVar11);
              uVar2 = FUN_057ab314(lVar5,0);
              plVar12 = (long *)PTR_DAT_07280a10;
            }
            else {
LAB_06571304:
              uVar3 = FUN_057ab1f0(unaff_x19[3],0);
              if ((uVar3 & 1) == 0) {
                uVar2 = FUN_057aaeec(*(undefined8 *)
                                      Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__
                                     ,unaff_x19[3],lVar11,0);
                plVar12 = (long *)PTR_DAT_07280a10;
              }
              else {
                if (unaff_w26 == 0) break;
                plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,4);
                if (plVar4 == (long *)0x0) goto LAB_065717b8;
                if (*unaff_x29 == 0) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = thunk_FUN_032a55a4(*unaff_x29,*(undefined8 *)(*plVar4 + 0x40));
                  if (lVar5 == 0) goto LAB_065717bc;
                  lVar5 = *unaff_x29;
                }
                if ((int)plVar4[3] == 0) {
LAB_065717b4:
                    /* WARNING: Subroutine does not return */
                  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
                }
                plVar4[4] = lVar5;
                thunk_FUN_0333a630();
                in_stack_00000060 = CONCAT44(in_stack_00000060._4_4_,unaff_w26);
                lVar5 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,&stack0x00000060);
                if (lVar5 != 0) {
                  lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                  if (lVar6 == 0) goto LAB_065717bc;
                }
                if (*(uint *)(plVar4 + 3) < 2) goto LAB_065717b4;
                plVar4[5] = lVar5;
                thunk_FUN_0333a630(plVar4 + 5,lVar5);
                in_stack_000000a0._4_4_ = uStack000000000000001c;
                lVar5 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,
                                           (long)&stack0x000000a0 + 4);
                if (lVar5 != 0) {
                  lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40));
                  if (lVar6 == 0) goto LAB_065717bc;
                }
                if (*(uint *)(plVar4 + 3) < 3) goto LAB_065717b4;
                plVar4[6] = lVar5;
                thunk_FUN_0333a630(plVar4 + 6,lVar5);
                if (lVar11 != 0) {
                  lVar5 = thunk_FUN_032a55a4(lVar11,*(undefined8 *)(*plVar4 + 0x40));
                  if (lVar5 == 0) {
LAB_065717bc:
                    uVar2 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                    FUN_032d5dbc(uVar2,0);
                  }
                }
                plVar12 = (long *)PTR_DAT_07280a10;
                if (*(uint *)(plVar4 + 3) < 4) goto LAB_065717b4;
                plVar4[7] = lVar11;
                thunk_FUN_0333a630(plVar4 + 7,lVar11);
                uVar2 = FUN_057ab6a4(*(undefined8 *)
                                      Method_UnityEngine_UIElements_CustomStyleProperty<Texture2D>_get_name__
                                     ,plVar4,0);
                lVar11 = *plVar12;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0(lVar11);
                }
                puVar1 = Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__;
                in_stack_000000a8 =
                     FUN_03a27da8(&stack0x000000f8,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>__ctor__
                                  ,uStack000000000000001c,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__)
                ;
                in_stack_000000f8 =
                     FUN_03a27da8(&stack0x000000a8,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_CustomStyleProperty<string>_get_name__
                                  ,unaff_w26,*(undefined8 *)puVar1);
              }
            }
            if (*(int *)(*plVar12 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            in_stack_000000a8 =
                 FUN_03a27da8(&stack0x000000f8,
                              *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                              ,unaff_w21,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__);
            in_stack_000000f8 =
                 FUN_03a27e60(&stack0x000000a8,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_CustomStyleProperty<string>__ctor__,
                              unaff_w22,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__);
            lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_Unity_AppUI_UI_ContextChangedEvent<ThemeContext>_get_context__
                                       );
            FUN_059660a0(lVar11,0);
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x10) = unaff_x19[3];
              thunk_FUN_0333a630();
              *(uint *)(lVar11 + 0x20) = unaff_w21;
              *(int *)(lVar11 + 0x24) = unaff_w22;
              *(int *)(lVar11 + 0x18) = unaff_w26;
              *(uint *)(lVar11 + 0x1c) = uStack000000000000001c;
              *(undefined8 *)(lVar11 + 0x30) = uStack0000000000000108;
              *(undefined8 *)(lVar11 + 0x28) = uStack0000000000000100;
              *(long *)(lVar11 + 0x38) = unaff_x23;
              *(undefined8 *)(lVar11 + 0x40) = unaff_x28;
              thunk_FUN_0333a630((long *)(lVar11 + 0x38),0);
              *(long *)(lVar11 + 0x48) = lVar8;
              thunk_FUN_0333a630((long *)(lVar11 + 0x48),lVar8);
              if (lVar9 == 0) {
                uVar7 = *(undefined8 *)Method_Unity_VisualScripting_CrossProduct<Vector3>__ctor__;
                if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                lVar9 = FUN_059324dc(uVar7,0);
              }
              *(long *)(lVar11 + 0x50) = lVar9;
              thunk_FUN_0333a630((long *)(lVar11 + 0x50),lVar9);
              if (unaff_x20 != 0) {
                *(long *)(unaff_x20 + 0x10) = lVar11;
                thunk_FUN_0333a630((long *)(unaff_x20 + 0x10),lVar11);
                uVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                            Method_Unity_AppUI_UI_ChangingEvent<RectInt>_set_newValue__
                                          );
                FUN_055c629c();
                in_stack_00000060 = 0;
                in_stack_00000068 = 0;
                FUN_04646430(&stack0x00000060,in_stack_000000f8,
                             *(undefined8 *)
                              Method_UnityEngine_Pool_CollectionPool<List<int>,_int>_Release__);
                if (*(int *)(*(long *)PTR_DAT_072808a8 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                FUN_064e6568(uVar7,uVar2,lVar8,in_stack_00000060,in_stack_00000068,0);
                goto LAB_06571780;
              }
            }
LAB_065717b8:
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
        }
        else {
          lVar8 = FUN_06574aa0(&stack0x000000b0);
          if (lVar8 != 0) goto LAB_06571148;
          uVar10 = (ulong)*(uint *)(unaff_x23 + 0x18);
        }
        uVar3 = uVar3 + 1;
        lVar9 = lVar9 + 0x48;
      } while ((long)uVar3 < (long)(int)uVar10);
    }
    uVar2 = 0;
  }
LAB_06571780:
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


