/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 02c45384
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4562c) */
/* WARNING: Removing unreachable block (ram,0x02c455c8) */
/* WARNING: Removing unreachable block (ram,0x02c45638) */
/* WARNING: Removing unreachable block (ram,0x02c455f0) */

void OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long unaff_x22;
  char cStack000000000000000c;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x298));
  *(undefined1 *)(unaff_x19 + 0xb4) = 1;
  lVar8 = *(long *)(unaff_x22 + 0x48);
  thunk_FUN_0181f594();
  if (lVar8 == 0) {
    return;
  }
  puVar9 = (undefined8 *)(lVar8 + 0x40);
  plVar10 = (long *)*puVar9;
  thunk_FUN_0181f594();
  if (plVar10 == (long *)0x0) {
    return;
  }
  cStack000000000000000c = '\0';
  FUN_02c317e4(plVar10,&stack0x0000000c,0);
  lVar8 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0380c6d8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02c45414;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0185dba8(plVar10,*(long *)PTR_DAT_0380c6d8,0);
LAB_02c45414:
  plVar5 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  puVar3 = PTR_DAT_0380c6e0;
  puVar2 = PTR_DAT_037f3298;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar8 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02c45484;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar2,0);
LAB_02c45484:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02c455b8;
      lVar8 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 == 0) goto LAB_02c45590;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02c454e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)puVar3,0);
LAB_02c454e0:
    lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar8 + 0x38);
    thunk_FUN_0181f594();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar8 + 0x38), thunk_FUN_0181f594(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar8 = *(long *)(lVar8 + 0x48);
      thunk_FUN_0181f594();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar8 = *(long *)(lVar8 + 0x20);
      thunk_FUN_0181f594();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c44bc4(lVar8,0,0);
      FUN_02c449e8();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02c455ac;
    }
  }
LAB_02c45590:
  puVar4 = (undefined8 *)FUN_0185dba8(plVar5,*(long *)PTR_DAT_037f3288,0);
LAB_02c455ac:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02c455b8:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_0184c01c(plVar10,0);
  }
  thunk_FUN_0181f594();
  *puVar9 = 0;
  thunk_FUN_0188fd20(puVar9,0);
  return;
}


