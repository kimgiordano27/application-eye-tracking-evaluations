/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 036d4e40
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
/* WARNING: Removing unreachable block (ram,0x036d53ac) */
/* WARNING: Removing unreachable block (ram,0x036d53a0) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong in_x9;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x036d4e40:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_036d4e34;
LAB_036d4e4c:
  puVar5 = (undefined8 *)FUN_015c2a80();
  do {
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x29 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
    }
    lVar7 = FUN_036f0df8();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar8 = (long *)FUN_03fbac38(lVar7,plVar6[0x10],0);
    if (plVar8 == (long *)0x0) {
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
    }
    else {
      bVar1 = *(byte *)(*unaff_x29 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
      if (*(int *)((long)plVar6 + 0x6c) == 3) {
        if (*(int *)((long)plVar8 + 0x6c) == 3) {
LAB_036d4fd0:
          if (((plVar6[0x12] == 0) || (plVar8[0x12] == 0)) ||
             (uVar10 = FUN_03fc5448(plVar8[0x12],plVar6[0x12],0,0), (uVar10 & 1) == 0)) {
            FUN_01fbafc0();
          }
          else {
            uVar10 = FUN_036dc9b0(uVar10,plVar6[0x13],plVar8[0x13]);
            if ((uVar10 & 1) == 0) {
              FUN_01fbafc0();
            }
          }
        }
        else {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar6 + 0x6c) == 2) {
        if (*(int *)((long)plVar8 + 0x6c) != 2) {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar8 + 0x6c) != 2) goto LAB_036d4fd0;
    }
    lVar7 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
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
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar10 == 0) goto LAB_036d508c;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x23;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (in_x9 == 0) goto LAB_036d4e4c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_036d4e34:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x036d4e40;
    puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036d50a8;
    }
  }
LAB_036d508c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d50a8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_036d50b4:
  lVar7 = FUN_036f0df8();
  if ((lVar7 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar7,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar7 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
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
    lVar7 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036d51b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,0);
LAB_036d51b0:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar4);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar10 == 0) goto LAB_036d531c;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    lVar7 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_036d5210;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,1);
LAB_036d5210:
    plVar8 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar8 != (long *)0x0) {
      lVar7 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar7 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
    }
    lVar7 = FUN_036f0df8();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar8 = (long *)FUN_03fbac38(lVar7,plVar8[0x10],0);
    if (plVar8 == (long *)0x0) {
      if ((unaff_x21 == 0) || (uVar10 = FUN_036f0830(), (uVar10 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      lVar7 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar7 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
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
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar4,0);
LAB_036d5338:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


