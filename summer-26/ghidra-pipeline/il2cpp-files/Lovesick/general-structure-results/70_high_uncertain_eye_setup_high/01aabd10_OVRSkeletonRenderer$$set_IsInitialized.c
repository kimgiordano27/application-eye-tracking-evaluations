/*
FUNCTION_NAME: OVRSkeletonRenderer$$set_IsInitialized
ENTRY_POINT: 01aabd10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSkeletonRenderer__set_IsInitialized(undefined8 *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
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
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377ce42 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_RemoveProxy__
                      );
    DAT_0377ce42 = 1;
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
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_0268b4e0(uVar12,0,0);
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
    if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_026a0144(&stack0x00000090,*(long *)(param_2 + 0x28),0);
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
    param_1[5] = in_stack_000000b8;
    param_1[4] = in_stack_000000b0;
    param_1[7] = in_stack_000000c8;
    param_1[6] = in_stack_000000c0;
    param_1[1] = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    *param_1 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    param_1[3] = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    param_1[2] = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
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
    uVar12 = *(undefined8 *)(lVar11 + 0x60);
    uVar14 = *(undefined8 *)(lVar11 + 0x78);
    uVar13 = *(undefined8 *)(lVar11 + 0x70);
    uVar16 = *(undefined8 *)(lVar11 + 0x48);
    uVar15 = *(undefined8 *)(lVar11 + 0x40);
    uVar18 = *(undefined8 *)(lVar11 + 0x58);
    uVar17 = *(undefined8 *)(lVar11 + 0x50);
    param_1[5] = *(undefined8 *)(lVar11 + 0x68);
    param_1[4] = uVar12;
    param_1[7] = uVar14;
    param_1[6] = uVar13;
    param_1[1] = uVar16;
    *param_1 = uVar15;
    param_1[3] = uVar18;
    param_1[2] = uVar17;
  }
  return;
}


