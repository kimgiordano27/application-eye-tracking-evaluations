/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 036d6bac
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d770c) */
/* WARNING: Removing unreachable block (ram,0x036d6ef8) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */
/* WARNING: Removing unreachable block (ram,0x036d7acc) */
/* WARNING: Removing unreachable block (ram,0x036d7af4) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x29;
  long in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
LAB_036d6bbc:
  do {
    uVar4 = (*(code *)*param_1)(unaff_x29,param_1[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(unaff_x29,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e636c0) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_036d6ee0;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e636c0,0);
LAB_036d6ee0:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
      lVar10 = FUN_036dd3f4();
LAB_036d6f18:
      while( true ) {
        unaff_w26 = unaff_w26 + 1;
        iVar3 = FUN_03f054bc(in_stack_00000008,0);
        if (iVar3 <= unaff_w26) {
          if (in_stack_00000018 == 0) {
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0xd8) = lVar10;
              thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),lVar10);
              return;
            }
            goto thunk_FUN_0160eeb4;
          }
          if (unaff_w24 == 2) {
            uVar7 = FUN_036dd488();
            if (unaff_x19 == 0) goto thunk_FUN_0160eeb4;
            *(undefined8 *)(unaff_x19 + 0xd8) = uVar7;
            thunk_FUN_01656ef8();
            lVar10 = FUN_036f2d10(in_stack_00000018,0);
            if ((lVar10 == 0) ||
               (plVar6 = (long *)FUN_03fbacb0(lVar10,0), puVar2 = PTR_DAT_06e636c0,
               plVar6 == (long *)0x0)) goto thunk_FUN_0160eeb4;
            lVar10 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar4 == 0) goto LAB_036d70d8;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_036d70c0;
          }
          if ((lVar10 == 0) ||
             (((in_stack_00000000 != 0 &&
               (uVar4 = FUN_036f0858(lVar10,in_stack_00000000,0), (uVar4 & 1) != 0)) &&
              (uVar4 = FUN_036dd51c(uVar4,in_stack_00000018,lVar10,in_stack_00000000),
              (uVar4 & 1) != 0)))) {
            if (unaff_x19 == 0) goto thunk_FUN_0160eeb4;
            *(long *)(unaff_x19 + 0xd8) = lVar10;
            thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),lVar10);
          }
          else {
            FUN_01fbafc0();
          }
          lVar10 = FUN_036f2d10(in_stack_00000018,0);
          if ((lVar10 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar10,0), plVar6 == (long *)0x0))
          goto thunk_FUN_0160eeb4;
          lVar10 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar4 == 0) goto LAB_036d73f4;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_036d73dc;
        }
        plVar6 = (long *)(**(code **)(*in_stack_00000008 + 0x308))
                                   (in_stack_00000008,unaff_w26,
                                    *(undefined8 *)(*in_stack_00000008 + 0x310));
        if (plVar6 == (long *)0x0) break;
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) break;
        if ((*(int *)((long)plVar6 + 0x6c) == 2) ||
           (FUN_036d1e44(), *(int *)((long)plVar6 + 0x6c) == 2)) {
          if (unaff_w24 == 4) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if (DAT_0722c1cb == '\0') {
              thunk_FUN_0159f088();
              DAT_0722c1cb = '\x01';
            }
            lVar11 = *unaff_x27;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar11 = *unaff_x27;
            }
            if (**(long **)(lVar11 + 0xb8) != in_stack_00000018) goto LAB_036d6e78;
          }
          plVar6 = (long *)plVar6[0x10];
          if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_01fbb4d8();
        }
        else {
LAB_036d6e78:
          if ((unaff_x19 == 0) || (lVar11 = FUN_036f2d10(), lVar11 == 0)) goto thunk_FUN_0160eeb4;
          lVar11 = FUN_03fbac38(lVar11,plVar6[0x10],0);
          if (lVar11 == 0) {
            lVar11 = FUN_036f2d10();
            if (lVar11 == 0) goto thunk_FUN_0160eeb4;
            FUN_03fba610(lVar11,plVar6[0x10],plVar6,0);
          }
          else {
            plVar6 = (long *)plVar6[0x10];
            if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            FUN_01fbaf30();
          }
        }
      }
      plVar6 = (long *)(**(code **)(*in_stack_00000008 + 0x308))
                                 (in_stack_00000008,unaff_w26,
                                  *(undefined8 *)(*in_stack_00000008 + 0x310));
      if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
      bVar1 = *(byte *)(*(long *)PTR_DAT_06db5030 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06db5030))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
      if (*(long *)(unaff_x22 + 0x50) == 0) goto thunk_FUN_0160eeb4;
      plVar8 = (long *)FUN_03fbac38(*(long *)(unaff_x22 + 0x50),plVar6[10],0);
      if (plVar8 == (long *)0x0) {
        plVar6 = (long *)plVar6[10];
        if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        FUN_01fbaf30();
        goto LAB_036d6f18;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e1fa28 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e1fa28))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
      FUN_036cf09c();
      lVar10 = FUN_036f0df8(plVar8,0);
      if ((lVar10 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar10,0), plVar6 == (long *)0x0))
      goto thunk_FUN_0160eeb4;
      lVar10 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_036d6b5c;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d6b5c:
      unaff_x29 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      unaff_x25 = in_stack_00000018;
      if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    else {
      lVar10 = *unaff_x29;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_036d6c1c;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(unaff_x29,*unaff_x21,1);
LAB_036d6c1c:
      plVar6 = (long *)(*(code *)*puVar5)(unaff_x29,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
      if (*(int *)((long)plVar6 + 0x6c) == 2) {
        if (unaff_w24 == 4) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if (DAT_0722c1cb == '\0') {
            thunk_FUN_0159f088();
            DAT_0722c1cb = '\x01';
          }
          lVar10 = *unaff_x27;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar10 = *unaff_x27;
          }
          if (**(long **)(lVar10 + 0xb8) != unaff_x25) goto LAB_036d6ccc;
        }
        plVar6 = (long *)plVar6[0x10];
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        FUN_01fbb4d8();
      }
      else {
LAB_036d6ccc:
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar10 = FUN_036f2d10();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar10 = FUN_03fbac38(lVar10,plVar6[0x10],0);
        if (lVar10 == 0) {
          lVar10 = FUN_036f2d10();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_03fba610(lVar10,plVar6[0x10],plVar6,0);
        }
        else {
          plVar6 = (long *)plVar6[0x10];
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_01fbaf30();
        }
      }
    }
    lVar10 = *unaff_x29;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          param_1 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d6bbc;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_015c2a80(unaff_x29,*unaff_x21,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_036d70c0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d70f4;
    }
  }
LAB_036d70d8:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d70f4:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d715c;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d715c:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar2;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 == 0) goto LAB_036d7300;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_036d72e8;
    }
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d71bc;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d71bc:
    plVar8 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
    }
    lVar10 = FUN_036f2d10();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = (long *)FUN_03fbac38(lVar10,plVar8[0x10],0);
    if (plVar9 == (long *)0x0) {
      lVar10 = FUN_036f2d10();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fba610(lVar10,plVar8[0x10],plVar8,0);
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar9);
      }
      if ((*(int *)((long)plVar8 + 0x6c) != 2) && (plVar9[0x12] != plVar8[0x12])) {
        FUN_01fbafc0();
      }
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_036d73dc:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d7410;
    }
  }
LAB_036d73f4:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7410:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d7490;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d7490:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar2 = PTR_DAT_06e636c0;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar6 == (long *)0x0) goto LAB_036d7700;
      lVar10 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 == 0) goto LAB_036d76d8;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d74f0;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d74f0:
    plVar8 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar10 = FUN_036f2d10();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = (long *)FUN_03fbac38(lVar10,plVar8[0x10],0);
    if (plVar9 == (long *)0x0) {
      lVar10 = FUN_036f2d10();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fba610(lVar10,plVar8[0x10],plVar8,0);
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar9);
      }
      if (*(int *)((long)plVar8 + 0x6c) == 3) {
        if (*(int *)((long)plVar9 + 0x6c) == 3) goto LAB_036d7624;
        FUN_01fbafc0();
      }
      else if (*(int *)((long)plVar8 + 0x6c) == 2) {
        if (*(int *)((long)plVar9 + 0x6c) != 2) {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar9 + 0x6c) != 2) {
LAB_036d7624:
        if (((plVar8[0x12] == 0) || (plVar9[0x12] == 0)) ||
           (uVar4 = FUN_03fc5448(plVar9[0x12],plVar8[0x12],0,0), (uVar4 & 1) == 0)) {
          FUN_01fbafc0();
        }
        else {
          uVar4 = FUN_036dc9b0(uVar4,plVar8[0x13],plVar9[0x13]);
          if ((uVar4 & 1) == 0) {
            FUN_01fbafc0();
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar2,0);
LAB_036d76f4:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_036d7700:
  if (((unaff_x19 == 0) || (lVar10 = FUN_036f2d10(), lVar10 == 0)) ||
     (plVar6 = (long *)FUN_03fbacb0(lVar10,0), puVar2 = PTR_DAT_06e636c0, plVar6 == (long *)0x0)) {
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar10 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar4 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_036d7794;
      }
      uVar4 = uVar4 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d77fc;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d77fc:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar2;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 == 0) goto LAB_036d797c;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_036d7964;
    }
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d785c;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d785c:
    plVar8 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
    }
    lVar10 = FUN_036f2d10(in_stack_00000018,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = (long *)FUN_03fbac38(lVar10,plVar8[0x10],0);
    if (plVar9 == (long *)0x0) {
      if ((in_stack_00000000 == 0) ||
         (uVar4 = FUN_036f0830(in_stack_00000000,plVar8[0x10],0), (uVar4 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar9 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_036d72e8:
    if (*(long *)(piVar12 + -2) == lVar10) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d731c;
    }
  }
LAB_036d7300:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar10,0);
LAB_036d731c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar12 + -2) == lVar10) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar10,0);
LAB_036d7998:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


