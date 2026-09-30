/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int>$$Serialize
ENTRY_POINT: 04f6b4c0
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<int>__Serialize(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar9 = *in_x9;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(param_1);
  }
  uVar9 = FUN_056109c0(uVar9,0);
  uVar3 = FUN_05619d34(param_2,uVar9,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x468))();
    if (lVar4 == 0) {
LAB_04f6b770:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04f6b774:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar8);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_06d3ba18;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar5 = (long *)FUN_056109c0(uVar9,0);
    plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
    if (plVar6 == (long *)0x0) goto LAB_04f6b770;
    if ((plVar8 != (long *)0x0) &&
       (lVar4 = thunk_FUN_02ef170c(plVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_04f6b774;
    plVar6[4] = (long)plVar8;
    thunk_FUN_02f411dc(plVar6 + 4,plVar8);
    if ((plVar5 == (long *)0x0) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x968))
                                   (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x970)),
       plVar5 == (long *)0x0)) goto LAB_04f6b770;
    uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2a0));
    if ((uVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_06d3ba30;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_056109c0(uVar9,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x24);
      }
      goto LAB_04f6b400;
    }
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_05636770();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    uVar2 = FUN_0561c944(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba38;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba08;
      break;
    case 7:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba40;
      break;
    case 0xb:
    case 0xc:
      lVar4 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba28;
      break;
    default:
      goto switchD_04f6b6cc_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
LAB_04f6b400:
    plVar8 = (long *)FUN_056448d4(uVar9);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar8);
      }
    }
    return plVar8;
  }
switchD_04f6b6cc_default:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  plVar8 = (long *)thunk_FUN_02ef1808();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768(lVar4);
  }
  FUN_043d9224(plVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar8;
}


