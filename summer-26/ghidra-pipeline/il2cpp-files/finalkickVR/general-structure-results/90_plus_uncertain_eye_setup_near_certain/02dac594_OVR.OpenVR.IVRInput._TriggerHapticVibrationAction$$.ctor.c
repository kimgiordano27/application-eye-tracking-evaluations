/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._TriggerHapticVibrationAction$$.ctor
ENTRY_POINT: 02dac594
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_IVRInput__TriggerHapticVibrationAction___ctor(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x29;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined4 in_stack_00000110;
  undefined8 uStack0000000000000114;
  ulong in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined8 uStack0000000000000144;
  undefined8 in_stack_00000150;
  undefined4 uStack000000000000015c;
  byte bStack0000000000000163;
  undefined4 uStack0000000000000164;
  byte bStack000000000000016b;
  int iStack000000000000016c;
  ulong in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined4 uStack000000000000018c;
  undefined4 in_stack_00000190;
  undefined8 uStack0000000000000194;
  undefined4 in_stack_000001a8;
  undefined4 uStack00000000000001ac;
  ulong in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 in_stack_000001d0;
  undefined8 uStack00000000000001d4;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  *(undefined8 *)(unaff_x29 + -0xe8) = 0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 0;
  *(undefined4 *)(unaff_x29 + -0xf4) = 0;
  *(undefined4 *)(unaff_x29 + -0xf8) = 0;
  *(undefined8 *)(unaff_x29 + -0x100) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  bVar2 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(in_stack_00000088);
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d0);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d0);
    bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0)
    ;
    if ((bVar2 & 1) == 0) {
      iStack000000000000016c = *(int *)(unaff_x29 + -0x54);
      if (iStack000000000000016c == 0) {
        bStack000000000000016b = *(byte *)(unaff_x29 + -0x31) & 1;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uStack0000000000000164 =
             OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(bStack000000000000016b & 1);
        bStack0000000000000163 = *(byte *)(unaff_x29 + -0x32) & 1;
        uStack000000000000015c =
             OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0
                       (*(byte *)(unaff_x29 + -0x32) & 1,0);
        in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0x40);
        in_stack_00000130 = *in_stack_00000098;
        in_stack_00000138 = (undefined4)in_stack_00000098[1];
        uStack0000000000000144 = *(undefined8 *)((long)in_stack_00000098 + 0x14);
        uStack000000000000013c = (undefined4)*(undefined8 *)((long)in_stack_00000098 + 0xc);
        in_stack_00000140 =
             (undefined4)((ulong)*(undefined8 *)((long)in_stack_00000098 + 0xc) >> 0x20);
        in_stack_00000120 = *(ulong *)(unaff_x29 + -0x10);
        in_stack_00000128 = *(undefined4 *)(unaff_x29 + -8);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Field_<PrivateImplementationDetails>_37E23627A08EC0A60752A2316DABF6781ABC887E0C6195DAA82B6FECD0C5528F
                  );
        in_stack_00000108 = in_stack_00000138;
        in_stack_00000100 = in_stack_00000130;
        uStack0000000000000114 = uStack0000000000000144;
        uStack000000000000010c = uStack000000000000013c;
        in_stack_00000110 = in_stack_00000140;
        uStack00000000000000f4 = (undefined4)(in_stack_00000120 >> 0x20);
        iVar3 = OVRP_0_1_1_ovrp_SetOverlayQuad2_m4C4B963D5FE9EC8A0D39144ED9B2A9F2A1EEBC7E
                          (in_stack_00000120 & 0xffffffff,uStack00000000000000f4,in_stack_00000128,
                           uStack0000000000000164,uStack000000000000015c,in_stack_00000150,0,
                           &stack0x00000100,0);
        *(bool *)(unaff_x29 + -1) = iVar3 == 1;
      }
      else {
        *(undefined1 *)(unaff_x29 + -1) = 0;
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 1;
      }
      if ((*(byte *)(unaff_x29 + -0x32) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 2;
      }
      if ((*(byte *)(unaff_x29 + -0x33) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 4;
      }
      if ((*(byte *)(unaff_x29 + -0x5b) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 8;
      }
      if ((*(byte *)(unaff_x29 + -0x60) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x200;
      }
      if ((*(byte *)(unaff_x29 + -0x5d) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x10;
      }
      if ((*(byte *)(unaff_x29 + -0x5f) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x80;
      }
      if ((*(byte *)(unaff_x29 + -0x5e) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x20;
      }
      if ((*(byte *)(unaff_x29 + -0x5c) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x40;
      }
      if ((*(byte *)(unaff_x29 + -0x61) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x100;
      }
      if ((*(byte *)(unaff_x29 + -0x62) & 1) != 0) {
        *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x400;
      }
      if ((*(int *)(unaff_x29 + -0x58) == 1) || (*(int *)(unaff_x29 + -0x58) == 2)) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d8);
        bVar2 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar4,*puVar5,0);
        if ((bVar2 & 1) != 0) {
          *(undefined1 *)(unaff_x29 + -1) = 0;
          goto LAB_02dad1bc;
        }
      }
      if (*(int *)(unaff_x29 + -0x58) == 4) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a8);
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000a8);
        bVar2 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar4,*puVar5,0);
        if ((bVar2 & 1) != 0) {
          *(undefined1 *)(unaff_x29 + -1) = 0;
          goto LAB_02dad1bc;
        }
      }
      if (*(int *)(unaff_x29 + -0x58) == 5) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000b8);
        bVar2 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar4,*puVar5,0);
        if ((bVar2 & 1) != 0) {
          *(undefined1 *)(unaff_x29 + -1) = 0;
          goto LAB_02dad1bc;
        }
      }
      if (*(int *)(unaff_x29 + -0x58) == 9) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
        bVar2 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar4,*puVar5,0);
        if ((bVar2 & 1) != 0) {
          *(undefined1 *)(unaff_x29 + -1) = 0;
          goto LAB_02dad1bc;
        }
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
      uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
      puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c0);
      bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                        (uVar4,*puVar5,0);
      if (((bVar2 & 1) == 0) || (*(int *)(unaff_x29 + -0x4c) == -1)) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
        uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
        puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000b0);
        bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                          (uVar4,*puVar5,0);
        if (((bVar2 & 1) == 0) || (*(int *)(unaff_x29 + -0x4c) == -1)) {
          uVar12 = *(undefined4 *)(unaff_x29 + -0x74);
          in_stack_000001e8 = *(undefined8 *)(unaff_x29 + -0x40);
          in_stack_000001e0 = *(undefined8 *)(unaff_x29 + -0x48);
          in_stack_000001c0 = *in_stack_00000098;
          in_stack_000001c8 = (undefined4)in_stack_00000098[1];
          uStack00000000000001d4 = *(undefined8 *)((long)in_stack_00000098 + 0x14);
          uStack00000000000001cc = (undefined4)*(undefined8 *)((long)in_stack_00000098 + 0xc);
          in_stack_000001d0 =
               (undefined4)((ulong)*(undefined8 *)((long)in_stack_00000098 + 0xc) >> 0x20);
          in_stack_000001b0 = *(ulong *)(unaff_x29 + -0x10);
          in_stack_000001b8 = *(undefined4 *)(unaff_x29 + -8);
          uStack00000000000001ac = *(undefined4 *)(unaff_x29 + -0x54);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d0);
          in_stack_00000188 = in_stack_000001c8;
          in_stack_00000180 = in_stack_000001c0;
          uStack0000000000000194 = uStack00000000000001d4;
          uStack000000000000018c = uStack00000000000001cc;
          in_stack_00000190 = in_stack_000001d0;
          in_stack_00000170 = in_stack_000001b0;
          uVar1 = in_stack_00000170;
          in_stack_00000178 = in_stack_000001b8;
          in_stack_00000170._4_4_ = (undefined4)(in_stack_000001b0 >> 0x20);
          uVar11 = in_stack_00000170._4_4_;
          in_stack_00000170 = uVar1;
          iVar3 = OVRP_1_6_0_ovrp_SetOverlayQuad3_m7DEEB1609FB20B0EBF404129B1B45D71FC9A40FC
                            (in_stack_000001b0 & 0xffffffff,uVar11,in_stack_000001b8,uVar12,
                             in_stack_000001e8,in_stack_000001e0,0,&stack0x00000180,
                             uStack00000000000001ac,0);
          *(bool *)(unaff_x29 + -1) = iVar3 == 1;
        }
        else {
          uVar12 = *(undefined4 *)(unaff_x29 + -0x74);
          uVar4 = *(undefined8 *)(unaff_x29 + -0x40);
          uVar8 = *(undefined8 *)(unaff_x29 + -0x48);
          uVar11 = *(undefined4 *)(unaff_x29 + -0x4c);
          uVar10 = *(undefined4 *)(unaff_x29 + -0x50);
          uVar9 = *(undefined4 *)(unaff_x29 + -0x54);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
          iVar3 = OVRP_1_15_0_ovrp_EnqueueSubmitLayer_m4B90DCCD24308E3FB43213780AE5AD342009FB49
                            (uVar12,uVar4,uVar8,uVar11,uVar10,in_stack_00000098,unaff_x29 + -0x10,
                             uVar9);
          *(bool *)(unaff_x29 + -1) = iVar3 == 0;
        }
      }
      else {
        if ((*(byte *)(unaff_x29 + -0x59) & 1) == 0) {
          *(undefined4 *)(unaff_x29 + -0xa8) = *(undefined4 *)(unaff_x29 + -0x54);
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x10;
          *(undefined8 **)(unaff_x29 + -0xb8) = in_stack_00000098;
          *(undefined4 *)(unaff_x29 + -0xbc) = *(undefined4 *)(unaff_x29 + -0x50);
          *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x4c);
          *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x48);
          *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x40);
          *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x74);
          *(undefined4 *)(unaff_x29 + -0xd8) = 0;
          *(undefined4 *)(unaff_x29 + -0xdc) = *(undefined4 *)(unaff_x29 + -0xa8);
          *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xb0);
          *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xb8);
          *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0xbc);
          *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0xc0);
          *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -200);
          uVar4 = *(undefined8 *)(unaff_x29 + -0xd0);
          uVar12 = *(undefined4 *)(unaff_x29 + -0xd4);
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x29 + -0x54);
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x10;
          *(undefined8 **)(unaff_x29 + -0x88) = in_stack_00000098;
          *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0x50);
          *(undefined4 *)(unaff_x29 + -0x90) = *(undefined4 *)(unaff_x29 + -0x4c);
          *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x48);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x40);
          *(undefined4 *)(unaff_x29 + -0xa4) = *(undefined4 *)(unaff_x29 + -0x74);
          *(undefined4 *)(unaff_x29 + -0xd8) = 1;
          *(undefined4 *)(unaff_x29 + -0xdc) = *(undefined4 *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x80);
          *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x88);
          *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x8c);
          *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(unaff_x29 + -0x90);
          *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x98);
          uVar4 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar12 = *(undefined4 *)(unaff_x29 + -0xa4);
        }
        if ((*(byte *)(unaff_x29 + -0x5a) & 1) == 0) {
          uVar11 = *(undefined4 *)(unaff_x29 + -0xdc);
          uVar8 = *(undefined8 *)(unaff_x29 + -0xe8);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xf0);
          uVar10 = *(undefined4 *)(unaff_x29 + -0xf4);
          uVar9 = *(undefined4 *)(unaff_x29 + -0xf8);
          uVar7 = *(undefined8 *)(unaff_x29 + -0x100);
        }
        else {
          uVar11 = *(undefined4 *)(unaff_x29 + -0xdc);
          uVar8 = *(undefined8 *)(unaff_x29 + -0xe8);
          uVar6 = *(undefined8 *)(unaff_x29 + -0xf0);
          uVar10 = *(undefined4 *)(unaff_x29 + -0xf4);
          uVar9 = *(undefined4 *)(unaff_x29 + -0xf8);
          uVar7 = *(undefined8 *)(unaff_x29 + -0x100);
        }
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
        iVar3 = OVRP_1_34_0_ovrp_EnqueueSubmitLayer2_m9103D51B5F7C07C5EC63A671CACF326350AE0FA9
                          (uVar12,uVar4,uVar7,uVar9,uVar10,uVar6,uVar8,uVar11);
        *(bool *)(unaff_x29 + -1) = iVar3 == 0;
      }
    }
  }
LAB_02dad1bc:
  return *(byte *)(unaff_x29 + -1) & 1;
}


