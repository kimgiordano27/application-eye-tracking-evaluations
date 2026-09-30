/*
FUNCTION_NAME: OVRSkeletonRenderer$$set_IsDataValid
ENTRY_POINT: 01aabd24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRSkeletonRenderer__set_IsDataValid(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined4 in_stack_00000140;
  undefined4 uStack0000000000000144;
  undefined4 in_stack_00000148;
  
  plVar12 = *(long **)(unaff_x21 + 0x268);
  if ((*(byte *)(unaff_x22 + 0xe42) & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_RemoveProxy__
                      );
    *(undefined1 *)(unaff_x22 + 0xe42) = 1;
  }
  in_stack_00000138 = 0;
  uStack000000000000013c = 0;
  in_stack_00000140 = 0;
  uStack0000000000000144 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000128 = 0;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(uVar13,0,0);
  puVar2 = 
  Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_RemoveProxy__
  ;
  puVar1 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  if ((uVar10 & 1) == 0) {
    FUN_01aa05d8(&stack0x00000130);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aa0670(3,4,9,0xffffffff,&stack0x00000120);
    if ((uVar10 & 1) != 0) {
      in_stack_00000130 = in_stack_00000120;
      in_stack_00000138 = in_stack_00000128;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01aa099c(3,5,9,0xffffffff,&stack0x00000110);
    if ((uVar10 & 1) != 0) {
      uStack0000000000000144 = (undefined4)in_stack_00000118;
      in_stack_00000148 = (undefined4)((ulong)in_stack_00000118 >> 0x20);
      uStack000000000000013c = (undefined4)in_stack_00000110;
      in_stack_00000140 = (undefined4)((ulong)in_stack_00000110 >> 0x20);
    }
    FUN_01aa0afc(&stack0x00000090,&stack0x00000130);
    uVar9 = uStack00000000000000a8;
    uVar8 = uStack00000000000000a4;
    uVar7 = uStack00000000000000a0;
    uVar6 = uStack000000000000009c;
    uVar5 = uStack0000000000000098;
    uVar4 = uStack0000000000000094;
    uVar3 = uStack0000000000000090;
    if (DAT_03774e1c == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774e1c = '\x01';
    }
    FUN_02693870(&stack0x00000090,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,0);
    in_stack_000000e8 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_000000e0 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    in_stack_000000d8 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_000000d0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000100 = in_stack_000000c0;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_026a0144(&stack0x00000090,*(long *)(param_1 + 0x28),0);
    in_stack_00000058 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    in_stack_00000050 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_00000068 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_00000060 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
    in_stack_00000078 = in_stack_000000b8;
    in_stack_00000070 = in_stack_000000b0;
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000088 = in_stack_000000c8;
    in_stack_00000080 = in_stack_000000c0;
    in_stack_00000028 = in_stack_000000e8;
    in_stack_00000020 = in_stack_000000e0;
    in_stack_00000038 = in_stack_000000f8;
    in_stack_00000030 = in_stack_000000f0;
    in_stack_00000018 = in_stack_000000d8;
    in_stack_00000010 = in_stack_000000d0;
    FUN_02681444(&stack0x00000090,&stack0x00000050,&stack0x00000010,0);
    unaff_x19[5] = in_stack_000000b8;
    unaff_x19[4] = in_stack_000000b0;
    unaff_x19[7] = in_stack_000000c8;
    unaff_x19[6] = in_stack_000000c0;
    unaff_x19[1] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    *unaff_x19 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    unaff_x19[3] = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    unaff_x19[2] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar2,0);
    if (DAT_03775725 == '\0') {
      thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
      DAT_03775725 = '\x01';
    }
    lVar11 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
    uVar13 = *(undefined8 *)(lVar11 + 0x60);
    uVar15 = *(undefined8 *)(lVar11 + 0x78);
    uVar14 = *(undefined8 *)(lVar11 + 0x70);
    uVar17 = *(undefined8 *)(lVar11 + 0x48);
    uVar16 = *(undefined8 *)(lVar11 + 0x40);
    uVar19 = *(undefined8 *)(lVar11 + 0x58);
    uVar18 = *(undefined8 *)(lVar11 + 0x50);
    unaff_x19[5] = *(undefined8 *)(lVar11 + 0x68);
    unaff_x19[4] = uVar13;
    unaff_x19[7] = uVar15;
    unaff_x19[6] = uVar14;
    unaff_x19[1] = uVar17;
    *unaff_x19 = uVar16;
    unaff_x19[3] = uVar19;
    unaff_x19[2] = uVar18;
  }
  return;
}


