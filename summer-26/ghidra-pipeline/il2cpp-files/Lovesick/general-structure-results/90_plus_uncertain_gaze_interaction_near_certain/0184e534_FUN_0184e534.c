/*
FUNCTION_NAME: FUN_0184e534
ENTRY_POINT: 0184e534
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_9;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8 FUN_0184e534(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [16];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_03779609 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<LogEntry>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(PTR_DAT_033f6128);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(
                      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3f28);
    thunk_FUN_00d48444(StringLiteral_8955);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_6785);
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<FingerFeature>_set_State__
                      );
    DAT_03779609 = 1;
  }
  puVar4 = Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass16_0_<DOColor>b__1__
                              );
    FUN_016ec5b8(uVar8,uVar9,0);
    uVar9 = thunk_FUN_00d48444(PTR_DAT_033f6128);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar9);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar7 = FUN_0184d4ec(param_3);
  if ((uVar7 & 1) != 0) {
    param_3 = FUN_01773ec0(param_3,0);
  }
  uVar8 = thunk_FUN_00d93c64(param_1,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar7 = FUN_01789ac0(param_3,uVar8,0);
  puVar1 = Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
  if ((uVar7 & 1) != 0) {
    *param_4 = (long)param_1;
    return 0;
  }
  uVar9 = thunk_FUN_00d93c64(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar7 = FUN_0184d6c0(uVar9);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0184d6c0(param_3);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_01866238(param_3,0);
      puVar4 = 
      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
      ;
      if ((uVar7 & 1) != 0) {
        lVar13 = *(long *)puVar2;
        if (*param_1 == lVar13) {
          uVar8 = (**(code **)(lVar13 + 0x168))(param_1,*(undefined8 *)(lVar13 + 0x170));
          lVar13 = *(long *)puVar4;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar13);
          }
          local_78 = FUN_017a54c4(param_3,uVar8,1,0);
          goto LAB_0184ea10;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_0184f030(param_1);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_78 = FUN_017a5f20(param_3,param_1,0);
          goto LAB_0184ea10;
        }
      }
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_78 = FUN_016fbcdc(param_1,param_3,param_2,0);
      goto LAB_0184ea10;
    }
  }
  puVar1 = PTR_DAT_033f3f28;
  if (*param_1 == *(long *)StringLiteral_2672) {
    puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_1);
    uVar9 = *puVar10;
    uVar14 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar14,0);
    uVar7 = FUN_01789ac0(param_3,uVar14,0);
    puVar1 = StringLiteral_8955;
    if ((uVar7 & 1) == 0) goto LAB_0184e880;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    FUN_017522d8(local_88,uVar9,0);
    uVar8 = *(undefined8 *)puVar1;
LAB_0184ea00:
    puVar10 = &local_a0;
    uStack_98 = local_88._8_8_;
    local_a0 = local_88._0_8_;
  }
  else {
LAB_0184e880:
    puVar5 = StringLiteral_3349;
    puVar1 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
    lVar13 = thunk_FUN_00d6225c(param_1,*(undefined8 *)
                                         Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                               );
    if (lVar13 != 0) {
      uVar9 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      if ((uVar7 & 1) == 0) goto LAB_0184e8fc;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      FUN_01768a34(local_88,lVar13,0);
LAB_0184e9f8:
      uVar8 = *(undefined8 *)puVar1;
      goto LAB_0184ea00;
    }
LAB_0184e8fc:
    puVar6 = StringLiteral_11159;
    lVar13 = *param_1;
    if (lVar13 == *(long *)puVar1) {
      puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_1);
      uStack_68 = puVar10[1];
      local_70 = *puVar10;
      uVar9 = *(undefined8 *)puVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      if ((uVar7 & 1) != 0) {
        local_78 = FUN_0176b070(&local_70,0);
        goto LAB_0184ea10;
      }
      lVar13 = *param_1;
    }
    plVar12 = param_1;
    if (lVar13 != *(long *)puVar2) {
      plVar12 = (long *)0x0;
    }
    if (plVar12 == (long *)0x0) {
LAB_0184ec90:
      uVar9 = *(undefined8 *)System_Collections_Generic_List<LogEntry>_TypeInfo;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      if ((uVar7 & 1) == 0) {
        if (*param_1 == *(long *)puVar3) {
          puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_1);
          uVar8 = *puVar10;
          uVar9 = puVar10[1];
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_78 = FUN_0184dda8(uVar8,uVar9,param_3);
        }
        else {
          if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar12 = (long *)FUN_01ffe2e4(uVar8,0);
          if ((plVar12 == (long *)0x0) ||
             (uVar7 = FUN_01ff7230(plVar12,param_3,0), (uVar7 & 1) == 0)) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar12 = (long *)FUN_01ffe2e4(param_3,0);
            if ((plVar12 == (long *)0x0) ||
               (uVar7 = FUN_01ff7194(plVar12,uVar8,0), (uVar7 & 1) == 0)) {
              puVar3 = 
              Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
              ;
              lVar13 = *(long *)
                        Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
              ;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar13 = *(long *)puVar3;
              }
              puVar3 = 
              Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
              if ((long *)**(undefined8 **)(lVar13 + 0xb8) != param_1) {
                uVar7 = FUN_018661a4(param_3,0);
                if ((((uVar7 & 1) != 0) || (uVar7 = FUN_018661d8(param_3,0), (uVar7 & 1) != 0)) ||
                   (uVar7 = FUN_01866280(param_3,0), (uVar7 & 1) != 0)) {
                  *param_4 = 0;
                  return 2;
                }
LAB_0184eec0:
                *param_4 = 0;
                return 3;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar7 = FUN_0184f0c8(param_3);
              if ((uVar7 & 1) == 0) {
                *param_4 = 0;
                return 1;
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_78 = FUN_0184f160(0,uVar8,param_3);
            }
            else {
              local_78 = (**(code **)(*plVar12 + 0x198))
                                   (plVar12,0,param_2,param_1,*(undefined8 *)(*plVar12 + 0x1a0));
            }
          }
          else {
            local_78 = (**(code **)(*plVar12 + 0x1a8))
                                 (plVar12,0,param_2,param_1,param_3,
                                  *(undefined8 *)(*plVar12 + 0x1b0));
          }
        }
        goto LAB_0184ea10;
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_88 = FUN_0184da2c(param_1);
      uVar8 = *(undefined8 *)puVar3;
    }
    else {
      uVar9 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      if ((uVar7 & 1) != 0) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        FUN_01768d04(local_88,plVar12,0);
        goto LAB_0184e9f8;
      }
      uVar9 = *(undefined8 *)StringLiteral_6785;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      puVar1 = Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
      ;
      if ((uVar7 & 1) != 0) {
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                                   );
        if (lVar13 != 0) {
          FUN_01fc3ad8(lVar13,plVar12,0,0);
          *param_4 = lVar13;
          return 0;
        }
LAB_0184ef24:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar9 = *(undefined8 *)System_Security_Principal_WindowsImpersonationContext_TypeInfo;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar7 = FUN_01789ac0(param_3,uVar9,0);
      puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      if ((uVar7 & 1) == 0) {
        uVar9 = *(undefined8 *)puVar6;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        uVar7 = FUN_01789ac0(param_3,uVar9,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_78 = FUN_01702364(plVar12,0);
          goto LAB_0184ea10;
        }
        uVar9 = *(undefined8 *)
                 Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<FingerFeature>_set_State__
        ;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        uVar7 = FUN_01789ac0(param_3,uVar9,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = FUN_017924f0(plVar12,&local_78,0);
          if ((uVar7 & 1) != 0) goto LAB_0184ea10;
          goto LAB_0184eec0;
        }
        uVar9 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01780344(uVar9,0);
        if (plVar11 == (long *)0x0) goto LAB_0184ef24;
        uVar7 = (**(code **)(*plVar11 + 0x2c8))(plVar11,param_3,*(undefined8 *)(*plVar11 + 0x2d0));
        puVar2 = Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__;
        puVar1 = PTR_DAT_033f6128;
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_78 = FUN_00da5328(plVar12,1,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
          goto LAB_0184ea10;
        }
        goto LAB_0184ec90;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_0184d754(plVar12);
      local_88._0_8_ = uVar8;
      uVar8 = *(undefined8 *)puVar2;
    }
    puVar10 = (undefined8 *)local_88;
  }
  local_78 = thunk_FUN_00d61fa0(uVar8,puVar10);
LAB_0184ea10:
  *param_4 = local_78;
  return 0;
}


