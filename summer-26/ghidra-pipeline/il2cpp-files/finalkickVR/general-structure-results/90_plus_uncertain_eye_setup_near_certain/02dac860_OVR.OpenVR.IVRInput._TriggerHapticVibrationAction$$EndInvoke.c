/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._TriggerHapticVibrationAction$$EndInvoke
ENTRY_POINT: 02dac860
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_IVRInput__TriggerHapticVibrationAction__EndInvoke(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x29;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined4 uStack0000000000000174;
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
  byte in_stack_000002f7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((in_stack_000002f7 & 1) != 0) {
    *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x100;
  }
  if ((*(byte *)(unaff_x29 + -0x62) & 1) != 0) {
    *(uint *)(unaff_x29 + -0x74) = *(uint *)(unaff_x29 + -0x74) | 0x400;
  }
  if ((*(int *)(unaff_x29 + -0x58) == 1) || (*(int *)(unaff_x29 + -0x58) == 2)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000d8);
    bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar3,*puVar4,0);
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
      goto LAB_02dad1bc;
    }
  }
  if (*(int *)(unaff_x29 + -0x58) == 4) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a8);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000a8);
    bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar3,*puVar4,0);
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
      goto LAB_02dad1bc;
    }
  }
  if (*(int *)(unaff_x29 + -0x58) == 5) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b8);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000b8);
    bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar3,*puVar4,0);
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
      goto LAB_02dad1bc;
    }
  }
  if (*(int *)(unaff_x29 + -0x58) == 9) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar3,*puVar4,0);
    if ((bVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
      goto LAB_02dad1bc;
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c0);
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  if (((bVar1 & 1) == 0) || (*(int *)(unaff_x29 + -0x4c) == -1)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000b0);
    bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0)
    ;
    if (((bVar1 & 1) == 0) || (*(int *)(unaff_x29 + -0x4c) == -1)) {
      uVar11 = *(undefined4 *)(unaff_x29 + -0x74);
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
      uStack0000000000000174 = (undefined4)(in_stack_000001b0 >> 0x20);
      iVar2 = OVRP_1_6_0_ovrp_SetOverlayQuad3_m7DEEB1609FB20B0EBF404129B1B45D71FC9A40FC
                        (in_stack_000001b0 & 0xffffffff,uStack0000000000000174,in_stack_000001b8,
                         uVar11,in_stack_000001e8,in_stack_000001e0,0,&stack0x00000180,
                         uStack00000000000001ac,0);
      *(bool *)(unaff_x29 + -1) = iVar2 == 1;
    }
    else {
      uVar11 = *(undefined4 *)(unaff_x29 + -0x74);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x40);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar10 = *(undefined4 *)(unaff_x29 + -0x4c);
      uVar9 = *(undefined4 *)(unaff_x29 + -0x50);
      uVar8 = *(undefined4 *)(unaff_x29 + -0x54);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      iVar2 = OVRP_1_15_0_ovrp_EnqueueSubmitLayer_m4B90DCCD24308E3FB43213780AE5AD342009FB49
                        (uVar11,uVar3,uVar7,uVar10,uVar9,in_stack_00000098,unaff_x29 + -0x10,uVar8);
      *(bool *)(unaff_x29 + -1) = iVar2 == 0;
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
      uVar3 = *(undefined8 *)(unaff_x29 + -0xd0);
      uVar11 = *(undefined4 *)(unaff_x29 + -0xd4);
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
      uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar11 = *(undefined4 *)(unaff_x29 + -0xa4);
    }
    if ((*(byte *)(unaff_x29 + -0x5a) & 1) == 0) {
      uVar10 = *(undefined4 *)(unaff_x29 + -0xdc);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xe8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xf0);
      uVar9 = *(undefined4 *)(unaff_x29 + -0xf4);
      uVar8 = *(undefined4 *)(unaff_x29 + -0xf8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x100);
    }
    else {
      uVar10 = *(undefined4 *)(unaff_x29 + -0xdc);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xe8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xf0);
      uVar9 = *(undefined4 *)(unaff_x29 + -0xf4);
      uVar8 = *(undefined4 *)(unaff_x29 + -0xf8);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x100);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
    iVar2 = OVRP_1_34_0_ovrp_EnqueueSubmitLayer2_m9103D51B5F7C07C5EC63A671CACF326350AE0FA9
                      (uVar11,uVar3,uVar6,uVar8,uVar9,uVar5,uVar7,uVar10);
    *(bool *)(unaff_x29 + -1) = iVar2 == 0;
  }
LAB_02dad1bc:
  return *(byte *)(unaff_x29 + -1) & 1;
}


