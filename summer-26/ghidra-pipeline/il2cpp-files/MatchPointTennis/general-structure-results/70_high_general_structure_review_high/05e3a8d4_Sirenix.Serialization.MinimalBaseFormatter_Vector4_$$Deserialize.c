/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Deserialize
ENTRY_POINT: 05e3a8d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e3ab60) */

void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Deserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar11 [16];
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f1f018);
  *(undefined1 *)(unaff_x22 + 0xdbd) = 1;
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04481fb8(lVar6);
  }
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05e3a964;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_05e3a964:
  puVar1 = PTR_DAT_09f1f008;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05e3a9d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_05e3a9d4:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_05e3ab0c;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04481fb8(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05e3aa4c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar6,0);
LAB_05e3aa4c:
    auVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar6 = *(long *)(unaff_x21 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar8 = *(uint *)(unaff_x21 + 0x18);
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
      FUN_05e390e8();
      uVar8 = *(uint *)(unaff_x21 + 0x18);
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    pauVar5 = (undefined1 (*) [16])(lVar6 + (long)(int)uVar8 * 0x10 + 0x20);
    *pauVar5 = auVar11;
    thunk_FUN_044bb4b4(pauVar5,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05e3ab28;
    }
  }
LAB_05e3ab0c:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_05e3ab28:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


