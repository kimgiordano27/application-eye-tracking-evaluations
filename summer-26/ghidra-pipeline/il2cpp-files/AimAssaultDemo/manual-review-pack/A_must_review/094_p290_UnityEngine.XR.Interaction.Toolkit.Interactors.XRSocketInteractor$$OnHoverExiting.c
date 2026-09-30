/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor$$OnHoverExiting
ENTRY_POINT: 073353f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor__OnHoverExiting(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_0373b518(PTR_DAT_07d96220);
  FUN_0373b518(PTR_DAT_07d88078);
  FUN_0373b518(System_Linq_Expressions_ExpressionType_TypeInfo);
  FUN_0373b518(System_Xml_Schema_Datatype_IDREF_TypeInfo);
  FUN_0373b518(System_Linq_Expressions_ExpressionStringBuilder_TypeInfo);
  FUN_0373b518(DIVR_Expulsion_ExpulsionManager_TypeInfo);
  FUN_0373b518(CustomWebSocketSharp_Ext_TypeInfo);
  FUN_0373b518(PTR_DAT_07da0ea8);
  FUN_0373b518(PTR_DAT_07dcb370);
  FUN_0373b518(PTR_DAT_07dd4b08);
  FUN_0373b518(StrikerLink_ThirdParty_WebSocketSharp_Ext_TypeInfo);
  FUN_0373b518(PTR_DAT_07da1cb0);
  FUN_0373b518(UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo);
  FUN_0373b518(UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo);
  FUN_0373b518(System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo);
  FUN_0373b518(System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo);
  FUN_0373b518(PTR_DAT_07da1cb8);
  FUN_0373b518(Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo);
  FUN_0373b518(System_Runtime_Serialization_ExtensionDataMember_TypeInfo);
  FUN_0373b518(System_Runtime_Serialization_ExtensionDataObject_TypeInfo);
  FUN_0373b518(System_Runtime_Serialization_ExtensionDataReader_TypeInfo);
  FUN_0373b518(Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo);
  FUN_0373b518(Unity_VisualScripting_ExtensionMethodCache_TypeInfo);
  FUN_0373b518(PTR_DAT_07dcb388);
  FUN_0373b518(TMPro_Extents_TypeInfo);
  FUN_0373b518(UnityEngine_UIElements_UIR_ExtraRenderChainVEData_TypeInfo);
  FUN_0373b518(PTR_DAT_07dcb458);
  FUN_0373b518(UnityEngine_Timeline_Extrapolation_TypeInfo);
  FUN_0373b518(PTR_DAT_07dc6198);
  FUN_0373b518(UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo);
  FUN_0373b518(Unity_XR_OpenXR_Features_PICOSupport_EyeType_TypeInfo);
  FUN_0373b518(UnityEngine_XR_Eyes_TypeInfo);
  FUN_0373b518(PTR_DAT_07dcb3a8);
  FUN_0373b518(RootMotion_FinalIK_FABRIKRoot_TypeInfo);
  FUN_0373b518(PTR_DAT_07dd64f0);
  FUN_0373b518(RootMotion_FinalIK_FBIKChain_TypeInfo);
  FUN_0373b518(PTR_DAT_07df1618);
  FUN_0373b518(PTR_DAT_07da0c78);
  FUN_0373b518(PTR_DAT_07dcb3b0);
  FUN_0373b518(PTR_DAT_07dd4b60);
  FUN_0373b518(FFmpegOut_FFmpegPipe_TypeInfo);
  FUN_0373b518(FFmpegOut_FFmpegSession_TypeInfo);
  FUN_0373b518(FMOD_FILE_ASYNCDONE_FUNC_TypeInfo);
  FUN_0373b518(FMOD_FILE_CLOSE_CALLBACK_TypeInfo);
  FUN_0373b518(PTR_DAT_07dcdd38);
  *(undefined1 *)(unaff_x21 + 0xf) = 1;
  lVar4 = thunk_FUN_037788cc(*unaff_x22);
  FUN_07336a30();
  if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) ||
     (lVar5 = RootMotion_FinalIK_Finger___ctor
                        (*(undefined8 *)System_Linq_Expressions_ExpressionType_TypeInfo,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18)), lVar4 == 0))
  goto LAB_07335768;
  plVar10 = (long *)(lVar4 + 0x18);
  *plVar10 = lVar5;
  thunk_FUN_037aeb94(plVar10,lVar5);
  puVar2 = System_Xml_Schema_Datatype_IDREF_TypeInfo;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 == 0) goto LAB_07335768;
  uVar3 = 0;
  lVar13 = 0x20;
  while ((int)uVar3 < (int)*(uint *)(lVar5 + 0x18)) {
    if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_073369bc;
    plVar14 = (long *)*plVar10;
    uVar11 = *(undefined8 *)(lVar5 + lVar13);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_07336ac0(lVar5,uVar11,uVar1);
    if (plVar14 == (long *)0x0) goto LAB_07335768;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_037787d0(lVar5,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0)) {
      uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar11,0);
    }
    if (*(uint *)(plVar14 + 3) <= uVar3) goto LAB_073369bc;
    *(long *)((long)plVar14 + lVar13) = lVar5;
    thunk_FUN_037aeb94((long *)((long)plVar14 + lVar13),lVar5);
    lVar5 = *plVar10;
    if (lVar5 == 0) goto LAB_07335768;
    if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_073369bc;
    if (*(long *)(lVar5 + lVar13) == 0) goto LAB_07335768;
    FUN_07336b58(*(long *)(lVar5 + lVar13),*(undefined8 *)(unaff_x19 + 0x10));
    lVar5 = *plVar10;
    if (lVar5 == 0) goto LAB_07335768;
    if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_073369bc;
    if (*(long *)(lVar5 + lVar13) == 0) goto LAB_07335768;
    FUN_07336bf4(*(long *)(lVar5 + lVar13),*(undefined8 *)(unaff_x19 + 0x18));
    lVar5 = *plVar10;
    if (lVar5 == 0) goto LAB_07335768;
    if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_073369bc;
    if (*(long *)(lVar5 + lVar13) == 0) goto LAB_07335768;
    *(undefined8 *)(*(long *)(lVar5 + lVar13) + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    thunk_FUN_037aeb94();
    lVar5 = *(long *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
    lVar13 = lVar13 + 8;
    if (lVar5 == 0) goto LAB_07335768;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_07335768;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if ((*(byte *)(unaff_x19 + 0x28) >> 1 & 1) != 0) {
    if (lVar5 == 0) goto LAB_07335768;
    lVar5 = FUN_060c546c(lVar5,0);
  }
  lVar13 = *(long *)(unaff_x19 + 0x10);
  if (lVar13 != 0) {
    (**(code **)(lVar13 + 0x18))
              (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(unaff_x19 + 0x20),lVar5,lVar4,
               *(undefined8 *)(lVar13 + 0x28));
  }
  if (*(char *)(lVar4 + 0x20) != '\0') {
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar4 + 0x10);
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x30));
    return;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_07335768;
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar11 = FUN_061d52c8(0);
  if (lVar4 == 0) goto LAB_07335768;
  uVar11 = FUN_060c54e8(lVar4,uVar11,0);
  uVar3 = FUN_07353c60(uVar11,0);
  if (uVar3 < 0x62e4e209) {
    if (0x3f515151 < uVar3) {
      if (0x423c87b7 < uVar3) {
        if (uVar3 == 0x4f0be23b) {
          uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)PTR_DAT_07dd4b08,0);
          if ((uVar7 & 1) == 0) goto LAB_073369cc;
          FUN_07336cb8();
          FUN_07336e5c();
          lVar4 = *(long *)(unaff_x20 + 0x18);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
            if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                   System_Xml_Schema_Datatype_QName_TypeInfo);
              dVar17 = modf((double)fVar15,(double *)&stack0x00000008);
              if (0.0 <= fVar15) {
                if (dVar17 == 0.5) {
                  fVar15 = 1.0;
                  goto LAB_0733693c;
                }
                fVar16 = (float)(int)(fVar15 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar15 = -1.0;
LAB_0733693c:
                fVar16 = (float)(double)CONCAT44(uStack000000000000000c,fStack0000000000000008);
                if (((long)(double)CONCAT44(uStack000000000000000c,fStack0000000000000008) & 1U) !=
                    0) {
                  fVar16 = fVar16 + fVar15;
                }
              }
              else {
                fVar16 = (float)(int)(fVar15 + -0.5);
              }
              goto LAB_07336978;
            }
          }
        }
        else if (uVar3 == 0x58336ad5) {
          uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)UnityEngine_Timeline_Extrapolation_TypeInfo,0);
          if ((uVar7 & 1) == 0) goto LAB_073369cc;
          FUN_07336cb8();
          FUN_07336e5c();
          lVar4 = *(long *)(unaff_x20 + 0x18);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
            if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              puVar2 = System_Xml_Schema_Datatype_QName_TypeInfo;
              fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                   System_Xml_Schema_Datatype_QName_TypeInfo);
              lVar4 = *(long *)(unaff_x20 + 0x18);
              if (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_073369bc;
                if (*(long **)(lVar4 + 0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar4 + 0x28) + 0x178))();
                  fVar16 = (float)FUN_03f14fd8(*(undefined8 *)(unaff_x19 + 0x30),
                                               *(undefined8 *)puVar2);
                  fStack0000000000000008 = powf(fVar15,fVar16);
                  goto LAB_073367c8;
                }
              }
            }
          }
        }
        else {
          if ((uVar3 != 0x62e4e208) ||
             (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                (uVar11,*(undefined8 *)FMOD_FILE_CLOSE_CALLBACK_TypeInfo,0),
             (uVar7 & 1) == 0)) goto LAB_073369cc;
          FUN_07336cb8();
          FUN_07336e5c();
          lVar4 = *(long *)(unaff_x20 + 0x18);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
            if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                   System_Xml_Schema_Datatype_QName_TypeInfo);
              fVar16 = (float)(int)fVar15;
              goto LAB_07336978;
            }
          }
        }
        goto LAB_07335768;
      }
      if (uVar3 == 0x41387a9e) {
        uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar11,*(undefined8 *)PTR_DAT_07dd64f0,0);
        if ((uVar7 & 1) == 0) {
LAB_073369cc:
          FUN_031a5e18();
          lVar4 = *(long *)(unaff_x20 + 0x10);
          FUN_031a5e18(lVar4);
          uVar9 = *(undefined8 *)(lVar4 + 0x10);
          thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
          uVar11 = thunk_FUN_037788cc();
          uVar8 = thunk_FUN_037a15ac(FMOD_FILE_OPEN_CALLBACK_TypeInfo);
          FUN_061a1bb8(uVar11,uVar8,uVar9,0);
          uVar8 = thunk_FUN_037a15ac(FMOD_FILE_READ_CALLBACK_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar11,uVar8);
        }
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
          if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
            uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
            lVar4 = *(long *)(unaff_x20 + 0x18);
            if (lVar4 != 0) {
              lVar5 = 5;
              goto LAB_07336220;
            }
          }
        }
        goto LAB_07335768;
      }
      if ((uVar3 != 0x423c87b7) ||
         (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)UnityEngine_XR_Eyes_TypeInfo,0), (uVar7 & 1) == 0
         )) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      if (DAT_08252c4f == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252c4f = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar11 = *(undefined8 *)(PTR_DAT_07d86548 + 0x48);
      fStack0000000000000008 = -0.0;
      if ((float)(int)fVar15 != INFINITY) {
        fStack0000000000000008 = (float)(int)fVar15;
      }
      goto LAB_07336980;
    }
    if (uVar3 < 0xcbc8ba5) {
      if (uVar3 != 0x678cabf) {
        if ((uVar3 != 0xcbc8ba4) ||
           (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (uVar11,*(undefined8 *)RootMotion_FinalIK_FABRIKRoot_TypeInfo,0),
           (uVar7 & 1) == 0)) goto LAB_073369cc;
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
          if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
            uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                 System_Xml_Schema_Datatype_QName_TypeInfo);
            uVar11 = *(undefined8 *)(PTR_DAT_07d86548 + 0x78);
            fStack0000000000000008 = 1.0;
            if (fVar15 < 0.0) {
              fStack0000000000000008 = -1.0;
            }
            goto LAB_07336980;
          }
        }
        goto LAB_07335768;
      }
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)
                                 UnityEngine_InputSystem_UI_ExtendedPointerEventData_TypeInfo,0);
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = atanf(fVar15);
    }
    else {
      if (uVar3 != 0x2a48023b) {
        if (uVar3 == 0x3c01df1f) {
          uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)
                                     Unity_VisualScripting_ExtensionMethodCache_TypeInfo,0);
          if ((uVar7 & 1) == 0) goto LAB_073369cc;
          FUN_07336cb8();
          FUN_07336e5c();
          lVar4 = *(long *)(unaff_x20 + 0x18);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
            if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                   System_Xml_Schema_Datatype_QName_TypeInfo);
              fVar16 = acosf(fVar15);
              goto LAB_07336978;
            }
          }
        }
        else {
          if ((uVar3 != 0x3f515151) ||
             (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                (uVar11,*(undefined8 *)PTR_DAT_07da0ea8,0), (uVar7 & 1) == 0))
          goto LAB_073369cc;
          FUN_07336cb8();
          FUN_07336e5c();
          lVar4 = *(long *)(unaff_x20 + 0x18);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
            if (*(long **)(lVar4 + 0x20) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
              uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
              if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              puVar2 = System_Xml_Schema_Datatype_QName_TypeInfo;
              fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)
                                                   System_Xml_Schema_Datatype_QName_TypeInfo);
              lVar4 = *(long *)(unaff_x20 + 0x18);
              if (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_073369bc;
                if (*(long **)(lVar4 + 0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar4 + 0x28) + 0x178))();
                  fVar16 = (float)FUN_03f14fd8(*(undefined8 *)(unaff_x19 + 0x30),
                                               *(undefined8 *)puVar2);
                  if (DAT_0825a2e0 == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_0825a2e0 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  dVar17 = (double)FUN_06243bac((double)fVar15,(double)fVar16,0);
                  fStack0000000000000008 = (float)dVar17;
                  uVar11 = *(undefined8 *)(PTR_DAT_07d86548 + 0x78);
                  goto LAB_07336378;
                }
              }
            }
          }
        }
        goto LAB_07335768;
      }
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)
                                 System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo,0);
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = ABS(fVar15);
    }
  }
  else if (uVar3 < 0xb8e70c1e) {
    if (uVar3 < 0x7dee3bd0) {
      if (uVar3 == 0x72a68728) {
        uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar11,*(undefined8 *)FFmpegOut_FFmpegPipe_TypeInfo,0);
        if ((uVar7 & 1) == 0) goto LAB_073369cc;
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
        uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo
                                    );
        fVar16 = expf(fVar15);
      }
      else {
        if ((uVar3 != 0x7dee3bcf) ||
           (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (uVar11,*(undefined8 *)FMOD_FILE_ASYNCDONE_FUNC_TypeInfo,0),
           (uVar7 & 1) == 0)) goto LAB_073369cc;
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
        uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo
                                    );
        fVar16 = SQRT(fVar15);
      }
    }
    else if (uVar3 == 0x8be20730) {
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)StrikerLink_ThirdParty_WebSocketSharp_Ext_TypeInfo,0)
      ;
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = log10f(fVar15);
    }
    else if (uVar3 == 0x9cf73498) {
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)DIVR_Expulsion_ExpulsionManager_TypeInfo,0);
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = tanf(fVar15);
    }
    else {
      if ((uVar3 != 0xb8e70c1d) ||
         (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)PTR_DAT_07dd4b60,0), (uVar7 & 1) == 0))
      goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = (float)(int)fVar15;
    }
  }
  else {
    if (uVar3 < 0xd7a2e31a) {
      if (uVar3 == 0xc98f4557) {
        uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar11,*(undefined8 *)PTR_DAT_07da1cb0,0);
        if ((uVar7 & 1) == 0) goto LAB_073369cc;
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
        uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar2 = System_Xml_Schema_Datatype_QName_TypeInfo;
        fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo
                                    );
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x28) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x28) + 0x178))();
        fVar16 = (float)FUN_03f14fd8(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)puVar2);
        fStack0000000000000008 = fVar15;
        if (fVar16 <= fVar15) {
          fStack0000000000000008 = fVar16;
        }
      }
      else {
        if ((uVar3 != 0xd7a2e319) ||
           (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (uVar11,*(undefined8 *)PTR_DAT_07da1cb8,0), (uVar7 & 1) == 0))
        goto LAB_073369cc;
        FUN_07336cb8();
        FUN_07336e5c();
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
        uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar2 = System_Xml_Schema_Datatype_QName_TypeInfo;
        fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo
                                    );
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) goto LAB_07335768;
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_073369bc;
        if (*(long **)(lVar4 + 0x28) == (long *)0x0) goto LAB_07335768;
        (**(code **)(**(long **)(lVar4 + 0x28) + 0x178))();
        fVar16 = (float)FUN_03f14fd8(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)puVar2);
        fStack0000000000000008 = fVar15;
        if (fVar15 <= fVar16) {
          fStack0000000000000008 = fVar16;
        }
      }
