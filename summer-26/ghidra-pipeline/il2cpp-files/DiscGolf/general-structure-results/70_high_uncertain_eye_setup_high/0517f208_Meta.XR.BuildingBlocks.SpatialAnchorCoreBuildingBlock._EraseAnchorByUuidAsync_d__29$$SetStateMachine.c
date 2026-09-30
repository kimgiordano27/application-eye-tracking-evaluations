/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<EraseAnchorByUuidAsync>d__29$$SetStateMachine
ENTRY_POINT: 0517f208
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29__SetStateMachine
               (void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  code *pcVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  piVar4 = (int *)thunk_FUN_02df4db4();
  iVar1 = *piVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_0517f68c;
    }
    if (iVar1 != 1) {
LAB_0517f6a8:
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar6 = thunk_FUN_02dd3144();
      FUN_05453f1c(uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6);
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar5 = (undefined8 *)thunk_FUN_02df4db4();
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) {
LAB_0517f6a4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0517f54c;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff8,0);
LAB_0517f54c:
    uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18(*(long *)(unaff_x20 + 0x20));
    }
    puVar5 = (undefined8 *)thunk_FUN_02df4db4();
    plVar11 = (long *)*puVar5;
    if (plVar11 == (long *)0x0) goto LAB_0517f6a4;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_0517f614;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_02dd004c(plVar11,lVar7,0);
LAB_0517f614:
    lVar7 = *(long *)(lVar7 + 8);
    uVar6 = *(undefined8 *)(lVar7 + 8);
    pcVar10 = *(code **)(lVar7 + 0x10);
LAB_0517f624:
    (*pcVar10)(uVar6,lVar7,plVar11,0,&stack0x00000008);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  else {
    if (iVar1 == 2) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02dcfd18(lVar8);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x50);
      if ((uVar2 & 1) == 0) {
        FUN_02dcfd18(lVar7);
      }
      uVar6 = thunk_FUN_02df4db4();
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02dcfd18(lVar7);
      }
      uVar3 = (*pcVar10)(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x50));
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02dcfd18(lVar8);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      uVar6 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02dcfd18(lVar7);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar8 = *(long *)(unaff_x20 + 0x20);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x60);
      if ((uVar2 & 1) == 0) {
        FUN_02dcfd18(lVar8);
      }
      plVar11 = (long *)thunk_FUN_02df4db4();
      pcVar10 = *(code **)(lVar7 + 0x10);
      goto LAB_0517f624;
    }
    if (iVar1 != 3) goto LAB_0517f6a8;
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02dcfd18(lVar8);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x68);
    if ((uVar2 & 1) == 0) {
      FUN_02dcfd18(lVar7);
    }
    uVar6 = thunk_FUN_02df4db4();
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18(lVar7);
    }
    uVar3 = (*pcVar10)(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x68));
    lVar8 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar7 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02dcfd18(lVar8);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x78);
    if ((uVar2 & 1) == 0) {
      FUN_02dcfd18(lVar7);
    }
    uVar6 = thunk_FUN_02df4db4();
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18(lVar7);
    }
    (*pcVar10)(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x78));
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02dcfd18(lVar7);
    uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x40);
  if ((uVar2 & 1) == 0) {
    FUN_02dcfd18(lVar8);
  }
  (*pcVar10)();
LAB_0517f68c:
  return uVar3 & 1;
}


