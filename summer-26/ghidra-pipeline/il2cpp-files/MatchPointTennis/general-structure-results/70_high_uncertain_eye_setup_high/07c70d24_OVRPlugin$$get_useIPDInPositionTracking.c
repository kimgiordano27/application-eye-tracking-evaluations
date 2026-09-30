/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 07c70d24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  FUN_07bf4904(param_1,param_2,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
  uVar7 = in_stack_00000130;
  uVar6 = in_stack_00000128;
  uVar5 = in_stack_00000120;
  uVar4 = in_stack_00000118;
  uVar3 = in_stack_00000110;
  uVar2 = in_stack_00000108;
  uVar1 = in_stack_00000100;
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    plVar12 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f296c0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07c70dcc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f296c0,0);
LAB_07c70dcc:
      in_stack_00000168 = uVar2;
      in_stack_00000160 = uVar1;
      in_stack_00000178 = uVar4;
      in_stack_00000170 = uVar3;
      in_stack_00000188 = uVar6;
      in_stack_00000180 = uVar5;
      in_stack_00000190 = uVar7;
      (*(code *)*puVar8)(plVar12,&stack0x00000160,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