LAB_073367c8:
      uVar11 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x78),&stack0x00000008);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
      goto LAB_07336994;
    }
    if (uVar3 == 0xe0302a4d) {
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo,0);
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = sinf(fVar15);
    }
    else if (uVar3 == 0xfb8de29c) {
      uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                        (uVar11,*(undefined8 *)
                                 System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo,0)
      ;
      if ((uVar7 & 1) == 0) goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = cosf(fVar15);
    }
    else {
      if ((uVar3 != 0xfeae7ea6) ||
         (uVar7 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar11,*(undefined8 *)TMPro_Extents_TypeInfo,0), (uVar7 & 1) == 0))
      goto LAB_073369cc;
      FUN_07336cb8();
      FUN_07336e5c();
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 == 0) goto LAB_07335768;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_073369bc;
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) goto LAB_07335768;
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x178))();
      uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_07d96220 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      fVar15 = (float)FUN_03f14fd8(uVar11,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo);
      fVar16 = asinf(fVar15);
    }
  }
LAB_07336978:
  uVar11 = *(undefined8 *)(PTR_DAT_07d86548 + 0x78);
  fStack0000000000000008 = fVar16;
LAB_07336980:
  uVar11 = thunk_FUN_037784fc(uVar11,&stack0x00000008);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
  goto LAB_07336994;
  while( true ) {
    (**(code **)(*plVar10 + 0x178))();
    uVar7 = FUN_06293334(uVar11,*(undefined8 *)(unaff_x19 + 0x30),0);
    if ((uVar7 & 1) != 0) goto LAB_07336360;
    lVar4 = *(long *)(unaff_x20 + 0x18);
    lVar5 = lVar5 + 1;
    if (lVar4 == 0) break;
LAB_07336220:
    uVar3 = *(uint *)(lVar4 + 0x18);
    uVar12 = (int)lVar5 - 4;
    if ((int)uVar3 <= (int)uVar12) {
LAB_07336360:
      uVar11 = *(undefined8 *)(PTR_DAT_07d86548 + 0x28);
      fStack0000000000000008 =
           (float)CONCAT31(fStack0000000000000008._1_3_,(int)uVar12 < (int)uVar3);
LAB_07336378:
      uVar11 = thunk_FUN_037784fc(uVar11,&stack0x00000008);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
LAB_07336994:
      thunk_FUN_037aeb94(unaff_x19 + 0x30,uVar11);
      return;
    }
    if (uVar3 <= uVar12) {
LAB_073369bc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar10 = *(long **)(lVar4 + lVar5 * 8);
    if (plVar10 == (long *)0x0) break;
  }
LAB_07335768:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


