/*
FUNCTION_NAME: FUN_05fb33c8
ENTRY_POINT: 05fb33c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05fb33c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  puVar8 = Method_UnityEngine_UI_Button_<OnFinishSubmit>d__9_System_Collections_IEnumerator_Reset__;
  puVar7 = Method_Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_BurstManaged__;
  puVar6 = Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__;
  puVar5 = Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__;
  puVar4 = PTR_DAT_067d2638;
  puVar3 = PTR_DAT_067d2628;
  puVar2 = PTR_DAT_067d2620;
  puVar1 = PTR_DAT_067d2618;
  if ((DAT_06bc4f3c & 1) == 0) {
    FUN_02f08768(Method_Mono_Math_BigInteger_ModulusRing_BarrettReduction__);
    FUN_02f08768(PTR_DAT_067d2618);
                    /* try { // try from 05fb3444 to 060b346b has its CatchHandler @ 05fb359c */
    FUN_02f08768(PTR_DAT_067d2638);
    FUN_02f08768(Method_System_Runtime_InteropServices_Marshal_SizeOf<OVRPlugin_Mesh>__);
    FUN_02f08768(Method_Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_BurstManaged__)
    ;
    FUN_02f08768(PTR_DAT_067d2620);
    FUN_02f08768(
                Method_UnityEngine_UI_Button_<OnFinishSubmit>d__9_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(PTR_DAT_067d2628);
    DAT_06bc4f3c = 1;
  }
  uVar9 = FUN_060ba26c(*(undefined8 *)puVar7,0);
  uVar10 = *(undefined8 *)puVar8;
  **(undefined4 **)(*(long *)puVar6 + 0xb8) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  uVar10 = *(undefined8 *)puVar1;
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  uVar10 = *(undefined8 *)puVar2;
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  uVar10 = *(undefined8 *)puVar3;
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  uVar10 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  uVar10 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14) = uVar9;
  uVar9 = FUN_060ba26c(uVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18) = uVar9;
  return;
}


