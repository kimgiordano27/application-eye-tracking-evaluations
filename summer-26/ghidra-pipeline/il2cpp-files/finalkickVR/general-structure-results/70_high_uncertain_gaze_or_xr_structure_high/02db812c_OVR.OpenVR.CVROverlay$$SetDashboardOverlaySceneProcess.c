/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetDashboardOverlaySceneProcess
ENTRY_POINT: 02db812c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_14;functionality_gaze_retrieval_or_extraction
*/


byte OVR_OpenVR_CVROverlay__SetDashboardOverlaySceneProcess(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar8;
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 *pTVar9;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack0000000000000034;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  int iStack000000000000007c;
  int iStack0000000000000094;
  int iStack00000000000000ac;
  int iStack00000000000000c4;
  int iStack00000000000000dc;
  undefined4 uStack00000000000000f4;
  undefined4 uStack0000000000000104;
  undefined8 uStack000000000000011c;
  undefined8 uStack0000000000000124;
  float fStack000000000000013c;
  float fStack0000000000000154;
  float fStack000000000000016c;
  float fStack0000000000000184;
  float fStack000000000000019c;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_000001f4;
  undefined4 in_stack_000001f8;
  undefined4 in_stack_000001fc;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined4 in_stack_0000022c;
  undefined4 in_stack_00000250;
  undefined4 in_stack_00000254;
  undefined4 in_stack_00000258;
  undefined4 in_stack_0000025c;
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  undefined4 in_stack_00000288;
  undefined4 in_stack_0000028c;
  undefined4 in_stack_000002b0;
  undefined4 in_stack_000002b4;
  undefined4 in_stack_000002b8;
  undefined4 in_stack_000002bc;
  undefined4 in_stack_000002e0;
  undefined4 in_stack_000002e4;
  undefined4 in_stack_000002e8;
  undefined4 in_stack_000002ec;
  undefined4 in_stack_00000310;
  undefined4 in_stack_00000314;
  undefined4 in_stack_00000318;
  undefined4 in_stack_0000031c;
  undefined4 in_stack_00000340;
  undefined4 in_stack_00000344;
  undefined4 in_stack_00000348;
  undefined4 in_stack_0000034c;
  undefined4 in_stack_00000370;
  undefined4 in_stack_00000374;
  undefined4 in_stack_00000378;
  undefined4 in_stack_0000037c;
  undefined4 in_stack_000003a0;
  undefined4 in_stack_000003a4;
  undefined4 in_stack_000003a8;
  undefined4 in_stack_000003ac;
  undefined4 in_stack_000003d0;
  undefined4 in_stack_000003d4;
  undefined4 in_stack_000003d8;
  undefined4 in_stack_000003dc;
  undefined4 in_stack_00000400;
  undefined4 in_stack_00000404;
  undefined4 in_stack_00000408;
  undefined4 in_stack_0000040c;
  undefined4 in_stack_00000430;
  undefined4 in_stack_00000434;
  undefined4 in_stack_00000438;
  undefined4 in_stack_0000043c;
  undefined4 in_stack_00000460;
  undefined4 in_stack_00000464;
  undefined4 in_stack_00000468;
  undefined4 in_stack_0000046c;
  undefined4 in_stack_00000490;
  undefined4 in_stack_00000494;
  undefined4 in_stack_00000498;
  undefined4 in_stack_0000049c;
  undefined4 in_stack_000004c0;
  undefined4 in_stack_000004c4;
  undefined4 in_stack_000004c8;
  undefined4 in_stack_000004cc;
  undefined4 in_stack_000004f0;
  undefined4 in_stack_000004f4;
  undefined4 in_stack_000004f8;
  undefined4 in_stack_000004fc;
  undefined4 in_stack_00000520;
  undefined4 in_stack_00000524;
  undefined4 in_stack_00000528;
  undefined4 in_stack_0000052c;
  undefined4 in_stack_00000550;
  undefined4 in_stack_00000554;
  undefined4 in_stack_00000558;
  undefined4 in_stack_0000055c;
  undefined4 in_stack_00000580;
  undefined4 in_stack_00000584;
  undefined4 in_stack_00000588;
  undefined4 in_stack_0000058c;
  undefined4 in_stack_000005b0;
  undefined4 in_stack_000005b4;
  undefined4 in_stack_000005b8;
  undefined4 in_stack_000005bc;
  undefined4 in_stack_000005e0;
  undefined4 in_stack_000005e4;
  undefined4 in_stack_000005e8;
  undefined4 in_stack_000005ec;
  undefined4 in_stack_00000610;
  undefined4 in_stack_00000614;
  undefined4 in_stack_00000618;
  undefined4 in_stack_0000061c;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x438));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
            );
  OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA::s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  uVar2 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  if ((*(int *)(unaff_x29 + -0x24) == 3) &&
     (*(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -8),
     *(int *)(unaff_x29 + -0x28) == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    *(undefined4 *)(unaff_x29 + -8) = 0xffffffff;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
  *(undefined8 *)(unaff_x29 + -0x38) = *puVar4;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x38),0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02db910c;
  }
  *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -8);
  *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0xc);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
  uStack0000000000000034 = *(undefined4 *)(unaff_x29 + -0x40);
  uVar2 = *(undefined4 *)(unaff_x29 + -0x44);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar2 = OVRP_1_44_0_ovrp_GetHandState_m3CF995811315C6E1334DB59C7DC39C1A67A64682
                    (uStack0000000000000034,uVar2,lVar5 + 0x80,0);
  *(undefined4 *)(unaff_x29 + -0x48) = uVar2;
  if (*(int *)(unaff_x29 + -0x48) != 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
    goto LAB_02db910c;
  }
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(*(long *)(unaff_x29 + -0x50) + 0x20);
  if (*(long *)(unaff_x29 + -0x58) == 0) {
LAB_02db82d0:
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x18);
    uVar3 = SZArrayNew(*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s16__,0x18
                      );
    *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
    *(undefined8 *)(*(long *)(unaff_x29 + -0x70) + 0x20) = *(undefined8 *)(unaff_x29 + -0x78);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -0x70) + 0x20),*(void **)(unaff_x29 + -0x78));
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(*(long *)(unaff_x29 + -0x60) + 0x20);
    NullCheck(*(void **)(unaff_x29 + -0x68));
    if ((int)*(undefined8 *)(*(long *)(unaff_x29 + -0x68) + 0x18) != 0x18) goto LAB_02db82d0;
  }
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(*(long *)(unaff_x29 + -0x80) + 0x30);
  if (*(long *)(unaff_x29 + -0x88) == 0) {
LAB_02db835c:
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x18);
    uVar3 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
                       ,5);
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar3;
    *(undefined8 *)(*(long *)(unaff_x29 + -0xa0) + 0x30) = *(undefined8 *)(unaff_x29 + -0xa8);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -0xa0) + 0x30),*(void **)(unaff_x29 + -0xa8));
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -0x90) + 0x30);
    NullCheck(*(void **)(unaff_x29 + -0x98));
    if ((int)*(undefined8 *)(*(long *)(unaff_x29 + -0x98) + 0x18) != 5) goto LAB_02db835c;
  }
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(*(long *)(unaff_x29 + -0xb0) + 0x60);
  if (*(long *)(unaff_x29 + -0xb8) == 0) {
LAB_02db83e8:
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x18);
    uVar3 = SZArrayNew(*(Il2CppClass **)
                        Field_<PrivateImplementationDetails>_F4F4DE8A35DF6B497B7687E26364B9EC785E932F1C32F562AA8E29C7F526C143
                       ,5);
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar3;
    *(undefined8 *)(*(long *)(unaff_x29 + -0xd0) + 0x60) = *(undefined8 *)(unaff_x29 + -0xd8);
    Il2CppCodeGenWriteBarrier
              ((void **)(*(long *)(unaff_x29 + -0xd0) + 0x60),*(void **)(unaff_x29 + -0xd8));
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(*(long *)(unaff_x29 + -0xc0) + 0x60);
    NullCheck(*(void **)(unaff_x29 + -200));
    if ((int)*(undefined8 *)(*(long *)(unaff_x29 + -200) + 0x18) != 5) goto LAB_02db83e8;
  }
  *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x18);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(lVar5 + 0x80);
  **(undefined4 **)(unaff_x29 + -0xe0) = *(undefined4 *)(unaff_x29 + -0xe4);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x84);
  in_stack_00000040[0xa7] = *(undefined8 *)(lVar5 + 0x8c);
  in_stack_00000040[0xa6] = uVar3;
  uVar11 = *(undefined8 *)(lVar5 + 0x98);
  uVar3 = *(undefined8 *)(lVar5 + 0x90);
  lVar5 = *(long *)(unaff_x29 + -0xf0);
  uVar10 = in_stack_00000040[0xa6];
  *(undefined8 *)(lVar5 + 0xc) = in_stack_00000040[0xa7];
  *(undefined8 *)(lVar5 + 4) = uVar10;
  *(undefined8 *)(lVar5 + 0x18) = uVar11;
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xa0);
  in_stack_00000040[0xa3] = *(undefined8 *)(lVar5 + 0xa8);
  in_stack_00000040[0xa2] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0xa1] = in_stack_00000040[0xa3];
  in_stack_00000040[0xa0] = in_stack_00000040[0xa2];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000610,in_stack_00000614,in_stack_00000618,in_stack_0000061c,pvVar6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xb0);
  in_stack_00000040[0x9d] = *(undefined8 *)(lVar5 + 0xb8);
  in_stack_00000040[0x9c] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x9b] = in_stack_00000040[0x9d];
  in_stack_00000040[0x9a] = in_stack_00000040[0x9c];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000005e0,in_stack_000005e4,in_stack_000005e8,in_stack_000005ec,pvVar6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xc0);
  in_stack_00000040[0x97] = *(undefined8 *)(lVar5 + 200);
  in_stack_00000040[0x96] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x95] = in_stack_00000040[0x97];
  in_stack_00000040[0x94] = in_stack_00000040[0x96];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000005b0,in_stack_000005b4,in_stack_000005b8,in_stack_000005bc,pvVar6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xd0);
  in_stack_00000040[0x91] = *(undefined8 *)(lVar5 + 0xd8);
  in_stack_00000040[0x90] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x8f] = in_stack_00000040[0x91];
  in_stack_00000040[0x8e] = in_stack_00000040[0x90];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000580,in_stack_00000584,in_stack_00000588,in_stack_0000058c,pvVar6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xe0);
  in_stack_00000040[0x8b] = *(undefined8 *)(lVar5 + 0xe8);
  in_stack_00000040[0x8a] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x89] = in_stack_00000040[0x8b];
  in_stack_00000040[0x88] = in_stack_00000040[0x8a];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000550,in_stack_00000554,in_stack_00000558,in_stack_0000055c,pvVar6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0xf0);
  in_stack_00000040[0x85] = *(undefined8 *)(lVar5 + 0xf8);
  in_stack_00000040[0x84] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x83] = in_stack_00000040[0x85];
  in_stack_00000040[0x82] = in_stack_00000040[0x84];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000520,in_stack_00000524,in_stack_00000528,in_stack_0000052c,pvVar6,5);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x100);
  in_stack_00000040[0x7f] = *(undefined8 *)(lVar5 + 0x108);
  in_stack_00000040[0x7e] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x7d] = in_stack_00000040[0x7f];
  in_stack_00000040[0x7c] = in_stack_00000040[0x7e];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000004f0,in_stack_000004f4,in_stack_000004f8,in_stack_000004fc,pvVar6,6);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x110);
  in_stack_00000040[0x79] = *(undefined8 *)(lVar5 + 0x118);
  in_stack_00000040[0x78] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x77] = in_stack_00000040[0x79];
  in_stack_00000040[0x76] = in_stack_00000040[0x78];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000004c0,in_stack_000004c4,in_stack_000004c8,in_stack_000004cc,pvVar6,7);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x120);
  in_stack_00000040[0x73] = *(undefined8 *)(lVar5 + 0x128);
  in_stack_00000040[0x72] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x71] = in_stack_00000040[0x73];
  in_stack_00000040[0x70] = in_stack_00000040[0x72];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000490,in_stack_00000494,in_stack_00000498,in_stack_0000049c,pvVar6,8);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x130);
  in_stack_00000040[0x6d] = *(undefined8 *)(lVar5 + 0x138);
  in_stack_00000040[0x6c] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x6b] = in_stack_00000040[0x6d];
  in_stack_00000040[0x6a] = in_stack_00000040[0x6c];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000460,in_stack_00000464,in_stack_00000468,in_stack_0000046c,pvVar6,9);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x140);
  in_stack_00000040[0x67] = *(undefined8 *)(lVar5 + 0x148);
  in_stack_00000040[0x66] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x65] = in_stack_00000040[0x67];
  in_stack_00000040[100] = in_stack_00000040[0x66];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000430,in_stack_00000434,in_stack_00000438,in_stack_0000043c,pvVar6,10);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x150);
  in_stack_00000040[0x61] = *(undefined8 *)(lVar5 + 0x158);
  in_stack_00000040[0x60] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x5f] = in_stack_00000040[0x61];
  in_stack_00000040[0x5e] = in_stack_00000040[0x60];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000400,in_stack_00000404,in_stack_00000408,in_stack_0000040c,pvVar6,0xb);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x160);
  in_stack_00000040[0x5b] = *(undefined8 *)(lVar5 + 0x168);
  in_stack_00000040[0x5a] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x59] = in_stack_00000040[0x5b];
  in_stack_00000040[0x58] = in_stack_00000040[0x5a];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000003d0,in_stack_000003d4,in_stack_000003d8,in_stack_000003dc,pvVar6,0xc);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x170);
  in_stack_00000040[0x55] = *(undefined8 *)(lVar5 + 0x178);
  in_stack_00000040[0x54] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x53] = in_stack_00000040[0x55];
  in_stack_00000040[0x52] = in_stack_00000040[0x54];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000003a0,in_stack_000003a4,in_stack_000003a8,in_stack_000003ac,pvVar6,0xd);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x180);
  in_stack_00000040[0x4f] = *(undefined8 *)(lVar5 + 0x188);
  in_stack_00000040[0x4e] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x4d] = in_stack_00000040[0x4f];
  in_stack_00000040[0x4c] = in_stack_00000040[0x4e];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000370,in_stack_00000374,in_stack_00000378,in_stack_0000037c,pvVar6,0xe);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 400);
  in_stack_00000040[0x49] = *(undefined8 *)(lVar5 + 0x198);
  in_stack_00000040[0x48] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x47] = in_stack_00000040[0x49];
  in_stack_00000040[0x46] = in_stack_00000040[0x48];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000340,in_stack_00000344,in_stack_00000348,in_stack_0000034c,pvVar6,0xf);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1a0);
  in_stack_00000040[0x43] = *(undefined8 *)(lVar5 + 0x1a8);
  in_stack_00000040[0x42] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x41] = in_stack_00000040[0x43];
  in_stack_00000040[0x40] = in_stack_00000040[0x42];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000310,in_stack_00000314,in_stack_00000318,in_stack_0000031c,pvVar6,0x10);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1b0);
  in_stack_00000040[0x3d] = *(undefined8 *)(lVar5 + 0x1b8);
  in_stack_00000040[0x3c] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x3b] = in_stack_00000040[0x3d];
  in_stack_00000040[0x3a] = in_stack_00000040[0x3c];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000002e0,in_stack_000002e4,in_stack_000002e8,in_stack_000002ec,pvVar6,0x11);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1c0);
  in_stack_00000040[0x37] = *(undefined8 *)(lVar5 + 0x1c8);
  in_stack_00000040[0x36] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x35] = in_stack_00000040[0x37];
  in_stack_00000040[0x34] = in_stack_00000040[0x36];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000002b0,in_stack_000002b4,in_stack_000002b8,in_stack_000002bc,pvVar6,0x12);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1d0);
  in_stack_00000040[0x31] = *(undefined8 *)(lVar5 + 0x1d8);
  in_stack_00000040[0x30] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x2f] = in_stack_00000040[0x31];
  in_stack_00000040[0x2e] = in_stack_00000040[0x30];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000280,in_stack_00000284,in_stack_00000288,in_stack_0000028c,pvVar6,0x13);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1e0);
  in_stack_00000040[0x2b] = *(undefined8 *)(lVar5 + 0x1e8);
  in_stack_00000040[0x2a] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x29] = in_stack_00000040[0x2b];
  in_stack_00000040[0x28] = in_stack_00000040[0x2a];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000250,in_stack_00000254,in_stack_00000258,in_stack_0000025c,pvVar6,0x14);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x1f0);
  in_stack_00000040[0x25] = *(undefined8 *)(lVar5 + 0x1f8);
  in_stack_00000040[0x24] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x23] = in_stack_00000040[0x25];
  in_stack_00000040[0x22] = in_stack_00000040[0x24];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_00000220,in_stack_00000224,in_stack_00000228,in_stack_0000022c,pvVar6,0x15);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x200);
  in_stack_00000040[0x1f] = *(undefined8 *)(lVar5 + 0x208);
  in_stack_00000040[0x1e] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x1d] = in_stack_00000040[0x1f];
  in_stack_00000040[0x1c] = in_stack_00000040[0x1e];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (in_stack_000001f0,in_stack_000001f4,in_stack_000001f8,in_stack_000001fc,pvVar6,0x16);
  pvVar6 = *(void **)(*(long *)(unaff_x29 + -0x18) + 0x20);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x210);
  in_stack_00000040[0x19] = *(undefined8 *)(lVar5 + 0x218);
  in_stack_00000040[0x18] = uVar3;
  NullCheck(pvVar6);
  in_stack_00000040[0x17] = in_stack_00000040[0x19];
  in_stack_00000040[0x16] = in_stack_00000040[0x18];
  QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF::SetAt
            (uStack00000000000001c0,uStack00000000000001c4,uStack00000000000001c8,
             uStack00000000000001cc,pvVar6,0x17);
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uStack00000000000001b4 = *(undefined4 *)(lVar5 + 0x220);
  *(undefined4 *)(lVar7 + 0x28) = uStack00000000000001b4;
  pSVar8 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
            (*(long *)(unaff_x29 + -0x18) + 0x30);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  fStack000000000000019c = *(float *)(lVar5 + 0x224);
  NullCheck(pSVar8);
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,0,fStack000000000000019c);
  pSVar8 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
            (*(long *)(unaff_x29 + -0x18) + 0x30);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  fStack0000000000000184 = *(float *)(lVar5 + 0x228);
  NullCheck(pSVar8);
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,1,fStack0000000000000184);
  pSVar8 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
            (*(long *)(unaff_x29 + -0x18) + 0x30);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  fStack000000000000016c = *(float *)(lVar5 + 0x22c);
  NullCheck(pSVar8);
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,2,fStack000000000000016c);
  pSVar8 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
            (*(long *)(unaff_x29 + -0x18) + 0x30);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  fStack0000000000000154 = *(float *)(lVar5 + 0x230);
  NullCheck(pSVar8);
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,3,fStack0000000000000154);
  pSVar8 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
            (*(long *)(unaff_x29 + -0x18) + 0x30);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  fStack000000000000013c = *(float *)(lVar5 + 0x234);
  NullCheck(pSVar8);
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt(pSVar8,4,fStack000000000000013c);
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uVar3 = *(undefined8 *)(lVar5 + 0x238);
  in_stack_00000040[1] = *(undefined8 *)(lVar5 + 0x240);
  *in_stack_00000040 = uVar3;
  uStack0000000000000124 = *(undefined8 *)(lVar5 + 0x24c);
  uStack000000000000011c = *(undefined8 *)(lVar5 + 0x244);
  uVar3 = *in_stack_00000040;
  *(undefined8 *)(lVar7 + 0x40) = in_stack_00000040[1];
  *(undefined8 *)(lVar7 + 0x38) = uVar3;
  *(undefined8 *)(lVar7 + 0x4c) = uStack0000000000000124;
  *(undefined8 *)(lVar7 + 0x44) = uStack000000000000011c;
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uStack0000000000000104 = *(undefined4 *)(lVar5 + 0x254);
  *(undefined4 *)(lVar7 + 0x54) = uStack0000000000000104;
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  uStack00000000000000f4 = *(undefined4 *)(lVar5 + 600);
  *(undefined4 *)(lVar7 + 0x58) = uStack00000000000000f4;
  pTVar9 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
            (*(long *)(unaff_x29 + -0x18) + 0x60);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  iStack00000000000000dc = *(int *)(lVar5 + 0x25c);
  NullCheck(pTVar9);
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt
            (pTVar9,0,iStack00000000000000dc);
  pTVar9 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
            (*(long *)(unaff_x29 + -0x18) + 0x60);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  iStack00000000000000c4 = *(int *)(lVar5 + 0x260);
  NullCheck(pTVar9);
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt
            (pTVar9,1,iStack00000000000000c4);
  pTVar9 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
            (*(long *)(unaff_x29 + -0x18) + 0x60);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  iStack00000000000000ac = *(int *)(lVar5 + 0x264);
  NullCheck(pTVar9);
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt
            (pTVar9,2,iStack00000000000000ac);
  pTVar9 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
            (*(long *)(unaff_x29 + -0x18) + 0x60);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  iStack0000000000000094 = *(int *)(lVar5 + 0x268);
  NullCheck(pTVar9);
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt
            (pTVar9,3,iStack0000000000000094);
  pTVar9 = *(TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37 **)
            (*(long *)(unaff_x29 + -0x18) + 0x60);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  iStack000000000000007c = *(int *)(lVar5 + 0x26c);
  NullCheck(pTVar9);
  TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37::SetAt
            (pTVar9,4,iStack000000000000007c);
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar5 + 0x270);
  lVar7 = *(long *)(unaff_x29 + -0x18);
  lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar5 + 0x278);
  *(undefined1 *)(unaff_x29 + -1) = 1;
LAB_02db910c:
  return *(byte *)(unaff_x29 + -1) & 1;
}


