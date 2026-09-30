/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float3>$$Serialize
ENTRY_POINT: 04f75628
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


long * MagicaCloth2_ExSimpleNativeArray<float3>__Serialize(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  lVar3 = FUN_02eea768();
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x25);
  }
  plVar4 = (long *)FUN_056109c0(uVar9,0);
  if (plVar4 == (long *)0x0) {
LAB_04f75a28:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar5 = (**(code **)(*plVar4 + 0x298))();
  if ((uVar5 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_04f75a28;
    uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
    if ((uVar5 & 1) != 0) {
      uVar9 = (**(code **)(*unaff_x20 + 0x448))();
      uVar10 = *(undefined8 *)PTR_DAT_06d04008;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x25);
      }
      uVar10 = FUN_056109c0(uVar10,0);
      uVar5 = FUN_05619d34(uVar9,uVar10,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = (**(code **)(*unaff_x20 + 0x468))();
        if (lVar3 == 0) goto LAB_04f75a28;
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04f75a2c:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        plVar4 = *(long **)(lVar3 + 0x20);
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
        plVar6 = (long *)FUN_056109c0(uVar9,0);
        plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
        if (plVar7 == (long *)0x0) goto LAB_04f75a28;
        if ((plVar4 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02ef170c(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
          uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_04f75a2c;
        plVar7[4] = (long)plVar4;
        thunk_FUN_02f411dc(plVar7 + 4,plVar4);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x968))
                                       (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x970)),
           plVar6 == (long *)0x0)) goto LAB_04f75a28;
        uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar4,*(undefined8 *)(*plVar6 + 0x2a0));
        if ((uVar5 & 1) != 0) {
          uVar9 = *(undefined8 *)PTR_DAT_06d3ba30;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_056109c0(uVar9,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*unaff_x24);
          }
          goto LAB_04f756b8;
        }
      }
    }
    uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
    if ((uVar5 & 1) == 0) {
switchD_04f75984_default:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02eea768();
      }
      plVar4 = (long *)thunk_FUN_02ef1808();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      FUN_043dc9a8(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
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
      lVar3 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d3ba38;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar3 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d3ba08;
      break;
    case 7:
      lVar3 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d3ba40;
      break;
    case 0xb:
    case 0xc:
      lVar3 = *unaff_x25;
      puVar8 = (undefined8 *)PTR_DAT_06d3ba28;
      break;
    default:
      goto switchD_04f75984_default;
    }
  }
  else {
    lVar3 = *unaff_x25;
    puVar8 = (undefined8 *)PTR_DAT_06d3ba10;
  }
  uVar9 = *puVar8;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_056109c0(uVar9,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x24);
  }
LAB_04f756b8:
  plVar4 = (long *)FUN_056448d4(uVar9);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar4);
    }
  }
  return plVar4;
}


