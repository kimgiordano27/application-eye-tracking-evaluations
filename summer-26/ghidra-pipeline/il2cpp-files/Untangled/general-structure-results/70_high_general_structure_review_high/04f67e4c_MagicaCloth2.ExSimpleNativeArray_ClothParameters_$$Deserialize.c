/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ClothParameters>$$Deserialize
ENTRY_POINT: 04f67e4c
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


long * MagicaCloth2_ExSimpleNativeArray<ClothParameters>__Deserialize(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  
  bVar1 = *(byte *)(*unaff_x24 + 0x130);
  if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  uVar8 = *(undefined8 *)PTR_DAT_06d3ba18;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  plVar3 = (long *)FUN_056109c0(uVar8,0);
  lVar4 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
  if (lVar4 != 0) {
    if ((unaff_x21 != (long *)0x0) && (lVar5 = thunk_FUN_02ef170c(), lVar5 == 0)) {
      uVar8 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar8,0);
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(long **)(lVar4 + 0x20) = unaff_x21;
    thunk_FUN_02f411dc();
    if ((plVar3 != (long *)0x0) &&
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x968))
                                   (plVar3,lVar4,*(undefined8 *)(*plVar3 + 0x970)),
       plVar3 != (long *)0x0)) {
      uVar6 = (**(code **)(*plVar3 + 0x298))();
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*unaff_x20 + 0x5a8))();
        if ((uVar6 & 1) == 0) {
switchD_04f67ff8_default:
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar3 = (long *)thunk_FUN_02ef1808();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768(lVar4);
          }
          FUN_043d7f78(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          return plVar3;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_05636770();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x25);
        }
        uVar2 = FUN_0561c944(uVar8,0);
        switch(uVar2) {
        case 5:
          lVar4 = *unaff_x25;
          puVar7 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          plVar3 = (long *)FUN_06931cdc(&PTR_DAT_06d3b000,*unaff_x25);
          return plVar3;
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
          goto switchD_04f67ff8_default;
        }
        uVar8 = *puVar7;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_056109c0(uVar8,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x24);
        }
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_06d3ba30;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_056109c0(uVar8,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x24);
        }
      }
      plVar3 = (long *)FUN_056448d4(uVar8);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02eea768(lVar4);
      }
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02eea768(lVar4);
      }
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar3);
        }
      }
      return plVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


