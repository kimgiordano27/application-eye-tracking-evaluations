/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetMesh
ENTRY_POINT: 04f9019c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetMesh(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xef8));
  FUN_02b3c81c(System_Func<RenderChainCommand>_TypeInfo);
  FUN_02b3c81c(System_Func<RenderData>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xdb3) = 1;
  puVar2 = System_Func<RANSACVelocity>_TypeInfo;
  puVar1 = System_Func<PxrResult>_TypeInfo;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_037a6fdc(&stack0x00000018,*(long *)(unaff_x19 + 0x68),
               *(undefined8 *)System_Func<RenderData>_TypeInfo);
  while( true ) {
    uVar3 = FUN_0472eaf4(&stack0x00000018,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      FUN_0472eaf0(&stack0x00000018,*(undefined8 *)puVar1);
      return;
    }
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar4 = *(long *)(in_stack_00000028 + 0x20);
    FUN_04f9195c(*(long *)(unaff_x19 + 0x40),*(undefined4 *)(in_stack_00000028 + 0x10),0);
    if (lVar4 == 0) break;
    UnityEngine_UIElements_StyleBackgroundPosition___ctor(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


