/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 049af794
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x049afc1c) */

void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((DAT_06bb7814 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bb7814 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_049af860;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(param_2,lVar7,0);
LAB_049af860:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_049af6ec(param_1,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(1,0);
  }
  uVar5 = thunk_FUN_02f1863c(param_2,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar11 = FUN_050e4454(uVar11,0);
  uVar9 = FUN_050ed374(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      lVar8 = lVar7 + 0x2c;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        if (-1 < *(int *)(lVar8 + -0xc)) {
          FUN_049b0ba4(param_1,*(undefined4 *)(lVar8 + -4));
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x24;
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_049afa14;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(param_2,lVar7,0);
LAB_049afa14:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_067c91b8;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_049afa8c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar2,0);
LAB_049afa8c:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_049afbb8;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_049afb10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar6,lVar7,0);
LAB_049afb10:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
    FUN_049b0ba4(param_1,uStack0000000000000000);
    uStack0000000000000000 = uStack0000000000000004;
    uStack0000000000000004 = uStack0000000000000008;
    uStack0000000000000008 = uStack000000000000000c;
    uStack000000000000000c = uStack0000000000000010;
    uStack0000000000000010 = uStack0000000000000014;
    uStack0000000000000014 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_049afbd4;
    }
  }
LAB_049afbb8:
  puVar4 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_049afbd4:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


