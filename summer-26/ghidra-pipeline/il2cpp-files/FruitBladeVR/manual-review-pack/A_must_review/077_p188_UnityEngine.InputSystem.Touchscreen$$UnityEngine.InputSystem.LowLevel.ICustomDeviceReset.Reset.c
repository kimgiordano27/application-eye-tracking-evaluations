/*
FUNCTION_NAME: UnityEngine.InputSystem.Touchscreen$$UnityEngine.InputSystem.LowLevel.ICustomDeviceReset.Reset
ENTRY_POINT: 03247acc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_Touchscreen__UnityEngine_InputSystem_LowLevel_ICustomDeviceReset_Reset
               (long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  puVar7 = 
  PTR_Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>___03ccede8
  ;
  puVar6 = PTR_Method_Unity_Collections_NativeArray<byte>__ctor___03ccb170;
  puVar4 = 
  PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<byte>___03cb7140
  ;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_03ef4dcb & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchPhase>___03ccedf0
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<byte>___03cb7140
                );
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<byte>__ctor___03ccb170);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count___03ccc168
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_LowLevel_StateEvent_GetEventSizeWithPayload<TouchState>___03ccede8
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<TouchState>___03cccb10
                );
    DAT_03ef4dcb = 1;
  }
  puVar5 = PTR_Method_Unity_Collections_NativeArray<byte>_Dispose___03cb6cd0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  lVar9 = UnityEngine_InputSystem_InputControl__get_currentStatePtr(param_1,0);
  uVar8 = UnityEngine_InputSystem_LowLevel_StateEvent__GetEventSizeWithPayload<TouchState>
                    (*(undefined8 *)puVar7);
  Unity_Collections_NativeArray<byte>___ctor(&local_90,uVar8,2,1,*(undefined8 *)puVar6);
  puVar10 = (undefined8 *)
            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<byte>
                      (local_90,local_88,*(undefined8 *)puVar4);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  UnityEngine_InputSystem_LowLevel_InputEvent___ctor
            (0xbff0000000000000,&local_80,0x53544154,local_88 & 0xffffffff,
             *(undefined4 *)(param_1 + 0xe0),0);
  if (puVar10 == (undefined8 *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  }
  else {
    *(undefined4 *)(puVar10 + 2) = local_70;
    puVar10[1] = uStack_78;
    *puVar10 = local_80;
    puVar4 = PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78;
    if (*(long *)(param_1 + 0x1b8) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1b8) + 0x14);
      if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78 +
                  0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      puVar6 = PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchPhase>___03ccedf0;
      lVar12 = (ulong)uVar1 + lVar9;
      bVar2 = *(byte *)(lVar12 + 0x20);
      if ((bVar2 < 6) && ((1 << (ulong)(bVar2 & 0x1f) & 0x26U) != 0)) {
        uVar11 = UnityEngine_InputSystem_LowLevel_StateEvent__get_state(puVar10,0);
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy(uVar11,lVar12,0x38,0);
        uVar11 = UnityEngine_InputSystem_LowLevel_StateEvent__get_state(puVar10,0);
        UnityEngine_InputSystem_LowLevel_TouchState__set_phase(uVar11,4,0);
        if (*(long *)(param_1 + 0x1b8) == 0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5cbd4();
          }
          goto LAB_03247f08;
        }
        UnityEngine_InputSystem_LowLevel_InputState__Change<Int32Enum>
                  (*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1a8),4,0,puVar10,
                   *(undefined8 *)puVar6);
      }
      puVar7 = 
      PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170;
      uStack_98 = *(ulong *)(param_1 + 0x1c8);
      local_a0 = *(undefined8 *)(param_1 + 0x1c0);
      lVar12 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                         (&local_a0,0,
                          *(undefined8 *)
                           PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170
                         );
      if (lVar12 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
      }
      else {
        uVar1 = *(uint *)(lVar12 + 0x14);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)puVar4);
        }
        local_a0 = *(undefined8 *)(param_1 + 0x1c0);
        uStack_98 = *(ulong *)(param_1 + 0x1c8);
        uVar14 = uStack_98 >> 0x20;
        if (0 < (int)(uStack_98 >> 0x20)) {
          uVar13 = 0;
          lVar9 = (ulong)uVar1 + lVar9;
          do {
            if (*(byte *)(lVar9 + 0x20) < 6 &&
                (1 << (ulong)(*(byte *)(lVar9 + 0x20) & 0x1f) & 0x26U) != 0) {
              uVar11 = UnityEngine_InputSystem_LowLevel_StateEvent__get_state(puVar10,0);
              Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy(uVar11,lVar9,0x38,0);
              uVar11 = UnityEngine_InputSystem_LowLevel_StateEvent__get_state(puVar10,0);
              UnityEngine_InputSystem_LowLevel_TouchState__set_phase(uVar11,4,0);
              uStack_98 = *(ulong *)(param_1 + 0x1c8);
              local_a0 = *(undefined8 *)(param_1 + 0x1c0);
              lVar12 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                                 (&local_a0,uVar13 & 0xffffffff,*(undefined8 *)puVar7);
              if (lVar12 == 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5cbd4();
                }
                goto LAB_03247f08;
              }
              UnityEngine_InputSystem_LowLevel_InputState__Change<Int32Enum>
                        (*(undefined8 *)(lVar12 + 0x1a8),4,0,puVar10,*(undefined8 *)puVar6);
            }
            uVar13 = uVar13 + 1;
            lVar9 = lVar9 + 0x38;
          } while (uVar14 != uVar13);
        }
        Unity_Collections_NativeArray<byte>__Dispose(&local_90,*(undefined8 *)puVar5);
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
      }
    }
  }
LAB_03247f08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


