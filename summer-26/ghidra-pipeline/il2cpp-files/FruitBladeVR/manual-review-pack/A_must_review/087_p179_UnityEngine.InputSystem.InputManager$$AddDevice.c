/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$AddDevice
ENTRY_POINT: 0324b8ac
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_InputSystem_InputManager__AddDevice(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_03ef4e00 & 1) == 0) {
    FUN_01c5c92c(PTR_System_Action_TypeInfo_03cb62f0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>___03cceff0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<InputDevice>___03cceff8
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputDeviceChange>___03cceb00
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<int,_InputDevice>_set_Item___03ccf000
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_IEventMerger_TypeInfo_03ccf008);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_IEventPreProcessor_TypeInfo_03ccf010);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_IInputRuntime_TypeInfo_03cb6e30);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_TypeInfo_03ccd8b8)
    ;
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo_03cceb10
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputActionState_TypeInfo_03ccbae8);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputManager_TypeInfo_03ccd688);
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78);
    FUN_01c5c92c(PTR_StringLiteral_3289_03cceb18);
    DAT_03ef4e00 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar8 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_8116_03cb6c80);
    System_ArgumentNullException___ctor(uVar8,uVar5,0);
  }
  else {
    uVar5 = UnityEngine_InputSystem_InputControl__get_layout(param_2,0);
    uVar6 = System_String__IsNullOrEmpty(uVar5,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = UnityEngine_InputSystem_Utilities_ArrayHelpers__Contains<object>
                        (*(undefined8 *)(param_1 + 0x78),param_2,
                         *(undefined8 *)
                          PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<InputDevice>___03cceff8
                        );
      if ((uVar6 & 1) != 0) {
        return;
      }
      UnityEngine_InputSystem_InputManager__MakeDeviceNameUnique(param_1,param_2);
      UnityEngine_InputSystem_InputManager__AssignUniqueDeviceId(param_1,param_2);
      uVar4 = UnityEngine_InputSystem_Utilities_ArrayHelpers__AppendWithCapacity<object>
                        ((undefined8 *)(param_1 + 0x78),param_1 + 0x70,param_2,10,
                         *(undefined8 *)
                          PTR_Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>___03cceff0
                        );
      lVar9 = *(long *)(param_1 + 0x80);
      *(undefined4 *)(param_2 + 0x1d) = uVar4;
      if (lVar9 != 0) {
        System_Collections_Generic_Dictionary<int,_object>__set_Item
                  (lVar9,(int)param_2[0x1c],param_2,
                   *(undefined8 *)
                    PTR_Method_System_Collections_Generic_Dictionary<int,_InputDevice>_set_Item___03ccf000
                  );
        if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78
                    + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
        UnityEngine_InputSystem_InputManager__ReallocateStateBuffers(param_1);
        UnityEngine_InputSystem_InputManager__InitializeDeviceState(param_1,param_2);
        uVar6 = (ulong)*(uint *)(param_1 + 0x88);
        iVar1 = *(int *)(param_1 + 0x70);
        if (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 0x4a8)) {
          iVar1 = *(int *)(param_1 + 0x4a8);
        }
        *(int *)(param_1 + 0x4a8) = iVar1;
        iVar1 = *(int *)(param_1 + 0xb4);
        if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0x4b0)) {
          iVar1 = *(int *)(param_1 + 0x4b0);
        }
        *(int *)(param_1 + 0x4b0) = iVar1;
        if (0 < (int)*(uint *)(param_1 + 0x88)) {
          lVar9 = *(long *)(param_1 + 0x90);
          if (lVar9 == 0) goto LAB_0324bdb0;
          uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
          piVar11 = (int *)(lVar9 + 0x58);
          do {
            if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cbdc();
            }
            if (*piVar11 == (int)param_2[0x1c]) {
              *(undefined1 *)((long)piVar11 + 5) = 0;
            }
            uVar6 = uVar6 - 1;
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 0x10;
          } while (uVar6 != 0);
        }
        if (*(char *)(param_1 + 0x412) == '\0') {
          if (*(long *)(param_1 + 0x4e0) == 0) goto LAB_0324bdb0;
          if (*(int *)(*(long *)(param_1 + 0x4e0) + 0x34) != 2) {
            plVar12 = *(long **)(param_1 + 0x4a0);
            if (plVar12 == (long *)0x0) goto LAB_0324bdb0;
            lVar9 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)PTR_UnityEngine_InputSystem_LowLevel_IInputRuntime_TypeInfo_03cb6e30) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
                  goto LAB_0324bb44;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01c8cb54(plVar12,*(long *)
                                           PTR_UnityEngine_InputSystem_LowLevel_IInputRuntime_TypeInfo_03cb6e30
                                  ,0x17);
