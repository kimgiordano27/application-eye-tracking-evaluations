/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingPlayAreaSize$$EndInvoke
ENTRY_POINT: 02d8c55c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_14;ray_or_cast_sink_hits_11;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize__EndInvoke
               (undefined8 *param_1,undefined1 param_2 [16],float param_3,undefined8 param_4,
               Il2CppObject *param_5,int param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  __1 *extraout_x1;
  undefined8 *in_x9;
  long unaff_x29;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 *in_stack_00000120;
  undefined8 *in_stack_00000128;
  undefined8 *in_stack_00000130;
  undefined8 *in_stack_00000138;
  undefined8 *in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined8 *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined8 *in_stack_00000160;
  undefined1 *in_stack_000001c0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_0000046c;
  undefined8 in_stack_00000474;
  undefined8 in_stack_00000574;
  undefined8 in_stack_0000057c;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000ad0;
  undefined8 in_stack_00000ad8;
  undefined8 in_stack_00000c10;
  undefined8 in_stack_00000c18;
  
code_r0x02d8c55c:
  VirtualActionInvoker4<int,short,int,long>::Invoke
            (7,param_5,param_6,(short)*(undefined4 *)((long)in_x9 + 0x1bc),
             *(int *)((long)param_1 + 0x1ac),-1);
OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke:
  while( true ) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    bVar2 = OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0(lVar7 + 0x168,0);
    if ((bVar2 & 1) == 0) {
      return;
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    *(undefined4 *)((long)in_stack_00000128 + 0x1ac) = *(undefined4 *)(lVar7 + 0x168);
    *(undefined4 *)((long)in_stack_00000120 + 0x17c) =
         *(undefined4 *)((long)in_stack_00000128 + 0x1ac);
    *(undefined4 *)(in_stack_00000128 + 0x35) = *(undefined4 *)((long)in_stack_00000120 + 0x17c);
    if (*(int *)(in_stack_00000128 + 0x35) != 1) break;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000128[0x33] = *(undefined8 *)(lVar7 + 0x90);
    if (in_stack_00000128[0x33] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000128[0x32] = *(undefined8 *)(lVar7 + 0x170);
      uVar8 = OVRDeserialize_ByteArrayToStructure_TisDisplayRefreshRateChangedData_t8412C04FE31982A8D071487EC6E25215EEEFD5AE_mC8D55BBFFFFF997ED1224E48615618B2DA4E21AD
                        ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                         in_stack_00000128[0x32],
                         *(MethodInfo **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__3__
                        );
      *(undefined4 *)(in_stack_00000128 + 0x30) = uVar8;
      *(float *)((long)in_stack_00000128 + 0x184) = param_3;
      in_stack_00000128[0x31] = in_stack_00000128[0x30];
      in_stack_00000120[0x2e] = in_stack_00000128[0x31];
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000128[0x2f] = *(undefined8 *)(lVar7 + 0x90);
      in_stack_00000128[0x2e] = in_stack_00000120[0x2e];
      *(undefined4 *)((long)in_stack_00000128 + 0x16c) = *(undefined4 *)(in_stack_00000128 + 0x2e);
      in_stack_00000128[0x2c] = in_stack_00000120[0x2e];
      *(undefined4 *)((long)in_stack_00000128 + 0x15c) =
           *(undefined4 *)((long)in_stack_00000128 + 0x164);
      NullCheck((void *)in_stack_00000128[0x2f]);
      param_3 = *(float *)((long)in_stack_00000128 + 0x15c);
      Action_2_Invoke_m50A62593A87E11ED31B47FE46E633AB3B9A7666C_inline
                ((Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132 *)in_stack_00000128[0x2f],
                 *(float *)((long)in_stack_00000128 + 0x16c),param_3,(MethodInfo *)0x0);
    }
  }
  *(undefined4 *)((long)in_stack_00000128 + 0x1a4) =
       *(undefined4 *)((long)in_stack_00000120 + 0x17c);
  uVar8 = il2cpp_codegen_subtract<int,int>(*(int *)((long)in_stack_00000128 + 0x1a4),0x31);
  switch(uVar8) {
  case 0:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000128[0x2a] = *(undefined8 *)(lVar7 + 0x170);
    OVRDeserialize_ByteArrayToStructure_TisSpatialAnchorCreateCompleteData_t8A1C0554B63901CBACE1DC0CAB8103C1487A0A5C_m90A95D5AA1BE04AA0D0D165AFAC92821D5F38522
              ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)in_stack_00000128[0x2a],
               *(MethodInfo **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__0__
              );
    memcpy(&stack0x00000cf0,&stack0x00000cc8,0x28);
    pvVar6 = (void *)(unaff_x29 + -0x48);
    memcpy(pvVar6,&stack0x00000cf0,0x28);
    memcpy(&stack0x00000ca0,pvVar6,0x28);
    in_stack_00000128[0x1a] = in_stack_00000128[0x1b];
    memcpy(&stack0x00000c70,pvVar6,0x28);
    *(undefined4 *)((long)in_stack_00000128 + 0xa4) = *(undefined4 *)(in_stack_00000128 + 0x16);
    if (*(int *)((long)in_stack_00000128 + 0xa4) < 0) {
      in_stack_00000120[4] = in_stack_00000128[0x1a];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000138);
      puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000138);
      uVar5 = *puVar4;
      in_stack_00000128[0x12] = puVar4[1];
      in_stack_00000128[0x11] = uVar5;
      in_stack_00000128[0x13] = puVar4[2];
      uVar5 = in_stack_00000128[0x11];
      in_stack_00000120[1] = in_stack_00000128[0x12];
      *in_stack_00000120 = uVar5;
      in_stack_00000120[2] = in_stack_00000128[0x13];
      in_stack_00000128[0x48] = in_stack_00000120[4];
    }
    else {
      in_stack_00000120[5] = in_stack_00000128[0x1a];
      memcpy(&stack0x00000c28,(void *)(unaff_x29 + -0x48),0x28);
      in_stack_00000128[0xb] = in_stack_00000128[0xe];
      memcpy(&stack0x00000bf8,(void *)(unaff_x29 + -0x48),0x28);
      in_stack_00000128[4] = in_stack_00000c18;
      in_stack_00000128[3] = in_stack_00000c10;
      in_stack_00000130[0x13b] = 0;
      in_stack_00000130[0x13c] = 0;
      in_stack_00000130[0x13d] = 0;
      uVar5 = in_stack_00000128[0xb];
      uVar9 = in_stack_00000128[3];
      in_stack_00000130[0x139] = in_stack_00000128[4];
      in_stack_00000130[0x138] = uVar9;
      OVRAnchor__ctor_mA761F6D079E172EDD40346A290F2EA8D2510CCC5
                (&stack0x00000bc8,uVar5,in_stack_00000130[0x138],in_stack_00000130[0x139],0);
      uVar5 = *in_stack_00000128;
      in_stack_00000120[1] = in_stack_00000128[1];
      *in_stack_00000120 = uVar5;
      in_stack_00000120[2] = in_stack_00000128[2];
      in_stack_00000128[0x48] = in_stack_00000120[5];
    }
    uVar5 = in_stack_00000128[0x48];
    uVar9 = *in_stack_00000120;
    in_stack_00000130[0x135] = in_stack_00000120[1];
    in_stack_00000130[0x134] = uVar9;
    in_stack_00000130[0x136] = in_stack_00000120[2];
    OVRTask_SetResult_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m8640FC27D5708C08A05A22B56486322B14A55AB2
              (uVar5,&stack0x00000b90,
               *(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass4_0_<CreateAlbedoCustomColor>b__1__
              );
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x133] = *(undefined8 *)(lVar7 + 0x98);
    in_stack_00000130[0x132] = in_stack_00000130[0x133];
    if (in_stack_00000130[0x132] == 0) {
      in_stack_00000128[0x46] = in_stack_00000130[0x132];
    }
    else {
      in_stack_00000128[0x47] = in_stack_00000130[0x132];
      pvVar6 = (void *)(unaff_x29 + -0x48);
      memcpy(&stack0x00000b58,pvVar6,0x28);
      in_stack_00000130[300] = in_stack_00000130[0x12d];
      memcpy(&stack0x00000b28,pvVar6,0x28);
      *(undefined4 *)((long)in_stack_00000130 + 0x934) = *(undefined4 *)(in_stack_00000130 + 0x128);
      memcpy(&stack0x00000af8,pvVar6,0x28);
      in_stack_00000130[0x120] = in_stack_00000130[0x123];
      uVar5 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6
                        (in_stack_00000130[0x120]);
      in_stack_00000130[0x11e] = uVar5;
      in_stack_00000130[0x11f] = in_stack_00000130[0x11e];
      memcpy(&stack0x00000ab8,pvVar6,0x28);
      in_stack_00000130[0x117] = in_stack_00000ad8;
      in_stack_00000130[0x116] = in_stack_00000ad0;
      NullCheck((void *)in_stack_00000128[0x47]);
      uVar5 = in_stack_00000128[0x47];
      in_stack_00000130[0x115] = in_stack_00000130[0x11f];
      in_stack_00000130[0x113] = in_stack_00000130[0x117];
      in_stack_00000130[0x112] = in_stack_00000130[0x116];
      Action_4_Invoke_mF83AC81DE351FE293937C4B759B549D9A6B68A70_inline
                (uVar5,in_stack_00000130[300],-1 < *(int *)((long)in_stack_00000130 + 0x934),
                 in_stack_00000130[0x115],in_stack_00000130[0x112],in_stack_00000130[0x113],0);
    }
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 1:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x111] = *(undefined8 *)(lVar7 + 0x170);
    OVRDeserialize_ByteArrayToStructure_TisSpaceSetComponentStatusCompleteData_tEB0171988C9E109E4F9C41A77D6738DB9D0CE58E_mC25C743F5A37DACFA5EDEFC9F70D6773281581AD
              ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)in_stack_00000130[0x111],
               *(MethodInfo **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__2__
              );
    memcpy(&stack0x00000a48,&stack0x00000a18,0x30);
    memcpy((void *)(unaff_x29 + -0x78),&stack0x00000a48,0x30);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x104] = *(undefined8 *)(lVar7 + 0xa0);
    in_stack_00000130[0x103] = in_stack_00000130[0x104];
    if (in_stack_00000130[0x103] == 0) {
      in_stack_00000128[0x44] = in_stack_00000130[0x103];
    }
    else {
      in_stack_00000128[0x45] = in_stack_00000130[0x103];
      pvVar6 = (void *)(unaff_x29 + -0x78);
      memcpy(&stack0x000009d8,pvVar6,0x30);
      in_stack_00000130[0xfc] = in_stack_00000130[0xfd];
      memcpy(&stack0x000009a0,pvVar6,0x30);
      *(undefined4 *)((long)in_stack_00000130 + 0x7ac) = *(undefined4 *)(in_stack_00000130 + 0xf7);
      memcpy(&stack0x00000968,pvVar6,0x30);
      in_stack_00000130[0xee] = in_stack_00000130[0xf1];
      uVar5 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6
                        (in_stack_00000130[0xee],0);
      in_stack_00000130[0xec] = uVar5;
      in_stack_00000130[0xed] = in_stack_00000130[0xec];
      memcpy(&stack0x00000920,pvVar6,0x30);
      in_stack_00000130[0xe5] = in_stack_00000940;
      in_stack_00000130[0xe4] = in_stack_00000938;
      memcpy(&stack0x000008e0,pvVar6,0x30);
      *(undefined4 *)((long)in_stack_00000130 + 0x6ec) = *(undefined4 *)(in_stack_00000130 + 0xe3);
      memcpy(&stack0x000008a8,pvVar6,0x30);
      *(undefined4 *)((long)in_stack_00000130 + 0x6b4) =
           *(undefined4 *)((long)in_stack_00000130 + 0x6e4);
      NullCheck((void *)in_stack_00000128[0x45]);
      uVar5 = in_stack_00000128[0x45];
      in_stack_00000130[0xd5] = in_stack_00000130[0xed];
      in_stack_00000130[0xd3] = in_stack_00000130[0xe5];
      in_stack_00000130[0xd2] = in_stack_00000130[0xe4];
      Action_6_Invoke_m25D56069D793A7289F7D60B11D15ED7D15F33780_inline
                (uVar5,in_stack_00000130[0xfc],-1 < *(int *)((long)in_stack_00000130 + 0x7ac),
                 in_stack_00000130[0xd5],in_stack_00000130[0xd2],in_stack_00000130[0xd3],
                 *(undefined4 *)((long)in_stack_00000130 + 0x6ec),
                 *(int *)((long)in_stack_00000130 + 0x6b4) != 0);
    }
    memcpy(&stack0x00000850,(void *)(unaff_x29 + -0x78),0x30);
    *(undefined4 *)((long)in_stack_00000130 + 0x65c) = *(undefined4 *)(in_stack_00000130 + 0xd1);
    if (*(int *)((long)in_stack_00000130 + 0x65c) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000160);
      uVar5 = OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
      in_stack_00000130[0xca] = uVar5;
      memcpy(&stack0x00000810,(void *)(unaff_x29 + -0x78),0x30);
      *(undefined4 *)((long)in_stack_00000130 + 0x61c) = *(undefined4 *)(in_stack_00000130 + 0xc5);
      if (*(int *)((long)in_stack_00000130 + 0x61c) < 0) {
        *(undefined4 *)((long)in_stack_00000128 + 0x20c) = 0x9b8087e;
        in_stack_00000128[0x40] = in_stack_00000130[0xca];
        *(undefined4 *)((long)in_stack_00000128 + 0x1fc) = 3;
        *(undefined4 *)(in_stack_00000128 + 0x3f) = *(undefined4 *)((long)in_stack_00000128 + 0x20c)
        ;
        in_stack_00000128[0x3e] = in_stack_00000128[0x40];
      }
      else {
        *(undefined4 *)((long)in_stack_00000128 + 0x21c) = 0x9b8087e;
        in_stack_00000128[0x42] = in_stack_00000130[0xca];
        *(undefined4 *)((long)in_stack_00000128 + 0x1fc) = 2;
        *(undefined4 *)(in_stack_00000128 + 0x3f) = *(undefined4 *)((long)in_stack_00000128 + 0x21c)
        ;
        in_stack_00000128[0x3e] = in_stack_00000128[0x42];
      }
      in_stack_00000130[0xc2] = unaff_x29 + -0x78;
      uVar8 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92
                        (in_stack_00000130[0xc2],0);
      *(undefined4 *)((long)in_stack_00000130 + 0x60c) = uVar8;
      NullCheck((void *)in_stack_00000128[0x3e]);
      VirtualActionInvoker4<int,short,int,long>::Invoke
                (7,(Il2CppObject *)in_stack_00000128[0x3e],*(int *)(in_stack_00000128 + 0x3f),
                 (short)*(undefined4 *)((long)in_stack_00000128 + 0x1fc),
                 *(int *)((long)in_stack_00000130 + 0x60c),-1);
    }
    memcpy(&stack0x000007c8,(void *)(unaff_x29 + -0x78),0x30);
    in_stack_00000130[0xba] = in_stack_00000130[0xbb];
    auVar10 = OVRTask_GetExisting_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC9EC955BB9B3C3E059505AF25F29CFA3E9212FB7
                        (in_stack_00000130[0xba],(MethodInfo *)*in_stack_00000158);
    *(undefined1 (*) [16])(in_stack_00000130 + 0xb6) = auVar10;
    in_stack_00000130[0xb9] = in_stack_00000130[0xb7];
    in_stack_00000130[0xb8] = in_stack_00000130[0xb6];
    uVar5 = in_stack_00000130[0xb8];
    in_stack_00000120[0x21] = in_stack_00000130[0xb9];
    in_stack_00000120[0x20] = uVar5;
    memcpy(&stack0x00000770,(void *)(unaff_x29 + -0x78),0x30);
    *(undefined4 *)((long)in_stack_00000130 + 0x57c) = *(undefined4 *)(in_stack_00000130 + 0xb1);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000150);
    OVRTask_1_SetResult_mA498D23F53A09A0072D64D435F8BE4F30ECB8A8C
              ((OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 *)(unaff_x29 + -0x90),
               -1 < *(int *)((long)in_stack_00000130 + 0x57c),(MethodInfo *)*in_stack_00000148);
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 2:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0xae] = *(undefined8 *)(lVar7 + 0xa8);
    if (in_stack_00000130[0xae] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0xad] = *(undefined8 *)(lVar7 + 0x170);
      uVar5 = OVRDeserialize_ByteArrayToStructure_TisSpaceQueryResultsData_tED5DAE5E8BDB324E88D3A492B94ECEACA6BA907A_m50F3066158A963BA10DF164DF2CA6E5B57375951
                        ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                         in_stack_00000130[0xad],
                         *(MethodInfo **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__0__
                        );
      in_stack_00000130[0xab] = uVar5;
      in_stack_00000130[0xac] = in_stack_00000130[0xab];
      in_stack_00000120[0x1f] = in_stack_00000130[0xac];
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0xaa] = *(undefined8 *)(lVar7 + 0xa8);
      in_stack_00000130[0xa9] = in_stack_00000120[0x1f];
      in_stack_00000130[0xa8] = in_stack_00000130[0xa9];
      NullCheck((void *)in_stack_00000130[0xaa]);
      Action_1_Invoke_mD21E1BBC413B52214AE1643F8570EB10B0C004CF_inline
                ((Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *)in_stack_00000130[0xaa],
                 in_stack_00000130[0xa8],(MethodInfo *)0x0);
    }
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 3:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0xa7] = *(undefined8 *)(lVar7 + 0x170);
    auVar10 = OVRDeserialize_ByteArrayToStructure_TisSpaceQueryCompleteData_tF177ABA884999611B5EC3DC2944FCE143E9F749F_mE1A49ABB1A9E3E72C77E37D97432AE54F4407732
                        ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                         in_stack_00000130[0xa7],
                         *(MethodInfo **)
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__3__
                        );
    *(undefined1 (*) [16])(in_stack_00000130 + 0xa2) = auVar10;
    in_stack_00000130[0xa5] = in_stack_00000130[0xa3];
    in_stack_00000130[0xa4] = in_stack_00000130[0xa2];
    uVar5 = in_stack_00000130[0xa4];
    in_stack_00000120[0x1d] = in_stack_00000130[0xa5];
    in_stack_00000120[0x1c] = uVar5;
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0xa1] = *(undefined8 *)(lVar7 + 0xb0);
    in_stack_00000130[0xa0] = in_stack_00000130[0xa1];
    if (in_stack_00000130[0xa0] == 0) {
      in_stack_00000128[0x3c] = in_stack_00000130[0xa0];
    }
    else {
      in_stack_00000128[0x3d] = in_stack_00000130[0xa0];
      uVar5 = in_stack_00000120[0x1c];
      in_stack_00000130[0x9f] = in_stack_00000120[0x1d];
      in_stack_00000130[0x9e] = uVar5;
      in_stack_00000130[0x9d] = in_stack_00000130[0x9e];
      uVar5 = in_stack_00000120[0x1c];
      in_stack_00000130[0x9b] = in_stack_00000120[0x1d];
      in_stack_00000130[0x9a] = uVar5;
      *(undefined4 *)((long)in_stack_00000130 + 0x4cc) = *(undefined4 *)(in_stack_00000130 + 0x9b);
      NullCheck((void *)in_stack_00000128[0x3d]);
      Action_2_Invoke_m5C4507B6E0477EDD49165F507099C83A696B6B20_inline
                ((Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)in_stack_00000128[0x3d],
                 in_stack_00000130[0x9d],-1 < *(int *)((long)in_stack_00000130 + 0x4cc),
                 (MethodInfo *)0x0);
    }
    uVar5 = in_stack_00000120[0x1c];
    in_stack_00000130[0x97] = in_stack_00000120[0x1d];
    in_stack_00000130[0x96] = uVar5;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000138);
    in_stack_00000130[0x95] = in_stack_00000130[0x97];
    in_stack_00000130[0x94] = in_stack_00000130[0x96];
    OVRAnchor_OnSpaceQueryCompleteData_mA552E6D3991D2642111C9C87D7380A586056EC04
              (in_stack_00000130[0x94],in_stack_00000130[0x95],0);
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 4:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x93] = *(undefined8 *)(lVar7 + 0xb8);
    if (in_stack_00000130[0x93] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x92] = *(undefined8 *)(lVar7 + 0x170);
      OVRDeserialize_ByteArrayToStructure_TisSpaceSaveCompleteData_t86F76FAD997B29F8C01EECC13D8BC18477D398F4_mB0692BA462E26A86BCFA96B6876BA6C11118B48B
                ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)in_stack_00000130[0x92],
                 *(MethodInfo **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__1__
                );
      memcpy(&stack0x00000658,&stack0x00000630,0x28);
      pvVar6 = (void *)(unaff_x29 + -0xd8);
      memcpy(pvVar6,&stack0x00000658,0x28);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x87] = *(undefined8 *)(lVar7 + 0xb8);
      memcpy(&stack0x00000600,pvVar6,0x28);
      in_stack_00000130[0x81] = in_stack_00000130[0x82];
      memcpy(&stack0x000005d0,pvVar6,0x28);
      in_stack_00000130[0x7b] = in_stack_00000130[0x7d];
      uVar5 = OVRSpace_op_Implicit_m5668C0D0B94EFD6CE95FC8C92A7E4418B8C0EFB6
                        (in_stack_00000130[0x7b]);
      in_stack_00000130[0x79] = uVar5;
      in_stack_00000130[0x7a] = in_stack_00000130[0x79];
      memcpy(&stack0x00000590,pvVar6,0x28);
      *(undefined4 *)((long)in_stack_00000130 + 0x39c) = *(undefined4 *)(in_stack_00000130 + 0x76);
      memcpy(&stack0x00000560,pvVar6,0x28);
      in_stack_00000130[0x6d] = in_stack_0000057c;
      in_stack_00000130[0x6c] = in_stack_00000574;
      NullCheck((void *)in_stack_00000130[0x87]);
      in_stack_00000130[0x6b] = in_stack_00000130[0x7a];
      in_stack_00000130[0x69] = in_stack_00000130[0x6d];
      in_stack_00000130[0x68] = in_stack_00000130[0x6c];
      Action_4_Invoke_mD49299FEC5EDAE647F844D50183E3832DB459D6F_inline
                (in_stack_00000130[0x87],in_stack_00000130[0x81],in_stack_00000130[0x6b],
                 -1 < *(int *)((long)in_stack_00000130 + 0x39c),in_stack_00000130[0x68],
                 in_stack_00000130[0x69],0);
    }
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 5:
    goto LAB_02d8c25c;
  case 6:
    break;
  case 7:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x34] = *(undefined8 *)(lVar7 + 200);
    if (in_stack_00000130[0x34] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x33] = *(undefined8 *)(lVar7 + 0x170);
      auVar10 = OVRDeserialize_ByteArrayToStructure_TisSpaceShareResultData_t1BE431DF2FC60FBBB1F6BA5ECFB140117CFF044F_m6FD88F86C774971F10124906FDEB4709734D471C
                          ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                           in_stack_00000130[0x33],
                           *(MethodInfo **)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass3_0_<CreateAlbedoPreset>b__3__
                          );
      *(undefined1 (*) [16])(in_stack_00000130 + 0x2e) = auVar10;
      in_stack_00000130[0x31] = in_stack_00000130[0x2f];
      in_stack_00000130[0x30] = in_stack_00000130[0x2e];
      uVar5 = in_stack_00000130[0x30];
      in_stack_00000120[0xf] = in_stack_00000130[0x31];
      in_stack_00000120[0xe] = uVar5;
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x2d] = *(undefined8 *)(lVar7 + 200);
      uVar5 = in_stack_00000120[0xe];
      in_stack_00000130[0x2b] = in_stack_00000120[0xf];
      in_stack_00000130[0x2a] = uVar5;
      in_stack_00000130[0x29] = in_stack_00000130[0x2a];
      uVar5 = in_stack_00000120[0xe];
      in_stack_00000130[0x27] = in_stack_00000120[0xf];
      in_stack_00000130[0x26] = uVar5;
      *(undefined4 *)((long)in_stack_00000130 + 300) = *(undefined4 *)(in_stack_00000130 + 0x27);
      NullCheck((void *)in_stack_00000130[0x2d]);
      Action_2_Invoke_mF391E368703BF04E5B3933748BB1BD1BFC5799D9_inline
                ((Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 *)in_stack_00000130[0x2d],
                 in_stack_00000130[0x29],*(int *)((long)in_stack_00000130 + 300),(MethodInfo *)0x0);
    }
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  case 8:
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    in_stack_00000130[0x24] = *(undefined8 *)(lVar7 + 0xd0);
    if (in_stack_00000130[0x24] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x23] = *(undefined8 *)(lVar7 + 0x170);
      auVar10 = OVRDeserialize_ByteArrayToStructure_TisSpaceListSaveResultData_tCFC8B45EABB98F65FE80A9D7659D7E898383970D_m01BA59E421B63F6D1EC9103E6591F209FD67B541
                          ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                           in_stack_00000130[0x23],
                           *(MethodInfo **)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__2__
                          );
      *(undefined1 (*) [16])(in_stack_00000130 + 0x1e) = auVar10;
      in_stack_00000130[0x21] = in_stack_00000130[0x1f];
      in_stack_00000130[0x20] = in_stack_00000130[0x1e];
      uVar5 = in_stack_00000130[0x20];
      in_stack_00000120[0xd] = in_stack_00000130[0x21];
      in_stack_00000120[0xc] = uVar5;
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x1d] = *(undefined8 *)(lVar7 + 0xd0);
      uVar5 = in_stack_00000120[0xc];
      in_stack_00000130[0x1b] = in_stack_00000120[0xd];
      in_stack_00000130[0x1a] = uVar5;
      in_stack_00000130[0x19] = in_stack_00000130[0x1a];
      uVar5 = in_stack_00000120[0xc];
      in_stack_00000130[0x17] = in_stack_00000120[0xd];
      in_stack_00000130[0x16] = uVar5;
      *(undefined4 *)((long)in_stack_00000130 + 0xac) = *(undefined4 *)(in_stack_00000130 + 0x17);
      NullCheck((void *)in_stack_00000130[0x1d]);
      Action_2_Invoke_mF391E368703BF04E5B3933748BB1BD1BFC5799D9_inline
                ((Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9 *)in_stack_00000130[0x1d],
                 in_stack_00000130[0x19],*(int *)((long)in_stack_00000130 + 0xac),(MethodInfo *)0x0)
      ;
    }
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
  default:
    *(undefined4 *)(in_stack_00000128 + 0x34) = *(undefined4 *)((long)in_stack_00000120 + 0x17c);
    if (*(int *)(in_stack_00000128 + 0x34) == 100) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
      lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
      in_stack_00000130[0x14] = *(undefined8 *)(lVar7 + 0xd8);
      if (in_stack_00000130[0x14] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
        lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
        in_stack_00000130[0x13] = *(undefined8 *)(lVar7 + 0x170);
        auVar10 = OVRDeserialize_ByteArrayToStructure_TisSceneCaptureCompleteData_t309B8671164A38CEA71FDAC002DB145FFAECA033_mE2D9B1669B28BA064E53A833B1B3E35844DDD783
                            ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                             in_stack_00000130[0x13],
                             *(MethodInfo **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__0__
                            );
        *(undefined1 (*) [16])(in_stack_00000130 + 0xe) = auVar10;
        in_stack_00000130[0x11] = in_stack_00000130[0xf];
        in_stack_00000130[0x10] = in_stack_00000130[0xe];
        uVar5 = in_stack_00000130[0x10];
        in_stack_00000120[0xb] = in_stack_00000130[0x11];
        in_stack_00000120[10] = uVar5;
        lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
        in_stack_00000130[0xd] = *(undefined8 *)(lVar7 + 0xd8);
        uVar5 = in_stack_00000120[10];
        in_stack_00000130[0xb] = in_stack_00000120[0xb];
        in_stack_00000130[10] = uVar5;
        in_stack_00000130[9] = in_stack_00000130[10];
        uVar5 = in_stack_00000120[10];
        in_stack_00000130[7] = in_stack_00000120[0xb];
        in_stack_00000130[6] = uVar5;
        *(undefined4 *)((long)in_stack_00000130 + 0x2c) = *(undefined4 *)(in_stack_00000130 + 7);
        NullCheck((void *)in_stack_00000130[0xd]);
        Action_2_Invoke_m5C4507B6E0477EDD49165F507099C83A696B6B20_inline
                  ((Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)in_stack_00000130[0xd],
                   in_stack_00000130[9],-1 < *(int *)((long)in_stack_00000130 + 0x2c),
                   (MethodInfo *)0x0);
      }
      goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
    }
  }
  in_stack_00000130[4] = *(undefined8 *)(in_stack_00000120[0x31] + 0x120);
  NullCheck((void *)in_stack_00000130[4]);
  HashSet_1_GetEnumerator_m237BAB5419E46686B28DBB89FBC7457A8139D299
            ((HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F *)in_stack_00000130[4],
             *(MethodInfo **)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__2__
            );
  in_stack_00000130[1] = in_stack_000001e0;
  *in_stack_00000130 = in_stack_000001d8;
  in_stack_00000130[2] = in_stack_000001e8;
  uVar5 = *in_stack_00000130;
  in_stack_000001c0 = &stack0x00000e40;
  in_stack_00000120[7] = in_stack_00000130[1];
  in_stack_00000120[6] = uVar5;
  in_stack_00000120[8] = in_stack_00000130[2];
  il2cpp::utils::Finally<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::__1>
            ((utils *)&stack0x000001c0,extraout_x1);
  while (uVar3 = Enumerator_MoveNext_m5496230310159D70B250813838B80FD71F2B1034
                           ((Enumerator_t12A2561A78E5498603F522ADF801953ABC3EAFC0 *)&stack0x00000e40
                            ,*(MethodInfo **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass10_0_<CreateMetallicMaxValue>b__1__
                           ), (uVar3 & 1) != 0) {
    pvVar6 = (void *)Enumerator_get_Current_m35BAB922A34DBC54E27235C698B13D7B35969725_inline
                               ((Enumerator_t12A2561A78E5498603F522ADF801953ABC3EAFC0 *)
                                &stack0x00000e40,
                                *(MethodInfo **)
                                 Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__0__
                               );
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
    uVar9 = *(undefined8 *)(lVar7 + 0x170);
    uVar5 = *(undefined8 *)(lVar7 + 0x168);
    NullCheck(pvVar6);
    InterfaceActionInvoker1<EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8>::Invoke
              ((InterfaceActionInvoker1<EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8> *
               )0x0,*(undefined8 *)
                     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass1_0_<CreateVertexAttribute>b__1__
               ,pvVar6,uVar5,uVar9);
  }
  il2cpp::utils::
  FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::$_1,false>::
  ~FinallyHelper((FinallyHelper<OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4::__1,false>
                  *)&stack0x000001c8);
  goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
LAB_02d8c25c:
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
  in_stack_00000130[0x67] = *(undefined8 *)(lVar7 + 0xc0);
  if (in_stack_00000130[0x67] != 0) goto LAB_02d8c28c;
  goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo__Invoke;
LAB_02d8c28c:
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000140);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
  in_stack_00000130[0x66] = *(undefined8 *)(lVar7 + 0x170);
  OVRDeserialize_ByteArrayToStructure_TisSpaceEraseCompleteData_t29938D1C6E218C23257DF9F75C64AD57B1786AC3_mF47A0B55259937E10C4A967BCE2AE71377F6E3C3
            ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)in_stack_00000130[0x66],
             *(MethodInfo **)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass2_0_<CreateMaterialValidationMode>b__1__
            );
  in_stack_00000130[99] = in_stack_00000130[0x5f];
  in_stack_00000130[0x62] = in_stack_00000130[0x5e];
  in_stack_00000130[0x65] = in_stack_00000130[0x61];
  in_stack_00000130[100] = in_stack_00000130[0x60];
  uVar5 = in_stack_00000130[0x62];
  in_stack_00000120[0x13] = in_stack_00000130[99];
  in_stack_00000120[0x12] = uVar5;
  uVar5 = in_stack_00000130[100];
  in_stack_00000120[0x15] = in_stack_00000130[0x65];
  in_stack_00000120[0x14] = uVar5;
  uVar5 = in_stack_00000120[0x12];
  in_stack_00000130[0x5b] = in_stack_00000120[0x13];
  in_stack_00000130[0x5a] = uVar5;
  uVar5 = in_stack_00000120[0x14];
  in_stack_00000130[0x5d] = in_stack_00000120[0x15];
  in_stack_00000130[0x5c] = uVar5;
  *(undefined4 *)((long)in_stack_00000130 + 0x2cc) = *(undefined4 *)(in_stack_00000130 + 0x5b);
  bVar1 = -1 < *(int *)((long)in_stack_00000130 + 0x2cc);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000140);
  in_stack_00000130[0x58] = *(undefined8 *)(lVar7 + 0xc0);
  uVar5 = in_stack_00000120[0x12];
  in_stack_00000130[0x55] = in_stack_00000120[0x13];
  in_stack_00000130[0x54] = uVar5;
  uVar5 = in_stack_00000120[0x14];
  in_stack_00000130[0x57] = in_stack_00000120[0x15];
  in_stack_00000130[0x56] = uVar5;
  in_stack_00000130[0x53] = in_stack_00000130[0x54];
  uVar5 = in_stack_00000120[0x12];
  in_stack_00000130[0x4f] = in_stack_00000120[0x13];
  in_stack_00000130[0x4e] = uVar5;
  uVar5 = in_stack_00000120[0x14];
  in_stack_00000130[0x51] = in_stack_00000120[0x15];
  in_stack_00000130[0x50] = uVar5;
  in_stack_00000130[0x4d] = in_stack_00000474;
  in_stack_00000130[0x4c] = in_stack_0000046c;
  uVar5 = in_stack_00000120[0x12];
  in_stack_00000130[0x49] = in_stack_00000120[0x13];
  in_stack_00000130[0x48] = uVar5;
  uVar5 = in_stack_00000120[0x14];
  in_stack_00000130[0x4b] = in_stack_00000120[0x15];
  in_stack_00000130[0x4a] = uVar5;
  *(undefined4 *)((long)in_stack_00000130 + 0x23c) =
       *(undefined4 *)((long)in_stack_00000130 + 0x25c);
  NullCheck((void *)in_stack_00000130[0x58]);
  in_stack_00000130[0x45] = in_stack_00000130[0x4d];
  in_stack_00000130[0x44] = in_stack_00000130[0x4c];
  Action_4_Invoke_mE230342C815050AB281BEBADE54FC805AE60B3F0_inline
            (in_stack_00000130[0x58],in_stack_00000130[0x53],bVar1,in_stack_00000130[0x44],
             in_stack_00000130[0x45],*(undefined4 *)((long)in_stack_00000130 + 0x23c));
  uVar5 = in_stack_00000120[0x12];
  in_stack_00000130[0x41] = in_stack_00000120[0x13];
  in_stack_00000130[0x40] = uVar5;
  uVar5 = in_stack_00000120[0x14];
  in_stack_00000130[0x43] = in_stack_00000120[0x15];
  in_stack_00000130[0x42] = uVar5;
  in_stack_00000130[0x3f] = in_stack_00000130[0x40];
  auVar10 = OVRTask_GetExisting_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC9EC955BB9B3C3E059505AF25F29CFA3E9212FB7
                      (in_stack_00000130[0x3f],(MethodInfo *)*in_stack_00000158);
  *(undefined1 (*) [16])(in_stack_00000130 + 0x3a) = auVar10;
  in_stack_00000130[0x3d] = in_stack_00000130[0x3b];
  in_stack_00000130[0x3c] = in_stack_00000130[0x3a];
  uVar5 = in_stack_00000130[0x3c];
  in_stack_00000120[0x21] = in_stack_00000130[0x3d];
  in_stack_00000120[0x20] = uVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000150);
  OVRTask_1_SetResult_mA498D23F53A09A0072D64D435F8BE4F30ECB8A8C
            ((OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 *)(unaff_x29 + -0x90),bVar1,
             (MethodInfo *)*in_stack_00000148);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000160);
  uVar5 = OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
  in_stack_00000130[0x38] = uVar5;
  if (bVar1) {
    *(undefined4 *)((long)in_stack_00000128 + 0x1dc) = 0x9b81686;
    in_stack_00000128[0x3a] = in_stack_00000130[0x38];
    *(undefined4 *)((long)in_stack_00000128 + 0x1bc) = 2;
    *(undefined4 *)(in_stack_00000128 + 0x37) = *(undefined4 *)((long)in_stack_00000128 + 0x1dc);
    in_stack_00000128[0x36] = in_stack_00000128[0x3a];
  }
  else {
    *(undefined4 *)((long)in_stack_00000128 + 0x1cc) = 0x9b81686;
    in_stack_00000128[0x38] = in_stack_00000130[0x38];
    *(undefined4 *)((long)in_stack_00000128 + 0x1bc) = 3;
    *(undefined4 *)(in_stack_00000128 + 0x37) = *(undefined4 *)((long)in_stack_00000128 + 0x1cc);
    in_stack_00000128[0x36] = in_stack_00000128[0x38];
  }
  in_stack_00000130[0x36] = unaff_x29 + -0x100;
  uVar8 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(in_stack_00000130[0x36],0);
  *(undefined4 *)((long)in_stack_00000130 + 0x1ac) = uVar8;
  NullCheck((void *)in_stack_00000128[0x36]);
  param_5 = (Il2CppObject *)in_stack_00000128[0x36];
  param_6 = *(int *)(in_stack_00000128 + 0x37);
  param_1 = in_stack_00000130;
  in_x9 = in_stack_00000128;
  goto code_r0x02d8c55c;
}


