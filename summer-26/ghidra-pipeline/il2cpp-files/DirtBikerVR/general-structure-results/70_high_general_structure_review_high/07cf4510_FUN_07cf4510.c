/*
FUNCTION_NAME: FUN_07cf4510
ENTRY_POINT: 07cf4510
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4
*/


long FUN_07cf4510(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  
  puVar1 = Meta_XR_MultiplayerBlocks_Colocation_INetworkData_TypeInfo;
  if ((DAT_0899847a & 1) == 0) {
    FUN_03a8a718(Meta_XR_MultiplayerBlocks_Colocation_INetworkData_TypeInfo);
    FUN_03a8a718(Normal_Realtime_WebhookRejectedRequest_TypeInfo);
    FUN_03a8a718(System_Xml_Schema_NamespaceListV1Compat_TypeInfo);
    FUN_03a8a718(Normal_Realtime_WebhookRejectedRequestException_TypeInfo);
    FUN_03a8a718(UnityEngine_Animations_Rigging_WeightedTransform_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2588);
    FUN_03a8a718(PTR_DAT_084e2598);
    FUN_03a8a718(PTR_DAT_084e0050);
    FUN_03a8a718(UnityEngine_Animations_Rigging_WeightedTransformArray_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e25b0);
    FUN_03a8a718(System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e25c0);
    FUN_03a8a718(PTR_DAT_084e1348);
    FUN_03a8a718(PTR_DAT_084e25d0);
    FUN_03a8a718(PTR_DAT_084a1fb8);
    FUN_03a8a718(System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo);
    FUN_03a8a718(NWH_WheelController3D_Wheel_TypeInfo);
    FUN_03a8a718(UnityEngine_WheelCollider_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2610);
    FUN_03a8a718(PTR_DAT_084e2618);
    FUN_03a8a718(PTR_DAT_084e1350);
    FUN_03a8a718(PTR_DAT_084e2638);
    FUN_03a8a718(PTR_DAT_084e2648);
    FUN_03a8a718(PTR_DAT_084e2668);
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_WheelComponent_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2698);
    FUN_03a8a718(UnityEngine_UIElements_WheelEvent_TypeInfo);
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_Wheel_WheelGroup_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e26a8);
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_Wheel_WheelGroupSelector_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486e90);
    FUN_03a8a718(PTR_DAT_084e26e0);
    FUN_03a8a718(NWH_VehiclePhysics2_Sound_SoundComponents_WheelSkidComponent_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2708);
    FUN_03a8a718(PTR_DAT_084e2710);
    FUN_03a8a718(PTR_DAT_084e2718);
    FUN_03a8a718(PTR_DAT_084e2720);
    FUN_03a8a718(PTR_DAT_084e2728);
    FUN_03a8a718(PTR_DAT_084e2730);
    FUN_03a8a718(NWH_VehiclePhysics2_Sound_SoundComponents_WheelTireNoiseComponent_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_WhiteSpace_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2750);
    FUN_03a8a718(System_ComponentModel_Win32Exception_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486f38);
    FUN_03a8a718(PTR_DAT_084e2778);
    FUN_03a8a718(PTR_DAT_084e2780);
    FUN_03a8a718(PTR_DAT_084e2798);
    FUN_03a8a718(PTR_DAT_084e27b0);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_WindOrientationParameter_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_WindSpeedParameter_TypeInfo);
    FUN_03a8a718(PTR_DAT_084bce68);
    FUN_03a8a718(System_Security_Principal_WindowsAccountType_TypeInfo);
    FUN_03a8a718(System_WindowsConsoleDriver_TypeInfo);
    FUN_03a8a718(System_Security_Principal_WindowsIdentity_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e27e8);
    FUN_03a8a718(PTR_DAT_084e27f0);
    FUN_03a8a718(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e27f8);
    FUN_03a8a718(Oculus_Platform_WindowsPlatform_TypeInfo);
    FUN_03a8a718(PTR_DAT_084e2808);
    FUN_03a8a718(PTR_DAT_084e2820);
    DAT_0899847a = 1;
  }
  lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_07cf41b0(lVar8,0);
  if (lVar8 == 0) goto LAB_07cf5908;
  FUN_07cf3958(lVar8,4);
  uVar9 = FUN_065cd268(param_1,0);
  if ((uVar9 & 1) != 0) {
    return lVar8;
  }
  if (param_1 == 0) goto LAB_07cf5908;
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    do {
      uVar2 = FUN_065c7d98(param_1,iVar15,0);
      if (uVar2 < 0x26) {
        if (uVar2 == 0x23) {
          uVar5 = 1;
        }
        else {
          if (uVar2 != 0x25) {
LAB_07cf48e8:
            iVar7 = *(int *)(param_1 + 0x10);
            break;
          }
          uVar5 = 8;
        }
      }
      else if (uVar2 == 0x26) {
        uVar5 = 4;
      }
      else {
        if (uVar2 != 0x5e) goto LAB_07cf48e8;
        uVar5 = 2;
      }
      uVar4 = FUN_07cf305c(lVar8);
      FUN_07cf30e8(lVar8,uVar4 | uVar5);
      iVar7 = *(int *)(param_1 + 0x10);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar7);
  }
  lVar10 = FUN_065cfabc(param_1,iVar15,iVar7 - iVar15,0);
  if (lVar10 == 0) goto LAB_07cf5908;
  lVar10 = FUN_065d1f84(lVar10,0);
  uVar5 = FUN_07d0f618(lVar10,0);
  if (0x78e32de5 < uVar5) {
    if (uVar5 < 0xba14edda) {
      if (uVar5 < 0x98f72e4d) {
        if (uVar5 < 0x7a305f97) {
          if (uVar5 == 0x7a1f1675) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                               NWH_VehiclePhysics2_Powertrain_Wheel_WheelGroupSelector_TypeInfo
                                       ,0);
            if ((uVar9 & 1) != 0) {
              FUN_07cf34e4(lVar8,0x34);
              uVar13 = 0x104;
              goto LAB_07cf57b8;
            }
          }
          else if (uVar5 == 0x7a25d23a) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                               NWH_VehiclePhysics2_Powertrain_WheelComponent_TypeInfo
                                       ,0);
            if ((uVar9 & 1) != 0) {
              FUN_07cf34e4(lVar8,0x2b);
              uVar13 = 0x10e;
              goto LAB_07cf57b8;
            }
          }
          else if ((uVar5 == 0x7a305f96) &&
                  (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                      UnityEngine_WheelCollider_TypeInfo,0),
                  (uVar9 & 1) != 0)) {
            FUN_07cf34e4(lVar8,0x2f);
            uVar13 = 0x10b;
            goto LAB_07cf57b8;
          }
        }
        else if (uVar5 < 0x853c682d) {
          if (uVar5 == 0x853c682c) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e26a8,0);
            if ((uVar9 & 1) != 0) {
              uVar13 = 8;
              goto LAB_07cf57e4;
            }
          }
          else {
            puVar14 = (undefined8 *)
                      NWH_VehiclePhysics2_Sound_SoundComponents_WheelSkidComponent_TypeInfo;
            if (uVar5 == 0x7f02713a) goto LAB_07cf5538;
          }
        }
        else if (uVar5 == 0x85ee37bf) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084a1fb8,0);
          if ((uVar9 & 1) != 0) {
            FUN_07cf34e4(lVar8,10);
            FUN_07cf360c(lVar8,0xd);
            goto LAB_07cf5744;
          }
        }
        else if ((uVar5 == 0x98f72e4c) &&
                (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e26e0,0),
                (uVar9 & 1) != 0)) {
          uVar13 = 9;
          goto LAB_07cf57b8;
        }
      }
      else if (uVar5 < 0xb62cec74) {
        if (uVar5 == 0xb6039e6c) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                             NWH_VehiclePhysics2_Sound_SoundComponents_WheelTireNoiseComponent_TypeInfo
                                     ,0);
          if ((uVar9 & 1) != 0) {
            FUN_07cf34e4(lVar8,0x39);
            uVar13 = 0x109;
            goto LAB_07cf57b8;
          }
        }
        else if (uVar5 == 0xb61964bb) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                             System_Security_Principal_WindowsAccountType_TypeInfo,0
                                    );
          if ((uVar9 & 1) != 0) {
            FUN_07cf34e4(lVar8,0x36);
            uVar13 = 0x106;
            goto LAB_07cf57b8;
          }
        }
        else if ((uVar5 == 0xb62cec73) &&
                (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                                                                        
                                                  UnityEngine_Animations_Rigging_WeightedTransform_TypeInfo
                                            ,0), (uVar9 & 1) != 0)) {
          FUN_07cf34e4(lVar8,0x2e);
          uVar13 = 0x10a;
          goto LAB_07cf57b8;
        }
      }
      else if (uVar5 < 0xba016622) {
        if (uVar5 == 0xb6353b38) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                             System_Runtime_Remoting_WellKnownClientTypeEntry_TypeInfo
                                     ,0);
          if ((uVar9 & 1) != 0) {
            FUN_07cf34e4(lVar8,0x2d);
            uVar13 = 0x10d;
            goto LAB_07cf57b8;
          }
        }
        else if ((uVar5 == 0xba016621) &&
                (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                                                                        
                                                  System_Runtime_Remoting_WellKnownServiceTypeEntry_TypeInfo
                                            ,0), (uVar9 & 1) != 0)) {
          FUN_07cf34e4(lVar8,0x38);
          uVar13 = 0x108;
          goto LAB_07cf57b8;
        }
      }
      else if (uVar5 == 0xba12af42) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                           UnityEngine_Animations_Rigging_WeightedTransformArray_TypeInfo
                                   ,0);
        if ((uVar9 & 1) != 0) {
          FUN_07cf34e4(lVar8,0x33);
          uVar13 = 0x103;
          goto LAB_07cf57b8;
        }
      }
      else if ((uVar5 == 0xba14edd9) &&
              (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                  Oculus_Platform_WindowsPlatform_TypeInfo,0),
              (uVar9 & 1) != 0)) {
        FUN_07cf34e4(lVar8,0x30);
        uVar13 = 0x100;
        goto LAB_07cf57b8;
      }
    }
    else if (uVar5 < 0xf331fd54) {
      if (uVar5 < 0xd2c8c28f) {
        if (uVar5 != 0xba1ba99e) {
          if (uVar5 == 0xc6a39628) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2720,0);
            if ((uVar9 & 1) == 0) goto LAB_07cf5800;
            uVar13 = 0x115;
          }
          else {
            if ((uVar5 != 0xd2c8c28e) ||
               (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e0050,0),
               (uVar9 & 1) == 0)) goto LAB_07cf5800;
            uVar13 = 0x116;
          }
          goto LAB_07cf57e4;
        }
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                           UnityEngine_Rendering_HighDefinition_WindOrientationParameter_TypeInfo
                                   ,0);
        if ((uVar9 & 1) != 0) {
          FUN_07cf34e4(lVar8,0x37);
          uVar13 = 0x107;
          goto LAB_07cf57b8;
        }
      }
      else {
        if (0xed7d9f12 < uVar5) {
          if (uVar5 == 0xf231fbc0) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2668,0);
            if ((uVar9 & 1) == 0) goto LAB_07cf5800;
            uVar13 = 0x2a0;
          }
          else {
            if ((uVar5 != 0xf331fd53) ||
               (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2698,0),
               (uVar9 & 1) == 0)) goto LAB_07cf5800;
            uVar13 = 0x2a1;
          }
          goto LAB_07cf57e4;
        }
        puVar14 = (undefined8 *)System_WindowsConsoleDriver_TypeInfo;
        if (uVar5 == 0xe8d303a5) {
LAB_07cf5538:
          uVar9 = thunk_FUN_065cbffc(lVar10,*puVar14,0);
          if ((uVar9 & 1) != 0) {
            uVar13 = 0x119;
            goto LAB_07cf57e4;
          }
        }
        else if ((uVar5 == 0xed7d9f12) &&
                (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                                                                        
                                                  System_Security_Principal_WindowsIdentity_TypeInfo
                                            ,0), (uVar9 & 1) != 0)) {
          uVar13 = 0x1b;
          goto LAB_07cf57b8;
        }
      }
    }
    else {
      if (0xfbf8a203 < uVar5) {
        if (uVar5 < 0xfd320d12) {
          if (uVar5 == 0xfc320b7e) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e25d0,0);
            if ((uVar9 & 1) == 0) goto LAB_07cf5800;
            uVar13 = 0x125;
          }
          else {
            if ((uVar5 != 0xfd320d11) ||
               (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2708,0),
               (uVar9 & 1) == 0)) goto LAB_07cf5800;
            uVar13 = 0x126;
          }
        }
        else if (uVar5 == 0xfe320ea4) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2820,0);
          if ((uVar9 & 1) == 0) goto LAB_07cf5800;
          uVar13 = 0x127;
        }
        else {
          if ((uVar5 != 0xff321037) ||
             (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2618,0), (uVar9 & 1) == 0
             )) goto LAB_07cf5800;
          uVar13 = 0x128;
        }
        goto LAB_07cf57e4;
      }
      if (uVar5 < 0xfb1d8005) {
        if (uVar5 == 0xfa320858) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2710,0);
          if ((uVar9 & 1) != 0) {
            uVar13 = 0x123;
            goto LAB_07cf57e4;
          }
        }
        else {
          puVar14 = (undefined8 *)UnityEngine_TextCore_WhiteSpace_TypeInfo;
          if (uVar5 == 0xfb1d8004) goto LAB_07cf4ca4;
        }
      }
      else if (uVar5 == 0xfb3209eb) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2588,0);
        if ((uVar9 & 1) != 0) {
          uVar13 = 0x124;
          goto LAB_07cf57e4;
        }
      }
      else if ((uVar5 == 0xfbf8a203) &&
              (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)NWH_WheelController3D_Wheel_TypeInfo
                                          ,0), (uVar9 & 1) != 0)) {
        FUN_07cf34e4(lVar8,10);
        uVar13 = 0x10f;
        goto LAB_07cf57b8;
      }
    }
    goto LAB_07cf5800;
  }
  if (0x3db9b915 < uVar5) {
    if (uVar5 < 0x6c397794) {
      if (0x471cb59f < uVar5) {
        if (uVar5 < 0x6a8e75ab) {
          if (uVar5 == 0x67c2444a) {
            uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2598,0);
            if ((uVar9 & 1) == 0) goto LAB_07cf5800;
            uVar13 = 0x7f;
          }
          else {
            if ((uVar5 != 0x6a8e75aa) ||
               (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2730,0),
               (uVar9 & 1) == 0)) goto LAB_07cf5800;
            uVar13 = 0x117;
          }
        }
        else if (uVar5 == 0x6b397600) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2778,0);
          if ((uVar9 & 1) == 0) goto LAB_07cf5800;
          uVar13 = 0x2a3;
        }
        else {
          if ((uVar5 != 0x6c397793) ||
             (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2718,0), (uVar9 & 1) == 0
             )) goto LAB_07cf5800;
          uVar13 = 0x2a2;
        }
        goto LAB_07cf57e4;
      }
      puVar14 = (undefined8 *)System_ComponentModel_Win32Exception_TypeInfo;
      if (uVar5 == 0x4258d54e) {
LAB_07cf53ac:
        uVar9 = thunk_FUN_065cbffc(lVar10,*puVar14,0);
        if ((uVar9 & 1) != 0) {
          FUN_07cf34e4(lVar8,0x3d);
          uVar13 = 0x110;
LAB_07cf57b8:
          FUN_07cf360c(lVar8,uVar13);
          return lVar8;
        }
      }
      else if (uVar5 == 0x43430b20) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e1348,0);
        if ((uVar9 & 1) != 0) {
          uVar13 = 0x111;
          goto LAB_07cf57e4;
        }
      }
      else {
        puVar14 = (undefined8 *)UnityEngine_Rendering_HighDefinition_WindSpeedParameter_TypeInfo;
        if (uVar5 == 0x471cb59f) {
LAB_07cf4ca4:
          uVar9 = thunk_FUN_065cbffc(lVar10,*puVar14,0);
          if ((uVar9 & 1) != 0) {
            uVar13 = 0x118;
            goto LAB_07cf57e4;
          }
        }
      }
    }
    else if (uVar5 < 0x760dc709) {
      if (uVar5 < 0x6e397aba) {
        if (uVar5 == 0x6d397926) {
          uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2808,0);
          if ((uVar9 & 1) == 0) goto LAB_07cf5800;
          uVar13 = 0x2a5;
        }
        else {
          if ((uVar5 != 0x6e397ab9) ||
             (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e25b0,0), (uVar9 & 1) == 0
             )) goto LAB_07cf5800;
          uVar13 = 0x2a4;
        }
        goto LAB_07cf57e4;
      }
      if (uVar5 == 0x70397ddf) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2798,0);
        if ((uVar9 & 1) != 0) {
          uVar13 = 0x2a6;
          goto LAB_07cf57e4;
        }
      }
      else {
        puVar14 = (undefined8 *)UnityEngine_UIElements_WheelEvent_TypeInfo;
        if (uVar5 == 0x760dc708) goto LAB_07cf53ac;
      }
    }
    else if (uVar5 < 0x7616c165) {
      if (uVar5 == 0x7610059f) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                           System_Security_Principal_WindowsImpersonationContext_TypeInfo
                                   ,0);
        if ((uVar9 & 1) != 0) {
          FUN_07cf34e4(lVar8,0x32);
          uVar13 = 0x102;
          goto LAB_07cf57b8;
        }
      }
      else if ((uVar5 == 0x7616c164) &&
              (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                                  NWH_VehiclePhysics2_Powertrain_Wheel_WheelGroup_TypeInfo
                                          ,0), (uVar9 & 1) != 0)) {
        FUN_07cf34e4(lVar8,0x31);
        uVar13 = 0x101;
        goto LAB_07cf57b8;
      }
    }
    else if (uVar5 == 0x76214ec0) {
      uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)
                                         Normal_Realtime_WebhookRejectedRequestException_TypeInfo,0)
      ;
      if ((uVar9 & 1) != 0) {
        FUN_07cf34e4(lVar8,0x35);
        uVar13 = 0x105;
        goto LAB_07cf57b8;
      }
    }
    else if ((uVar5 == 0x78e32de5) &&
            (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_08486f38,0), (uVar9 & 1) != 0)
            ) {
      uVar13 = 0x113;
      goto LAB_07cf57e4;
    }
    goto LAB_07cf5800;
  }
  if (uVar5 < 0x1622709f) {
    if (uVar5 < 0xc2260e1) {
      if (uVar5 == 0x3211ca) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e25c0,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x29e;
      }
      else if (uVar5 == 0x132135d) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2750,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x29f;
      }
      else {
        if ((uVar5 != 0xc2260e0) ||
           (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e27f0,0), (uVar9 & 1) == 0))
        goto LAB_07cf5800;
        uVar13 = 0x122;
      }
    }
    else if (uVar5 < 0x124aec71) {
      if (uVar5 == 0xd226273) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e27f8,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x121;
      }
      else {
        if ((uVar5 != 0x124aec70) ||
           (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_08486e90,0), (uVar9 & 1) == 0))
        goto LAB_07cf5800;
        uVar13 = 0x114;
      }
    }
    else if (uVar5 == 0x14226d78) {
      uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2638,0);
      if ((uVar9 & 1) == 0) goto LAB_07cf5800;
      uVar13 = 0x11a;
    }
    else {
      if ((uVar5 != 0x1622709e) ||
         (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e27b0,0), (uVar9 & 1) == 0))
      goto LAB_07cf5800;
      uVar13 = 0x11c;
    }
