/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<DeformationCommon.BoneAdjustmentData>$$.ctor
ENTRY_POINT: 03bdf310
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


long * System_Collections_Generic_EqualityComparer<DeformationCommon_BoneAdjustmentData>___ctor
                 (long param_1,undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong in_x9;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 unaff_w19;
  long *unaff_x20;
  code *pcVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  puVar3 = PTR_DAT_06de62f0;
  pcVar15 = *(code **)(*(long *)(*(long *)(param_4 + 0xc0) + 0xc0) + 8);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_015c2790(param_1);
  }
  plVar9 = (long *)(*pcVar15)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xc0));
  iVar6 = FUN_0322bb64();
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar12);
    lVar12 = *(long *)puVar3;
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  iVar7 = *(int *)(*(long *)(lVar12 + 0xb8) + 0xc);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  puVar2 = PTR_DAT_06dbb6f0;
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x28) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(plVar9,iVar7 + iVar6,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28));
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar12 = *(long *)puVar2;
  }
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  puVar4 = PTR_DAT_06e0d490;
  puVar2 = PTR_DAT_06dc0210;
  (*pcVar15)(plVar9,uVar16,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x30));
  lVar12 = *(long *)puVar3;
  iVar6 = *(int *)(*(long *)(lVar12 + 0xb8) + 0xc);
  do {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar12 = *(long *)puVar3;
    }
    if (*(int *)(*(long *)(lVar12 + 0xb8) + 0x10) + *(int *)(*(long *)(lVar12 + 0xb8) + 0xc) <=
        iVar6) {
      uVar8 = 1;
      goto LAB_03bdf518;
    }
    lVar11 = *unaff_x20;
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lVar12 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_015c2790(lVar11);
      uVar1 = *(ushort *)(*unaff_x20 + 0x132);
      lVar12 = *unaff_x20;
    }
    pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_015c2790(lVar12);
    }
    iVar7 = (*pcVar15)(plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xf0));
    if (iVar6 != iVar7) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar7 = FUN_022085bc(iVar6,0);
      if (iVar7 != 0) break;
    }
    lVar12 = *(long *)puVar3;
    iVar6 = iVar6 + 1;
  } while( true );
  uVar8 = 0;
LAB_03bdf518:
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x38) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(plVar9,uVar8,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x38));
  iVar6 = OVRPlugin__StartBodyTracking2();
  if (iVar6 == 0) {
    lVar11 = *unaff_x20;
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lVar12 = lVar11;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_015c2790(lVar11);
      uVar1 = *(ushort *)(*unaff_x20 + 0x132);
      lVar12 = *unaff_x20;
    }
    pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xf0) + 8);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_015c2790(lVar12);
    }
    uVar8 = (*pcVar15)(plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar4);
    }
    FUN_02208268(uVar8,0,0);
  }
  else {
    iVar6 = OVRPlugin__StartBodyTracking2();
    if (iVar6 == 3) {
      bVar5 = true;
    }
    else {
      iVar6 = OVRPlugin__StartBodyTracking2();
      bVar5 = iVar6 == 4;
    }
    lVar12 = *unaff_x20;
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_015c2790();
    }
    if (!bVar5) {
      lVar11 = *unaff_x20;
      pcVar15 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x40) + 8);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_015c2790();
      }
      lVar12 = *(long *)(lVar11 + 0xc0);
      uVar16 = 0xffffffff;
      goto LAB_03bdf704;
    }
    lVar11 = *unaff_x20;
    pcVar15 = *(code **)(*(long *)(*(long *)(lVar12 + 0xc0) + 0xf0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_015c2790();
    }
    uVar8 = (*pcVar15)(plVar9,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0xf0));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar4);
    }
    FUN_02208344(uVar8,0,0);
  }
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  lVar12 = *(long *)(lVar12 + 0xc0);
  uVar16 = 0;
LAB_03bdf704:
  (*pcVar15)(plVar9,uVar16,*(undefined8 *)(lVar12 + 0x40));
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  uVar8 = (*pcVar15)(plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xf0));
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar4);
  }
  uVar8 = FUN_022085bc(uVar8,0);
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x48) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(plVar9,uVar8,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x48));
  uVar16 = FUN_0322bb6c();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x50) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,param_3,0,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x50));
  uVar16 = FUN_0322bb6c();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x58) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,param_3,0,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x58));
  uVar16 = FUN_0322bb8c();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x60) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,param_3,0,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x60));
  uVar16 = FUN_0322bb9c();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x68) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x68));
  uVar8 = FUN_0322bba4();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x70) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(plVar9,uVar8,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
  fVar17 = (float)FUN_0322bbbc();
  if (ABS(fVar17) <= DAT_0534bf80) {
    fVar17 = 1.0;
  }
  else {
    fVar17 = (float)FUN_0322bbb4();
    fVar18 = (float)FUN_0322bbbc();
    fVar17 = fVar17 / fVar18;
  }
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x78) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(fVar17,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x78));
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x80) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(0,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x80));
  uVar16 = FUN_0322bbcc();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x88) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x88));
  uVar16 = FUN_0322bbd4();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x90) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x90));
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x98) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(0,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x98));
  uVar16 = FUN_0322bbdc();
  uVar19 = FUN_0322bbdc();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xa0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,uVar19,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xa0));
  uVar16 = FUN_0322bbe4();
  uVar19 = FUN_0322bbe4();
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xa8) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(uVar16,uVar19,plVar9,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xa8));
  lVar11 = *unaff_x20;
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lVar12 = lVar11;
  if ((uVar1 & 1) == 0) {
    lVar11 = FUN_015c2790(lVar11);
    uVar1 = *(ushort *)(*unaff_x20 + 0x132);
    lVar12 = *unaff_x20;
  }
  pcVar15 = *(code **)(*(long *)(*(long *)(lVar11 + 0xc0) + 0xb0) + 8);
  if ((uVar1 & 1) == 0) {
    lVar12 = FUN_015c2790(lVar12);
  }
  (*pcVar15)(plVar9,unaff_w19,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0xb0));
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_03bdfd90;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_015c2a80(plVar9,*(long *)puVar2,1);
LAB_03bdfd90:
  (*(code *)*puVar10)(plVar9,1,puVar10[1]);
  return plVar9;
}


