/*
FUNCTION_NAME: Unity.Services.Qos.V2.Http.HttpClient.<MakeRequestAsync>d__2$$MoveNext
ENTRY_POINT: 0783ff9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Qos_V2_Http_HttpClient_<MakeRequestAsync>d__2__MoveNext(void)

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
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo)
  ;
  FUN_03a8a718(UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
  FUN_03a8a718(System_Func<TextInfo>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08491c28);
  FUN_03a8a718(PTR_DAT_08491c38);
  FUN_03a8a718(System_Func<Texture2D>_TypeInfo);
  FUN_03a8a718(TMPro_FastAction<Object>_TypeInfo);
                    /* try { // try from 07840004 to 07940007 has its CatchHandler @ 078404f8 */
  FUN_03a8a718(UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
                    /* try { // try from 07840008 to 07940017 has its CatchHandler @ 07840520 */
  FUN_03a8a718(System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo);
  FUN_03a8a718(System_Func<TooltipEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionCancelEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionRunEvent>_TypeInfo);
  FUN_03a8a718(System_Func<TransitionStartEvent>_TypeInfo);
                    /* try { // try from 07840044 to 07940053 has its CatchHandler @ 07840528 */
  FUN_03a8a718(System_Func<TypePathVisitor>_TypeInfo);
  FUN_03a8a718(System_Func<uint>_TypeInfo);
  FUN_03a8a718(PTR_DAT_084c82d0);
                    /* try { // try from 07840068 to 0794006f has its CatchHandler @ 0784051c */
  FUN_03a8a718(System_Func<X509CertificateCollection>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x4bb) = 1;
  puVar1 = System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>_TypeInfo;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
                    /* try { // try from 07840098 to 0794009f has its CatchHandler @ 0784057c */
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudPresets>_TypeInfo
                              );
    FUN_05f9f7c4(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudShadowResolution>_TypeInfo
                );
    puVar2 = Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo;
                    /* try { // try from 078400bc to 079400c3 has its CatchHandler @ 0784055c */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 078400c4 to 079400ef has its CatchHandler @ 0783edb4 */
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<X509CertificateCollection>_TypeInfo,0,
                 *(undefined8 *)
                  Normal_Realtime_Serialization_EnumSerializer<RealtimeAvatar_DeviceType>_TypeInfo);
                    /* try { // try from 078400f0 to 079400f7 has its CatchHandler @ 078406bc */
                    /* try { // try from 078400f8 to 0794010f has its CatchHandler @ 078406b4 */
    uVar13 = *(undefined8 *)UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 07840110 to 0794012b has its CatchHandler @ 078406b8 */
    uVar13 = FUN_0675ff58(uVar13,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TooltipEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    puVar3 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
                    /* try { // try from 07840134 to 0794014b has its CatchHandler @ 078406b0 */
    uVar13 = FUN_0675ff58(*(undefined8 *)
                           UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo
                          ,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionCancelEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
                    /* try { // try from 07840184 to 079401fb has its CatchHandler @ 0784073c */
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<uint>_TypeInfo,uVar13,*(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    uVar13 = FUN_0675ff58(*(undefined8 *)puVar3,0);
    FUN_05fa0540(lVar4,*(undefined8 *)System_Func<TypePathVisitor>_TypeInfo,uVar13,
                 *(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,lVar4);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_078392b4(lVar10);
    lVar4 = FUN_077e0ec4(uVar11,uVar13,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_078255a8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar11 = FUN_078255bc(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078255c4(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar4,0);
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
    uVar14 = *(undefined8 *)PTR_DAT_084c82d0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07840314;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07840314:
    lVar4 = (*(code *)*puVar6)(plVar12,uVar14,uVar13,uVar11,uVar5,uVar7,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar4,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
    uVar8 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd8650(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar13 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
  FUN_07819b30(uVar13,*(undefined8 *)(unaff_x19 + 0xe),0);
  uVar11 = thunk_FUN_03ac74bc(*(undefined8 *)System_Func<Texture2D>_TypeInfo);
  FUN_077ed56c(uVar11,uVar13,0);
  puVar2 = System_Collections_Generic_Dictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar11,*(undefined8 *)puVar2);
  return;
}


