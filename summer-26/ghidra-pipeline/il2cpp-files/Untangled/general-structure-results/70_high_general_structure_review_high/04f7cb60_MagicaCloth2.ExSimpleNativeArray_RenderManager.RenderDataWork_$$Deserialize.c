/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<RenderManager.RenderDataWork>$$Deserialize
ENTRY_POINT: 04f7cb60
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


long * MagicaCloth2_ExSimpleNativeArray<RenderManager_RenderDataWork>__Deserialize(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  
  if (param_1 == 0) {
LAB_04f7cdc4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
LAB_04f7cdc8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  plVar8 = *(long **)(param_1 + 0x20);
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
  plVar3 = (long *)FUN_056109c0(uVar9,0);
  plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
  if (plVar4 == (long *)0x0) goto LAB_04f7cdc4;
  if ((plVar8 != (long *)0x0) &&
     (lVar5 = thunk_FUN_02ef170c(plVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
    uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar9,0);
  }
  if ((int)plVar4[3] == 0) goto LAB_04f7cdc8;
  plVar4[4] = (long)plVar8;
  thunk_FUN_02f411dc(plVar4 + 4,plVar8);
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x968))
                                 (plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x970)),
     plVar3 == (long *)0x0)) goto LAB_04f7cdc4;
  uVar6 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar8,*(undefined8 *)(*plVar3 + 0x2a0));
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
    if ((uVar6 & 1) == 0) {
switchD_04f7cd20_default:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      plVar8 = (long *)thunk_FUN_02ef1808();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768(lVar5);
      }
      FUN_043deb34(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar8;
    }
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
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba38;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba08;
      break;
    case 7:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba40;
      break;
    case 0xb:
    case 0xc:
      lVar5 = *unaff_x25;
      puVar7 = (undefined8 *)PTR_DAT_06d3ba28;
      break;
    default:
      goto switchD_04f7cd20_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_06d3ba30;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
  }
  plVar8 = (long *)FUN_056448d4(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar8);
    }
  }
  return plVar8;
}


