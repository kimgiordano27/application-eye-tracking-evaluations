/*
FUNCTION_NAME: Unity.Properties.TypeConverter<StyleBackgroundPosition,-BackgroundPosition>$$Invoke
ENTRY_POINT: 061d09cc
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3
*/


void Unity_Properties_TypeConverter<StyleBackgroundPosition,_BackgroundPosition>__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto FUN_061d0a00;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_03f4b594();
FUN_061d0a00:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_061d2460();
  FUN_061d25cc();
  if ((*(int *)(unaff_x19 + 0x300) == 2) || (*(long *)(unaff_x19 + 0x2d8) != 0)) {
    if (*(long *)(unaff_x19 + 0x2e0) == 0) {
      lVar12 = *(long *)(unaff_x19 + 0x2d0);
      uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09123720);
      FUN_04fafe60();
      if (lVar12 == 0) goto LAB_061d1028;
      FUN_04891c40(lVar12,uVar6,0,*(undefined8 *)PTR_DAT_09123728);
      lVar12 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09120748);
      FUN_0896a2a8(lVar12,0);
      if (lVar12 == 0) goto LAB_061d1028;
      lVar7 = FUN_08969ffc(lVar12,0);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f4b260(lVar10);
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(lVar10);
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f4b260();
      }
      if (lVar7 == 0) goto LAB_061d1028;
      lVar11 = *(long *)(lVar7 + 0x10);
      uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0xca0);
      lVar10 = *(long *)PTR_DAT_0910d1b8;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_061d1028;
      uVar1 = *(uint *)(lVar7 + 0x18);
      plVar9 = (long *)(unaff_x19 + 0x2e0);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_03f86000();
      }
      else {
        FUN_056b08d0(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *plVar9 = lVar12;
      thunk_FUN_03f86000(plVar9,lVar12);
      if (*plVar9 == 0) goto LAB_061d1028;
      FUN_08971ca8(*plVar9,*(undefined8 *)(unaff_x19 + 0x2d0),0);
      FUN_08971ca8();
      FUN_061d221c();
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_03f4b260();
      }
      FUN_0896c434();
      lVar7 = *(long *)(unaff_x19 + 0x2d0);
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f4b260();
      }
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03f4b260();
      }
      if (lVar7 == 0) goto LAB_061d1028;
      puVar4 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
      goto LAB_061d0fc4;
    }
  }
  else {
    plVar9 = (long *)(unaff_x19 + 0x2d8);
    lVar12 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09125560);
    FUN_08a671f4(lVar12,0);
    *plVar9 = lVar12;
    thunk_FUN_03f86000(plVar9,lVar12);
    if (*plVar9 == 0) goto LAB_061d1028;
    FUN_08971ca8(*plVar9,*(undefined8 *)(unaff_x19 + 0x2d0),0);
    FUN_08971ca8();
    Unity_Properties_TypeConverter<StyleScale,_Int32Enum>__Invoke();
    if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_061d1028;
    FUN_08a64ea4(*(long *)(unaff_x19 + 0x2d8),2,0);
    if (*plVar9 == 0) goto LAB_061d1028;
    FUN_08a6559c(*plVar9,*(undefined4 *)(unaff_x19 + 0x300),0);
    lVar7 = *(long *)(unaff_x19 + 0x2d8);
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260();
    }
    if (lVar7 == 0) goto LAB_061d1028;
    FUN_0896c434(lVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30),0);
    if (*plVar9 == 0) goto LAB_061d1028;
    lVar7 = *(long *)(*plVar9 + 0x328);
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260();
    }
    if (lVar7 == 0) goto LAB_061d1028;
    FUN_0896c434(lVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x38),0);
    plVar8 = (long *)*plVar9;
    if (plVar8 == (long *)0x0) goto LAB_061d1028;
    lVar12 = (**(code **)(*plVar8 + 0x988))(plVar8,*(undefined8 *)(*plVar8 + 0x990));
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f4b260(lVar7);
    }
    if (lVar12 == 0) goto LAB_061d1028;
    FUN_0896c434(lVar12,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40),0);
    plVar8 = (long *)*plVar9;
    if (plVar8 == (long *)0x0) goto LAB_061d1028;
    lVar12 = (**(code **)(*plVar8 + 0x988))(plVar8,*(undefined8 *)(*plVar8 + 0x990));
    uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09123720);
    FUN_04fafe60();
    if (lVar12 == 0) goto LAB_061d1028;
    FUN_04891c40(lVar12,uVar6,0,*(undefined8 *)PTR_DAT_09123728);
    puVar2 = PTR_DAT_09125550;
    if ((*plVar9 == 0) || (lVar12 = *(long *)(*plVar9 + 0x338), lVar12 == 0)) goto LAB_061d1028;
    uVar13 = *(undefined8 *)(lVar12 + 0x2d8);
    uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_09125550);
    FUN_04fafe60();
    puVar3 = PTR_DAT_09125558;
    FUN_049d5c28(uVar13,uVar6,*(undefined8 *)PTR_DAT_09125558);
    if ((*(long *)(unaff_x19 + 0x2d8) == 0) ||
       ((lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x338), lVar12 == 0 ||
        (plVar8 = *(long **)(lVar12 + 0x2d8), plVar8 == (long *)0x0)))) goto LAB_061d1028;
    (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
    if ((*plVar9 == 0) || (lVar12 = *(long *)(*plVar9 + 0x330), lVar12 == 0)) goto LAB_061d1028;
    uVar13 = *(undefined8 *)(lVar12 + 0x2d8);
    uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)puVar2);
    FUN_04fafe60();
    FUN_049d5c28(uVar13,uVar6,*(undefined8 *)puVar3);
    if (((*(long *)(unaff_x19 + 0x2d8) == 0) ||
        (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x2d8) + 0x330), lVar12 == 0)) ||
       (plVar9 = *(long **)(lVar12 + 0x2d8), plVar9 == (long *)0x0)) goto LAB_061d1028;
    (**(code **)(*plVar9 + 0x248))(plVar9,0,*(undefined8 *)(*plVar9 + 0x250));
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
        == 0) {
      FUN_03f4b260();
    }
    FUN_0896c434();
    lVar7 = *(long *)(unaff_x19 + 0x2d0);
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f4b260();
    }
    if (lVar7 == 0) goto LAB_061d1028;
    puVar4 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
LAB_061d0fc4:
    FUN_0896c434(lVar7,*puVar4,0);
  }
  if (*(long *)(unaff_x19 + 0x2d0) != 0) {
    uVar5 = FUN_0899e304(*(long *)(unaff_x19 + 0x2d0),0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x2d0) != 0) &&
       (plVar9 = *(long **)(*(long *)(unaff_x19 + 0x2d0) + 0x2e8), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x061d1010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      return;
    }
  }
LAB_061d1028:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


