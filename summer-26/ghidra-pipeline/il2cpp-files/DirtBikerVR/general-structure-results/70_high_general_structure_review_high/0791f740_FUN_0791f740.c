/*
FUNCTION_NAME: FUN_0791f740
ENTRY_POINT: 0791f740
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void FUN_0791f740(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_48;
  
  if ((DAT_08987cb7 & 1) == 0) {
    FUN_03a8a718(System_Data_DataRelation___TypeInfo);
    FUN_03a8a718(Gley_UrbanSystem_Internal_CellData___TypeInfo);
    FUN_03a8a718(System_Attribute___TypeInfo);
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(char___TypeInfo);
    FUN_03a8a718(Cinemachine_CinemachineOrbitalTransposer___TypeInfo);
    FUN_03a8a718(Cinemachine_CinemachineVirtualCamera___TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c28);
    FUN_03a8a718(PTR_DAT_08491c38);
    FUN_03a8a718(Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
    FUN_03a8a718(UnityEngine_Collider___TypeInfo);
    FUN_03a8a718(UnityEngine_Color___TypeInfo);
    FUN_03a8a718(System_Xml_Linq_XHashtable<XName>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo);
    FUN_03a8a718(Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo);
    FUN_03a8a718(PTR_DAT_084c82e0);
    FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
    FUN_03a8a718(System_Func<TransitionRunEvent>_TypeInfo);
    FUN_03a8a718(System_Func<TransitionStartEvent>_TypeInfo);
    FUN_03a8a718(System_Func<uint>_TypeInfo);
    FUN_03a8a718(System_Func<ValidateCommandEvent>_TypeInfo);
    FUN_03a8a718(System_Func<VectorImageRenderInfo>_TypeInfo);
    FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
    DAT_08987cb7 = 1;
  }
  puVar2 = System_Attribute___TypeInfo;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar11 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar14 = *(undefined8 *)Cinemachine_CinemachineVirtualCamera___TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar14 = FUN_0675ff58(uVar14,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar14,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar3 = char___TypeInfo;
    uVar14 = FUN_0675ff58(*(undefined8 *)char___TypeInfo,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<ValidateCommandEvent>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar14,*(undefined8 *)puVar1);
    uVar14 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar14,
                 *(undefined8 *)puVar1);
    *(long *)(param_1 + 0xe) = lVar4;
    thunk_FUN_03afed3c(param_1 + 0xe,lVar4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar14 = FUN_0791a308(lVar11);
    lVar4 = FUN_078f5604(uVar12,uVar14,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar11 + 0x10);
    uVar14 = FUN_065c0764(*(undefined8 *)(lVar4 + 0x10),
                          *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x30),0);
    lVar5 = *(long *)(param_1 + 0xc);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar5 + 0x28) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_07910fa0();
      lVar5 = *(long *)(param_1 + 0xc);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
    uVar6 = FUN_07916084(lVar5,*(undefined8 *)(lVar11 + 0x18),lVar4);
    uVar8 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar8 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo)
        {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0791fb4c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_03ac43c4(plVar13,*(long *)Cinemachine_CinemachineOrbitalTransposer___TypeInfo,0);
LAB_0791fb4c:
    lVar4 = (*(code *)*puVar7)(plVar13,uVar15,uVar14,uVar12,uVar6,uVar8,puVar7[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   Unity_Multiplayer_Tools_NetStats_EventMetric<ServerLogEvent>___TypeInfo
                           );
    uVar9 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                        );
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      thunk_FUN_03afed3c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe5f28(param_1 + 2,&local_48,param_1,*(undefined8 *)System_Data_DataRelation___TypeInfo)
      ;
      return;
    }
  }
  uVar14 = FUN_0587c704(&local_48,*(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
  uVar12 = FUN_0471a034(uVar14,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)Cinemachine_CinemachineVirtualCameraBase___TypeInfo);
  uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Color___TypeInfo);
  FUN_05750b0c(uVar6,uVar14,uVar12,*(undefined8 *)UnityEngine_Collider___TypeInfo);
  puVar1 = Gley_UrbanSystem_Internal_CellData___TypeInfo;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03afed3c(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar6,*(undefined8 *)puVar1);
  return;
}


