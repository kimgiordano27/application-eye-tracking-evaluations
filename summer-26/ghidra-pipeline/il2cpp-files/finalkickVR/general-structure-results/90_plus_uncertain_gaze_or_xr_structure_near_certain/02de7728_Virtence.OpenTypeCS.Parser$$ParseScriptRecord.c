/*
FUNCTION_NAME: Virtence.OpenTypeCS.Parser$$ParseScriptRecord
ENTRY_POINT: 02de7728
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte Virtence_OpenTypeCS_Parser__ParseScriptRecord(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long unaff_x29;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uStack0000000000000040;
  long lStack0000000000000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000084;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000d8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 in_stack_00000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack000000000000014c;
  undefined4 in_stack_00000150;
  undefined8 uStack0000000000000154;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined4 in_stack_00000180;
  undefined8 uStack0000000000000184;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ulong in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined4 in_stack_00000230;
  ulong in_stack_000002b0;
  undefined8 in_stack_000002b8;
  
  OVRSceneAnchor_TryUpdateTransform_mB0E7AD7E5E3671E714BB63AEB39E7DAA88C1960C::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  lStack0000000000000048 = unaff_x29 + -0x48;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined4 *)(unaff_x29 + -0x78) = 0;
  uStack0000000000000040 = 0;
  uVar3 = OVRSceneAnchor_get_Space_m000A21D5D3A05728D5EB20D1D771CF261D0CC294_inline
                    (*(OVRSceneAnchor_tAF36EEA6E22DCD47BA537E85CAC57424A1B51F69 **)
                      (unaff_x29 + -0x10),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar3;
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x98);
  bVar1 = OVRSpace_get_Valid_mA47E7036A5B157D36F5133E4F96E6EB849779D92
                    (lStack0000000000000048,uStack0000000000000040);
  *(byte *)(unaff_x29 + -0xa1) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0xa1) & 1) != 0) {
    bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1
                      (*(undefined8 *)(unaff_x29 + -0x10),0);
    *(byte *)(unaff_x29 + -0xa2) = bVar1 & 1;
    if (((*(byte *)(unaff_x29 + -0xa2) & 1) != 0) &&
       (*(byte *)(unaff_x29 + -0xa3) = *(byte *)(*(long *)(unaff_x29 + -0x10) + 0x74) & 1,
       (*(byte *)(unaff_x29 + -0xa3) & 1) != 0)) {
      *(byte *)(unaff_x29 + -0xa4) = *(byte *)(unaff_x29 + -0x11) & 1;
      if ((*(byte *)(unaff_x29 + -0xa4) & 1) == 0) {
LAB_02de785c:
        uVar3 = OVRSceneAnchor_get_Space_m000A21D5D3A05728D5EB20D1D771CF261D0CC294_inline
                          (*(OVRSceneAnchor_tAF36EEA6E22DCD47BA537E85CAC57424A1B51F69 **)
                            (unaff_x29 + -0x10),(MethodInfo *)0x0);
        *(undefined8 *)(unaff_x29 + -200) = uVar3;
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -200);
        *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0xc0);
        uVar3 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0
                          (*(undefined8 *)(unaff_x29 + -0xd8),0);
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar3;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
        uVar2 = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A(0);
        *(undefined4 *)(unaff_x29 + -0xdc) = uVar2;
        bVar1 = OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0
                          (*(undefined8 *)(unaff_x29 + -0xd0),*(undefined4 *)(unaff_x29 + -0xdc),
                           unaff_x29 + -0x68,unaff_x29 + -0x70,0);
        *(byte *)(unaff_x29 + -0xdd) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0xdd) & 1) != 0) {
          *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x70);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
          bVar1 = OVRPlugin_IsOrientationValid_m479567D685BE13AED00F3E1D3C91AB1FF5472B2F
                            (*(undefined8 *)(unaff_x29 + -0xe8),0);
          *(byte *)(unaff_x29 + -0xe9) = bVar1 & 1;
          if ((*(byte *)(unaff_x29 + -0xe9) & 1) != 0) {
            *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x70);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000060);
            bVar1 = OVRPlugin_IsPositionValid_m7062193DF7904591CA965CCE564590FCB02261D2
                              (*(undefined8 *)(unaff_x29 + -0xf8),0);
            *(byte *)(unaff_x29 + -0xf9) = bVar1 & 1;
            if ((*(byte *)(unaff_x29 + -0xf9) & 1) != 0) {
              Nullable_1__ctor_m875B99C4E1E1356E865F69EEAD351A7096B51B66
                        (&stack0x00000310,&stack0x000002f0,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_3EB9B3AB77D567D5CEBF38C4C91CDF79845F0691D47A516CE6981BF091025179
                        );
              lVar6 = *(long *)(unaff_x29 + -0x10);
              *(undefined8 *)(lVar6 + 0x5c) = 0;
              *(undefined8 *)(lVar6 + 0x54) = 0;
              *(undefined8 *)(lVar6 + 0x6c) = 0;
              *(undefined8 *)(lVar6 + 100) = 0;
              goto LAB_02de79b0;
            }
          }
        }
        *(undefined1 *)(unaff_x29 + -1) = 0;
      }
      else {
        *(long *)(unaff_x29 + -0xb0) = *(long *)(unaff_x29 + -0x10) + 0x54;
        bVar1 = Nullable_1_get_HasValue_m3FDD39924AAD1702186F23403EEE98BD2E37D3FD_inline
                          (*(Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 **)
                            (unaff_x29 + -0xb0),
                           *(MethodInfo **)
                            Field_<PrivateImplementationDetails>_499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
                          );
        *(byte *)(unaff_x29 + -0xb1) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0xb1) & 1) == 0) goto LAB_02de785c;
LAB_02de79b0:
        il2cpp_codegen_initobj((void *)(unaff_x29 + -0x90),0x1c);
        Nullable_1_get_Value_mFDAF1EB4EEFD3E1F4FCACFA87633BA27A91EBE2D
                  ((Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *)
                   (*(long *)(unaff_x29 + -0x10) + 0x54),(MethodInfo *)*in_stack_00000058);
        uVar2 = (undefined4)((ulong)in_stack_000002b8 >> 0x20);
        OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                  (in_stack_000002b0 >> 0x20);
        *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000050[0x2b];
        *(undefined4 *)(unaff_x29 + -0x88) = uVar2;
        Nullable_1_get_Value_mFDAF1EB4EEFD3E1F4FCACFA87633BA27A91EBE2D
                  ((Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *)
                   (*(long *)(unaff_x29 + -0x10) + 0x54),(MethodInfo *)*in_stack_00000058);
        uVar8 = in_stack_00000050[0x20];
        uVar9 = (undefined4)in_stack_00000050[0x21];
        in_stack_000001e8 = CONCAT44(in_stack_00000230,uVar9);
        in_stack_000001e0._4_4_ = (undefined4)(uVar8 >> 0x20);
        uVar2 = in_stack_000001e0._4_4_;
        in_stack_000001e0 = uVar8;
        uVar7 = OVRExtensions_FromFlippedZQuatf_mF626F183B84EA8C08153550313227736286F2657
                          (uVar8 & 0xffffffff,0);
        in_stack_000001f0 = uVar7;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000068);
        puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000068);
        in_stack_00000198 = puVar4[1];
        in_stack_00000190 = *puVar4;
        in_stack_000001a0 = CONCAT44(uVar2,uVar7);
        in_stack_000001a8 = CONCAT44(in_stack_00000230,uVar9);
        in_stack_000001d0 = in_stack_00000190;
        in_stack_000001d8 = in_stack_00000198;
        in_stack_000001b0 =
             Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(uVar7,0);
        in_stack_000001c8 = CONCAT44(in_stack_00000230,uVar9);
        in_stack_000001c0 = CONCAT44(uVar2,in_stack_000001b0);
        *(undefined8 *)(unaff_x29 + -0x7c) = in_stack_000001c8;
        *(undefined8 *)(unaff_x29 + -0x84) = in_stack_000001c0;
        in_stack_00000170 = *(undefined8 *)(unaff_x29 + -0x90);
        in_stack_00000178 = (undefined4)*(undefined8 *)(unaff_x29 + -0x88);
        uStack0000000000000184 = *(undefined8 *)(unaff_x29 + -0x7c);
        uStack000000000000017c = (undefined4)*(undefined8 *)(unaff_x29 + -0x84);
        in_stack_00000180 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x84) >> 0x20);
        uStack00000000000001b4 = uVar2;
        in_stack_000001b8 = uVar9;
        in_stack_00000168 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
        in_stack_00000108 = in_stack_00000178;
        in_stack_00000100 = in_stack_00000170;
        uStack0000000000000114 = uStack0000000000000184;
        uStack000000000000010c = uStack000000000000017c;
        in_stack_00000110 = in_stack_00000180;
        OVRExtensions_ToWorldSpacePose_mB00CD2AC97FB573C5FA5E4093A1F7441244CA097
                  (&stack0x00000100,in_stack_00000168,0);
        in_stack_00000140 = *in_stack_00000050;
        in_stack_00000148 = (undefined4)in_stack_00000050[1];
        uStack0000000000000154 = in_stack_00000138;
        uStack000000000000014c = (undefined4)in_stack_00000130;
        in_stack_00000150 = (undefined4)((ulong)in_stack_00000130 >> 0x20);
        *(ulong *)(unaff_x29 + -0x38) = CONCAT44(uStack000000000000014c,in_stack_00000148);
        *(undefined8 *)(unaff_x29 + -0x40) = in_stack_00000140;
        *(undefined8 *)(unaff_x29 + -0x2c) = in_stack_00000138;
        *(undefined8 *)(unaff_x29 + -0x34) = in_stack_00000130;
        pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (*(undefined8 *)(unaff_x29 + -0x10),0);
        uVar8 = *(ulong *)(unaff_x29 + -0x40);
        uStack00000000000000d8 = (undefined4)*(undefined8 *)(unaff_x29 + -0x38);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x2c);
        uStack00000000000000ac = (undefined4)*(undefined8 *)(unaff_x29 + -0x34);
        uStack00000000000000b0 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x34) >> 0x20);
        NullCheck(pvVar5);
        uStack0000000000000084 = (undefined4)(uVar8 >> 0x20);
        uStack0000000000000078 = (undefined4)uVar3;
        uStack000000000000007c = (undefined4)((ulong)uVar3 >> 0x20);
        Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A
                  (uVar8 & 0xffffffff,uStack0000000000000084,uStack00000000000000d8,
                   uStack00000000000000ac,uStack00000000000000b0,uStack0000000000000078,
                   uStack000000000000007c,pvVar5,0);
        *(undefined1 *)(unaff_x29 + -1) = 1;
      }
      goto LAB_02de7c94;
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
LAB_02de7c94:
  return *(byte *)(unaff_x29 + -1) & 1;
}


