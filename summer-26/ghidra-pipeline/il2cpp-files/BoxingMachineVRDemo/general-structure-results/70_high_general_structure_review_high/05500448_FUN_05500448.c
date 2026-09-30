/*
FUNCTION_NAME: FUN_05500448
ENTRY_POINT: 05500448
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


void FUN_05500448(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
                    /* try { // try from 0550044c to 05600453 has its CatchHandler @ 05500d74 */
                    /* try { // try from 05500468 to 05600473 has its CatchHandler @ 05500d68 */
  if ((DAT_06b7edb3 & 1) == 0) {
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_TypeInfo);
                    /* try { // try from 05500480 to 05600483 has its CatchHandler @ 05500d70 */
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
    FUN_02d6084c(
                System_Collections_Generic_Dictionary<CompositionLayer,_CompositionLayerManager_LayerInfo>_TypeInfo
                );
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo);
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo);
    FUN_02d6084c(Firebase_Firestore_Converters_DictionaryConverter<bool>_TypeInfo);
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
    FUN_02d6084c(PTR_DAT_0676bc60);
    FUN_02d6084c(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
    DAT_06b7edb3 = 1;
  }
  puVar4 = System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo;
  if (param_2 == (long *)0x0) {
LAB_05500f50:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_055006c4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02d9a5d4(param_2,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,0);
LAB_055006c4:
  uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
  puVar2 = PTR_DAT_0675e258;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  uVar5 = FUN_05021644(uVar7,0);
  puVar3 = PTR_DAT_0676bc60;
  switch(uVar5) {
  case 3:
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo))
    break;
    uVar9 = (uint)*(byte *)(param_2 + 3);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x188);
    uVar7 = *(undefined8 *)(*param_1 + 400);
    goto LAB_05500a94;
  case 4:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo)) break;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x268);
    uVar7 = *(undefined8 *)(*param_1 + 0x270);
    goto System_Xml_Schema_XsdDuration___ctor;
  case 5:
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo))
    break;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x228);
    uVar7 = *(undefined8 *)(*param_1 + 0x230);
    goto LAB_055009bc;
  case 6:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_TypeInfo
       )) break;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x218);
    uVar7 = *(undefined8 *)(*param_1 + 0x220);
LAB_055009bc:
    uVar9 = (uint)*(byte *)(param_2 + 3);
    goto LAB_05500a94;
  case 7:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_TypeInfo
       )) break;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x208);
    uVar7 = *(undefined8 *)(*param_1 + 0x210);
    goto System_Xml_Schema_XsdDuration___ctor;
  case 8:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_TypeInfo))
    break;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
    uVar7 = *(undefined8 *)(*param_1 + 0x260);
System_Xml_Schema_XsdDuration___ctor:
    uVar9 = (uint)*(ushort *)(param_2 + 3);
