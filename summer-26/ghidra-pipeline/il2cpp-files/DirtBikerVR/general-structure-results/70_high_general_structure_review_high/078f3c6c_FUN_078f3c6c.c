/*
FUNCTION_NAME: FUN_078f3c6c
ENTRY_POINT: 078f3c6c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_078f3c6c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_48;
  
  if ((DAT_08987b62 & 1) == 0) {
    FUN_03a8a718(System_Tuple<string,_string>_TypeInfo);
    FUN_03a8a718(System_Tuple<TextReader,_Memory<char>>_TypeInfo);
    FUN_03a8a718(System_Net_Http_Headers_TryParseListDelegate<string>_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo);
    FUN_03a8a718(System_Tuple<TextWriter,_char>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c28);
    FUN_03a8a718(PTR_DAT_08491c38);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo);
    FUN_03a8a718(System_Tuple<TextWriter,_string>_TypeInfo);
    FUN_03a8a718(System_Tuple<Vector3,_float>_TypeInfo);
    FUN_03a8a718(System_Tuple<Vector3,_Vector3>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084c82e0);
    FUN_03a8a718(System_Func<uint>_TypeInfo);
    FUN_03a8a718(System_Func<VectorImageRenderInfo>_TypeInfo);
    FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
    DAT_08987b62 = 1;
  }
  puVar3 = System_Net_Http_Headers_TryParseListDelegate<string>_TypeInfo;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    uVar13 = *(undefined8 *)System_Tuple<TextWriter,_char>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar13,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    puVar2 = Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo;
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<string>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar13,
                 *(undefined8 *)puVar1);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar2,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x10) = lVar4;
    thunk_FUN_03afed3c(param_1 + 0x10,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_078f3610(lVar10);
    lVar4 = FUN_078d7afc(uVar12,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_078efdc8(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar12 = FUN_078efddc(*(long *)(param_1 + 0xc),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078efde4(*(long *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),lVar4,0);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_084c82e0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_078f3f9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_03ac43c4(plVar11,*(long *)
                                   UnityEngine_InputSystem_Utilities_SavedStructState<Touch_GlobalState>_TypeInfo
                          ,0);
LAB_078f3f9c:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar14,uVar13,uVar12,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   UnityEngine_Playables_ScriptPlayable<CinemachineShotPlayable>_TypeInfo
                           );
    uVar8 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)
                          UnityEngine_Playables_ScriptPlayable<CinemachineMixer>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_48;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd4400(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)System_Tuple<string,_string>_TypeInfo);
      return;
    }
  }
  uVar13 = FUN_0587c704(&local_48,
                        *(undefined8 *)
                         UnityEngine_Playables_ScriptPlayable<BasicPlayableBehaviour>_TypeInfo);
  uVar12 = FUN_0471a930(uVar13,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)System_Tuple<TextWriter,_string>_TypeInfo);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Tuple<Vector3,_Vector3>_TypeInfo);
  FUN_05750c4c(uVar5,uVar13,uVar12,*(undefined8 *)System_Tuple<Vector3,_float>_TypeInfo);
  puVar1 = System_Tuple<TextReader,_Memory<char>>_TypeInfo;
  *param_1 = -2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  thunk_FUN_03afed3c(param_1 + 0x10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


