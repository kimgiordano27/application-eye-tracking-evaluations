/*
FUNCTION_NAME: OVRPlugin.OVRP_1_52_0$$.cctor
ENTRY_POINT: 0516bb94
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_52_0___cctor(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000028;
  
code_r0x0516bb94:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0516bdec;
      lVar5 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 == 0) goto LAB_0516bd44;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516bc04;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bc04:
    plVar3 = (long *)(*(code *)*puVar1)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar7 = *(long **)(unaff_x19 + 0x10);
    uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar2,uVar2 & 0xffffffff);
    }
    (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar2 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x1e0));
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_04f8e414(0);
    FUN_050243e0(&stack0x00000028,uVar4,0);
    FUN_050ea8a4(in_stack_00000028,0);
    FUN_0516c1e8();
    FUN_0516b2a4();
    in_stack_00000028 = in_stack_00000028 + 1;
    lVar5 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 == 0) goto code_r0x0516bb94;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x23) {
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
      if (uVar2 == 0) goto code_r0x0516bb94;
    }
    puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0516bde0;
    }
  }
LAB_0516bd44:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bde0:
  (*(code *)*puVar1)();
LAB_0516bdec:
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
  return;
}


