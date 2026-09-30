/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$.cctor
ENTRY_POINT: 0516b9fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_49_0___cctor(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  do {
    lVar2 = (*param_1)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar3 = *(long **)(lVar2 + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar6 = *(long **)(unaff_x19 + 0x10);
    uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar4,uVar4 & 0xffffffff);
    }
    (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar4 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x1e0));
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar3 = *(long **)(lVar2 + 0x20);
    if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x25 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar3,*(long *)(unaff_x25 + 0x90),*(undefined4 *)(lVar2 + 0x2c));
    }
    FUN_0516c1e8();
    FUN_0516b2a4();
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0516b998;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516b998:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0516bdc4;
      lVar2 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_0516bcf0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0516b9f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516b9f4:
    param_1 = (code *)*puVar1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0516bdb8;
    }
  }
LAB_0516bcf0:
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516bdb8:
  (*(code *)*puVar1)();
LAB_0516bdc4:
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


