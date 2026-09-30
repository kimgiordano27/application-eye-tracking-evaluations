/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 049af808
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x049afc1c) */

void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar10;
  
  lVar6 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_1) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_049af860;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_049af860:
                    /* try { // try from 049af860 to 04aafaef has its CatchHandler @ 049af860
                       catch() { ... } // from try @ 049af860 with catch @ 049af860
                       catch() { ... } // from try @ 049afb30 with catch @ 049af860
                       catch() { ... } // from try @ 049afb94 with catch @ 049af860
                       catch() { ... } // from try @ 049afba8 with catch @ 049af860
                       catch() { ... } // from try @ 049afbe8 with catch @ 049af860
                       catch() { ... } // from try @ 049afc40 with catch @ 049af860 */
  (*(code *)*puVar3)();
  FUN_049af6ec();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(1,0);
  }
  uVar4 = thunk_FUN_02f1863c();
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar10 = FUN_050e4454(uVar10,0);
  uVar8 = FUN_050ed374(uVar4,uVar10,0);
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar6 = unaff_x21[3];
    if (lVar6 != 0) {
      uVar8 = 0;
      lVar7 = lVar6 + 0x2c;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (-1 < *(int *)(lVar7 + -0xc)) {
          FUN_049b0ba4();
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x24;
      } while (uVar1 != uVar8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = *(long *)(lVar6 + 0x88);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_049afa14;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_049afa14:
  plVar5 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_067c91b8;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_049afa8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar2,0);
LAB_049afa8c:
    uVar8 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_049afbb8;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_049afb10;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar5,lVar6,0);
LAB_049afb10:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
    FUN_049b0ba4();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_049afbd4;
    }
  }
LAB_049afbb8:
  puVar3 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)PTR_DAT_067c91b0,0);
LAB_049afbd4:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}


