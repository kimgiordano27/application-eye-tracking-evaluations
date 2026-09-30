/*
FUNCTION_NAME: Unity.Properties.TypeConverter<StyleTransformOrigin,-TransformOrigin>$$Invoke
ENTRY_POINT: 03f502e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<StyleTransformOrigin,_TransformOrigin>__Invoke(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320e90);
    FUN_02b3c81c(PTR_DAT_06320e98);
    FUN_02b3c81c(PTR_DAT_06321868);
    FUN_02b3c81c(PTR_DAT_06321870);
    FUN_02b3c81c(PTR_DAT_0631f130);
    FUN_02b3c81c(PTR_DAT_063173b8);
    FUN_02b3c81c(PTR_DAT_06321878);
    FUN_02b3c81c(PTR_DAT_0631ef18);
    *(undefined1 *)(unaff_x21 + 0xd1f) = 1;
  }
  if ((*(long *)(unaff_x19 + 0x2d0) == 0) ||
     (plVar4 = (long *)FUN_05e1fae8(*(long *)(unaff_x19 + 0x2d0),0), plVar4 == (long *)0x0))
  goto LAB_03f509e0;
  lVar9 = *plVar4;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0631f130) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto Unity_Properties_TypeConverter<StyleTranslate,_Translate>___ctor;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)PTR_DAT_0631f130,0);
Unity_Properties_TypeConverter<StyleTranslate,_Translate>___ctor:
  uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar12 & 1) == 0) {
    return;
  }
  FUN_03f51e18();
  FUN_03f51f84();
  if ((*(int *)(unaff_x19 + 0x300) == 2) || (*(long *)(unaff_x19 + 0x2d8) != 0)) {
    if (*(long *)(unaff_x19 + 0x2e0) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x2d0);
      uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320e98);
      FUN_04981ae4();
      if (lVar9 == 0) goto LAB_03f509e0;
      FUN_0316d62c(lVar9,uVar6,0,*(undefined8 *)PTR_DAT_06320e90);
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631ef18);
      FUN_05df0c30(lVar9,0);
      if (lVar9 == 0) goto LAB_03f509e0;
      lVar7 = FUN_05df0984(lVar9,0);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02b76218(lVar10);
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar10);
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02b76218();
      }
      if (lVar7 == 0) goto LAB_03f509e0;
      lVar11 = *(long *)(lVar7 + 0x10);
      uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0xca0);
      lVar10 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_03f509e0;
      uVar1 = *(uint *)(lVar7 + 0x18);
      plVar4 = (long *)(unaff_x19 + 0x2e0);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *plVar4 = lVar9;
      thunk_FUN_02bb0e9c(plVar4,lVar9);
      if (*plVar4 == 0) goto LAB_03f509e0;
      FUN_05df8630(*plVar4,*(undefined8 *)(unaff_x19 + 0x2d0),0);
      FUN_05df8630();
      FUN_03f51bd4();
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_02b76218();
      }
      FUN_05df2dbc();
      lVar7 = *(long *)(unaff_x19 + 0x2d0);
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218();
      }
      if (lVar7 == 0) goto LAB_03f509e0;
      puVar5 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
      goto LAB_03f5097c;
    }
  }
  else {
    plVar4 = (long *)(unaff_x19 + 0x2d8);
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06321878);
    FUN_05eed510(lVar9,0);
    *plVar4 = lVar9;
    thunk_FUN_02bb0e9c(plVar4,lVar9);
    if (*plVar4 == 0) goto LAB_03f509e0;
    FUN_05df8630(*plVar4,*(undefined8 *)(unaff_x19 + 0x2d0),0);
    FUN_05df8630();
    FUN_03f51840();
    if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_03f509e0;
    FUN_05eeb1c0(*(long *)(unaff_x19 + 0x2d8),2,0);
    if (*plVar4 == 0) goto LAB_03f509e0;
    FUN_05eeb8b8(*plVar4,*(undefined4 *)(unaff_x19 + 0x300),0);
    lVar7 = *(long *)(unaff_x19 + 0x2d8);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218();
    }
    if (lVar7 == 0) goto LAB_03f509e0;
    FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30),0);
    if (*plVar4 == 0) goto LAB_03f509e0;
    lVar7 = *(long *)(*plVar4 + 0x328);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218();
    }
    if (lVar7 == 0) goto LAB_03f509e0;
    FUN_05df2dbc(lVar7,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x38),0);
    plVar8 = (long *)*plVar4;
    if (plVar8 == (long *)0x0) goto LAB_03f509e0;
    lVar9 = (**(code **)(*plVar8 + 0x988))(plVar8,*(undefined8 *)(*plVar8 + 0x990));
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    if (lVar9 == 0) goto LAB_03f509e0;
    FUN_05df2dbc(lVar9,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40),0);
    plVar8 = (long *)*plVar4;
    if (plVar8 == (long *)0x0) goto LAB_03f509e0;
    lVar9 = (**(code **)(*plVar8 + 0x988))(plVar8,*(undefined8 *)(*plVar8 + 0x990));
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06320e98);
    FUN_04981ae4();
    if (lVar9 == 0) goto LAB_03f509e0;
    FUN_0316d62c(lVar9,uVar6,0,*(undefined8 *)PTR_DAT_06320e90);
    puVar2 = PTR_DAT_06321868;
    if ((*plVar4 == 0) || (lVar9 = *(long *)(*plVar4 + 0x338), lVar9 == 0)) goto LAB_03f509e0;
    uVar14 = *(undefined8 *)(lVar9 + 0x2d8);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06321868);
    FUN_04981ae4();
    puVar3 = PTR_DAT_06321870;
    FUN_031ea8a8(uVar14,uVar6,*(undefined8 *)PTR_DAT_06321870);
    if ((*(long *)(unaff_x19 + 0x2d8) == 0) ||
       ((lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x338), lVar9 == 0 ||
        (plVar8 = *(long **)(lVar9 + 0x2d8), plVar8 == (long *)0x0)))) goto LAB_03f509e0;
    (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
    if ((*plVar4 == 0) || (lVar9 = *(long *)(*plVar4 + 0x330), lVar9 == 0)) goto LAB_03f509e0;
    uVar14 = *(undefined8 *)(lVar9 + 0x2d8);
    uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_04981ae4();
    FUN_031ea8a8(uVar14,uVar6,*(undefined8 *)puVar3);
    if (((*(long *)(unaff_x19 + 0x2d8) == 0) ||
        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x330), lVar9 == 0)) ||
       (plVar4 = *(long **)(lVar9 + 0x2d8), plVar4 == (long *)0x0)) goto LAB_03f509e0;
    (**(code **)(*plVar4 + 0x248))(plVar4,0,*(undefined8 *)(*plVar4 + 0x250));
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
        == 0) {
      FUN_02b76218();
    }
    FUN_05df2dbc();
    lVar7 = *(long *)(unaff_x19 + 0x2d0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218();
    }
    if (lVar7 == 0) goto LAB_03f509e0;
    puVar5 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
LAB_03f5097c:
    FUN_05df2dbc(lVar7,*puVar5,0);
  }
  if (*(long *)(unaff_x19 + 0x2d0) != 0) {
    uVar12 = UnityEngine_UIElements_PointerLeaveEvent__PreDispatch(*(long *)(unaff_x19 + 0x2d0),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
       (plVar4 = *(long **)(*(long *)(unaff_x19 + 0x2d0) + 0x2e8), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03f509c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      return;
    }
  }
LAB_03f509e0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


