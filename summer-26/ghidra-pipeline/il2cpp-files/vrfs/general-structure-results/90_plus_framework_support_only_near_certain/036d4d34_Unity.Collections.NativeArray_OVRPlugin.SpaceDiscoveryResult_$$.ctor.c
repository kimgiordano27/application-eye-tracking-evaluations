/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 036d4d34
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d50c0) */
/* WARNING: Removing unreachable block (ram,0x036d53a0) */
/* WARNING: Removing unreachable block (ram,0x036d53ac) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x21;
  
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_036d4d8c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(param_1,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d4d8c:
  plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
  puVar3 = PTR_DAT_06e2c7d8;
  puVar2 = PTR_DAT_06ddc938;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d4e0c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar9,0);
LAB_036d4e0c:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar4 = PTR_DAT_06e636c0;
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar6 == (long *)0x0) goto LAB_036d50b4;
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 == 0) goto LAB_036d508c;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d4e6c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar9,1);
LAB_036d4e6c:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 != (long *)0x0) {
      lVar9 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar7);
      }
    }
    lVar9 = FUN_036f0df8();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar8 = (long *)FUN_03fbac38(lVar9,plVar7[0x10],0);
    if (plVar8 == (long *)0x0) {
      if (*(int *)((long)plVar7 + 0x6c) == 3) {
        plVar7 = (long *)plVar7[0x10];
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        plVar7 = *(long **)(unaff_x19 + 0x68);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_01fbb10c();
      }
    }
    else {
      lVar9 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
      if (*(int *)((long)plVar7 + 0x6c) == 3) {
        if (*(int *)((long)plVar8 + 0x6c) == 3) goto LAB_036d4fd0;
        FUN_01fbafc0();
      }
      else if (*(int *)((long)plVar7 + 0x6c) == 2) {
        if (*(int *)((long)plVar8 + 0x6c) != 2) {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar8 + 0x6c) != 2) {
LAB_036d4fd0:
        if (((plVar7[0x12] == 0) || (plVar8[0x12] == 0)) ||
           (uVar11 = FUN_03fc5448(plVar8[0x12],plVar7[0x12],0,0), (uVar11 & 1) == 0)) {
          FUN_01fbafc0();
        }
        else {
          uVar11 = FUN_036dc9b0(uVar11,plVar7[0x13],plVar8[0x13]);
          if ((uVar11 & 1) == 0) {
            FUN_01fbafc0();
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d50a8;
    }
  }
LAB_036d508c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d50a8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_036d50b4:
  lVar9 = FUN_036f0df8();
  if ((lVar9 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar9,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar9 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_036d5138;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d5138:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  puVar3 = PTR_DAT_06e2c7d8;
  puVar2 = PTR_DAT_06ddc938;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d51b0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar9,0);
LAB_036d51b0:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar4);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 == 0) goto LAB_036d531c;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d5210;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar9,1);
LAB_036d5210:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 != (long *)0x0) {
      lVar9 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar7);
      }
    }
    lVar9 = FUN_036f0df8();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar7 = (long *)FUN_03fbac38(lVar9,plVar7[0x10],0);
    if (plVar7 == (long *)0x0) {
      if ((unaff_x21 == 0) || (uVar11 = FUN_036f0830(), (uVar11 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      lVar9 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar9 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d5338:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


