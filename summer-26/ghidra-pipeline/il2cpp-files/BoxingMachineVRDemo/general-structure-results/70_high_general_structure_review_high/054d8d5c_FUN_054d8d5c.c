/*
FUNCTION_NAME: FUN_054d8d5c
ENTRY_POINT: 054d8d5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3
*/


undefined8 FUN_054d8d5c(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long local_60;
  long lStack_58;
  long local_48;
  
  if ((DAT_06b7ebe7 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_TypeInfo);
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_TypeInfo
                );
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo);
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<char>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<DocumentSnapshot>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpWebResponse>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDiagnostics>_TypeInfo);
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IDiagnosticsFactory>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JConstructor>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JProperty>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo);
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_TypeInfo
                );
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo);
    FUN_02d6084c(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_TypeInfo
                );
    FUN_02d6084c(UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_TypeInfo);
    FUN_02d6084c(UnityEngine_AwaitableCompletionSource<Result<SerializableGuid>>_TypeInfo);
    FUN_02d6084c(UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>_TypeInfo);
    FUN_02d6084c(UnityEngine_AwaitableCompletionSource<XRResultStatus>_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06776098);
    FUN_02d6084c(PTR_DAT_067616f8);
    FUN_02d6084c(PTR_DAT_06767820);
    FUN_02d6084c(PTR_DAT_0676bc60);
    FUN_02d6084c(PTR_DAT_06768958);
    FUN_02d6084c(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06762980);
    FUN_02d6084c(PTR_DAT_06764580);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo);
    DAT_06b7ebe7 = 1;
  }
  puVar2 = PTR_DAT_0675e258;
  local_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_05021644(param_2,0);
  puVar3 = PTR_DAT_0676bc60;
  switch(uVar4) {
  case 3:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9b5c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9b5c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x28) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo))
      {
LAB_054da56c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(param_3);
      }
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fb14((char)lVar15 != '\0',0);
    break;
  case 4:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9bd0;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9bd0:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x88) + 0x40))
      goto LAB_054da56c;
      puVar8 = (ushort *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo))
      goto LAB_054da56c;
      puVar8 = (ushort *)(param_3 + 3);
      lVar10 = param_1;
    }
    uVar14 = (uint)*puVar8;
    goto LAB_054d9e14;
  case 5:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9c1c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9c1c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x30) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)System_Net_CommandStream__InitCommandPipeline((char)lVar15,0);
    break;
  case 6:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9c8c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9c8c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x18) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_TypeInfo
         )) goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fd04((char)lVar15,0);
    break;
  case 7:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9cfc;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9cfc:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x38) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_TypeInfo
         )) goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fc80((short)lVar15,0);
    break;
  case 8:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9d6c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9d6c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x40) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fd30((short)lVar15,0);
    break;
  case 9:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9ddc;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9ddc:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40))
      goto LAB_054da56c;
      puVar9 = (uint *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo
         )) goto LAB_054da56c;
      puVar9 = (uint *)(param_3 + 3);
      lVar10 = param_1;
    }
    uVar14 = *puVar9;
LAB_054d9e14:
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fcac(uVar14,0);
    break;
  case 10:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9e4c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9e4c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x50) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fd5c((int)lVar15,0);
    break;
  case 0xb:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto FUN_054d9ebc;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
FUN_054d9ebc:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x68) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fcd8(lVar15,0);
    break;
  case 0xc:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054d9f2c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054d9f2c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x70) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo
         )) goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fd88(lVar15,0);
    break;
  case 0xd:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto FUN_054d9f9c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
FUN_054d9f9c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x78) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fdb4((int)lVar15,0);
    break;
  case 0xe:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054da00c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054da00c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_AwaitableCompletionSource<Result<SerializableGuid>>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_AwaitableCompletionSource<Result<SerializableGuid>>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
      lVar10 = param_1;
    }
    lVar15 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566ff24(lVar15,0);
    break;
  case 0xf:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto FUN_054da07c;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
