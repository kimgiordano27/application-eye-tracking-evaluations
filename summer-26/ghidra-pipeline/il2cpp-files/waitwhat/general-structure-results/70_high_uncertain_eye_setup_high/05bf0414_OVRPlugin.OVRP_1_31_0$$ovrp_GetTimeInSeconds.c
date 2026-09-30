/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_GetTimeInSeconds
ENTRY_POINT: 05bf0414
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_GetTimeInSeconds(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long unaff_x20;
  long *plVar9;
  long in_stack_00000028;
  
  if ((*(byte *)(unaff_x20 + 0xdb1) & 1) == 0) {
    FUN_03188a78(PTR_DAT_071122b8);
    *(undefined1 *)(unaff_x20 + 0xdb1) = 1;
  }
  puVar1 = PTR_DAT_071122b8;
  in_stack_00000028 = 0;
  iVar8 = 0;
  do {
    uVar3 = FUN_05befca0(param_1,iVar8,&stack0x00000028);
    lVar2 = in_stack_00000028;
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000028 == 0) goto LAB_05bf05a4;
      lVar4 = FUN_069d3b50(in_stack_00000028,0);
      if (*(char *)(param_1 + 0x80) != '\0') {
        plVar9 = *(long **)(param_1 + 0x38);
        if (plVar9 == (long *)0x0) goto LAB_05bf05a4;
        lVar6 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_05bf04dc;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,9);
LAB_05bf04dc:
        uVar3 = (*(code *)*puVar5)(plVar9,iVar8);
        if ((uVar3 & 1) != 0) {
          FUN_06a646dc(0,0,0,lVar2,0);
          FUN_06a647b0(0,0,0,0,lVar2,0);
          if (lVar4 == 0) goto LAB_05bf05a4;
          uVar3 = FUN_069d710c(lVar4,0);
          if ((uVar3 & 1) == 0) {
            FUN_069d7048(lVar4,1,0);
            FUN_06a64938(lVar2,0);
          }
          goto LAB_05bf0580;
        }
      }
      if (lVar4 == 0) {
LAB_05bf05a4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar3 = FUN_069d710c(lVar4,0);
      if ((uVar3 & 1) != 0) {
        FUN_06a64884(lVar2,0);
        FUN_069d7048(lVar4,0,0);
      }
    }
LAB_05bf0580:
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x13) {
      return;
    }
  } while( true );
}


