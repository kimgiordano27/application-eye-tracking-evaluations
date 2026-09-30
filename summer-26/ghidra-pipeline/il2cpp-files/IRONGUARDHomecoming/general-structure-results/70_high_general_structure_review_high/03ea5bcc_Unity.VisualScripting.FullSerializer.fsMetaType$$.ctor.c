/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType$$.ctor
ENTRY_POINT: 03ea5bcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsMetaType___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(PTR_DAT_0457b6b0);
  thunk_FUN_01efb3a4(PTR_DAT_0457b6b8);
  thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__);
  *(undefined1 *)(unaff_x20 + 0xb66) = 1;
  puVar4 = PTR_DAT_0457b6b0;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (*(int *)((long)unaff_x19 + 0x1c) < 1) {
    lVar6 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  }
  else {
    iStack000000000000001c = *(int *)((long)unaff_x19 + 0x1c);
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,(long)&stack0x00000018 + 4);
    lVar6 = FUN_0340ea14(*(undefined8 *)puVar4,uVar5,0);
  }
  lVar7 = (**(code **)(*unaff_x19 + 0x338))();
  if (lVar7 == 0) {
    lVar7 = *(long *)PTR_DAT_0457b690;
  }
  else {
    lVar7 = FUN_03410770(lVar7,*(undefined8 *)
                                Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__
                         ,*(undefined8 *)PTR_DAT_0457b680,0);
    if ((lVar7 == 0) ||
       (lVar7 = FUN_03410770(lVar7,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                             ,*(undefined8 *)PTR_DAT_0457b698,0), lVar7 == 0)) goto LAB_03ea6204;
    lVar7 = FUN_03410770(lVar7,*(undefined8 *)
                                Method_Unity_VisualScripting_GraphReference_CreateGraphData__,
                         *(undefined8 *)PTR_DAT_0457b688,0);
  }
  plVar8 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,0x11);
  puVar4 = PTR_DAT_0457b6a0;
  if (plVar8 == (long *)0x0) {
LAB_03ea6204:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)PTR_DAT_0457b6a0 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b6a0,*(undefined8 *)(*plVar8 + 0x40));
    if (lVar9 == 0) goto LAB_03ea61f8;
    lVar9 = *(long *)puVar4;
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_01f51358();
    iStack000000000000001c = (**(code **)(*unaff_x19 + 0x2f8))();
    lVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_03ea61f8:
      uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,0);
    }
    puVar4 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      thunk_FUN_01f51358(plVar8 + 5,lVar9);
      if (*(long *)puVar4 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = thunk_FUN_01f116d0(*(long *)puVar4,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) goto LAB_03ea61f8;
        lVar9 = *(long *)puVar4;
      }
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        thunk_FUN_01f51358();
        uStack0000000000000018 = *(undefined4 *)((long)unaff_x19 + 0x34);
        lVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000018);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_03ea61f8;
        puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          thunk_FUN_01f51358(plVar8 + 7,lVar9);
          if (*(long *)puVar2 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = thunk_FUN_01f116d0(*(long *)puVar2,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) goto LAB_03ea61f8;
            lVar9 = *(long *)puVar2;
          }
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            thunk_FUN_01f51358();
            uStack0000000000000014 = (undefined4)unaff_x19[7];
            lVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000010 + 4);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_03ea61f8;
            puVar3 = PTR_DAT_0457b6b8;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              thunk_FUN_01f51358(plVar8 + 9,lVar9);
              lVar9 = *(long *)puVar3;
              if (lVar9 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar9 == 0) goto LAB_03ea61f8;
                lVar9 = *(long *)puVar3;
              }
              if (6 < *(uint *)(plVar8 + 3)) {
                plVar8[10] = lVar9;
                thunk_FUN_01f51358();
                if ((lVar7 != 0) &&
                   (lVar9 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_03ea61f8;
                puVar3 = PTR_DAT_0457b6a8;
                if (7 < *(uint *)(plVar8 + 3)) {
                  plVar8[0xb] = lVar7;
                  thunk_FUN_01f51358(plVar8 + 0xb,lVar7);
                  lVar7 = *(long *)puVar3;
                  if (lVar7 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar7 == 0) goto LAB_03ea61f8;
                    lVar7 = *(long *)puVar3;
                  }
                  if (8 < *(uint *)(plVar8 + 3)) {
                    plVar8[0xc] = lVar7;
                    thunk_FUN_01f51358();
                    uStack0000000000000010 = (undefined4)unaff_x19[2];
                    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000010);
                    if ((lVar7 != 0) &&
                       (lVar9 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_03ea61f8;
                    puVar3 = Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__;
                    if (9 < *(uint *)(plVar8 + 3)) {
                      plVar8[0xd] = lVar7;
                      thunk_FUN_01f51358(plVar8 + 0xd,lVar7);
                      lVar7 = *(long *)puVar3;
                      if (lVar7 == 0) {
                        lVar7 = 0;
                      }
                      else {
                        lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar8 + 0x40));
                        if (lVar7 == 0) goto LAB_03ea61f8;
                        lVar7 = *(long *)puVar3;
                      }
                      if (10 < *(uint *)(plVar8 + 3)) {
                        plVar8[0xe] = lVar7;
                        thunk_FUN_01f51358();
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar7 == 0)) goto LAB_03ea61f8;
                        if (0xb < *(uint *)(plVar8 + 3)) {
                          plVar8[0xf] = lVar6;
                          thunk_FUN_01f51358(plVar8 + 0xf,lVar6);
                          if (*(long *)puVar4 == 0) {
                            lVar6 = 0;
                          }
                          else {
                            lVar6 = thunk_FUN_01f116d0(*(long *)puVar4,
                                                       *(undefined8 *)(*plVar8 + 0x40));
                            if (lVar6 == 0) goto LAB_03ea61f8;
                            lVar6 = *(long *)puVar4;
                          }
                          if (0xc < *(uint *)(plVar8 + 3)) {
                            plVar8[0x10] = lVar6;
                            thunk_FUN_01f51358();
                            uStack000000000000000c = *(undefined4 *)((long)unaff_x19 + 0x14);
                            lVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,
                                                       (long)&stack0x00000008 + 4);
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar7 == 0)) goto LAB_03ea61f8;
                            if (0xd < *(uint *)(plVar8 + 3)) {
                              plVar8[0x11] = lVar6;
                              thunk_FUN_01f51358(plVar8 + 0x11,lVar6);
                              if (*(long *)puVar2 == 0) {
                                lVar6 = 0;
                              }
                              else {
                                lVar6 = thunk_FUN_01f116d0(*(long *)puVar2,
                                                           *(undefined8 *)(*plVar8 + 0x40));
                                if (lVar6 == 0) goto LAB_03ea61f8;
                                lVar6 = *(long *)puVar2;
                              }
                              if (0xe < *(uint *)(plVar8 + 3)) {
                                plVar8[0x12] = lVar6;
                                thunk_FUN_01f51358();
                                uStack0000000000000008 = (**(code **)(*unaff_x19 + 0x278))();
                                lVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000008);
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar8 + 0x40)
                                                              ), lVar7 == 0)) goto LAB_03ea61f8;
                                puVar1 = 
                                Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                                ;
                                if (0xf < *(uint *)(plVar8 + 3)) {
                                  plVar8[0x13] = lVar6;
                                  thunk_FUN_01f51358(plVar8 + 0x13,lVar6);
                                  lVar6 = *(long *)puVar1;
                                  if (lVar6 == 0) {
                                    lVar6 = 0;
                                  }
                                  else {
                                    lVar6 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar8 + 0x40)
                                                              );
                                    if (lVar6 == 0) goto LAB_03ea61f8;
                                    lVar6 = *(long *)puVar1;
                                  }
                                  if (0x10 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0x14] = lVar6;
                                    thunk_FUN_01f51358();
                                    FUN_0340ec80(plVar8,0);
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
  FUN_01f08a44();
}


