/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 036d7368
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d770c) */
/* WARNING: Removing unreachable block (ram,0x036d7acc) */
/* WARNING: Removing unreachable block (ram,0x036d79cc) */
/* WARNING: Removing unreachable block (ram,0x036d79d0) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x29;
    thunk_FUN_01656ef8();
    lVar3 = FUN_036f2d10();
    if ((lVar3 != 0) && (plVar4 = (long *)FUN_03fbacb0(lVar3,0), plVar4 != (long *)0x0)) {
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036d7410;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7410:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      do {
        lVar3 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_036d7490;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,0);
LAB_036d7490:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        puVar2 = PTR_DAT_06e636c0;
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_015d0480(plVar4,*(undefined8 *)PTR_DAT_06e636c0);
          if (plVar4 == (long *)0x0) goto LAB_036d7700;
          lVar3 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar9 == 0) goto LAB_036d76d8;
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_036d76c0;
        }
        lVar3 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x21) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_036d74f0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,1);
LAB_036d74f0:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
          if ((*(byte *)(*plVar6 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar6);
          }
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar3 = FUN_036f2d10();
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        plVar7 = (long *)FUN_03fbac38(lVar3,plVar6[0x10],0);
        if (plVar7 == (long *)0x0) {
          lVar3 = FUN_036f2d10();
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_03fba610(lVar3,plVar6[0x10],plVar6,0);
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
          if ((*(byte *)(*plVar7 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar7);
          }
          if (*(int *)((long)plVar6 + 0x6c) == 3) {
            if (*(int *)((long)plVar7 + 0x6c) == 3) goto LAB_036d7624;
            FUN_01fbafc0();
          }
          else if (*(int *)((long)plVar6 + 0x6c) == 2) {
            if (*(int *)((long)plVar7 + 0x6c) != 2) {
              FUN_01fbafc0();
            }
          }
          else if (*(int *)((long)plVar7 + 0x6c) != 2) {
LAB_036d7624:
            if (((plVar6[0x12] == 0) || (plVar7[0x12] == 0)) ||
               (uVar9 = FUN_03fc5448(plVar7[0x12],plVar6[0x12],0,0), (uVar9 & 1) == 0)) {
              FUN_01fbafc0();
            }
            else {
              uVar9 = FUN_036dc9b0(uVar9,plVar6[0x13],plVar7[0x13]);
              if ((uVar9 & 1) == 0) {
                FUN_01fbafc0();
              }
            }
          }
        }
      } while( true );
    }
  }
  goto thunk_FUN_0160eeb4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar10 + -2) == lVar3) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar4,lVar3,0);
LAB_036d7998:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_036d76c0:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)puVar2,0);
LAB_036d76f4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_036d7700:
  if (((unaff_x19 != 0) && (lVar3 = FUN_036f2d10(), lVar3 != 0)) &&
     (plVar4 = (long *)FUN_03fbacb0(lVar3,0), puVar2 = PTR_DAT_06e636c0, plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d7794;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036d77fc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,0);
LAB_036d77fc:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_015d0480(plVar4,*(undefined8 *)puVar2);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar4;
        lVar3 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 == 0) goto LAB_036d797c;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_036d7964;
      }
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_036d785c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,1);
LAB_036d785c:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar6);
        }
      }
      lVar3 = FUN_036f2d10(in_stack_00000018,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar7 = (long *)FUN_03fbac38(lVar3,plVar6[0x10],0);
      if (plVar7 == (long *)0x0) {
        if ((in_stack_00000000 == 0) ||
           (uVar9 = FUN_036f0830(in_stack_00000000,plVar6[0x10],0), (uVar9 & 1) == 0)) {
          FUN_01fbafc0();
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170();
        }
      }
    } while( true );
  }
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