LAB_07cf57e4:
    FUN_07cf360c(lVar8,uVar13);
    uVar5 = FUN_07cf305c(lVar8);
    uVar5 = uVar5 | 0x40;
LAB_07cf57f4:
    FUN_07cf30e8(lVar8,uVar5);
  }
  else {
    if (uVar5 < 0x19227558) {
      if (uVar5 == 0x17227231) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2610,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x11b;
      }
      else if (uVar5 == 0x182273c4) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2780,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x11e;
      }
      else {
        if ((uVar5 != 0x19227557) ||
           (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e27e8,0), (uVar9 & 1) == 0))
        goto LAB_07cf5800;
        uVar13 = 0x11d;
      }
      goto LAB_07cf57e4;
    }
    if (uVar5 < 0x1b22787e) {
      if (uVar5 == 0x1a2276ea) {
        uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2728,0);
        if ((uVar9 & 1) == 0) goto LAB_07cf5800;
        uVar13 = 0x120;
      }
      else {
        if ((uVar5 != 0x1b22787d) ||
           (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e2648,0), (uVar9 & 1) == 0))
        goto LAB_07cf5800;
        uVar13 = 0x11f;
      }
      goto LAB_07cf57e4;
    }
    if (uVar5 == 0x3553e285) {
      uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084bce68,0);
      if ((uVar9 & 1) != 0) {
        FUN_07cf360c(lVar8,0x20);
        FUN_07cf34e4(lVar8,0x20);
LAB_07cf5744:
        uVar5 = FUN_07cf305c(lVar8);
        uVar5 = uVar5 & 0xffffffbf;
        goto LAB_07cf57f4;
      }
    }
    else if ((uVar5 == 0x3db9b915) &&
            (uVar9 = thunk_FUN_065cbffc(lVar10,*(undefined8 *)PTR_DAT_084e1350,0), (uVar9 & 1) != 0)
            ) {
      uVar13 = 0x112;
      goto LAB_07cf57e4;
    }
