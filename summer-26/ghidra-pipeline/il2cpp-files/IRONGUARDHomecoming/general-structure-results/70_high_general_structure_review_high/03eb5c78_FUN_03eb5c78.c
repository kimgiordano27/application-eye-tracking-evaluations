/*
FUNCTION_NAME: FUN_03eb5c78
ENTRY_POINT: 03eb5c78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03eb5c78(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  
                    /* try { // try from 03eb5c78 to 03fb5c83 has its CatchHandler @ 03eb6250 */
                    /* try { // try from 03eb5c94 to 03fb5ca7 has its CatchHandler @ 03eb6248 */
  if ((DAT_0483abfa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b680);
    thunk_FUN_01efb3a4(PTR_DAT_0457b688);
    thunk_FUN_01efb3a4(PTR_DAT_0457b690);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphReference_CreateGraphData__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b698);
    thunk_FUN_01efb3a4(PTR_DAT_0457ba00);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b6a0);
    thunk_FUN_01efb3a4(PTR_DAT_0457b6a8);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b6b0);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__);
    DAT_0483abfa = 1;
  }
  puVar2 = PTR_DAT_0457b6b0;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (*(int *)((long)param_1 + 0x24) < 1) {
    lVar4 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  }
  else {
    local_44 = *(int *)((long)param_1 + 0x24);
    uVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&local_44);
    lVar4 = FUN_0340ea14(*(undefined8 *)puVar2,uVar3,0);
  }
  lVar5 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_0457b690;
  }
  else {
    lVar5 = FUN_03410770(lVar5,*(undefined8 *)
                                Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__
                         ,*(undefined8 *)PTR_DAT_0457b680,0);
    if ((lVar5 == 0) ||
       (lVar5 = FUN_03410770(lVar5,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                             ,*(undefined8 *)PTR_DAT_0457b698,0), lVar5 == 0)) goto LAB_03eb624c;
    lVar5 = FUN_03410770(lVar5,*(undefined8 *)
                                Method_Unity_VisualScripting_GraphReference_CreateGraphData__,
                         *(undefined8 *)PTR_DAT_0457b688,0);
  }
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,0xd);
  puVar2 = PTR_DAT_0457b6a0;
  if (plVar6 == (long *)0x0) {
LAB_03eb624c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)PTR_DAT_0457b6a0 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b6a0,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar7 == 0) goto LAB_03eb6240;
    lVar7 = *(long *)puVar2;
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_01f51358();
    local_44 = (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_44);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_03eb6240:
      uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar3,0);
    }
    puVar2 = PTR_DAT_0457ba00;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      thunk_FUN_01f51358(plVar6 + 5,lVar7);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_03eb6240;
        lVar7 = *(long *)puVar2;
      }
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_01f51358();
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_03eb6240;
        puVar2 = PTR_DAT_0457b6a8;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar5;
          thunk_FUN_01f51358(plVar6 + 7,lVar5);
          lVar5 = *(long *)puVar2;
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar5 == 0) goto LAB_03eb6240;
            lVar5 = *(long *)puVar2;
          }
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar5;
            thunk_FUN_01f51358();
            local_48 = (undefined4)param_1[3];
            lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_48);
            if ((lVar5 != 0) &&
               (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_03eb6240;
            puVar2 = Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar5;
              thunk_FUN_01f51358(plVar6 + 9,lVar5);
              lVar5 = *(long *)puVar2;
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar5 == 0) goto LAB_03eb6240;
                lVar5 = *(long *)puVar2;
              }
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar5;
                thunk_FUN_01f51358();
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
                goto LAB_03eb6240;
                puVar2 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar4;
                  thunk_FUN_01f51358(plVar6 + 0xb,lVar4);
                  lVar4 = *(long *)puVar2;
                  if (lVar4 == 0) {
                    lVar4 = 0;
                  }
                  else {
                    lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40));
                    if (lVar4 == 0) goto LAB_03eb6240;
                    lVar4 = *(long *)puVar2;
                  }
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar4;
                    thunk_FUN_01f51358();
                    local_4c = *(undefined4 *)((long)param_1 + 0x1c);
                    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_4c);
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar5 == 0)) goto LAB_03eb6240;
                    puVar2 = 
                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar4;
                      thunk_FUN_01f51358(plVar6 + 0xd,lVar4);
                      lVar4 = *(long *)puVar2;
                      if (lVar4 == 0) {
                        lVar4 = 0;
                      }
                      else {
                        lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40));
                        if (lVar4 == 0) goto LAB_03eb6240;
                        lVar4 = *(long *)puVar2;
                      }
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar4;
                        thunk_FUN_01f51358();
                        local_50 = (**(code **)(*param_1 + 0x278))
                                             (param_1,*(undefined8 *)(*param_1 + 0x280));
                        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_50);
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar5 == 0)) goto LAB_03eb6240;
                        puVar1 = 
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                        ;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar4;
                          thunk_FUN_01f51358(plVar6 + 0xf,lVar4);
                          lVar4 = *(long *)puVar1;
                          if (lVar4 == 0) {
                            lVar4 = 0;
                          }
                          else {
                            lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40));
                            if (lVar4 == 0) goto LAB_03eb6240;
                            lVar4 = *(long *)puVar1;
                          }
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar4;
                            thunk_FUN_01f51358();
                            FUN_0340ec80(plVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


