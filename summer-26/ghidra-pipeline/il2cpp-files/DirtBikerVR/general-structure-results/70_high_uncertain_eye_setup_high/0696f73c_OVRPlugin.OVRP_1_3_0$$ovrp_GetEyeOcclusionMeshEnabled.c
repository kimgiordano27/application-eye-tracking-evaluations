/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 0696f73c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0696fa20(param_2,**(undefined8 **)(param_1 + 0x4d0),0x5f);
  if ((*(long *)(unaff_x19 + 0x30) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
    FUN_0696faa4();
    FUN_06970000();
    FUN_0696fa20();
    if ((*(long *)(unaff_x19 + 0x30) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0))
    {
      FUN_0696faa4();
      FUN_06970000();
      FUN_0696fa20();
      in_stack_00000038._4_4_ = 0;
      if (((*(long *)(unaff_x19 + 0x30) != 0) &&
          (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8), lVar7 != 0)) &&
         (lVar7 = *(long *)(lVar7 + 0x50), lVar7 != 0)) {
        FUN_04de90b8(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_084b5ed0);
        puVar2 = PTR_DAT_084b7220;
        puVar1 = PTR_DAT_084b5eb8;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000010 = &stack0x00000020;
        in_stack_00000008 = 0;
        while (uVar3 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1),
              lVar7 = in_stack_00000030, (uVar3 & 1) != 0) {
          uVar4 = FUN_0674e2a4((long)&stack0x00000038 + 4,0);
          FUN_065c0764(*(undefined8 *)puVar2,uVar4,0);
          FUN_0696fa20();
          FUN_0696faa4();
          FUN_0696fa20();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0694d3e8(lVar7,0);
          FUN_0696faa4();
          lVar5 = FUN_0694d3e8(lVar7,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0696faa4();
          FUN_0696fa20();
          FUN_0694d460(lVar7,0);
          FUN_0696faa4();
          lVar7 = FUN_0694d460(lVar7,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0696faa4();
          in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
        }
        FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea0);
        plVar6 = *(long **)(unaff_x19 + 0x20);
        if (plVar6 != (long *)0x0) {
          puVar8 = (undefined8 *)(unaff_x19 + 0x28);
          (**(code **)(*plVar6 + 0x5e8))(plVar6,*puVar8,*(undefined8 *)(*plVar6 + 0x5f0));
          *puVar8 = *unaff_x21;
          thunk_FUN_03afed3c(puVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


