/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 027eb194
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027eb484) */

long * OVRPlugin__UpdateNodePhysicsPoses(code *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x20;
  
  iVar7 = (*param_1)();
  puVar4 = PTR_DAT_03cc9e10;
  if (iVar7 == 0) {
    return (long *)0x0;
  }
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_027d75b4(&stack0x00000008,0);
  if ((uVar8 & 1) == 0) {
    return (long *)0x0;
  }
  lVar12 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cc6e60) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_027eb220;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_01a472ec();
LAB_027eb220:
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar6 = PTR_DAT_03cc9ef0;
  puVar5 = PTR_DAT_03cbed20;
  puVar3 = PTR_DAT_03cbdd48;
  plVar15 = (long *)0x0;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar5;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_027eb29c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar10,lVar12,0);
LAB_027eb29c:
    uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar8 & 1) == 0) {
      iVar7 = 10;
      goto LAB_027eb3a0;
    }
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar5;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_027eb2fc;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar10,lVar12,1);
LAB_027eb2fc:
    plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    plVar16 = plVar15;
    if (plVar11 == (long *)0x0) break;
    bVar1 = *(byte *)(*plVar11 + 0x130);
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar12 = *(long *)(*plVar11 + 200),
       *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    lVar13 = *(long *)puVar6;
    plVar16 = plVar11;
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15;
    }
    bVar2 = *(byte *)(lVar13 + 0x130);
    if ((bVar1 < bVar2) || (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != lVar13)) break;
    lVar12 = plVar11[0x12];
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar4);
    }
    uVar8 = FUN_027d7dac(&stack0x00000008,lVar12,0);
    plVar15 = plVar16;
    if ((uVar8 & 1) == 0) break;
  } while( true );
  iVar7 = 9;
  plVar15 = plVar16;
LAB_027eb3a0:
  puVar4 = PTR_DAT_03cbed08;
  plVar10 = (long *)thunk_FUN_01a89d6c(plVar10,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_027eb408;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar4,0);
LAB_027eb408:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
  }
  if ((iVar7 != 10) && (iVar7 != 0)) {
    return (long *)0x0;
  }
  if (plVar15 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar12 = *(long *)puVar6;
  bVar1 = *(byte *)(lVar12 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar15 + 0x130)) &&
     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) == lVar12)) {
    return plVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0(plVar15);
}


