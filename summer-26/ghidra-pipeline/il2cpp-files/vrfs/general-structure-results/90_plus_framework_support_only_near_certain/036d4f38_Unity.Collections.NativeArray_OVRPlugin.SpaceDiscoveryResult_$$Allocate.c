/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Allocate
ENTRY_POINT: 036d4f38
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d50c0) */
/* WARNING: Removing unreachable block (ram,0x036d53a0) */
/* WARNING: Removing unreachable block (ram,0x036d53ac) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Allocate(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    FUN_01fbafc0();
LAB_036d4dc0:
    do {
      lVar8 = *unaff_x23;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036d4e0c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80();
LAB_036d4e0c:
      uVar10 = (*(code *)*puVar5)();
      puVar4 = PTR_DAT_06e636c0;
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_015d0480();
        if (plVar6 == (long *)0x0) goto LAB_036d50b4;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 == 0) goto LAB_036d508c;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_036d5074;
      }
      lVar8 = *unaff_x23;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_036d4e6c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80();
LAB_036d4e6c:
      plVar6 = (long *)(*(code *)*puVar5)();
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x29 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar6);
        }
      }
      lVar8 = FUN_036f0df8();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar7 = (long *)FUN_03fbac38(lVar8,plVar6[0x10],0);
      if (plVar7 == (long *)0x0) {
        if (*(int *)((long)plVar6 + 0x6c) == 3) {
          plVar6 = (long *)plVar6[0x10];
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          plVar6 = *(long **)(unaff_x19 + 0x68);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_01fbb10c();
        }
        goto LAB_036d4dc0;
      }
      bVar1 = *(byte *)(*unaff_x29 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar7);
      }
      if (*(int *)((long)plVar6 + 0x6c) == 3) {
        if (*(int *)((long)plVar7 + 0x6c) == 3) {
LAB_036d4fd0:
          if (((plVar6[0x12] == 0) || (plVar7[0x12] == 0)) ||
             (uVar10 = FUN_03fc5448(plVar7[0x12],plVar6[0x12],0,0), (uVar10 & 1) == 0)) {
            FUN_01fbafc0();
          }
          else {
            uVar10 = FUN_036dc9b0(uVar10,plVar6[0x13],plVar7[0x13]);
            if ((uVar10 & 1) == 0) {
              FUN_01fbafc0();
            }
          }
        }
        else {
          FUN_01fbafc0();
        }
        goto LAB_036d4dc0;
      }
      if (*(int *)((long)plVar6 + 0x6c) != 2) {
        if (*(int *)((long)plVar7 + 0x6c) != 2) goto LAB_036d4fd0;
        goto LAB_036d4dc0;
      }
    } while (*(int *)((long)plVar7 + 0x6c) == 2);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_036d5074:
    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036d50a8;
    }
  }
LAB_036d508c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d50a8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_036d50b4:
  lVar8 = FUN_036f0df8();
  if ((lVar8 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar8,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar8 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_036d5138;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
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
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036d51b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar8,0);
LAB_036d51b0:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar4);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 == 0) goto LAB_036d531c;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_036d5210;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar8,1);
LAB_036d5210:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 != (long *)0x0) {
      lVar8 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar8 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar7);
      }
    }
    lVar8 = FUN_036f0df8();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar7 = (long *)FUN_03fbac38(lVar8,plVar7[0x10],0);
    if (plVar7 == (long *)0x0) {
      if ((unaff_x21 == 0) || (uVar10 = FUN_036f0830(), (uVar10 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      lVar8 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar8 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d5338:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