LAB_07cf5800:
    puVar1 = PTR_DAT_08486760;
    if (lVar10 == 0) {
LAB_07cf5908:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(lVar10 + 0x10) == 1) {
      lVar10 = FUN_065d1e84(lVar10,0);
      if (lVar10 == 0) goto LAB_07cf5908;
      uVar6 = FUN_065c7d98(lVar10,0,0);
      FUN_07cf34e4(lVar8,uVar6);
      uVar3 = FUN_07cf3458(lVar8);
      FUN_07cf360c(lVar8,uVar3);
      iVar7 = FUN_07cf305c(lVar8);
      if (iVar7 != 0) {
        FUN_07cf34e4(lVar8,0);
      }
    }
    else {
      uVar13 = *(undefined8 *)Normal_Realtime_WebhookRejectedRequest_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_0675ff58(uVar13,0);
      if (*(int *)(*(long *)(puVar1 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar11 = (long *)FUN_067846ec(uVar13,lVar10,1,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(*plVar11 + 0x40) !=
          *(long *)(*(long *)System_Xml_Schema_NamespaceListV1Compat_TypeInfo + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40();
      }
      puVar12 = (undefined4 *)thunk_FUN_03ac7604();
      FUN_07cf360c(lVar8,*puVar12);
    }
  }
  return lVar8;
}


