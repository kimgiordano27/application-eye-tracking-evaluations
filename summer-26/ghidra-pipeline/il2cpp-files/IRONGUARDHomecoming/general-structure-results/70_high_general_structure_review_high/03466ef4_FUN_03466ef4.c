/*
FUNCTION_NAME: FUN_03466ef4
ENTRY_POINT: 03466ef4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03466ef4(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_34;
  
  puVar2 = Method_Unity_VisualScripting_SetDictionaryItem_Set__;
  if ((DAT_0483298e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_GetCachedWriter__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetDictionaryItem_Set__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_SetType__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_TMPro_SetPropertyUtility_SetStruct<float>__);
    thunk_FUN_01efb3a4(Method_System_Net_ServicePoint_SetTcpKeepAlive__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_set_Stream__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__
                      );
    DAT_0483298e = 1;
  }
  plVar5 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)puVar2);
  puVar3 = Method_Sirenix_Serialization_SerializationNodeDataReader_set_Stream__;
  puVar2 = Method_System_Runtime_Serialization_SerializationInfo_SetType__;
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Runtime_Serialization_SerializationInfo_SetType__) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_03467014;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_System_Runtime_Serialization_SerializationInfo_SetType__,3)
    ;
LAB_03467014:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar3;
    }
    uVar11 = FUN_034b27d8(uVar7,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
    if ((uVar11 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 != (long *)0x0) {
        local_34 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
        uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,&local_34);
LAB_03467120:
        uVar9 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<float>__
                                  );
        FUN_03478cc0(uVar9,uVar7,0,0,plVar5,0);
        return uVar9;
      }
      goto LAB_034674c0;
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_034670d8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,3);
LAB_034670d8:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar3;
    }
    uVar11 = FUN_034b27d8(uVar7,**(undefined8 **)(lVar10 + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      uVar7 = FUN_0345e228(param_1);
      goto LAB_03467120;
    }
  }
  puVar2 = Method_Sirenix_Serialization_SerializationUtility_GetCachedWriter__;
  plVar5 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                               Method_Sirenix_Serialization_SerializationUtility_GetCachedWriter__
                                     );
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_034671c4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,2);
LAB_034671c4:
    lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar10 == 0) {
      lVar10 = *plVar5;
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_03467228;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,3);
LAB_03467228:
      (*(code *)*puVar6)(plVar5,uVar7,puVar6[1]);
    }
    lVar10 = *plVar5;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0346728c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,1);
LAB_0346728c:
    (*(code *)*puVar6)(plVar5,uVar7,puVar6[1]);
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_034674c0;
  FUN_03452658(*(long *)(param_1 + 0x38),1,param_2,1,0,0);
  lVar10 = FUN_035d6f50(0);
  if (lVar10 == 0) goto LAB_034674c0;
  uVar11 = FUN_034674c4();
  if (((uVar11 & 1) == 0) || (*(char *)(param_1 + 0x58) != '\0')) {
    plVar5 = *(long **)(param_1 + 0x50);
    if (param_2 == (long *)0x0) goto LAB_0346738c;
LAB_034672e0:
    bVar1 = *(byte *)(*(long *)Method_System_Net_ServicePoint_SetTcpKeepAlive__ + 0x130);
    if (((*(byte *)(*param_2 + 0x130) < bVar1) ||
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
         *(long *)Method_System_Net_ServicePoint_SetTcpKeepAlive__)) ||
       (iVar4 = FUN_0347ddf8(param_2,0), iVar4 == 0)) goto LAB_0346738c;
    if (plVar5 == (long *)0x0) goto LAB_034674c0;
    lVar10 = *plVar5;
    plVar8 = (long *)param_2[9];
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__
           ) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03467440;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,1);
LAB_03467440:
    uVar7 = (*(code *)*puVar6)(plVar5,param_2,plVar8,puVar6[1]);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x278))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x280));
    }
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,0);
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Runtime_Serialization_SerializationInfoEnumerator_get_Current__
                              );
    FUN_0347e9d0(uVar9,0,uVar7,0,0,param_2,0);
  }
  else {
    lVar10 = FUN_035d6f50(0);
    if (lVar10 == 0) goto LAB_034674c0;
    plVar5 = (long *)FUN_0346757c();
    if (param_2 != (long *)0x0) goto LAB_034672e0;
LAB_0346738c:
    if (plVar5 == (long *)0x0) goto LAB_034674c0;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__
           ) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_034673e4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0);
LAB_034673e4:
    uVar9 = (*(code *)*puVar6)(plVar5,param_2,puVar6[1]);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03452658(*(long *)(param_1 + 0x38),0,param_2,1,0,0);
    return uVar9;
  }
LAB_034674c0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


