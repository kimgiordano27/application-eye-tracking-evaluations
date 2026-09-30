/*
FUNCTION_NAME: FUN_03bdf254
ENTRY_POINT: 03bdf254
PROGRAM: vrfs-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * FUN_03bdf254(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4
                   ,long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
  if ((DAT_0723b8e1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dc0210);
    thunk_FUN_0159f088(PTR_DAT_06e0d490);
    thunk_FUN_0159f088(PTR_DAT_06de62f0);
    thunk_FUN_0159f088(PTR_DAT_06dbb6f0);
    DAT_0723b8e1 = 1;
  }
  plVar15 = (long *)(param_5 + 0x20);
  lVar9 = *plVar15;
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_015c2790();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 200);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_015c2790();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  puVar3 = PTR_DAT_06de62f0;
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xc0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  plVar10 = (long *)(*pcVar16)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xc0));
  iVar6 = FUN_0322bb64(param_3,0);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar9);
    lVar9 = *(long *)puVar3;
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  iVar7 = *(int *)(*(long *)(lVar9 + 0xb8) + 0xc);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  puVar2 = PTR_DAT_06dbb6f0;
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x28) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(plVar10,iVar7 + iVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar9 = *(long *)puVar2;
  }
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  uVar17 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  puVar4 = PTR_DAT_06e0d490;
  puVar2 = PTR_DAT_06dc0210;
  (*pcVar16)(plVar10,uVar17,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x30));
  lVar9 = *(long *)puVar3;
  iVar6 = *(int *)(*(long *)(lVar9 + 0xb8) + 0xc);
  do {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar9 = *(long *)puVar3;
    }
    if (*(int *)(*(long *)(lVar9 + 0xb8) + 0x10) + *(int *)(*(long *)(lVar9 + 0xb8) + 0xc) <= iVar6)
    {
      uVar8 = 1;
      goto LAB_03bdf518;
    }
    lVar12 = *plVar15;
    uVar1 = *(ushort *)(lVar12 + 0x132);
    lVar9 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_015c2790(lVar12);
      uVar1 = *(ushort *)(*plVar15 + 0x132);
      lVar9 = *plVar15;
    }
    pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_015c2790(lVar9);
    }
    iVar7 = (*pcVar16)(plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xf0));
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar7 = FUN_022085bc(iVar6,0);
      if (iVar7 != 0) break;
    }
    lVar9 = *(long *)puVar3;
    iVar6 = iVar6 + 1;
  } while( true );
  uVar8 = 0;
LAB_03bdf518:
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x38) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(plVar10,uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
  iVar6 = OVRPlugin__StartBodyTracking2(param_3,0);
  if (iVar6 == 0) {
    lVar12 = *plVar15;
    uVar1 = *(ushort *)(lVar12 + 0x132);
    lVar9 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_015c2790(lVar12);
      uVar1 = *(ushort *)(*plVar15 + 0x132);
      lVar9 = *plVar15;
    }
    pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_015c2790(lVar9);
    }
    uVar8 = (*pcVar16)(plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar4);
    }
    FUN_02208268(uVar8,0,0);
  }
  else {
    iVar6 = OVRPlugin__StartBodyTracking2(param_3,0);
    if (iVar6 == 3) {
      bVar5 = true;
    }
    else {
      iVar6 = OVRPlugin__StartBodyTracking2(param_3,0);
      bVar5 = iVar6 == 4;
    }
    lVar9 = *plVar15;
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_015c2790();
    }
    if (!bVar5) {
      lVar12 = *plVar15;
      pcVar16 = *(code **)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x40) + 8);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_015c2790();
      }
      lVar9 = *(long *)(lVar12 + 0xc0);
      uVar17 = 0xffffffff;
      goto LAB_03bdf704;
    }
    lVar12 = *plVar15;
    pcVar16 = *(code **)(*(long *)(*(long *)(lVar9 + 0xc0) + 0xf0) + 8);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_015c2790();
    }
    uVar8 = (*pcVar16)(plVar10,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar4);
    }
    FUN_02208344(uVar8,0,0);
  }
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x40) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  lVar9 = *(long *)(lVar9 + 0xc0);
  uVar17 = 0;
LAB_03bdf704:
  (*pcVar16)(plVar10,uVar17,*(undefined8 *)(lVar9 + 0x40));
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  uVar8 = (*pcVar16)(plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xf0));
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar4);
  }
  uVar8 = FUN_022085bc(uVar8,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x48) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(plVar10,uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48));
  uVar17 = FUN_0322bb6c(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x50) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,param_2,0,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x50));
  uVar17 = FUN_0322bb6c(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x58) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,param_2,0,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x58));
  uVar17 = FUN_0322bb8c(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x60) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,param_2,0,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x60));
  uVar17 = FUN_0322bb9c(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x68) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x68));
  uVar8 = FUN_0322bba4(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x70) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(plVar10,uVar8,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
  fVar18 = (float)FUN_0322bbbc(param_3,0);
  if (ABS(fVar18) <= DAT_0534bf80) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = (float)FUN_0322bbb4(param_3,0);
    fVar19 = (float)FUN_0322bbbc(param_3,0);
    fVar18 = fVar18 / fVar19;
  }
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x78) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(fVar18,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x78));
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x80) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(0,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x80));
  uVar17 = FUN_0322bbcc(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x88) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x88));
  uVar17 = FUN_0322bbd4(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x90) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x90));
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x98) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(0,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x98));
  uVar17 = FUN_0322bbdc(param_3,0);
  uVar20 = FUN_0322bbdc(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xa0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,uVar20,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xa0));
  uVar17 = FUN_0322bbe4(param_3,0);
  uVar20 = FUN_0322bbe4(param_3,0);
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xa8) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(uVar17,uVar20,plVar10,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xa8));
  lVar12 = *plVar15;
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lVar9 = lVar12;
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
    uVar1 = *(ushort *)(*plVar15 + 0x132);
    lVar9 = *plVar15;
  }
  pcVar16 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xb0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_015c2790(lVar9);
  }
  (*pcVar16)(plVar10,param_4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xb0));
  lVar9 = *plVar10;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03bdfd90;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)puVar2,1);
LAB_03bdfd90:
  (*(code *)*puVar11)(plVar10,1,puVar11[1]);
  return plVar10;
}


