/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<int>$$Deserialize
ENTRY_POINT: 04f6b564
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * MagicaCloth2_ExSimpleNativeArray<int>__Deserialize(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  thunk_FUN_02f12b58();
  plVar2 = (long *)FUN_056109c0();
  lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06088,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_02ef170c(), lVar4 == 0)) {
      uVar7 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_02f411dc();
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x968))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x970)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x298))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
        if ((uVar5 & 1) == 0) {
switchD_04f6b6cc_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02eea768();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          plVar2 = (long *)thunk_FUN_02ef1808();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02eea768(lVar3);
          }
          FUN_043d9224(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_06d04128 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_05636770();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x25);
        }
        uVar1 = FUN_0561c944(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_06d3ba38;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_06d3ba08;
          break;
        case 7:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_06d3ba40;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_DAT_06d3ba28;
          break;
        default:
          goto switchD_04f6b6cc_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_056109c0(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_DAT_06d3ba30;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar7 = FUN_056109c0(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_056448d4(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


