/*
FUNCTION_NAME: FUN_07842bb0
ENTRY_POINT: 07842bb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_07842bb0(int *param_1)

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
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_48;
  
  if ((DAT_089874c7 & 1) == 0) {
    FUN_03a8a718(System_Func<Nullable<UcgQosServer>,_bool>_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_DataNode<int>_TypeInfo);
    FUN_03a8a718(Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo);
    FUN_03a8a718(Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    FUN_03a8a718(System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
    FUN_03a8a718(System_Func<TextInfo>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c28);
    FUN_03a8a718(PTR_DAT_08491c38);
    FUN_03a8a718(System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
    FUN_03a8a718(System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
    FUN_03a8a718(System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
    FUN_03a8a718(TMPro_FastAction<Object>_TypeInfo);
    FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    FUN_03a8a718(System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo);
    FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084c7fc0);
    FUN_03a8a718(System_Func<TransitionCancelEvent>_TypeInfo);
    FUN_03a8a718(System_Func<TransitionRunEvent>_TypeInfo);
    FUN_03a8a718(System_Func<TransitionStartEvent>_TypeInfo);
    FUN_03a8a718(System_Func<TypePathVisitor>_TypeInfo);
    FUN_03a8a718(System_Func<uint>_TypeInfo);
    FUN_03a8a718(System_Func<VectorImageRenderInfo>_TypeInfo);
    FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
    DAT_089874c7 = 1;
  }
  puVar1 = Unity_Properties_ContainerPropertyBag<Vector3Int>_TypeInfo;
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
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
    uVar13 = *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar13,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    puVar3 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo
                          ,0);
                    /* try { // try from 07842e18 to 07942ebb has its CatchHandler @ 07842e18
                       catch() { ... } // from try @ 07842e18 with catch @ 07842e18
                       catch() { ... } // from try @ 078430ac with catch @ 07842e18
                       catch() { ... } // from try @ 078430e4 with catch @ 07842e18
                       catch() { ... } // from try @ 07843140 with catch @ 07842e18
                       catch() { ... } // from try @ 07843164 with catch @ 07842e18 */
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionCancelEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
                    /* try { // try from 07842ebc to 07942ebf has its CatchHandler @ 078430ec */
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
                    /* try { // try from 07842ecc to 07942f0b has its CatchHandler @ 07843120 */
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TypePathVisitor>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    *(long *)(param_1 + 0xe) = lVar4;
    thunk_FUN_03afed3c(param_1 + 0xe,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar13 = FUN_078392b4(lVar10);
    lVar4 = FUN_077e0ec4(uVar11,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_078296a4(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = FUN_078296b8(*(long *)(param_1 + 0xc),0);
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078296c0(*(long *)(param_1 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar4,0);
    uVar7 = 10;
    if ((*(ulong *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar7 = (undefined4)(*(ulong *)(lVar4 + 0x18) >> 0x20);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(10);
    }
    lVar4 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_084c7fc0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07842ff8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07842ff8:
    lVar4 = (*(code *)*puVar6)(plVar12,uVar14,uVar13,uVar11,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_48 = FUN_058b71ec(lVar4,*(undefined8 *)
                                   System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                           );
    uVar8 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      thunk_FUN_03afed3c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd9400(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)System_Func<Nullable<UcgQosServer>,_bool>_TypeInfo);
      return;
    }
  }
  uVar13 = FUN_0587c704(&local_48,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
  uVar11 = FUN_04718284(uVar13,*(undefined8 *)(param_1 + 0xe),
                        *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
  FUN_0575071c(uVar5,uVar13,uVar11,
               *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
  puVar2 = System_Runtime_Serialization_DataNode<int>_TypeInfo;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03afed3c(param_1 + 0xe,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