FUN_054da07c:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)PTR_DAT_06767820 + 0x40))
      goto LAB_054da56c;
      plVar12 = (long *)thunk_FUN_02d9d688();
      param_3 = plVar12 + 1;
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>_TypeInfo))
      goto LAB_054da56c;
      plVar12 = param_3 + 3;
      param_3 = param_3 + 4;
      lVar10 = param_1;
    }
    lVar15 = *plVar12;
    lVar16 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    plVar12 = (long *)FUN_0566fbb8(lVar15,lVar16,0);
    break;
  case 0x10:
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar10 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054da100;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054da100:
      param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if (param_3 == (long *)0x0) goto LAB_054da564;
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)PTR_DAT_067616f8 + 0x40))
      goto LAB_054da56c;
      param_3 = (long *)thunk_FUN_02d9d688();
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo))
      goto LAB_054da56c;
      param_3 = param_3 + 3;
    }
    local_48 = *param_3;
    if (*(int *)(*(long *)PTR_DAT_06776098 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_04f565a4(0);
    if (*(int *)(*(long *)PTR_DAT_067616f8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067616f8);
    }
    lVar10 = FUN_04fe9cb8(&local_48,
                          *(undefined8 *)
                           UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                          ,uVar5,0);
    goto LAB_054da33c;
  default:
    if (*(int *)(*(long *)PTR_DAT_0676bc60 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_054da57c();
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
    }
    uVar6 = FUN_0501ed54(param_2,uVar5,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_054da680();
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar6 = FUN_0501ed54(param_2,uVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar10 = 0;
        if ((param_4 & 1) == 0) {
          lVar10 = param_1;
        }
        if ((param_4 & 1) == 0) {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          lVar15 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_054da3ac;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d9a5d4(param_3,*(long *)
                                         System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,1);
LAB_054da3ac:
          param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
          if (param_3 == (long *)0x0) goto LAB_054da564;
          if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)PTR_DAT_06762980 + 0x40))
          goto LAB_054da56c;
          param_3 = (long *)thunk_FUN_02d9d688();
        }
        else {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          bVar1 = *(byte *)(*(long *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo
                           + 0x130);
          if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo))
          goto LAB_054da56c;
          param_3 = param_3 + 3;
          lVar10 = param_1;
        }
        lVar15 = *param_3;
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        plVar12 = (long *)FUN_05670020(lVar15,0);
        break;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_054da784();
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar6 = FUN_0501ed54(param_2,uVar5,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_054da888();
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
        }
        uVar6 = FUN_0501ed54(param_2,uVar5,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        if ((param_4 & 1) == 0) {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          lVar10 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_054da508;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d9a5d4(param_3,*(long *)
                                         System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,1);
LAB_054da508:
          param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
          if (param_3 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06764580 + 0x130);
            if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06764580)) goto LAB_054da56c;
          }
        }
        else {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          bVar1 = *(byte *)(*(long *)
                             UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_TypeInfo +
                           0x130);
          if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_TypeInfo))
          goto LAB_054da56c;
          param_3 = (long *)param_3[3];
        }
        if (param_3 == (long *)0x0) goto LAB_054da564;
        lVar10 = FUN_056c03e8(param_3,0x80000000,1,0);
      }
      else {
        if ((param_4 & 1) == 0) {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          lVar10 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_054da4a4;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d9a5d4(param_3,*(long *)
                                         System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,1);
LAB_054da4a4:
          param_3 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
          if (param_3 == (long *)0x0) goto LAB_054da564;
          if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)PTR_DAT_06768958 + 0x40))
          goto LAB_054da56c;
          plVar12 = (long *)thunk_FUN_02d9d688();
          param_3 = plVar12 + 1;
        }
        else {
          if (param_3 == (long *)0x0) goto LAB_054da564;
          bVar1 = *(byte *)(*(long *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_TypeInfo +
                           0x130);
          if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_TypeInfo))
          goto LAB_054da56c;
          plVar12 = param_3 + 3;
          param_3 = param_3 + 4;
        }
        local_60 = *plVar12;
        lStack_58 = *param_3;
        lVar10 = FUN_05001500(&local_60,0);
      }
    }
    else {
      if ((param_4 & 1) == 0) {
        if (param_3 == (long *)0x0) goto LAB_054da564;
        lVar10 = *param_3;
        uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_054da2bc;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02d9a5d4(param_3,*(long *)
                                       System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,1);
LAB_054da2bc:
        lVar10 = (*(code *)*puVar7)(param_3,puVar7[1]);
        if (lVar10 == 0) {
          lVar15 = 0;
        }
        else {
          uVar5 = *(undefined8 *)PTR_DAT_0675e1c0;
          lVar15 = thunk_FUN_02d9d438(lVar10,uVar5);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(lVar10,uVar5);
          }
        }
      }
      else {
        if (param_3 == (long *)0x0) goto LAB_054da564;
        bVar1 = *(byte *)(*(long *)UnityEngine_AwaitableCompletionSource<XRResultStatus>_TypeInfo +
                         0x130);
        if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_AwaitableCompletionSource<XRResultStatus>_TypeInfo))
        goto LAB_054da56c;
        lVar15 = param_3[3];
      }
      if (lVar15 == 0) {
        lVar10 = **(long **)(*(long *)(puVar2 + 0x90) + 0xb8);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar10 = FUN_04f8ba5c(lVar15,0);
      }
      if (param_1 == 0) goto LAB_054da564;
    }
LAB_054da33c:
    plVar11 = (long *)(param_1 + 0x58);
    *plVar11 = lVar10;
    goto LAB_054da41c;
  case 0x12:
    lVar10 = 0;
    if ((param_4 & 1) == 0) {
      lVar10 = param_1;
    }
    if ((param_4 & 1) == 0) {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      lVar15 = *param_3;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_054da1b0;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d9a5d4(param_3,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo
                            ,1);
LAB_054da1b0:
      plVar12 = (long *)(*(code *)*puVar7)(param_3,puVar7[1]);
      if ((plVar12 != (long *)0x0) && (*plVar12 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar12,*(long *)(puVar2 + 0x90));
      }
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_054da564;
      bVar1 = *(byte *)(*(long *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo +
                       0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo))
      goto LAB_054da56c;
      plVar12 = (long *)param_3[3];
      lVar10 = param_1;
    }
  }
  if (lVar10 == 0) {
LAB_054da564:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar11 = (long *)(lVar10 + 0x58);
  *plVar11 = (long)plVar12;
LAB_054da41c:
  thunk_FUN_02dd37b4(plVar11);
  *(undefined4 *)(param_1 + 0x34) = 3;
  return 1;
}


