/*
FUNCTION_NAME: FUN_034fe6dc
ENTRY_POINT: 034fe6dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_034fe6dc(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_04832efb & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_GetEvent__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    DAT_04832efb = 1;
  }
  puVar6 = Method_System_RuntimeType_GetEvent__;
  if (((param_1 == 0) && (param_2 < 0x13)) && ((1 << (ulong)(param_2 & 0x1f) & 0x40003U) != 0)) {
    param_1 = 0;
    goto switchD_034fe810_caseD_1;
  }
  plVar4 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)Method_System_RuntimeType_GetEvent__);
  if (plVar4 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
    uVar7 = thunk_FUN_01f117cc();
    puVar6 = Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectString__
    ;
    goto LAB_034fef2c;
  }
  switch(param_2) {
  case 0:
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
    uVar7 = thunk_FUN_01f117cc();
    puVar6 = Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRInputSubsystem>__;
    goto LAB_034fef2c;
  case 1:
    goto switchD_034fe810_caseD_1;
  case 2:
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToUInt64__);
    uVar7 = thunk_FUN_01f117cc();
    puVar6 = Method_UnityEngine_XR_Management_XRLoaderHelper_DestroySubsystem<XRDisplaySubsystem>__;
LAB_034fef2c:
    uVar8 = thunk_FUN_01efb3a4(puVar6);
    FUN_03568188(uVar7,uVar8,0);
LAB_034fef40:
    uVar8 = thunk_FUN_01efb3a4(
                              Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectWithMap__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  case 3:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_034fec3c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,1);
LAB_034fec3c:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    local_58._0_8_ = CONCAT71(local_58._1_7_,uVar2) & 0xffffffffffffff01;
    puVar5 = (undefined8 *)
             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    goto LAB_034feed0;
  case 4:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_034fed88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,2);
LAB_034fed88:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
    break;
  case 5:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_034fedb4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,3);
LAB_034fedb4:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__;
    goto LAB_034fedcc;
  case 6:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_034fecc8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,4);
LAB_034fecc8:
    uVar2 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__;
LAB_034fedcc:
    uVar7 = *puVar5;
    local_58[0] = uVar2;
    goto LAB_034feedc;
  case 7:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_034fede8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,5);
LAB_034fede8:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
    break;
  case 8:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_034fecf4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,6);
LAB_034fecf4:
    uVar3 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
    break;
  case 9:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_034fee1c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,7);
LAB_034fee1c:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    goto LAB_034fee60;
  case 10:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_034fee48;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,8);
LAB_034fee48:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_034fee60:
    uVar7 = *puVar5;
    goto LAB_034feedc;
  case 0xb:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_034fec70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,9);
LAB_034fec70:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
    goto LAB_034fed38;
  case 0xc:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_034fed20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,10);
LAB_034fed20:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
    goto LAB_034fed38;
  case 0xd:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_034fee7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0xb);
LAB_034fee7c:
    local_58._0_4_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)
             Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    goto LAB_034fee98;
  case 0xe:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
          goto LAB_034fec0c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0xc);
LAB_034fec0c:
    local_58._0_8_ = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
LAB_034fee98:
    uVar7 = *puVar5;
    goto LAB_034feedc;
  case 0xf:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_034feeb4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0xd);
LAB_034feeb4:
    local_58 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Numerics_BigNumber_FormatBigInteger__;
LAB_034feed0:
    uVar7 = *puVar5;
    goto LAB_034feedc;
  case 0x10:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_034fec9c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0xe);
LAB_034fec9c:
    uVar7 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    puVar5 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
LAB_034fed38:
    local_58._0_8_ = uVar7;
    uVar7 = *puVar5;
    goto LAB_034feedc;
  default:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_System_Runtime_Serialization_Formatters_Binary___BinaryParser_ReadObjectWithMapTyped__
                              );
    FUN_034f6754(uVar7,uVar8);
    goto LAB_034fef40;
  case 0x12:
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_034fed54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar6,0xf);
LAB_034fed54:
    lVar9 = (*(code *)*puVar5)(plVar4,param_3,puVar5[1]);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return lVar9;
    }
    goto LAB_034fefc8;
  }
  uVar7 = *puVar5;
  local_58._0_2_ = uVar3;
LAB_034feedc:
  param_1 = thunk_FUN_01f113fc(uVar7,local_58);
switchD_034fe810_caseD_1:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
LAB_034fefc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


