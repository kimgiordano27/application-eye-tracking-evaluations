/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__7$$.ctor
ENTRY_POINT: 039c727c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039c75a0) */

void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__7___ctor(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar11;
  
  (**(code **)(*param_1 + 8))();
  puVar2 = PTR_DAT_06dc26f0;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(1,0);
  }
  uVar4 = thunk_FUN_0164ba04();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  uVar11 = FUN_031c8668(uVar11,0);
  uVar5 = FUN_031d212c(uVar4,uVar11,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x40);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(lVar8 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = unaff_x21[3];
    if (lVar8 != 0) {
      uVar5 = 0;
      lVar9 = lVar8 + 0x2a;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(lVar9 + -10)) {
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
        }
        uVar5 = uVar5 + 1;
        lVar9 = lVar9 + 0xc;
      } while (uVar1 != uVar5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar8 = *(long *)(lVar8 + 0x50);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_015c2790(lVar8);
  }
  lVar9 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_039c73f0;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_015c2a80();
LAB_039c73f0:
  puVar3 = PTR_DAT_06e636c0;
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar2 = PTR_DAT_06ddc938;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar8 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039c7460;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar2,0);
LAB_039c7460:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar5 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar9 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039c74d8;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80(plVar7,lVar8,0);
LAB_039c74d8:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039c755c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar3,0);
LAB_039c755c:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  return;
}


