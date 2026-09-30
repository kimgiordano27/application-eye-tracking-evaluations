/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 07c6558c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsOpenXRLoaderActive(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x21;
  long lVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x538));
  *(undefined1 *)(unaff_x20 + 0x6a0) = 1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_09531730(uVar6,0,0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((uVar2 & 1) == 0) {
    if (lVar4 == 0) goto LAB_07c6571c;
  }
  else {
    if (lVar4 == 0) goto LAB_07c6571c;
    if (*(int *)(lVar4 + 0x84) == 3) {
      return;
    }
  }
  FUN_07c63684(&stack0x00000020,lVar4);
  FUN_07c65720();
  plVar7 = *(long **)(unaff_x19 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    lVar8 = *(long *)(unaff_x19 + 0x40);
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f4d2c8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07c65668;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f4d2c8,0);
LAB_07c65668:
    uVar9 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0xb0) = uVar9, *(long *)(unaff_x19 + 0x20) != 0)) {
      lVar4 = *(long *)(unaff_x19 + 0x40);
      uVar9 = FUN_07c649c8();
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xac) = uVar9;
        lVar4 = *(long *)(unaff_x19 + 0x40);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar2 = FUN_0952c404(uVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07c6571c;
          bVar1 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0;
        }
        else {
          bVar1 = true;
        }
        if (lVar4 != 0) {
          *(bool *)(lVar4 + 0xb4) = bVar1;
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
            *(bool *)(*(long *)(unaff_x19 + 0x40) + 0xa8) =
                 *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 2;
            FUN_07c62aa8();
            return;
          }
        }
      }
    }
  }
LAB_07c6571c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


