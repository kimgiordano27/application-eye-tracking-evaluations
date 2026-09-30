/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$.cctor
ENTRY_POINT: 0516bca4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_54_0___cctor(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long lStack0000000000000028;
  
  do {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lStack0000000000000028 = param_1;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516bba8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bba8:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0516bdec;
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0516bd44;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516bc04;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bc04:
    plVar2 = (long *)(*(code *)*puVar1)();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar7 = *(long **)(unaff_x19 + 0x10);
    uVar5 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar5,uVar5 & 0xffffffff);
    }
    (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar5 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x1e0));
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04f8e414(0);
    FUN_050243e0(&stack0x00000028,uVar3,0);
    FUN_050ea8a4(lStack0000000000000028,0);
    FUN_0516c1e8();
    FUN_0516b2a4();
    param_1 = lStack0000000000000028 + 1;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0516bde0;
    }
  }
LAB_0516bd44:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bde0:
  (*(code *)*puVar1)();
LAB_0516bdec:
  plVar2 = *(long **)(unaff_x19 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


