/*
FUNCTION_NAME: OVRPlugin$$AreControllerDrivenHandPosesNatural
ENTRY_POINT: 07c76b78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__AreControllerDrivenHandPosesNatural(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *in_x9;
  long unaff_x19;
  long *plVar8;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar9;
  
  puVar2 = PTR_DAT_09f507d0;
  puVar1 = PTR_DAT_09f507c8;
  lVar4 = FUN_04447c90(*in_x9,*(undefined4 *)(param_1 + 0x18));
  plVar8 = (long *)(unaff_x21 + 0x10);
  *plVar8 = lVar4;
  thunk_FUN_044bb4b4(plVar8,lVar4);
  FUN_07a80df4();
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_044bb4b4((long *)(unaff_x21 + 0x18));
  lVar4 = 8;
  do {
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *unaff_x23;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_07c76cc0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar9 = lVar4 - 8;
    if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar9) {
      return;
    }
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f507d8);
    FUN_07a80df4(lVar5,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_07c76cc0;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_07c76cc4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (lVar5 == 0) goto LAB_07c76cc0;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + lVar4 * 4);
    lVar6 = *plVar8;
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_062fafbc(uVar7,lVar5,*(undefined8 *)puVar2,0);
    if ((unaff_x19 == 0) || (uVar3 = FUN_05bae69c(), lVar6 == 0)) goto LAB_07c76cc0;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_07c76cc4;
    *(undefined4 *)(lVar6 + lVar4 * 4) = uVar3;
    lVar4 = lVar4 + 1;
  } while( true );
}


