/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$.cctor
ENTRY_POINT: 0696f54c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long lStack0000000000000030;
  undefined8 in_stack_00000038;
  
  lStack0000000000000030 = 0;
  iVar5 = FUN_07ca89c8();
  if (iVar5 * -0x33333333 + 0x19999999U < 0x33333333) {
    if (*(int *)(*(long *)PTR_DAT_084b58d8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar6 = (long *)FUN_06926324(0);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_084b6da0;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = plVar6;
        if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
          plVar10 = (long *)0x0;
        }
      }
      *(long **)(unaff_x19 + 0x30) = plVar10;
      if (*(byte *)(*plVar6 + 0x130) < bVar1) {
        plVar6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar9) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x30),plVar6);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar7 = FUN_07c9e200(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      FUN_0696fa20();
      puVar2 = PTR_DAT_08486bc0;
      FUN_0696faa4();
      FUN_0696fa20();
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_0696faa4();
        FUN_0696fa20();
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
          FUN_0696faa4();
          FUN_0696fa20();
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             ((lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8), lVar9 != 0 &&
              (*(long *)(lVar9 + 0x40) != 0)))) {
            FUN_0696faa4();
            FUN_06970000();
            FUN_0696fa20();
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
              FUN_0696faa4();
              FUN_06970000();
              FUN_0696fa20();
              if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                 (*(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8) != 0)) {
                FUN_0696faa4();
                FUN_06970000();
                FUN_0696fa20();
                in_stack_00000038._4_4_ = 0;
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   ((lVar9 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0xe8), lVar9 != 0 &&
                    (lVar9 = *(long *)(lVar9 + 0x50), lVar9 != 0)))) {
                  FUN_04de90b8(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_084b5ed0);
                  puVar4 = PTR_DAT_084b7220;
                  puVar3 = PTR_DAT_084b5eb8;
                  in_stack_00000028 = in_stack_00000010;
                  in_stack_00000020 = in_stack_00000008;
                  lStack0000000000000030 = in_stack_00000018;
                  in_stack_00000010 = &stack0x00000020;
                  in_stack_00000008 = 0;
                  while (uVar7 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar3),
                        lVar9 = lStack0000000000000030, (uVar7 & 1) != 0) {
                    uVar12 = FUN_0674e2a4((long)&stack0x00000038 + 4,0);
                    FUN_065c0764(*(undefined8 *)puVar4,uVar12,0);
                    FUN_0696fa20();
                    FUN_0696faa4();
                    FUN_0696fa20();
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_0694d3e8(lVar9,0);
                    FUN_0696faa4();
                    lVar8 = FUN_0694d3e8(lVar9,0);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_0696faa4();
                    FUN_0696fa20();
                    FUN_0694d460(lVar9,0);
                    FUN_0696faa4();
                    lVar9 = FUN_0694d460(lVar9,0);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03a8a9c0();
                    }
                    FUN_0696faa4();
                    in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
                  }
                  FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea0);
                  plVar6 = *(long **)(unaff_x19 + 0x20);
                  if (plVar6 != (long *)0x0) {
                    puVar11 = (undefined8 *)(unaff_x19 + 0x28);
                    (**(code **)(*plVar6 + 0x5e8))(plVar6,*puVar11,*(undefined8 *)(*plVar6 + 0x5f0))
                    ;
                    *puVar11 = *(undefined8 *)puVar2;
                    thunk_FUN_03afed3c(puVar11);
                    return;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  return;
}


