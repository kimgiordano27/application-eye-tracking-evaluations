/*
FUNCTION_NAME: FUN_0115ae14
ENTRY_POINT: 0115ae14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0115ae14(long *param_1,undefined8 ****param_2,void *param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  void *__src;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  code *pcVar16;
  ulong __n;
  undefined1 *__dest;
  undefined8 uVar17;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 ***local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0115ae3c to 0125ae63 has its CatchHandler @ 0115b074 */
  plVar14 = *(long **)(param_4 + 0x38);
  local_70 = param_2;
  if (plVar14 == (long *)0x0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
                    /* try { // try from 0115ae6c to 0125ae83 has its CatchHandler @ 0115b07c */
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
                    /* try { // try from 0115aeb8 to 0125aedf has its CatchHandler @ 0115b06c */
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_720);
                    /* try { // try from 0115aef8 to 0125af2b has its CatchHandler @ 0115b118 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteractions__
                      );
    thunk_FUN_00d48444(UnityEngine_CubemapFace_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8555);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
                      );
                    /* try { // try from 0115af2c to 0125b01b has its CatchHandler @ 0115aba8 */
    thunk_FUN_00d48444(StringLiteral_12196);
    thunk_FUN_00d48444(System_Net_TimerThread_TimerQueue_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__
                      );
    thunk_FUN_00d48444(StringLiteral_347);
    thunk_FUN_00d48444(System_IO_StreamWriter_var);
    plVar14 = *(long **)(param_4 + 0x38);
    if (plVar14 == (long *)0x0) {
      FUN_00d59478(param_4);
      plVar14 = *(long **)(param_4 + 0x38);
    }
  }
  lVar7 = *plVar14;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0x28) < 0) {
    iVar5 = thunk_FUN_00d42afc();
    uVar13 = iVar5 - 0x10;
  }
  else {
    uVar13 = 8;
  }
  __n = (ulong)uVar13;
  __dest = auStack_80 + -(__n + 0xf & 0x1fffffff0);
  plVar14 = *(long **)(param_4 + 0x38);
  lVar7 = *plVar14;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
    plVar14 = *(long **)(param_4 + 0x38);
  }
  if (-1 < *(int *)(lVar7 + 0x28)) {
    param_2 = &local_70;
  }
  memcpy(__dest,param_2,__n);
  lVar7 = *plVar14;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  plVar14 = (long *)thunk_FUN_00d61fa0(lVar7,__dest);
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar17 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
                    /* try { // try from 0115b01c to 0125b01f has its CatchHandler @ 0115b064 */
                    /* try { // try from 0115b020 to 0125b023 has its CatchHandler @ 0115b060 */
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
                    /* try { // try from 0115b024 to 0125b027 has its CatchHandler @ 0115b05c */
                    /* try { // try from 0115b028 to 0125b02b has its CatchHandler @ 0115b058 */
    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  }
  plVar8 = (long *)FUN_01780344(uVar17,0);
  uVar17 = FUN_01780344(*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                        ,0);
  uVar9 = FUN_01789ac0(plVar8,uVar17,0);
  if ((uVar9 & 1) != 0) {
    pcVar16 = *(code **)(*param_1 + 0x1c8);
    uVar17 = *(undefined8 *)(*param_1 + 0x1d0);
LAB_0115b070:
    param_1 = (long *)(*pcVar16)(param_1,uVar17);
    goto LAB_0115b1b4;
  }
  uVar17 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_01780344(uVar17,0);
  uVar9 = FUN_01789ac0(plVar8,uVar17,0);
  if ((uVar9 & 1) == 0) {
    uVar17 = *(undefined8 *)
              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_01780344(uVar17,0);
    uVar9 = FUN_01789ac0(plVar8,uVar17,0);
    if ((uVar9 & 1) == 0) {
      uVar17 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_01780344(uVar17,0);
      uVar9 = FUN_01789ac0(plVar8,uVar17,0);
      if ((uVar9 & 1) == 0) {
        uVar17 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_01780344(uVar17,0);
        uVar9 = FUN_01789ac0(plVar8,uVar17,0);
        if ((uVar9 & 1) == 0) {
          uVar17 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfmsq_f64__;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_01780344(uVar17,0);
          uVar9 = FUN_01789ac0(plVar8,uVar17,0);
          if ((uVar9 & 1) == 0) {
            uVar17 = *(undefined8 *)StringLiteral_12196;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_01780344(uVar17,0);
            uVar9 = FUN_01789ac0(plVar8,uVar17,0);
            if ((uVar9 & 1) != 0) goto LAB_0115b1b4;
            uVar17 = *(undefined8 *)
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithInteractions__
            ;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_01780344(uVar17,0);
            uVar9 = FUN_01789ac0(plVar8,uVar17,0);
            if ((uVar9 & 1) == 0) {
              uVar17 = *(undefined8 *)UnityEngine_CubemapFace_TypeInfo;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar17 = FUN_01780344(uVar17,0);
              uVar9 = FUN_01789ac0(plVar8,uVar17,0);
              if ((uVar9 & 1) == 0) {
                uVar17 = *(undefined8 *)StringLiteral_8555;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_01780344(uVar17,0);
                uVar9 = FUN_01789ac0(plVar8,uVar17,0);
                if ((uVar9 & 1) == 0) {
                  plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                  puVar3 = System_IO_StreamWriter_var;
                  if (plVar10 == (long *)0x0) {
LAB_0115b5bc:
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  if ((*(long *)System_IO_StreamWriter_var != 0) &&
                     (lVar7 = thunk_FUN_00d6225c(*(long *)System_IO_StreamWriter_var,
                                                 *(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
LAB_0115b5c0:
                    uVar17 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar17,0);
                  }
                  if ((int)plVar10[3] != 0) {
                    plVar10[4] = *(long *)puVar3;
                    if ((param_1 == (long *)0x0) ||
                       (plVar11 = (long *)thunk_FUN_00d93c64(param_1,0), plVar11 == (long *)0x0))
                    goto LAB_0115b5bc;
                    lVar7 = (**(code **)(*plVar11 + 0x1b8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                    if ((lVar7 != 0) &&
                       (lVar12 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar10 + 0x40)),
                       lVar12 == 0)) goto LAB_0115b5c0;
                    uVar13 = *(uint *)(plVar10 + 3);
                    if (1 < uVar13) {
                      plVar10[5] = lVar7;
                      puVar3 = StringLiteral_347;
                      if (*(long *)StringLiteral_347 != 0) {
                        lVar7 = thunk_FUN_00d6225c(*(long *)StringLiteral_347,
                                                   *(undefined8 *)(*plVar10 + 0x40));
                        if (lVar7 == 0) goto LAB_0115b5c0;
                        uVar13 = *(uint *)(plVar10 + 3);
                      }
                      if (2 < uVar13) {
                        plVar10[6] = *(long *)puVar3;
                        if (plVar8 == (long *)0x0) goto LAB_0115b5bc;
                        lVar7 = (**(code **)(*plVar8 + 0x1b8))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                        if ((lVar7 != 0) &&
                           (lVar12 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar12 == 0)) goto LAB_0115b5c0;
                        uVar13 = *(uint *)(plVar10 + 3);
                        if (3 < uVar13) {
                          plVar10[7] = lVar7;
                          puVar3 = 
                          Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__
                          ;
                          if (*(long *)
                               Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__
                              != 0) {
                            lVar7 = thunk_FUN_00d6225c(*(long *)
                                                  Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                            if (lVar7 == 0) goto LAB_0115b5c0;
                            uVar13 = *(uint *)(plVar10 + 3);
                          }
                          if (4 < uVar13) {
                            plVar10[8] = *(long *)puVar3;
                            uVar17 = FUN_01600844(plVar10,0);
                            if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)StringLiteral_720);
                            }
                            FUN_014deea0(*(undefined8 *)System_Net_TimerThread_TimerQueue_TypeInfo,
                                         uVar17,0,0);
                            param_1 = plVar14;
                            goto LAB_0115b1b4;
                          }
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                if (param_1 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)
                                     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
                                   + 300);
                  if (bVar1 <= *(byte *)(*param_1 + 300)) {
                    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_<CreateMapOverlays>b__2__
                       ) {
                      param_1 = (long *)0x0;
                    }
                    goto LAB_0115b1b4;
                  }
                }
                param_1 = (long *)0x0;
                goto LAB_0115b1b4;
              }
              pcVar16 = *(code **)(*param_1 + 0x308);
              uVar17 = *(undefined8 *)(*param_1 + 0x310);
            }
            else {
              pcVar16 = *(code **)(*param_1 + 0x2e8);
              uVar17 = *(undefined8 *)(*param_1 + 0x2f0);
            }
          }
          else {
            pcVar16 = *(code **)(*param_1 + 0x2f8);
            uVar17 = *(undefined8 *)(*param_1 + 0x300);
          }
          goto LAB_0115b070;
        }
        uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
        local_78 = CONCAT71(local_78._1_7_,uVar4) & 0xffffffffffffff01;
        puVar15 = (undefined8 *)StringLiteral_9958;
        goto LAB_0115b0d8;
      }
      local_78 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
      puVar15 = (undefined8 *)PTR_DAT_033f2f78;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
      local_78 = CONCAT44(local_78._4_4_,uVar6);
      puVar15 = (undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo;
    }
    uVar17 = *puVar15;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    local_78 = CONCAT44(local_78._4_4_,uVar6);
    puVar15 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
LAB_0115b0d8:
    uVar17 = *puVar15;
  }
  param_1 = (long *)thunk_FUN_00d61fa0(uVar17,&local_78);
LAB_0115b1b4:
  lVar7 = **(long **)(param_4 + 0x38);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  __src = (void *)FUN_00da5060(param_1,lVar7,__dest);
  memcpy(param_3,__src,__n);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


