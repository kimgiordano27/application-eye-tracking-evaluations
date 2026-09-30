/*
FUNCTION_NAME: UnityEngine.InputSystem.InputDevice$$set_hasStateCallbacks
ENTRY_POINT: 03103ed8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_InputDevice__set_hasStateCallbacks(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  long lVar10;
  long *plVar11;
  long *unaff_x24;
  long lVar12;
  long *unaff_x26;
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
  
  if (unaff_x24 != (long *)0x0) {
    lVar7 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_03103f2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec();
LAB_03103f2c:
    (*(code *)*puVar4)();
    lVar7 = FUN_030df544();
    puVar1 = System_Collections_Generic_Dictionary<Type,_IQcSerializer>_TypeInfo;
    if (lVar7 != 0) {
      plVar11 = *(long **)(lVar7 + 0x30);
      uVar5 = FUN_030df544();
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_030fbda0(uVar6,uVar5,0);
      puVar2 = UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo;
      puVar1 = PTR_DAT_03cbe5e8;
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_03103fe8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec(plVar11,*unaff_x26,2);
LAB_03103fe8:
        (*(code *)*puVar4)(plVar11,uVar6,puVar4[1]);
        uVar5 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar11 = (long *)FUN_0277b678(uVar5,0);
        puVar2 = _Common_DataStructsAndAlgo_ExpiringCache<int,_int>_TypeInfo;
        puVar1 = PTR_DAT_03cd73c0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
          FUN_0277b678(*(undefined8 *)puVar2,0);
          lVar12 = *(long *)puVar1;
          lVar7 = *(long *)(lVar12 + 0x38);
          if (lVar7 == 0) {
            FUN_01a47054(lVar12);
            lVar7 = *(long *)(lVar12 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          puVar3 = System_Xml_Linq_XHashtable_ExtractKeyDelegate<WeakReference>_TypeInfo;
          puVar2 = _Common_DataStructsAndAlgo_ExpiringCache<Collider,_HandInfo>_TypeInfo;
          puVar1 = PTR_DAT_03cd73e0;
          if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_01a46ff8();
          }
          uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_0346ea98(uVar5,*(undefined8 *)puVar3);
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_03103b78();
          lVar12 = FUN_030df544();
          if ((lVar12 != 0) &&
             (FUN_01fdfb9c(&stack0x00000080,lVar12,uVar5,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_ExposedRegistrationList<IXRHoverFilter>_TypeInfo
                          ), puVar1 = System_EventHandler<SocketAsyncEventArgs>_TypeInfo, lVar7 != 0
             )) {
            *(undefined8 *)(lVar7 + 0xb0) = in_stack_00000098;
            *(undefined8 *)(lVar7 + 0xa8) = in_stack_00000090;
            *(undefined8 *)(lVar7 + 0xa0) = in_stack_00000088;
            *(undefined8 *)(lVar7 + 0x98) = in_stack_00000080;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar7 + 0x98),0);
            *(undefined8 *)(lVar7 + 0xd8) = unaff_x21;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_030e060c(lVar12,0);
            plVar11 = (long *)(lVar7 + 0xf0);
            *plVar11 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar12);
            puVar1 = System_EventHandler<ErrorEventArgs>_TypeInfo;
            in_stack_00000078 = *(undefined8 *)(lVar7 + 0xb0);
            in_stack_00000070 = *(undefined8 *)(lVar7 + 0xa8);
            in_stack_00000068 = *(undefined8 *)(lVar7 + 0xa0);
            in_stack_00000060 = *(undefined8 *)(lVar7 + 0x98);
            if (*plVar11 != 0) {
              in_stack_00000040 = in_stack_00000060;
              in_stack_00000048 = in_stack_00000068;
              in_stack_00000050 = in_stack_00000070;
              in_stack_00000058 = in_stack_00000078;
              FUN_030df4e8(*plVar11,&stack0x00000040);
              lVar12 = FUN_030df544();
              in_stack_000000e8 = *(undefined8 *)(lVar7 + 0xa0);
              in_stack_000000e0 = *(undefined8 *)(lVar7 + 0x98);
              in_stack_000000f8 = *(undefined8 *)(lVar7 + 0xb0);
              in_stack_000000f0 = *(undefined8 *)(lVar7 + 0xa8);
              lVar10 = *plVar11;
              FUN_02143cb8(&stack0x000000c0,&stack0x000000e0,*(undefined8 *)puVar1);
              puVar1 = System_EventHandler<EventArgs>_TypeInfo;
              if (lVar12 != 0) {
                in_stack_000000e8 = in_stack_000000c8;
                in_stack_000000e0 = in_stack_000000c0;
                in_stack_000000f0 = in_stack_000000d0;
                FUN_01fdff7c(&stack0x000000a0,lVar12,lVar10,&stack0x000000e0,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                            );
                lVar12 = FUN_030df544();
                in_stack_000000e8 = in_stack_000000a8;
                in_stack_000000e0 = in_stack_000000a0;
                in_stack_000000f8 = in_stack_000000b8;
                in_stack_000000f0 = in_stack_000000b0;
                FUN_02143cb8(&stack0x000000c0,&stack0x000000e0,*(undefined8 *)puVar1);
                if (lVar12 != 0) {
                  FUN_01fdff7c(&stack0x000000e0,lVar12,lVar7,&stack0x000000c0,
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


