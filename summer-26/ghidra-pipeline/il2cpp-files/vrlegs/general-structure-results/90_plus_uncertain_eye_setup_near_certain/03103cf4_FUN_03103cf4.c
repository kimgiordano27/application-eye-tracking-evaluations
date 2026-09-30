/*
FUNCTION_NAME: FUN_03103cf4
ENTRY_POINT: 03103cf4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 147
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03103cf4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo;
  if ((DAT_0412ba56 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd73c0);
    FUN_01ab69ac(System_EventHandler<ErrorEventArgs>_TypeInfo);
    FUN_01ab69ac(System_EventHandler<EventArgs>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<Type,_IQcSerializer>_TypeInfo);
    FUN_01ab69ac(System_EventHandler<SafeSerializationEventArgs>_TypeInfo);
    FUN_01ab69ac(System_EventHandler<SocketAsyncEventArgs>_TypeInfo);
    FUN_01ab69ac(_Common_DataStructsAndAlgo_ExpiringCache<Collider,_HandInfo>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo);
    FUN_01ab69ac(
                UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cd73e0);
    FUN_01ab69ac(_Common_DataStructsAndAlgo_ExpiringCache<int,_int>_TypeInfo);
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                );
    FUN_01ab69ac(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo);
    DAT_0412ba56 = 1;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_0346ad64(uVar4,0);
  if (((param_2 != 0) &&
      (lVar5 = FUN_030df544(param_2,0),
      puVar1 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo
      , puVar2 = System_EventHandler<SafeSerializationEventArgs>_TypeInfo, lVar5 != 0)) &&
     (plVar13 = *(long **)(lVar5 + 0x30), plVar13 != (long *)0x0)) {
    lVar5 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_EventHandler<SafeSerializationEventArgs>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_03103ea0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01a472ec(plVar13,*(long *)System_EventHandler<SafeSerializationEventArgs>_TypeInfo,
                          2);
LAB_03103ea0:
    (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_0346ad6c(uVar4,0);
    lVar5 = FUN_030df544(param_2,0);
    if ((lVar5 != 0) && (plVar13 = *(long **)(lVar5 + 0x30), plVar13 != (long *)0x0)) {
      lVar9 = *plVar13;
      lVar5 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_03103f2c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar13,lVar5,2);
LAB_03103f2c:
      (*(code *)*puVar6)(plVar13,uVar4,puVar6[1]);
      lVar5 = FUN_030df544(param_2,0);
      puVar1 = System_Collections_Generic_Dictionary<Type,_IQcSerializer>_TypeInfo;
      if (lVar5 != 0) {
        plVar13 = *(long **)(lVar5 + 0x30);
        uVar4 = FUN_030df544(param_2,0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
        FUN_030fbda0(uVar7,uVar4,0);
        puVar3 = UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo;
        puVar1 = PTR_DAT_03cbe5e8;
        if (plVar13 != (long *)0x0) {
          lVar9 = *plVar13;
          lVar5 = *(long *)puVar2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar5) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_03103fe8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01a472ec(plVar13,lVar5,2);
LAB_03103fe8:
          (*(code *)*puVar6)(plVar13,uVar7,puVar6[1]);
          uVar4 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar13 = (long *)FUN_0277b678(uVar4,0);
          puVar1 = _Common_DataStructsAndAlgo_ExpiringCache<int,_int>_TypeInfo;
          puVar2 = PTR_DAT_03cd73c0;
          if (plVar13 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar13 + 0x3c8))(plVar13,*(undefined8 *)(*plVar13 + 0x3d0));
            uVar7 = FUN_0277b678(*(undefined8 *)puVar1,0);
            lVar9 = *(long *)puVar2;
            lVar5 = *(long *)(lVar9 + 0x38);
            if (lVar5 == 0) {
              FUN_01a47054(lVar9);
              lVar5 = *(long *)(lVar9 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01a46ff8();
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            puVar3 = System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo;
            puVar1 = _Common_DataStructsAndAlgo_ExpiringCache<Collider,_HandInfo>_TypeInfo;
            puVar2 = PTR_DAT_03cd73e0;
            lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_01a46ff8();
            }
            uVar14 = **(undefined8 **)(lVar5 + 0xb8);
            uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            FUN_0346ea98(uVar8,*(undefined8 *)puVar3,param_3,uVar4,uVar7,uVar14,0);
            lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_03103b78(lVar5,param_2);
            lVar9 = FUN_030df544(param_2,0);
            if ((lVar9 != 0) &&
               (FUN_01fdfb9c(&local_e0,lVar9,uVar8,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                            ), puVar2 = System_EventHandler<SocketAsyncEventArgs>_TypeInfo,
               lVar5 != 0)) {
              *(undefined8 *)(lVar5 + 0xb0) = uStack_c8;
              *(undefined8 *)(lVar5 + 0xa8) = uStack_d0;
              *(undefined8 *)(lVar5 + 0xa0) = uStack_d8;
              *(undefined8 *)(lVar5 + 0x98) = local_e0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar5 + 0x98),0);
              *(undefined8 *)(lVar5 + 0xd8) = param_4;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar5 + 0xd8),param_4);
              lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
              FUN_030e060c(lVar9,0);
              plVar13 = (long *)(lVar5 + 0xf0);
              *plVar13 = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar9);
              puVar2 = System_EventHandler<ErrorEventArgs>_TypeInfo;
              uStack_e8 = *(undefined8 *)(lVar5 + 0xb0);
              uStack_f0 = *(undefined8 *)(lVar5 + 0xa8);
              uStack_f8 = *(undefined8 *)(lVar5 + 0xa0);
              local_100 = *(undefined8 *)(lVar5 + 0x98);
              if (*plVar13 != 0) {
                local_120 = local_100;
                uStack_118 = uStack_f8;
                uStack_110 = uStack_f0;
                uStack_108 = uStack_e8;
                FUN_030df4e8(*plVar13,&local_120,param_2,0);
                lVar9 = FUN_030df544(param_2,0);
                uStack_78 = *(undefined8 *)(lVar5 + 0xa0);
                local_80 = *(undefined8 *)(lVar5 + 0x98);
                uStack_68 = *(undefined8 *)(lVar5 + 0xb0);
                local_70 = *(undefined8 *)(lVar5 + 0xa8);
                lVar12 = *plVar13;
                FUN_02143cb8(&local_a0,&local_80,*(undefined8 *)puVar2);
                puVar2 = System_EventHandler<EventArgs>_TypeInfo;
                if (lVar9 != 0) {
                  uStack_78 = uStack_98;
                  local_80 = local_a0;
                  local_70 = local_90;
                  FUN_01fdff7c(&local_c0,lVar9,lVar12,&local_80,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                              );
                  lVar9 = FUN_030df544(param_2,0);
                  uStack_78 = uStack_b8;
                  local_80 = local_c0;
                  uStack_68 = uStack_a8;
                  local_70 = uStack_b0;
                  FUN_02143cb8(&local_a0,&local_80,*(undefined8 *)puVar2);
                  if (lVar9 != 0) {
                    FUN_01fdff7c(&local_80,lVar9,lVar5,&local_a0,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                                );
                    param_1[1] = uStack_78;
                    *param_1 = local_80;
                    param_1[3] = uStack_68;
                    param_1[2] = local_70;
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


