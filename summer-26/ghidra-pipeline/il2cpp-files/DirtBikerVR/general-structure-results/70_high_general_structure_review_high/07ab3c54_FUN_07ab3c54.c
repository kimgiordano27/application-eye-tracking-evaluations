/*
FUNCTION_NAME: FUN_07ab3c54
ENTRY_POINT: 07ab3c54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_07ab3c54(long *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0899213f & 1) == 0) {
    FUN_03a8a718(Unity_Services_Vivox_AudioInputDevices_TypeInfo);
    FUN_03a8a718(Unity_Services_Relay_Configuration_TypeInfo);
    FUN_03a8a718(Unity_Services_Wire_Internal_Configuration_TypeInfo);
    FUN_03a8a718(Unity_Services_Core_Configuration_ConfigurationEntry_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_AttributeData_TypeInfo);
    FUN_03a8a718(PTR_DAT_084950f0);
    FUN_03a8a718(UnityEngine_Audio_AudioMixer_TypeInfo);
    FUN_03a8a718(Unity_Services_Core_Configuration_ConfigurationUtils_TypeInfo);
    FUN_03a8a718(Cinemachine_ConfinerOven_TypeInfo);
    FUN_03a8a718(PTR_DAT_084950f8);
    FUN_03a8a718(Unity_Services_Authentication_ConfirmSignInCodeRequest_TypeInfo);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_ConformanceAutomation_ConformanceAutomationFeature_TypeInfo
                );
    FUN_03a8a718(Unity_Services_DistributedAuthority_ConnectPayload_TypeInfo);
    DAT_0899213f = 1;
  }
  puVar1 = System_Runtime_Serialization_AttributeData_TypeInfo;
  if ((param_3 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Runtime_Serialization_AttributeData_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_07ab3e68;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_03ac43c4(param_2,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,5);
LAB_07ab3e68:
      plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
      puVar2 = Unity_Services_Vivox_AudioInputDevices_TypeInfo;
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Services_Vivox_AudioInputDevices_TypeInfo);
      if ((param_1 != (long *)0x0) &&
         (FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x420),0),
         puVar3 = UnityEngine_Audio_AudioMixer_TypeInfo, plVar5 != (long *)0x0)) {
        lVar8 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)UnityEngine_Audio_AudioMixer_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_07ab3f60;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)UnityEngine_Audio_AudioMixer_TypeInfo,1)
        ;
LAB_07ab3f60:
        (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
        lVar8 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_07ab4048;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,5);
LAB_07ab4048:
        plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
        FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x430),0);
        if (plVar5 != (long *)0x0) {
          lVar8 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_07ab4160;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar3,3);
LAB_07ab4160:
          (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
          uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084950f8);
          FUN_06f6877c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x3f0),0);
          lVar8 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_084950f0) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_07ab424c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_084950f0,1);
LAB_07ab424c:
          (*(code *)*puVar4)(param_2,uVar6,puVar4[1]);
          lVar8 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                goto LAB_07ab4348;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,0xd);
LAB_07ab4348:
          plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
          uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                      Unity_Services_Wire_Internal_Configuration_TypeInfo);
          FUN_06461b9c(uVar6,param_1,
                       *(undefined8 *)Unity_Services_DistributedAuthority_ConnectPayload_TypeInfo,0)
          ;
          if (plVar5 != (long *)0x0) {
            lVar8 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)Cinemachine_ConfinerOven_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_07ab4440;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)Cinemachine_ConfinerOven_TypeInfo,1)
            ;
LAB_07ab4440:
            (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
            lVar8 = *param_2;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                  goto LAB_07ab4538;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,6);
LAB_07ab4538:
            plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
            uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Services_Relay_Configuration_TypeInfo);
            FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x3e0),0);
            if (plVar5 != (long *)0x0) {
              lVar8 = *plVar5;
              uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      *(long *)Unity_Services_Core_Configuration_ConfigurationUtils_TypeInfo) {
                    puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                    goto LAB_07ab4658;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_03ac43c4(plVar5,*(long *)
                                            Unity_Services_Core_Configuration_ConfigurationUtils_TypeInfo
                                    ,1);
LAB_07ab4658:
              (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
              puVar2 = Unity_Services_Core_Configuration_ConfigurationEntry_TypeInfo;
              uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                          Unity_Services_Core_Configuration_ConfigurationEntry_TypeInfo
                                        );
              FUN_06461b9c(uVar6,param_1,
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_ConformanceAutomation_ConformanceAutomationFeature_TypeInfo
                           ,0);
              lVar8 = *param_2;
              uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                    goto LAB_07ab4764;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,8);
LAB_07ab4764:
              (*(code *)*puVar4)(param_2,uVar6,puVar4[1]);
              uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_06461b9c(uVar6,param_1,
                           *(undefined8 *)
                            Unity_Services_Authentication_ConfirmSignInCodeRequest_TypeInfo,0);
              lVar9 = *param_2;
              lVar8 = *(long *)puVar1;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar8) {
                    iVar10 = *piVar12 + 10;
                    goto LAB_07ab47ec;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              uVar7 = 10;
              goto LAB_07ab47d0;
            }
          }
        }
      }
    }
  }
  else if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)System_Runtime_Serialization_AttributeData_TypeInfo)
        {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_07ab3dcc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(param_2,*(long *)System_Runtime_Serialization_AttributeData_TypeInfo,5);
LAB_07ab3dcc:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    puVar2 = Unity_Services_Vivox_AudioInputDevices_TypeInfo;
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Services_Vivox_AudioInputDevices_TypeInfo);
    if ((param_1 != (long *)0x0) &&
       (FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x420),0),
       puVar3 = UnityEngine_Audio_AudioMixer_TypeInfo, plVar5 != (long *)0x0)) {
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)UnityEngine_Audio_AudioMixer_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_07ab3f00;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)UnityEngine_Audio_AudioMixer_TypeInfo,0);
LAB_07ab3f00:
      (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
      lVar8 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_07ab3fc0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,5);
LAB_07ab3fc0:
      plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x430),0);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_07ab40d0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar3,2);
LAB_07ab40d0:
        (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084950f8);
        FUN_06f6877c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x3f0),0);
        lVar8 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_084950f0) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto UnityEngine_Timeline_TimelineClipExtensions___cctor;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)PTR_DAT_084950f0,0);
UnityEngine_Timeline_TimelineClipExtensions___cctor:
        (*(code *)*puVar4)(param_2,uVar6,puVar4[1]);
        lVar8 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
              goto LAB_07ab42ac;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,0xd);
LAB_07ab42ac:
        plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    Unity_Services_Wire_Internal_Configuration_TypeInfo);
        FUN_06461b9c(uVar6,param_1,
                     *(undefined8 *)Unity_Services_DistributedAuthority_ConnectPayload_TypeInfo,0);
        if (plVar5 != (long *)0x0) {
          lVar8 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)Cinemachine_ConfinerOven_TypeInfo) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_07ab43e0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)Cinemachine_ConfinerOven_TypeInfo,0);
LAB_07ab43e0:
          (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
          lVar8 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                goto LAB_07ab44a0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,6);
LAB_07ab44a0:
          plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
          uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Services_Relay_Configuration_TypeInfo);
          FUN_06461b9c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x3e0),0);
          if (plVar5 != (long *)0x0) {
            lVar8 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)Unity_Services_Core_Configuration_ConfigurationUtils_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_07ab45cc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)
                     FUN_03ac43c4(plVar5,*(long *)
                                          Unity_Services_Core_Configuration_ConfigurationUtils_TypeInfo
                                  ,0);
LAB_07ab45cc:
            (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
            puVar2 = Unity_Services_Core_Configuration_ConfigurationEntry_TypeInfo;
            uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                        Unity_Services_Core_Configuration_ConfigurationEntry_TypeInfo
                                      );
            FUN_06461b9c(uVar6,param_1,
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_ConformanceAutomation_ConformanceAutomationFeature_TypeInfo
                         ,0);
            lVar8 = *param_2;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                  goto LAB_07ab46e4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar4 = (undefined8 *)FUN_03ac43c4(param_2,*(long *)puVar1,7);
LAB_07ab46e4:
            (*(code *)*puVar4)(param_2,uVar6,puVar4[1]);
            uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
            FUN_06461b9c(uVar6,param_1,
                         *(undefined8 *)
                          Unity_Services_Authentication_ConfirmSignInCodeRequest_TypeInfo,0);
            lVar9 = *param_2;
            lVar8 = *(long *)puVar1;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  iVar10 = *piVar12 + 9;
LAB_07ab47ec:
                  puVar4 = (undefined8 *)(lVar9 + (long)iVar10 * 0x10 + 0x138);
                  goto LAB_07ab47f4;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            uVar7 = 9;
LAB_07ab47d0:
            puVar4 = (undefined8 *)FUN_03ac43c4(param_2,lVar8,uVar7);
LAB_07ab47f4:
                    /* WARNING: Could not recover jumptable at 0x07ab4810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar4)(param_2,uVar6,puVar4[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


