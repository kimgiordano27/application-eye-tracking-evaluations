/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 04f64650
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__AddCustomMetadata(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
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
  undefined8 in_stack_00000098;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02b76218();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02b76218();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02b76218();
  }
  puVar5 = UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeInfo;
  puVar4 = UnityEngine_UIElements_EventBase<NavigationCancelEvent>_TypeInfo;
  puVar3 = UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeInfo;
  puVar2 = UnityEngine_UIElements_EventBase<MouseOverEvent>_TypeInfo;
  puVar1 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  if ((long *)**(long **)(lVar7 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  (**(code **)(*(long *)**(long **)(lVar7 + 0xb8) + 0x198))(&stack0x00000028);
  in_stack_00000070 = in_stack_00000038;
  in_stack_00000068 = in_stack_00000030;
  in_stack_00000060 = in_stack_00000028;
  FUN_04aed12c(&stack0x00000008,&stack0x00000060,*(undefined8 *)puVar5);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000008 = 0;
  lVar7 = 0;
  fVar15 = -INFINITY;
  in_stack_00000010 = &stack0x00000040;
  do {
    uVar8 = FUN_047e3f3c(&stack0x00000040,*(undefined8 *)puVar3);
    lVar9 = in_stack_00000008;
    if ((uVar8 & 1) == 0) {
      FUN_047e41f8(in_stack_00000010,*(undefined8 *)puVar2);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc(lVar9);
      }
      return lVar7;
    }
    lVar9 = FUN_047e3de4(&stack0x00000040,*(undefined8 *)puVar4);
    plVar13 = *(long **)(unaff_x19 + 0x120);
    if (plVar13 == (long *)0x0) {
      uVar14 = 0x3f800000;
    }
    else {
      lVar11 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_04f647ac;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar1,4);
LAB_04f647ac:
      uVar14 = (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar14);
    }
    FUN_04f63490(lVar9,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
    fVar6 = in_stack_00000098._4_4_;
    if (fVar15 < in_stack_00000098._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f5b230(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f5b230(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar7 = lVar9;
      fVar15 = fVar6;
    }
  } while( true );
}


