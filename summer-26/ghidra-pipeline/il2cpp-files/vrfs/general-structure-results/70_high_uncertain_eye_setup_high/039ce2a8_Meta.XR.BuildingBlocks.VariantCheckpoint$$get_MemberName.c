/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.VariantCheckpoint$$get_MemberName
ENTRY_POINT: 039ce2a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039ce6b4) */

void Meta_XR_BuildingBlocks_VariantCheckpoint__get_MemberName
               (ulong param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 039ce2ac to 03ace2b7 has its CatchHandler @ 039ce820 */
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e636c0);
    thunk_FUN_0159f088(PTR_DAT_06ddc938);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    *(undefined1 *)(unaff_x23 + 0xa7d) = 1;
  }
  if (param_3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar9 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039ce368;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(param_3,lVar8,0);
LAB_039ce368:
    uVar4 = (*(code *)*puVar5)(param_3,puVar5[1]);
  }
  (**(code **)(**(long **)(*(long *)(param_5 + 0x20) + 0xc0) + 8))(param_2,uVar4,param_4);
  puVar2 = PTR_DAT_06dc26f0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(1,0);
  }
  uVar6 = thunk_FUN_0164ba04(param_3,0);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  uVar12 = FUN_031c8668(uVar12,0);
  uVar10 = FUN_031d212c(uVar6,uVar12,0);
  lVar8 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x40);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    if ((*(byte *)(*param_3 + 300) < *(byte *)(lVar8 + 300)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(param_3);
    }
    uVar1 = *(uint *)(param_3 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = param_3[3];
    if (lVar8 != 0) {
      uVar10 = 0;
      puVar5 = (undefined8 *)(lVar8 + 0x38);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(puVar5 + -3)) {
          (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 8))
                    (param_2,puVar5[-2],puVar5[-1],*puVar5);
        }
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + 4;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar8 = *(long *)(lVar8 + 0x50);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_015c2790(lVar8);
  }
  lVar9 = *param_3;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_039ce4fc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(param_3,lVar8,0);
LAB_039ce4fc:
  puVar3 = PTR_DAT_06e636c0;
  plVar7 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
  puVar2 = PTR_DAT_06ddc938;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039ce56c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar2,0);
LAB_039ce56c:
    uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039ce5e4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar8,0);
LAB_039ce5e4:
    (*(code *)*puVar5)(&stack0x00000008,plVar7,puVar5[1]);
    (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 8))
              (param_2,in_stack_00000008,in_stack_00000010,in_stack_00000018);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_039ce66c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar3,0);
LAB_039ce66c:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}


