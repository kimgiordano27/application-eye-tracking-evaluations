/*
FUNCTION_NAME: RenderGraphCompilationCache$$GetCompilationCache
ENTRY_POINT: 058de41c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
RenderGraphCompilationCache__GetCompilationCache
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int extraout_var;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w24;
  int unaff_w27;
  float fVar6;
  float fVar7;
  undefined8 unaff_d8;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  FUN_03dc64dc(&stack0x00000010,param_2,param_3,*param_1);
  puVar2 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  if (((char)uStack0000000000000010 != '\0') &&
     (FUN_03dc650c(&stack0x00000270,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo), 0 < extraout_var
     )) {
    FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_06768418;
    lVar4 = FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)PTR_DAT_06768418);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar4 + 0x78) != 0) {
      FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar2);
      FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)puVar1);
    }
  }
  uVar3 = FUN_058de68c();
  if ((unaff_w27 != 0) &&
     (puVar5 = (undefined1 *)FUN_058ddbdc(),
     fVar6 = (float)*(undefined8 *)(puVar5 + 0x1d8) - (float)unaff_d8,
     fVar7 = (float)((ulong)*(undefined8 *)(puVar5 + 0x1d8) >> 0x20) -
             (float)((ulong)unaff_d8 >> 0x20), DAT_01208240 <= fVar6 * fVar6 + fVar7 * fVar7)) {
    *(undefined8 *)(puVar5 + 0x1d8) = unaff_d8;
    *puVar5 = 1;
  }
  *(undefined4 *)(unaff_x19 + 0x128) = unaff_w20;
  *(undefined4 *)(unaff_x19 + 300) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x130) = unaff_w24;
  return uVar3;
}