LAB_05500a94:
                    /* WARNING: Could not recover jumptable at 0x05500aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar9,uVar7);
    return;
  case 9:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo))
    {
      uVar9 = *(uint *)(param_2 + 3);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1c8);
      uVar7 = *(undefined8 *)(*param_1 + 0x1d0);
      goto LAB_05500a94;
    }
    break;
  case 10:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo)) {
      uVar9 = *(uint *)(param_2 + 3);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x238);
      uVar7 = *(undefined8 *)(*param_1 + 0x240);
      goto LAB_05500a94;
    }
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_TypeInfo)) {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1d8);
      uVar7 = *(undefined8 *)(*param_1 + 0x1e0);
LAB_05500c18:
                    /* WARNING: Could not recover jumptable at 0x05500c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,lVar10,uVar7);
      return;
    }
    break;
  case 0xc:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_TypeInfo))
    {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x248);
      uVar7 = *(undefined8 *)(*param_1 + 0x250);
      goto LAB_05500c18;
    }
    break;
  case 0xd:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JToken>_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x05500840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e8))((int)param_2[3],param_1,*(undefined8 *)(*param_1 + 0x1f0));
      return;
    }
    break;
  case 0xe:
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_AwaitableCompletionSource<Result<SerializableGuid>>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_AwaitableCompletionSource<Result<SerializableGuid>>_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x05500898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_2[3],param_1,*(undefined8 *)(*param_1 + 0x1c0));
      return;
    }
    break;
  case 0xf:
    bVar1 = *(byte *)(*(long *)UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x055008f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a8))
                (param_1,param_2[3],param_2[4],*(undefined8 *)(*param_1 + 0x1b0));
      return;
    }
    break;
  case 0x10:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_TypeInfo)) {
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x198);
      uVar7 = *(undefined8 *)(*param_1 + 0x1a0);
      goto LAB_05500c18;
    }
    break;
  default:
    if (*(int *)(*(long *)PTR_DAT_0676bc60 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_054da57c(0);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
    }
    uVar11 = FUN_0501ed54(uVar7,uVar8,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_054cd670(0);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_0501ed54(uVar7,uVar8,0);
      if ((uVar11 & 1) != 0) {
        lVar10 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05500de8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar4,1);
LAB_05500de8:
        lVar10 = (*(code *)*puVar6)(param_2,puVar6[1]);
        if (lVar10 != 0) {
          FUN_054ffb18(param_1,lVar10);
          return;
        }
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_054da680(0);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_0501ed54(uVar7,uVar8,0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar8 = FUN_054da784(0);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
        }
        uVar11 = FUN_0501ed54(uVar7,uVar8,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar8 = FUN_054da888(0);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
          }
          uVar11 = FUN_0501ed54(uVar7,uVar8,0);
          if ((uVar11 & 1) == 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar8 = FUN_054db9e4(0);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
            }
            uVar11 = FUN_0501ed54(uVar7,uVar8,0);
            if ((uVar11 & 1) == 0) {
              uVar7 = FUN_054ffa10(uVar11,uVar7);
              uVar8 = thunk_FUN_02dc61f4(
                                        System_Collections_Generic_Dictionary<ControlInput,_ValueInput>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar7,uVar8);
            }
            bVar1 = *(byte *)(*(long *)
                               Firebase_Firestore_Converters_DictionaryConverter<bool>_TypeInfo +
                             0x130);
            if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
               (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Firebase_Firestore_Converters_DictionaryConverter<bool>_TypeInfo)) {
              lVar10 = param_2[3];
              UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x278);
              uVar7 = *(undefined8 *)(*param_1 + 0x280);
              goto LAB_05500c18;
            }
          }
          else {
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_TypeInfo +
                             0x130);
            if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
               (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_AwaitableCompletionSource<Result<ARAnchor>>_TypeInfo)) {
              FUN_05500400(param_1,param_2[3]);
              return;
            }
          }
        }
        else {
          bVar1 = *(byte *)(*(long *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_TypeInfo +
                           0x130);
          if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_TypeInfo)) {
            FUN_055003b8(param_1,param_2[3],param_2[4]);
            return;
          }
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo +
                         0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_TypeInfo)) {
          FUN_05500330(param_1,param_2[3]);
          return;
        }
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)UnityEngine_AwaitableCompletionSource<XRResultStatus>_TypeInfo +
                       0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)UnityEngine_AwaitableCompletionSource<XRResultStatus>_TypeInfo)) {
        lVar10 = param_2[3];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x1f8);
        uVar7 = *(undefined8 *)(*param_1 + 0x200);
        goto LAB_05500c18;
      }
    }
    break;
  case 0x12:
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo)) {
      param_1 = (long *)param_1[2];
      if (param_1 == (long *)0x0) goto LAB_05500f50;
      lVar10 = param_2[3];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x358);
      uVar7 = *(undefined8 *)(*param_1 + 0x360);
      goto LAB_05500c18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88(param_2);
}


