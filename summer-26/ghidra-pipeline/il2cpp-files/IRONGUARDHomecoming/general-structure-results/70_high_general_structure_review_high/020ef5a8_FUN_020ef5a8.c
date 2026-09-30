/*
FUNCTION_NAME: FUN_020ef5a8
ENTRY_POINT: 020ef5a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_020ef5a8(long param_1,ushort param_2,ushort param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  ushort local_38 [2];
  ushort local_34 [2];
  
  puVar4 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  local_40 = param_4;
  local_38[0] = param_3;
  local_34[0] = param_2;
  if ((DAT_0482faeb & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputDeviceMatcher_MatcherJson_Capability>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Finger>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Gamepad>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputActionMap>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputBindingComposite>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControl>__
                      );
    DAT_0482faeb = 1;
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar4;
  }
  puVar5 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
  ;
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x90) = 1;
  if ((param_2 & 0xff) != 0) {
    bVar6 = FUN_0332aff8(local_34,*(undefined8 *)puVar5);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *(long *)puVar4;
    }
    *(byte *)(*(long *)(lVar8 + 0xb8) + 0x50) = bVar6 & 1;
    param_3 = local_38[0] & 0xff;
  }
  if ((param_3 & 0xff) != 0) {
    bVar6 = FUN_0332aff8(local_38,*(undefined8 *)puVar5);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *(long *)puVar4;
    }
    *(byte *)(*(long *)(lVar8 + 0xb8) + 8) = bVar6 & 1;
  }
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((char)local_40 != '\0') {
    uVar7 = FUN_0332f424(&local_40,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                        );
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    FUN_020ef164(uVar7);
  }
  FUN_02119cdc(0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_04073094(param_1,0,0);
  if ((uVar9 & 1) != 0) {
    if ((char)local_38[0] == '\0') {
      if (param_1 == 0) goto LAB_020efbd8;
      lVar8 = *(long *)puVar4;
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)puVar4;
      }
      *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar2;
    }
    if ((char)local_40 == '\0') {
      if (param_1 == 0) goto LAB_020efbd8;
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_020ef164(uVar7);
    }
    if ((char)local_34[0] == '\0') {
      if (param_1 == 0) goto LAB_020efbd8;
      lVar8 = *(long *)puVar4;
      uVar2 = *(undefined1 *)(param_1 + 0x45);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *(long *)puVar4;
      }
      *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x50) = uVar2;
    }
    else if (param_1 == 0) goto LAB_020efbd8;
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) goto LAB_020efbd8;
    lVar11 = *(long *)puVar4;
    uVar7 = *(undefined4 *)(lVar8 + 0x10);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar4;
      lVar8 = *(long *)(param_1 + 0x20);
      lVar12 = *(long *)(lVar11 + 0xb8);
      *(undefined4 *)(lVar12 + 0xc) = uVar7;
      if (lVar8 == 0) goto LAB_020efbd8;
    }
    else {
      lVar12 = *(long *)(lVar11 + 0xb8);
      *(undefined4 *)(lVar12 + 0xc) = uVar7;
    }
    *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar8 + 0x14);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(lVar12 + 0x20) = *(undefined1 *)(param_1 + 0x30);
    *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(param_1 + 0x38);
    if ((char)local_34[0] == '\0') {
      bVar6 = *(char *)(param_1 + 0x45) != '\0';
    }
    else {
      bVar6 = FUN_0332aff8(local_34,*(undefined8 *)puVar5);
      lVar11 = *(long *)puVar4;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    lVar8 = *(long *)(lVar11 + 0xb8);
    *(byte *)(lVar8 + 0x50) = bVar6 & 1;
    *(undefined1 *)(lVar8 + 0x14) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)(lVar8 + 0x38) = *(undefined1 *)(param_1 + 0x44);
    *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined1 *)(lVar8 + 0x40) = *(undefined1 *)(param_1 + 0x50);
    *(undefined4 *)(lVar8 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined1 *)(lVar8 + 0x48) = *(undefined1 *)(param_1 + 0x60);
    *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(param_1 + 100);
    *(undefined1 *)(lVar8 + 0x39) = *(undefined1 *)(param_1 + 0x68);
    uVar2 = *(undefined1 *)(param_1 + 0x69);
    if (DAT_0482fbdd == '\0') {
      thunk_FUN_01efb3a4(puVar4);
      lVar11 = *(long *)puVar4;
      DAT_0482fbdd = '\x01';
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar4;
    }
    *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 0x3a) = uVar2;
  }
  if (DAT_0482ef72 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
    DAT_0482ef72 = '\x01';
  }
  if (**(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8) < 2) {
LAB_020efba4:
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar4;
    }
    return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60);
  }
  lVar8 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,7);
  if (lVar8 == 0) {
LAB_020efbd8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined8 *)(lVar8 + 0x20) =
         *(undefined8 *)
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Gamepad>__;
    thunk_FUN_01f51358();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_034f92ac(*(long *)(*(long *)puVar4 + 0xb8) + 8,0);
    if (1 < *(uint *)(lVar8 + 0x18)) {
      *(undefined8 *)(lVar8 + 0x28) = uVar10;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar10);
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x30) =
             *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Finger>__;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
        puVar1 = (undefined8 *)
                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputControl>__
        ;
        if (*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) != '\0') {
          puVar1 = (undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputBindingComposite>__
          ;
        }
        if (3 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x38) = *puVar1;
          thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38));
          if (4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x40) =
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputActionMap>__
            ;
            thunk_FUN_01f51358();
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_0482fbde == '\0') {
              thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
              DAT_0482fbde = '\x01';
            }
            lVar11 = *(long *)puVar4;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar11 = *(long *)puVar4;
            }
            local_48 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x2c);
            local_58 = *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<RemoteInputPlayerConnection_Subscriber>__
            ;
            uStack_50 = 0xffffffffffffffff;
            uVar10 = FUN_0359ff90(&local_58,0);
            if (5 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x48) = uVar10;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar10);
              if (6 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x50) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
                thunk_FUN_01f51358();
                uVar10 = FUN_0340efe8(lVar8,0);
                FUN_021176a8(uVar10,0);
                goto LAB_020efba4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


