/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float4>$$CopyTo
ENTRY_POINT: 04f76028
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<float4>__CopyTo(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar9 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_056109c0(uVar9,0);
  uVar3 = FUN_05619d34();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3ba20);
    FUN_055de400(plVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    plVar7 = *(long **)(lVar5 + 0xc0);
    goto LAB_04f76150;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x25);
  }
  plVar4 = (long *)FUN_056109c0(uVar9,0);
  if (plVar4 == (long *)0x0) {
LAB_04f76498:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar3 = (**(code **)(*plVar4 + 0x298))();
  if ((uVar3 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_04f76498;
    uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
    if ((uVar3 & 1) == 0) {
LAB_04f76374:
      uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
      if ((uVar3 & 1) == 0) {
MagicaCloth2_ExSimpleNativeArray<float4>__Serialize:
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02eea768();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
          FUN_02eea768();
        }
        plVar4 = (long *)thunk_FUN_02ef1808();
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02eea768(lVar5);
        }
        FUN_043dcc34(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
        return plVar4;
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
        puVar8 = (undefined8 *)PTR_DAT_06d3ba38;
        break;
      case 6:
      case 8:
      case 9:
      case 10:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06d3ba08;
        break;
      case 7:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06d3ba40;
        break;
      case 0xb:
      case 0xc:
        lVar5 = *unaff_x25;
        puVar8 = (undefined8 *)PTR_DAT_06d3ba28;
        break;
      default:
        goto MagicaCloth2_ExSimpleNativeArray<float4>__Serialize;
      }
      goto LAB_04f760ec;
    }
    uVar9 = (**(code **)(*unaff_x20 + 0x448))();
    uVar10 = *(undefined8 *)PTR_DAT_06d04008;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    uVar10 = FUN_056109c0(uVar10,0);
    uVar3 = FUN_05619d34(uVar9,uVar10,0);
    if ((uVar3 & 1) == 0) goto LAB_04f76374;
    lVar5 = (**(code **)(*unaff_x20 + 0x468))();
    if (lVar5 == 0) goto LAB_04f76498;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04f7649c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar4 = *(long **)(lVar5 + 0x20);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar4);
      }
    }
    uVar9 = *(undefined8 *)PTR_DAT_06d3ba18;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar7 = (long *)FUN_056109c0(uVar9,0);
    plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
    if (plVar6 == (long *)0x0) goto LAB_04f76498;
    if ((plVar4 != (long *)0x0) &&
       (lVar5 = thunk_FUN_02ef170c(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
      uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,0);
    }
    if ((int)plVar6[3] == 0) goto LAB_04f7649c;
    plVar6[4] = (long)plVar4;
    thunk_FUN_02f411dc(plVar6 + 4,plVar4);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x968))
                                   (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x970)),
       plVar7 == (long *)0x0)) goto LAB_04f76498;
    uVar3 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar3 & 1) == 0) goto LAB_04f76374;
    uVar9 = *(undefined8 *)PTR_DAT_06d3ba30;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
  }
  else {
    lVar5 = *unaff_x25;
    puVar8 = (undefined8 *)PTR_DAT_06d3ba10;
LAB_04f760ec:
    uVar9 = *puVar8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar9 = FUN_056109c0(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
  }
  plVar4 = (long *)FUN_056448d4(uVar9);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_04f76150:
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar4);
    }
  }
  return plVar4;
}


