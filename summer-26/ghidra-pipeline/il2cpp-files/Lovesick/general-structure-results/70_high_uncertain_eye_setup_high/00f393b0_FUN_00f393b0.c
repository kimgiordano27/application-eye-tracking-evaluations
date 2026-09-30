/*
FUNCTION_NAME: FUN_00f393b0
ENTRY_POINT: 00f393b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_00f393b0(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0377562f & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_ScriptableObject_CreateInstance<ObiParticleGroup>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_85__);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12595);
    thunk_FUN_00d48444(Method_Obi_ObiList<ObiPathFrame>_SetCount__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TextInputBaseField_UxmlTraits<string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2572);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonReader_ReadAsInt32__);
    thunk_FUN_00d48444(PTR_DAT_033eac88);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<AnimationCurve,_AnimationCurveDatum>__ctor__
                      );
    thunk_FUN_00d48444(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_232);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                      );
    DAT_0377562f = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  lVar10 = *param_3;
  if (lVar10 == 0) {
    lVar7 = 0;
  }
  else {
    uVar11 = *(undefined8 *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
    lVar7 = thunk_FUN_00d6225c(lVar10,uVar11);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar10,uVar11);
    }
  }
  puVar4 = StringLiteral_232;
  lVar10 = *(long *)StringLiteral_232;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar4;
  }
  if (lVar7 != 0) {
    auVar14 = *(undefined1 (*) [16])(*(long *)(lVar10 + 0xb8) + 8);
    uVar11 = thunk_FUN_00d93c64(lVar7,0);
    FUN_00f39b4c(uVar11,&local_68,&local_70);
    if (param_2 != 0) {
      uVar8 = FUN_00f2ab50(param_2,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_00f2aad4(param_2,0);
        if ((uVar8 & 1) == 0) {
          lVar10 = FUN_00da4fb8(*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Datums_DatumProperty<AnimationCurve,_AnimationCurveDatum>__ctor__
                                ,2);
          if (lVar10 != 0) {
            if (1 < *(uint *)(lVar10 + 0x18)) {
              *(undefined4 *)(lVar10 + 0x24) = 1;
              auVar14 = FUN_00f29594(param_1,param_2,lVar10,0);
              return auVar14;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
        }
        else {
          lVar10 = FUN_00f29ea8(param_2,0);
          puVar5 = StringLiteral_12595;
          puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_85__;
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitWebSocketClient_<WaitAndRetry>d__102>__
          ;
          puVar1 = 
          Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
          ;
          if (lVar10 != 0) {
            FUN_0129b5d0(lVar10,&local_128,
                         *(undefined8 *)
                          Method_UnityEngine_ScriptableObject_CreateInstance<ObiParticleGroup>__);
            uVar6 = local_68;
            uVar11 = local_70;
            uStack_c8 = uStack_120;
            local_d0 = local_128;
            uStack_b8 = uStack_110;
            uStack_c0 = local_118;
            local_b0 = local_108;
            while( true ) {
              do {
                uVar8 = FUN_012bf140(&local_d0,*(undefined8 *)puVar2);
                if ((uVar8 & 1) == 0) {
                  FUN_012bf83c(&local_d0,
                               *(undefined8 *)
                                Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
                              );
                  return auVar14;
                }
                auVar13 = FUN_00accbcc(&local_d0,*(undefined8 *)puVar3);
                local_e0 = auVar13;
                uVar9 = FUN_00acccd4(local_e0,*(undefined8 *)puVar5);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_00f2fde0(uVar9,0);
              } while ((uVar8 & 1) != 0);
              uVar9 = FUN_00acccd4(local_e0,*(undefined8 *)puVar5);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                           System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo
                                         );
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00f2a528(lVar10,uVar9,0);
              uVar9 = FUN_00accdd8(local_e0,*(undefined8 *)
                                             Method_Obi_ObiList<ObiPathFrame>_SetCount__);
              local_f0 = 0;
              uStack_e8 = 0;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar13 = FUN_00f32a34(*(long *)(param_1 + 0x10),lVar10,uVar6,&uStack_e8,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) break;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              auVar13 = FUN_00f32a34(*(long *)(param_1 + 0x10),uVar9,uVar11,&local_f0,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_100 = auVar14;
              uVar8 = FUN_00f2d368(local_100,0);
              if ((uVar8 & 1) != 0) break;
              FUN_00f39c84(uVar8,lVar7,uStack_e8,local_f0);
            }
            local_a0 = auVar14;
            FUN_012bf83c(&local_d0,
                         *(undefined8 *)
                          Method_UnityEngine_Playables_PlayableExtensions_SetPropagateSetTime<ScriptPlayable<TimeNotificationBehaviour>>__
                        );
            return local_a0;
          }
        }
      }
      else {
        lVar10 = FUN_00f2ad3c(param_2,0);
        uVar6 = local_68;
        uVar11 = local_70;
        if (lVar10 != 0) {
          if (0 < *(int *)(lVar10 + 0x18)) {
            iVar12 = 0;
            do {
              FUN_0132138c(lVar10,iVar12,&local_128,*(undefined8 *)StringLiteral_2572);
              uVar9 = local_128;
              auVar13 = FUN_00f29b80(param_1,local_128,1,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) {
                return auVar14;
              }
              auVar13 = FUN_00f29e68(param_1,uVar9,*(undefined8 *)PTR_DAT_033eac88,&local_78,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) {
                return auVar14;
              }
              auVar13 = FUN_00f29e68(param_1,uVar9,
                                     *(undefined8 *)Method_Newtonsoft_Json_JsonReader_ReadAsInt32__,
                                     &local_80,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) {
                return auVar14;
              }
              local_90 = 0;
              uStack_88 = 0;
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_00f39b04;
              auVar13 = FUN_00f32a34(*(long *)(param_1 + 0x10),local_78,uVar6,&uStack_88,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) {
                return auVar14;
              }
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_00f39b04;
              auVar13 = FUN_00f32a34(*(long *)(param_1 + 0x10),local_80,uVar11,&local_90,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar14 = FUN_00f2f724(auVar14._0_8_,auVar14._8_8_,auVar13._0_8_,auVar13._8_8_,0);
              local_a0 = auVar14;
              uVar8 = FUN_00f2d368(local_a0,0);
              if ((uVar8 & 1) != 0) {
                return auVar14;
              }
              FUN_00f39c84(uVar8,lVar7,uStack_88,local_90);
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(lVar10 + 0x18));
          }
          return auVar14;
        }
      }
    }
  }
LAB_00f39b04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


