/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<DeformationCommon.BonePairData>$$get_Default
ENTRY_POINT: 03bdf318
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * System_Collections_Generic_EqualityComparer<DeformationCommon_BonePairData>__get_Default
                 (long param_1,undefined1 param_2 [16],undefined8 param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong in_x9;
  long lVar11;
  ulong uVar12;
  long in_x10;
  int *piVar13;
  undefined4 unaff_w19;
  long *unaff_x20;
  code *pcVar14;
  undefined8 uVar15;
  long unaff_x26;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  pcVar14 = *(code **)(*(long *)(in_x10 + 0xc0) + 8);
  plVar16 = *(long **)(unaff_x26 + 0x2f0);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_015c2790(param_1);
  }
  plVar8 = (long *)(*pcVar14)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xc0));
  iVar5 = FUN_0322bb64();
  lVar11 = *plVar16;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar11);
    lVar11 = *plVar16;
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  iVar6 = *(int *)(*(long *)(lVar11 + 0xb8) + 0xc);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  puVar2 = PTR_DAT_06dbb6f0;
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(plVar8,iVar6 + iVar5,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x28));
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar11 = *(long *)puVar2;
  }
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  puVar3 = PTR_DAT_06e0d490;
  puVar2 = PTR_DAT_06dc0210;
  (*pcVar14)(plVar8,uVar15,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x30));
  lVar11 = *plVar16;
  iVar5 = *(int *)(*(long *)(lVar11 + 0xb8) + 0xc);
  do {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *plVar16;
    }
    if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x10) + *(int *)(*(long *)(lVar11 + 0xb8) + 0xc) <=
        iVar5) {
      uVar7 = 1;
      goto LAB_03bdf518;
    }
    lVar10 = *unaff_x20;
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lVar11 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_015c2790(lVar10);
      uVar1 = *(ushort *)(*unaff_x20 + 0x132);
      lVar11 = *unaff_x20;
    }
    pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_015c2790(lVar11);
    }
    iVar6 = (*pcVar14)(plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xf0));
    if (iVar5 != iVar6) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar6 = FUN_022085bc(iVar5,0);
      if (iVar6 != 0) break;
    }
    lVar11 = *plVar16;
    iVar5 = iVar5 + 1;
  } while( true );
  uVar7 = 0;
LAB_03bdf518:
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x38) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(plVar8,uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x38));
  iVar5 = OVRPlugin__StartBodyTracking2();
  if (iVar5 == 0) {
    lVar10 = *unaff_x20;
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lVar11 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_015c2790(lVar10);
      uVar1 = *(ushort *)(*unaff_x20 + 0x132);
      lVar11 = *unaff_x20;
    }
    pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_015c2790(lVar11);
    }
    uVar7 = (*pcVar14)(plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar3);
    }
    FUN_02208268(uVar7,0,0);
  }
  else {
    iVar5 = OVRPlugin__StartBodyTracking2();
    if (iVar5 == 3) {
      bVar4 = true;
    }
    else {
      iVar5 = OVRPlugin__StartBodyTracking2();
      bVar4 = iVar5 == 4;
    }
    lVar11 = *unaff_x20;
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_015c2790();
    }
    if (!bVar4) {
      lVar10 = *unaff_x20;
      pcVar14 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_015c2790();
      }
      lVar11 = *(long *)(lVar10 + 0xc0);
      uVar15 = 0xffffffff;
      goto LAB_03bdf704;
    }
    lVar10 = *unaff_x20;
    pcVar14 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xf0) + 8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_015c2790();
    }
    uVar7 = (*pcVar14)(plVar8,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar3);
    }
    FUN_02208344(uVar7,0,0);
  }
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x40) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  lVar11 = *(long *)(lVar11 + 0xc0);
  uVar15 = 0;
LAB_03bdf704:
  (*pcVar14)(plVar8,uVar15,*(undefined8 *)(lVar11 + 0x40));
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  uVar7 = (*pcVar14)(plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xf0));
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar3);
  }
  uVar7 = FUN_022085bc(uVar7,0);
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x48) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(plVar8,uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x48));
  uVar15 = FUN_0322bb6c();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x50) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,param_3,0,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x50));
  uVar15 = FUN_0322bb6c();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x58) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,param_3,0,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x58));
  uVar15 = FUN_0322bb8c();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x60) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,param_3,0,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x60));
  uVar15 = FUN_0322bb9c();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x68) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x68));
  uVar7 = FUN_0322bba4();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(plVar8,uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
  fVar17 = (float)FUN_0322bbbc();
  if (ABS(fVar17) <= DAT_0534bf80) {
    fVar17 = 1.0;
  }
  else {
    fVar17 = (float)FUN_0322bbb4();
    fVar18 = (float)FUN_0322bbbc();
    fVar17 = fVar17 / fVar18;
  }
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x78) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(fVar17,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x78));
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x80) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(0,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x80));
  uVar15 = FUN_0322bbcc();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x88) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x88));
  uVar15 = FUN_0322bbd4();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x90) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x90));
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x98) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(0,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x98));
  uVar15 = FUN_0322bbdc();
  uVar19 = FUN_0322bbdc();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xa0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,uVar19,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xa0));
  uVar15 = FUN_0322bbe4();
  uVar19 = FUN_0322bbe4();
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xa8) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(uVar15,uVar19,plVar8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xa8));
  lVar10 = *unaff_x20;
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lVar11 = lVar10;
  if ((uVar1 & 1) == 0) {
    lVar10 = FUN_015c2790(lVar10);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar11 = *unaff_x20;
  }
  pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0xb0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
  }
  (*pcVar14)(plVar8,unaff_w19,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xb0));
  lVar11 = *plVar8;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_03bdfd90;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_015c2a80(plVar8,*(long *)puVar2,1);
LAB_03bdfd90:
  (*(code *)*puVar9)(plVar8,1,puVar9[1]);
  return plVar8;
}


