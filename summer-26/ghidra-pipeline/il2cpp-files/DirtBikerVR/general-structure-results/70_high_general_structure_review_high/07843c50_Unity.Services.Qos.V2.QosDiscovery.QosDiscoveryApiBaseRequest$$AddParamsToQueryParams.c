/*
FUNCTION_NAME: Unity.Services.Qos.V2.QosDiscovery.QosDiscoveryApiBaseRequest$$AddParamsToQueryParams
ENTRY_POINT: 07843c50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Qos_V2_QosDiscovery_QosDiscoveryApiBaseRequest__AddParamsToQueryParams
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_05f9f7c4(param_1,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
              );
                    /* try { // try from 07843c68 to 07943c6b has its CatchHandler @ 07843f0c */
  uVar11 = *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 07843c84 to 07943ca3 has its CatchHandler @ 07843e9c */
    thunk_FUN_03ae8be4();
  }
  uVar11 = FUN_0675ff58(uVar11,0);
  puVar1 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 07843cb0 to 07943cb7 has its CatchHandler @ 07843e48 */
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,uVar11,
               *(undefined8 *)
                Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
  uVar11 = FUN_0675ff58(*(undefined8 *)
                         UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
  puVar2 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
                    /* try { // try from 07843cfc to 07943d37 has its CatchHandler @ 07843f0c */
  uVar11 = FUN_0675ff58(*(undefined8 *)
                         UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo
                        ,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TransitionCancelEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
                    /* try { // try from 07843d38 to 07943dc7 has its CatchHandler @ 07843170 */
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<VectorImageRenderInfo>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<uint>_TypeInfo,uVar11,*(undefined8 *)puVar1);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
  uVar11 = FUN_0675ff58(*(undefined8 *)puVar2,0);
                    /* try { // try from 07843dc8 to 07943dcb has its CatchHandler @ 07843ebc */
                    /* try { // try from 07843dcc to 07943dd3 has its CatchHandler @ 07843170 */
                    /* try { // try from 07843dd4 to 07943dd7 has its CatchHandler @ 07843ea0 */
                    /* try { // try from 07843dd8 to 07943ddb has its CatchHandler @ 07843f08 */
                    /* try { // try from 07843ddc to 07943ddf has its CatchHandler @ 07843f0c */
                    /* try { // try from 07843de0 to 07943de3 has its CatchHandler @ 07843e88 */
  FUN_05fa0540(param_1,*(undefined8 *)System_Func<TypePathVisitor>_TypeInfo,uVar11,
               *(undefined8 *)puVar1);
                    /* try { // try from 07843de4 to 07943deb has its CatchHandler @ 07843170 */
  *(long *)(unaff_x19 + 0xe) = param_1;
                    /* try { // try from 07843dec to 07943def has its CatchHandler @ 07843eb8 */
                    /* try { // try from 07843df0 to 07943df3 has its CatchHandler @ 07843eb4 */
  thunk_FUN_03afed3c(unaff_x19 + 0xe,param_1);
                    /* try { // try from 07843df4 to 07943df7 has its CatchHandler @ 07843ec0 */
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 07843df8 to 07943dfb has its CatchHandler @ 07843eb0 */
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
                    /* try { // try from 07843dfc to 07943dff has its CatchHandler @ 07843e80 */
                    /* try { // try from 07843e00 to 07943e03 has its CatchHandler @ 07843e7c */
  uVar11 = FUN_078392b4();
                    /* try { // try from 07843e04 to 07943e07 has its CatchHandler @ 07843ea8 */
                    /* try { // try from 07843e08 to 07943e0b has its CatchHandler @ 07843e70 */
                    /* try { // try from 07843e0c to 07943e0f has its CatchHandler @ 07843e6c */
                    /* try { // try from 07843e10 to 07943e13 has its CatchHandler @ 07843e64 */
  lVar3 = FUN_077e0ec4(uVar9,uVar11,0);
                    /* try { // try from 07843e14 to 07943e17 has its CatchHandler @ 07843e60 */
                    /* try { // try from 07843e18 to 07943e1b has its CatchHandler @ 07843e58 */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 07843e1c to 07943e1f has its CatchHandler @ 07843ea4 */
                    /* try { // try from 07843e20 to 07943e23 has its CatchHandler @ 07843e98 */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 07843e24 to 07943e27 has its CatchHandler @ 07843e94 */
  plVar10 = *(long **)(unaff_x20 + 0x10);
                    /* try { // try from 07843e28 to 07943e2b has its CatchHandler @ 07843e90 */
                    /* try { // try from 07843e2c to 07943e2f has its CatchHandler @ 07843e8c */
                    /* catch() { ... } // from try @ 07843594 with catch @ 07843e30
                       try { // try from 07843e30 to 07943edb has its CatchHandler @ 07843170 */
  uVar11 = FUN_0782ac58(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
                    /* catch() { ... } // from try @ 07843530 with catch @ 07843e34 */
                    /* catch() { ... } // from try @ 07843a24 with catch @ 07843e38 */
                    /* catch() { ... } // from try @ 07843abc with catch @ 07843e3c */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 078439ac with catch @ 07843e40 */
                    /* catch() { ... } // from try @ 07843898 with catch @ 07843e44 */
  uVar9 = FUN_0782ac6c(*(long *)(unaff_x19 + 0xc),0);
                    /* catch() { ... } // from try @ 07843cb0 with catch @ 07843e48 */
                    /* catch() { ... } // from try @ 07843c4c with catch @ 07843e4c */
                    /* catch() { ... } // from try @ 0784374c with catch @ 07843e50 */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 07843568 with catch @ 07843e54 */
                    /* catch() { ... } // from try @ 07843e18 with catch @ 07843e58 */
                    /* catch() { ... } // from try @ 07843ab0 with catch @ 07843e5c */
                    /* catch() { ... } // from try @ 07843e14 with catch @ 07843e60 */
  uVar4 = FUN_0782ac74(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
                    /* catch() { ... } // from try @ 07843e10 with catch @ 07843e64 */
                    /* catch() { ... } // from try @ 078439a0 with catch @ 07843e68 */
                    /* catch() { ... } // from try @ 07843e0c with catch @ 07843e6c */
  uVar6 = 10;
                    /* catch() { ... } // from try @ 07843e08 with catch @ 07843e70 */
                    /* catch() { ... } // from try @ 07843914 with catch @ 07843e74 */
  if ((*(ulong *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar6 = (undefined4)(*(ulong *)(lVar3 + 0x18) >> 0x20);
  }
                    /* catch() { ... } // from try @ 0784388c with catch @ 07843e78 */
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
                    /* catch() { ... } // from try @ 07843e00 with catch @ 07843e7c */
                    /* catch() { ... } // from try @ 07843dfc with catch @ 07843e80 */
                    /* catch() { ... } // from try @ 07843bb4 with catch @ 07843e84 */
                    /* catch() { ... } // from try @ 07843de0 with catch @ 07843e88 */
                    /* catch() { ... } // from try @ 07843a68 with catch @ 07843e8c
                       catch() { ... } // from try @ 07843e2c with catch @ 07843e8c */
  lVar3 = *plVar10;
                    /* catch() { ... } // from try @ 07843b00 with catch @ 07843e90
                       catch() { ... } // from try @ 07843e28 with catch @ 07843e90 */
                    /* catch() { ... } // from try @ 078439f0 with catch @ 07843e94
                       catch() { ... } // from try @ 07843e24 with catch @ 07843e94 */
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 078438dc with catch @ 07843e98
                       catch() { ... } // from try @ 07843e20 with catch @ 07843e98 */
  uVar12 = *(undefined8 *)PTR_DAT_084c7fc0;
                    /* catch() { ... } // from try @ 07843c84 with catch @ 07843e9c */
                    /* catch() { ... } // from try @ 07843dd4 with catch @ 07843ea0 */
  if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 07843840 with catch @ 07843ea4
                       catch() { ... } // from try @ 07843e1c with catch @ 07843ea4 */
                    /* catch() { ... } // from try @ 07843958 with catch @ 07843ea8
                       catch() { ... } // from try @ 07843e04 with catch @ 07843ea8 */
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 07843764 with catch @ 07843eac */
                    /* catch() { ... } // from try @ 07843c04 with catch @ 07843eb0
                       catch() { ... } // from try @ 07843df8 with catch @ 07843eb0 */
                    /* catch() { ... } // from try @ 078434e8 with catch @ 07843eb4
                       catch() { ... } // from try @ 07843df0 with catch @ 07843eb4 */
      if (*(long *)(piVar8 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07843ef8;
      }
                    /* catch() { ... } // from try @ 07843434 with catch @ 07843eb8
                       catch() { ... } // from try @ 07843498 with catch @ 07843eb8
                       catch() { ... } // from try @ 07843dec with catch @ 07843eb8 */
      uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 0784371c with catch @ 07843ebc
                       catch() { ... } // from try @ 07843dc8 with catch @ 07843ebc */
      piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 0784354c with catch @ 07843ec0
                       catch() { ... } // from try @ 078435e0 with catch @ 07843ec0
                       catch() { ... } // from try @ 07843df4 with catch @ 07843ec0 */
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07843ef8:
                    /* catch() { ... } // from try @ 07843edc with catch @ 07843ef8 */
                    /* try { // try from 07843efc to 07943f03 has its CatchHandler @ 07843f48 */
                    /* try { // try from 07843f04 to 07943f27 has its CatchHandler @ 07843170 */
                    /* catch() { ... } // from try @ 07843b70 with catch @ 07843f08
                       catch() { ... } // from try @ 07843dd8 with catch @ 07843f08 */
                    /* catch() { ... } // from try @ 07843c68 with catch @ 07843f0c
                       catch() { ... } // from try @ 07843cfc with catch @ 07843f0c
                       catch() { ... } // from try @ 07843ddc with catch @ 07843f0c */
  lVar3 = (*(code *)*puVar5)(plVar10,uVar12,uVar11,uVar9,uVar4,uVar6,puVar5[1]);
  if (lVar3 != 0) {
                    /* try { // try from 07843f28 to 07943f2b has its CatchHandler @ 07843f34 */
    in_stack_00000018 =
         FUN_058b71ec(lVar3,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
                    /* catch() { ... } // from try @ 07843f28 with catch @ 07843f34 */
                    /* try { // try from 07843f38 to 07943f3f has its CatchHandler @ 07843f48 */
                    /* try { // try from 07843f40 to 07943f4b has its CatchHandler @ 07843170 */
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd9890(unaff_x19 + 2,&stack0x00000018);
    }
    else {
                    /* catch() { ... } // from try @ 07843efc with catch @ 07843f48
                       catch() { ... } // from try @ 07843f38 with catch @ 07843f48 */
      uVar11 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
      uVar9 = FUN_04718284(uVar11,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo)
      ;
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      FUN_0575071c(uVar4,uVar11,uVar9,
                   *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      puVar1 = System_Runtime_Serialization_DataNode<int>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


