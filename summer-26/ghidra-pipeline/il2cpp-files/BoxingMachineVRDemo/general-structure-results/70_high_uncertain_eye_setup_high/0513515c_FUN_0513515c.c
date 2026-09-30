/*
FUNCTION_NAME: FUN_0513515c
ENTRY_POINT: 0513515c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05135400) */

undefined8 FUN_0513515c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_067814d0;
  if ((DAT_06b79c91 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06780bf8);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_067814d8);
    FUN_02d6084c(PTR_DAT_06780c00);
    FUN_02d6084c(PTR_DAT_067812d0);
    FUN_02d6084c(PTR_DAT_067814d0);
    DAT_06b79c91 = 1;
  }
  puVar1 = PTR_DAT_0675f3d0;
  uVar5 = FUN_0512edb8(param_1);
  plVar6 = (long *)FUN_02d60934(*(undefined8 *)puVar2,uVar5);
  plVar7 = (long *)FUN_0513336c(param_1);
  puVar4 = PTR_DAT_067814d8;
  puVar3 = PTR_DAT_06780bf8;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar14 = 0;
  do {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05135280;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_05135280:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_051353a8;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto OVRPlugin__GetNodePoseStateAtTime;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_051352dc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_051352dc:
    uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_05737b2c(lVar11,uVar9,0,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
      uVar9 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar6[(long)(int)uVar14 + 4] = lVar11;
    thunk_FUN_02dd37b4(plVar6 + (long)(int)uVar14 + 4,lVar11);
    uVar14 = uVar14 + 1;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0513539c;
    }
  }
OVRPlugin__GetNodePoseStateAtTime:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_0513539c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_051353a8:
  uVar9 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067812d0);
  FUN_0572a530(uVar9,plVar6,0);
  return uVar9;
}


