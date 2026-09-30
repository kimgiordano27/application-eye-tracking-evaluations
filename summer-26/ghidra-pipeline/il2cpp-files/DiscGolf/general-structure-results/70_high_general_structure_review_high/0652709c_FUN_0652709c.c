/*
FUNCTION_NAME: FUN_0652709c
ENTRY_POINT: 0652709c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0652709c(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if ((DAT_06dcd90d & 1) == 0) {
    FUN_02d965b8(StringLiteral_105);
    FUN_02d965b8(PTR_DAT_069fc240);
    FUN_02d965b8(System_Xml_BinXmlSqlMoney_TypeInfo);
    FUN_02d965b8(StringLiteral_106);
    FUN_02d965b8(UnityEngine_UIElements_Internal_MultiColumnHeaderColumnMoveLocationPreview_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo);
    FUN_02d965b8(StringLiteral_107);
    FUN_02d965b8(StringLiteral_108);
    FUN_02d965b8(StringLiteral_109);
    FUN_02d965b8(StringLiteral_110);
    FUN_02d965b8(StringLiteral_111);
    FUN_02d965b8(StringLiteral_112);
    FUN_02d965b8(StringLiteral_113);
    FUN_02d965b8(StringLiteral_114);
    FUN_02d965b8(StringLiteral_115);
    FUN_02d965b8(StringLiteral_116);
    FUN_02d965b8(StringLiteral_117);
    FUN_02d965b8(StringLiteral_118);
    FUN_02d965b8(StringLiteral_119);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TryGetValue__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<IXRGrabTransformer>_Add__);
    FUN_02d965b8(System_Collections_Hashtable_var);
    FUN_02d965b8(StringLiteral_120);
    FUN_02d965b8(StringLiteral_121);
    FUN_02d965b8(StringLiteral_122);
    FUN_02d965b8(StringLiteral_123);
    FUN_02d965b8(StringLiteral_124);
    FUN_02d965b8(StringLiteral_125);
    FUN_02d965b8(StringLiteral_126);
    FUN_02d965b8(StringLiteral_127);
    FUN_02d965b8(StringLiteral_128);
    FUN_02d965b8(StringLiteral_129);
    FUN_02d965b8(Unity_Services_Wire_Internal_Client_<>c__DisplayClass46_0_TypeInfo);
    FUN_02d965b8(StringLiteral_130);
    FUN_02d965b8(StringLiteral_131);
    FUN_02d965b8(StringLiteral_132);
    FUN_02d965b8(StringLiteral_133);
    FUN_02d965b8(StringLiteral_134);
    FUN_02d965b8(StringLiteral_135);
    FUN_02d965b8(StringLiteral_136);
    FUN_02d965b8(StringLiteral_137);
    FUN_02d965b8(StringLiteral_138);
    FUN_02d965b8(StringLiteral_139);
    FUN_02d965b8(StringLiteral_140);
    FUN_02d965b8(StringLiteral_141);
    FUN_02d965b8(StringLiteral_142);
    FUN_02d965b8(Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__59_0__);
    FUN_02d965b8(StringLiteral_143);
    FUN_02d965b8(StringLiteral_144);
    FUN_02d965b8(StringLiteral_145);
    FUN_02d965b8(UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var);
    FUN_02d965b8(UnityEngine_UIElements_MultiColumnController_TypeInfo);
    FUN_02d965b8(StringLiteral_146);
    FUN_02d965b8(StringLiteral_147);
    FUN_02d965b8(StringLiteral_148);
    FUN_02d965b8(StringLiteral_149);
    FUN_02d965b8(PTR_DAT_06a115a8);
    FUN_02d965b8(Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__59_1__);
    FUN_02d965b8(StringLiteral_150);
    FUN_02d965b8(UnityEngine_EventSystems_BaseInput_var);
    FUN_02d965b8(Method_System_Collections_Generic_List<IPanel>_get_Item__);
    FUN_02d965b8(StringLiteral_151);
    FUN_02d965b8(StringLiteral_152);
    FUN_02d965b8(StringLiteral_153);
    FUN_02d965b8(StringLiteral_154);
    FUN_02d965b8(StringLiteral_155);
    FUN_02d965b8(UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10fc0);
    FUN_02d965b8(StringLiteral_156);
    FUN_02d965b8(StringLiteral_157);
    FUN_02d965b8(StringLiteral_158);
    FUN_02d965b8(StringLiteral_159);
    FUN_02d965b8(StringLiteral_160);
    FUN_02d965b8(StringLiteral_161);
    FUN_02d965b8(System_Xml_XmlEntityReference_TypeInfo);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<ImageStyle>__
                );
    FUN_02d965b8(StringLiteral_162);
    FUN_02d965b8(StringLiteral_163);
    FUN_02d965b8(StringLiteral_164);
    FUN_02d965b8(StringLiteral_165);
    FUN_02d965b8(PTR_DAT_06a131e8);
    FUN_02d965b8(Unity_Services_Qos_Http_HttpClientResponse_TypeInfo);
    FUN_02d965b8(StringLiteral_166);
    FUN_02d965b8(StringLiteral_167);
    FUN_02d965b8(StringLiteral_168);
    FUN_02d965b8(Method_System_Net_Sockets_Socket_<>c_<SendAsyncForNetworkStream>b__22_1__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlListConverter_ToArray<TimeSpan>__);
    FUN_02d965b8(StringLiteral_169);
    FUN_02d965b8(StringLiteral_170);
    FUN_02d965b8(StringLiteral_171);
    FUN_02d965b8(StringLiteral_172);
    DAT_06dcd90d = 1;
  }
  *param_3 = 0;
  switch(param_1) {
  case 0:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  Method_System_Net_Sockets_Socket_<>c_<SendAsyncForNetworkStream>b__22_1__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_166,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    Method_System_Xml_Schema_XmlListConverter_ToArray<TimeSpan>__,5,
                           0);
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_135,5,0);
      puVar1 = StringLiteral_126;
joined_r0x06527738:
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)puVar1,5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto UnityEngine_UI_Slider__set_normalizedValue;
      }
LAB_06527f00:
      uVar4 = 3;
      goto LAB_06527dd4;
    }
    break;
  case 1:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)PTR_DAT_069fc240,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_MultiColumnController_TypeInfo,5,0);
      puVar1 = PTR_DAT_06a115a8;
      goto joined_r0x0652781c;
    }
    break;
  case 2:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  Method_System_Xml_Schema_XmlListConverter_ToArray<TimeSpan>__,5,0)
    ;
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)UnityEngine_EventSystems_BaseInput_var,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_Internal_MultiColumnHeaderColumnMoveLocationPreview_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                      UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var,5
                             ,0);
        puVar1 = UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo;
        goto joined_r0x06527738;
      }
      goto LAB_06527ed8;
    }
    break;
  case 3:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__59_1__
                         ,5,0);
    puVar1 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__59_0__;
joined_r0x0652781c:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)puVar1,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
LAB_06527ed8:
      uVar4 = 2;
      goto LAB_06527dd4;
    }
    goto LAB_06527d38;
  case 4:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)PTR_DAT_06a131e8,5,0);
    puVar3 = (undefined8 *)System_Xml_BinXmlSqlMoney_TypeInfo;
    goto joined_r0x065276ac;
  case 5:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_157,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_140,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_139,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_137,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_146,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_136,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06527dd4;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_164,5,0);
          if ((uVar2 & 1) != 0) {
LAB_06527f74:
            uVar4 = 6;
            goto LAB_06527dd4;
          }
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_138,5,0);
          if ((uVar2 & 1) != 0) {
LAB_06527f9c:
            uVar4 = 7;
            goto LAB_06527dd4;
          }
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_123,5,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_172,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_170,5,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_151,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_158,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_147,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_149,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_106,5,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_131,5,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_153,5,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_142,5,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_127,5,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_105,5,0)
                                  ;
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_116,5,
                                                         0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_148,
                                                           5,0);
                                      if ((uVar2 & 1) == 0) {
                                        return 0;
                                      }
                                      uVar4 = 0x16;
                                    }
                                    else {
                                      uVar4 = 0x15;
                                    }
                                  }
                                  else {
                                    uVar4 = 0x14;
                                  }
                                }
                                else {
                                  uVar4 = 0x13;
                                }
                              }
                              else {
                                uVar4 = 0x12;
                              }
                            }
                            else {
                              uVar4 = 0x11;
                            }
                          }
                          else {
                            uVar4 = 0x10;
                          }
                        }
                        else {
                          uVar4 = 0xf;
                        }
                      }
                      else {
                        uVar4 = 0xe;
                      }
                    }
                    else {
                      uVar4 = 0xd;
                    }
                  }
                  else {
                    uVar4 = 0xc;
                  }
                }
                else {
                  uVar4 = 0xb;
                }
              }
              else {
                uVar4 = 10;
              }
            }
            else {
              uVar4 = 9;
            }
            goto LAB_06527dd4;
          }
LAB_06527fc4:
          uVar4 = 8;
          goto LAB_06527dd4;
        }
        goto UnityEngine_UI_Slider__set_normalizedValue;
      }
      goto LAB_06527f00;
    }
    break;
  case 6:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_155,5,0);
    puVar3 = (undefined8 *)StringLiteral_130;
    goto joined_r0x065276ac;
  case 7:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  Unity_Services_Wire_Internal_Client_<>c__DisplayClass46_0_TypeInfo
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_162,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)System_Xml_XmlEntityReference_TypeInfo,5,0);
      puVar3 = (undefined8 *)StringLiteral_121;
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
UnityEngine_UI_Slider__set_maxValue:
      uVar2 = FUN_0536b7a8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06527f00;
    }
    break;
  case 8:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_161,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_109,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_168,5,0);
        puVar3 = (undefined8 *)StringLiteral_132;
joined_r0x065277f0:
        if ((uVar2 & 1) == 0) goto UnityEngine_UI_Slider__set_maxValue;
        goto LAB_06527ed8;
      }
      goto LAB_06527d38;
    }
    break;
  case 9:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_166,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    Method_System_Xml_Schema_XmlListConverter_ToArray<TimeSpan>__,5,
                           0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_135,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_141,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_119,5,0);
        puVar1 = StringLiteral_144;
        goto joined_r0x06527e68;
      }
      goto LAB_06527f00;
    }
    break;
  case 10:
  case 0x17:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)PTR_DAT_06a10fc0,5,0);
    puVar3 = (undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo;
    goto joined_r0x065276ac;
  case 0xb:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_124,5,0);
    puVar3 = (undefined8 *)StringLiteral_145;
    goto joined_r0x065276ac;
  case 0xc:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)PTR_DAT_06a10fc0,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo
                           ,5,0);
      puVar1 = Method_System_Collections_Generic_List<IXRGrabTransformer>_Add__;
      goto joined_r0x0652781c;
    }
    break;
  case 0xd:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_133,5,0);
    puVar3 = (undefined8 *)StringLiteral_112;
    goto joined_r0x065276ac;
  case 0xe:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_160,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_115,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527f00;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    Unity_Services_Qos_Http_HttpClientResponse_TypeInfo,5,0);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TryGetValue__
      ;
      goto joined_r0x0652781c;
    }
    break;
  case 0xf:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_120,5,0);
    puVar3 = (undefined8 *)StringLiteral_108;
    goto joined_r0x065276ac;
  case 0x10:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_107,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_134,5,0);
      puVar1 = StringLiteral_165;
      goto joined_r0x0652781c;
    }
    break;
  case 0x11:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_110,5,0);
    puVar3 = (undefined8 *)StringLiteral_167;
    goto joined_r0x065276ac;
  case 0x12:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_171,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_150,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527d38;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_122,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_128,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_169,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_113,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06527dd4;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_129,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06527f74;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_156,5,0);
          if ((uVar2 & 1) != 0) goto LAB_06527f9c;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_114,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_06527fc4;
        }
        goto UnityEngine_UI_Slider__set_normalizedValue;
      }
      goto LAB_06527f00;
    }
    break;
  case 0x13:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_118,5,0);
    puVar3 = (undefined8 *)StringLiteral_111;
    if ((uVar2 & 1) == 0) {
LAB_06527d88:
      uVar2 = FUN_0536b7a8(param_2,*puVar3,5,0);
      uVar4 = 0;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_06527dd4;
    }
    goto LAB_06527d38;
  case 0x14:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style_Instantiate<ImageStyle>__
                         ,5,0);
    puVar3 = (undefined8 *)StringLiteral_117;
joined_r0x065276ac:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
switchD_06527530_default:
        return 0;
      }
LAB_06527d38:
      uVar4 = 1;
      goto LAB_06527dd4;
    }
    break;
  case 0x15:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)System_Collections_Hashtable_var,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_152,5,0);
      puVar3 = (undefined8 *)Method_System_Collections_Generic_List<IPanel>_get_Item__;
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      goto LAB_06527d88;
    }
    goto LAB_06527d38;
  case 0x16:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                  UnityEngine_InputSystem_Processors_AxisDeadzoneProcessor_var,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                    UnityEngine_UIElements_Layout_InvokeMeasureFunctionDelegate_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_06527ed8;
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)UnityEngine_EventSystems_BaseInput_var,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)
                                      UnityEngine_UIElements_Internal_MultiColumnHeaderColumnMoveLocationPreview_TypeInfo
                             ,5,0);
        puVar1 = Method_System_Xml_Schema_XmlListConverter_ToArray<TimeSpan>__;
joined_r0x06527e68:
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)puVar1,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_06527dd4;
        }
UnityEngine_UI_Slider__set_normalizedValue:
        uVar4 = 4;
        goto LAB_06527dd4;
      }
      goto LAB_06527f00;
    }
    goto LAB_06527d38;
  case 0x18:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_161,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_159,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_143,5,0);
        puVar3 = (undefined8 *)StringLiteral_125;
        goto joined_r0x065277f0;
      }
      goto LAB_06527d38;
    }
    break;
  case 0x19:
    uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_159,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_0536b7a8(param_2,*(undefined8 *)StringLiteral_163,5,0);
      puVar1 = StringLiteral_154;
      goto joined_r0x0652781c;
    }
    break;
  default:
    goto switchD_06527530_default;
  }
  uVar4 = 0;
LAB_06527dd4:
  *param_3 = uVar4;
  return 1;
}


