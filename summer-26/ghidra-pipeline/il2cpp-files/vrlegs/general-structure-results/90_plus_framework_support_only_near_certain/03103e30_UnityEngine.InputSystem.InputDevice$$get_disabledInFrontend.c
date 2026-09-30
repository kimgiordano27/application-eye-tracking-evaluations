/*
FUNCTION_NAME: UnityEngine.InputSystem.InputDevice$$get_disabledInFrontend
ENTRY_POINT: 03103e30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputDevice__get_disabledInFrontend(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  long lVar11;
  long *plVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  lVar4 = FUN_030df544();
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRSelectFilter>_TypeInfo;
  puVar2 = System_EventHandler<SafeSerializationEventArgs>_TypeInfo;
  if ((lVar4 != 0) && (plVar12 = *(long **)(lVar4 + 0x30), plVar12 != (long *)0x0)) {
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_EventHandler<SafeSerializationEventArgs>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_03103ea0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01a472ec(plVar12,*(long *)System_EventHandler<SafeSerializationEventArgs>_TypeInfo,
                          2);
LAB_03103ea0:
    (*(code *)*puVar5)(plVar12);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_0346ad6c(uVar6,0);
    lVar4 = FUN_030df544();
    if ((lVar4 != 0) && (plVar12 = *(long **)(lVar4 + 0x30), plVar12 != (long *)0x0)) {
      lVar8 = *plVar12;
      lVar4 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_03103f2c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar12,lVar4,2);
LAB_03103f2c:
      (*(code *)*puVar5)(plVar12,uVar6,puVar5[1]);
      lVar4 = FUN_030df544();
      puVar1 = System_Collections_Generic_Dictionary<Type,_IQcSerializer>_TypeInfo;
      if (lVar4 != 0) {
        plVar12 = *(long **)(lVar4 + 0x30);
        uVar6 = FUN_030df544();
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
        FUN_030fbda0(uVar7,uVar6,0);
        puVar3 = UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo;
        puVar1 = PTR_DAT_03cbe5e8;
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          lVar4 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_03103fe8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01a472ec(plVar12,lVar4,2);
LAB_03103fe8:
          (*(code *)*puVar5)(plVar12,uVar7,puVar5[1]);
          uVar6 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar12 = (long *)FUN_0277b678(uVar6,0);
          puVar1 = _Common_DataStructsAndAlgo_ExpiringCache<int,_int>_TypeInfo;
          puVar2 = PTR_DAT_03cd73c0;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x3c8))(plVar12,*(undefined8 *)(*plVar12 + 0x3d0));
            FUN_0277b678(*(undefined8 *)puVar1,0);
            lVar8 = *(long *)puVar2;
            lVar4 = *(long *)(lVar8 + 0x38);
            if (lVar4 == 0) {
              FUN_01a47054(lVar8);
              lVar4 = *(long *)(lVar8 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01a46ff8();
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            puVar3 = System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo;
            puVar1 = _Common_DataStructsAndAlgo_ExpiringCache<Collider,_HandInfo>_TypeInfo;
            puVar2 = PTR_DAT_03cd73e0;
            if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x135) & 1) == 0) {
              FUN_01a46ff8();
            }
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
            FUN_0346ea98(uVar6,*(undefined8 *)puVar3);
            lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_03103b78();
            lVar8 = FUN_030df544();
            if ((lVar8 != 0) &&
               (FUN_01fdfb9c(&stack0x00000080,lVar8,uVar6,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                            ), puVar2 = System_EventHandler<SocketAsyncEventArgs>_TypeInfo,
               lVar4 != 0)) {
              *(undefined8 *)(lVar4 + 0xb0) = in_stack_00000098;
              *(undefined8 *)(lVar4 + 0xa8) = in_stack_00000090;
              *(undefined8 *)(lVar4 + 0xa0) = in_stack_00000088;
              *(undefined8 *)(lVar4 + 0x98) = in_stack_00000080;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar4 + 0x98),0);
              *(undefined8 *)(lVar4 + 0xd8) = unaff_x21;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
              FUN_030e060c(lVar8,0);
              plVar12 = (long *)(lVar4 + 0xf0);
              *plVar12 = lVar8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar8);
              puVar2 = System_EventHandler<ErrorEventArgs>_TypeInfo;
              in_stack_00000078 = *(undefined8 *)(lVar4 + 0xb0);
              in_stack_00000070 = *(undefined8 *)(lVar4 + 0xa8);
              in_stack_00000068 = *(undefined8 *)(lVar4 + 0xa0);
              in_stack_00000060 = *(undefined8 *)(lVar4 + 0x98);
              if (*plVar12 != 0) {
                in_stack_00000040 = in_stack_00000060;
                in_stack_00000048 = in_stack_00000068;
                in_stack_00000050 = in_stack_00000070;
                in_stack_00000058 = in_stack_00000078;
                FUN_030df4e8(*plVar12,&stack0x00000040);
                lVar8 = FUN_030df544();
                in_stack_000000e8 = *(undefined8 *)(lVar4 + 0xa0);
                in_stack_000000e0 = *(undefined8 *)(lVar4 + 0x98);
                in_stack_000000f8 = *(undefined8 *)(lVar4 + 0xb0);
                in_stack_000000f0 = *(undefined8 *)(lVar4 + 0xa8);
                lVar11 = *plVar12;
                FUN_02143cb8(&stack0x000000c0,&stack0x000000e0,*(undefined8 *)puVar2);
                puVar2 = System_EventHandler<EventArgs>_TypeInfo;
                if (lVar8 != 0) {
                  in_stack_000000e8 = in_stack_000000c8;
                  in_stack_000000e0 = in_stack_000000c0;
                  in_stack_000000f0 = in_stack_000000d0;
                  FUN_01fdff7c(&stack0x000000a0,lVar8,lVar11,&stack0x000000e0,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                              );
                  lVar8 = FUN_030df544();
                  in_stack_000000e8 = in_stack_000000a8;
                  in_stack_000000e0 = in_stack_000000a0;
                  in_stack_000000f8 = in_stack_000000b8;
                  in_stack_000000f0 = in_stack_000000b0;
                  FUN_02143cb8(&stack0x000000c0,&stack0x000000e0,*(undefined8 *)puVar2);
                  if (lVar8 != 0) {
                    FUN_01fdff7c(&stack0x000000e0,lVar8,lVar4,&stack0x000000c0,
                                 *(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRInteractionStrengthFilter>_TypeInfo
                                );
                    unaff_x19[1] = in_stack_000000e8;
                    *unaff_x19 = in_stack_000000e0;
                    unaff_x19[3] = in_stack_000000f8;
                    unaff_x19[2] = in_stack_000000f0;
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