LAB_0324bb44:
            uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
            if ((((uVar6 & 1) != 0) &&
                (uVar6 = UnityEngine_InputSystem_InputDevice__QueryEnabledStateFromRuntime
                                   (param_2,0), (uVar6 & 1) != 0)) &&
               (uVar6 = UnityEngine_InputSystem_InputManager__ShouldRunDeviceInBackground
                                  (param_1,param_2), (uVar6 & 1) == 0)) {
              UnityEngine_InputSystem_InputManager__EnableOrDisableDevice(param_1,param_2,0,2);
            }
          }
        }
        if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_InputActionState_TypeInfo_03ccbae8 + 0xe4)
            == 0) {
          thunk_FUN_01cb0d4c();
        }
        UnityEngine_InputSystem_InputActionState__OnDeviceChange(param_2,0,0);
        puVar3 = PTR_UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo_03cceb10
        ;
        plVar12 = (long *)thunk_FUN_01c8fb4c(param_2,*(undefined8 *)
                                                                                                            
                                                  PTR_UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo_03cceb10
                                            );
        if (plVar12 != (long *)0x0) {
          uVar5 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_System_Action_TypeInfo_03cb62f0);
          lVar9 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                lVar9 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
                goto LAB_0324bc2c;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          lVar9 = FUN_01c8cb54(plVar12,*(long *)puVar3,0);
LAB_0324bc2c:
          System_Action___ctor(uVar5,plVar12,*(undefined8 *)(lVar9 + 8),0);
          UnityEngine_InputSystem_InputManager__add_onBeforeUpdate(param_1,uVar5);
        }
        lVar9 = thunk_FUN_01c8fb4c(param_2,*(undefined8 *)
                                            PTR_UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_TypeInfo_03ccd8b8
                                  );
        if (lVar9 != 0) {
          UnityEngine_InputSystem_InputManager__InstallBeforeUpdateHookIfNecessary(param_1);
          uVar2 = *(uint *)((long)param_2 + 0xdc);
          *(undefined1 *)(param_1 + 0x411) = 1;
          *(uint *)((long)param_2 + 0xdc) = uVar2 | 2;
        }
        lVar9 = thunk_FUN_01c8fb4c(param_2,*(undefined8 *)
                                            PTR_UnityEngine_InputSystem_LowLevel_IEventMerger_TypeInfo_03ccf008
                                  );
        if (lVar9 != 0) {
          UnityEngine_InputSystem_InputDevice__set_hasEventMerger(param_2,1,0);
        }
        lVar9 = thunk_FUN_01c8fb4c(param_2,*(undefined8 *)
                                            PTR_UnityEngine_InputSystem_LowLevel_IEventPreProcessor_TypeInfo_03ccf010
                                  );
        if (lVar9 != 0) {
          UnityEngine_InputSystem_InputDevice__set_hasEventPreProcessor(param_2,1,0);
        }
        uVar6 = UnityEngine_InputSystem_InputDevice__get_updateBeforeRender(param_2,0);
        if ((uVar6 & 1) != 0) {
          uVar2 = *(uint *)(param_1 + 0xa8) | 4;
          if ((*(uint *)(param_1 + 0xa8) != uVar2) &&
             (*(uint *)(param_1 + 0xa8) = uVar2, 0 < *(int *)(param_1 + 0x70))) {
            UnityEngine_InputSystem_InputManager__ReallocateStateBuffers(param_1);
          }
        }
        UnityEngine_InputSystem_InputDevice__NotifyAdded(param_2,0);
        (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        puVar3 = PTR_UnityEngine_InputSystem_InputManager_TypeInfo_03ccd688;
        lVar9 = *(long *)PTR_UnityEngine_InputSystem_InputManager_TypeInfo_03ccd688;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar9 = *(long *)puVar3;
        }
        UnityEngine_InputSystem_Utilities_DelegateHelpers__InvokeCallbacksSafe<object,_Int32Enum>
                  (param_1 + 0xf0,param_2,0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x58),
                   *(undefined8 *)PTR_StringLiteral_3289_03cceb18,0,
                   *(undefined8 *)
                    PTR_Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputDeviceChange>___03cceb00
                  );
        uVar6 = UnityEngine_InputSystem_InputDevice__get_enabled(param_2,0);
        if ((uVar6 & 1) != 0) {
          UnityEngine_InputSystem_InputDevice__RequestSync(param_2,0);
        }
        FUN_031fb5bc(param_2,0);
        return;
      }
LAB_0324bdb0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    thunk_FUN_01cb9718(PTR_System_InvalidOperationException_TypeInfo_03cb65f0);
    uVar8 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_2410_03ccf018);
    System_InvalidOperationException___ctor(uVar8,uVar5,0);
  }
  uVar5 = thunk_FUN_01cb9718(PTR_Method_UnityEngine_InputSystem_InputManager_AddDevice___03ccf020);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar8,uVar5);
}


