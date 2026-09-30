/*
FUNCTION_NAME: System.Runtime.CompilerServices.IsUnmanagedAttribute$$.ctor
ENTRY_POINT: 058de1c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined4 System_Runtime_CompilerServices_IsUnmanagedAttribute___ctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 *puVar6;
  int extraout_var;
  int extraout_var_00;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w24;
  int unaff_w27;
  float fVar7;
  float fVar8;
  undefined8 unaff_d8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uVar10;
  
  if (param_1 == 0) {
    uVar10 = 0;
  }
  else {
    auVar9 = FUN_05814738(param_1,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_03dc64dc(&stack0x00000010,auVar9._0_8_,auVar9._8_8_,
                 *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
    uVar10 = in_stack_00000010;
  }
  puVar3 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  if (((char)uVar10 != '\0') &&
     (FUN_03dc650c(&stack0x000002a0,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo), 0 < extraout_var
     )) {
    FUN_03dc650c(&stack0x000002a0,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_06768418;
    lVar5 = FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)PTR_DAT_06768418);
    if (lVar5 == 0) goto LAB_058de5b8;
    if (*(long **)(lVar5 + 0x78) != (long *)0x0) {
      lVar5 = **(long **)(lVar5 + 0x78);
      bVar1 = *(byte *)(*(long *)
                         Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                       + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo)) {
        FUN_03dc650c(&stack0x000002a0,*(undefined8 *)puVar3);
        FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)puVar2);
        goto LAB_058de53c;
      }
    }
  }
  if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
     (lVar5 = FUN_0582a780(*(long *)(unaff_x19 + 0xb8),0), lVar5 == 0)) {
    uVar10 = 0;
  }
  else {
    auVar9 = FUN_05814738(lVar5,0);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_03dc64dc(&stack0x00000010,auVar9._0_8_,auVar9._8_8_,
                 *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
    uVar10 = in_stack_00000010;
  }
  puVar3 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  if (((char)uVar10 != '\0') &&
     (FUN_03dc650c(&stack0x00000270,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo),
     0 < extraout_var_00)) {
    FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar3);
    puVar2 = PTR_DAT_06768418;
    lVar5 = FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)PTR_DAT_06768418);
    if (lVar5 == 0) {
LAB_058de5b8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar5 + 0x78) != 0) {
      FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar3);
      FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)puVar2);
    }
  }
LAB_058de53c:
  uVar4 = FUN_058de68c();
  if ((unaff_w27 != 0) &&
     (puVar6 = (undefined1 *)FUN_058ddbdc(),
     fVar7 = (float)*(undefined8 *)(puVar6 + 0x1d8) - (float)unaff_d8,
     fVar8 = (float)((ulong)*(undefined8 *)(puVar6 + 0x1d8) >> 0x20) -
             (float)((ulong)unaff_d8 >> 0x20), DAT_01208240 <= fVar7 * fVar7 + fVar8 * fVar8)) {
    *(undefined8 *)(puVar6 + 0x1d8) = unaff_d8;
    *puVar6 = 1;
  }
  *(undefined4 *)(unaff_x19 + 0x128) = unaff_w20;
  *(undefined4 *)(unaff_x19 + 300) = uVar4;
  *(undefined4 *)(unaff_x19 + 0x130) = unaff_w24;
  return uVar4;
}


