/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 036d6f74
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
/* WARNING: Removing unreachable block (ram,0x036d7acc) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */
/* WARNING: Removing unreachable block (ram,0x036d7af4) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
code_r0x036d6f74:
  lVar4 = FUN_036f2d10();
  if (lVar4 != 0) {
    FUN_03fba610(lVar4,unaff_x20[0x10],unaff_x20,0);
LAB_036d6f18:
    do {
      while( true ) {
        unaff_w26 = unaff_w26 + 1;
        iVar3 = FUN_03f054bc(unaff_x28,0);
        if (iVar3 <= unaff_w26) {
          if (unaff_x25 == 0) {
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0xd8) = unaff_x29;
              thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),unaff_x29);
              return;
            }
            goto thunk_FUN_0160eeb4;
          }
          if (unaff_w24 == 2) {
            uVar5 = FUN_036dd488();
            if (unaff_x19 == 0) goto thunk_FUN_0160eeb4;
            *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
            thunk_FUN_01656ef8();
            lVar4 = FUN_036f2d10(in_stack_00000018,0);
            if ((lVar4 == 0) ||
               (plVar6 = (long *)FUN_03fbacb0(lVar4,0), puVar2 = PTR_DAT_06e636c0,
               plVar6 == (long *)0x0)) goto thunk_FUN_0160eeb4;
            lVar4 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar11 == 0) goto LAB_036d70d8;
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_036d70c0;
          }
          if ((unaff_x29 == 0) ||
             (((in_stack_00000000 != 0 &&
               (uVar11 = FUN_036f0858(unaff_x29,in_stack_00000000,0), (uVar11 & 1) != 0)) &&
              (uVar11 = FUN_036dd51c(uVar11,in_stack_00000018,unaff_x29,in_stack_00000000),
              (uVar11 & 1) != 0)))) {
            if (unaff_x19 == 0) goto thunk_FUN_0160eeb4;
            *(long *)(unaff_x19 + 0xd8) = unaff_x29;
            thunk_FUN_01656ef8((long *)(unaff_x19 + 0xd8),unaff_x29);
          }
          else {
            FUN_01fbafc0();
          }
          lVar4 = FUN_036f2d10(in_stack_00000018,0);
          if ((lVar4 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar4,0), plVar6 == (long *)0x0))
          goto thunk_FUN_0160eeb4;
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 == 0) goto LAB_036d73f4;
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_036d73dc;
        }
        unaff_x20 = (long *)(**(code **)(*unaff_x28 + 0x308))
                                      (unaff_x28,unaff_w26,*(undefined8 *)(*unaff_x28 + 0x310));
        if (unaff_x20 != (long *)0x0) break;
LAB_036d69fc:
        plVar6 = (long *)(**(code **)(*unaff_x28 + 0x308))
                                   (unaff_x28,unaff_w26,*(undefined8 *)(*unaff_x28 + 0x310));
        if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
        bVar1 = *(byte *)(*(long *)PTR_DAT_06db5030 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06db5030
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar6);
        }
        if (*(long *)(unaff_x22 + 0x50) == 0) goto thunk_FUN_0160eeb4;
        plVar8 = (long *)FUN_03fbac38(*(long *)(unaff_x22 + 0x50),plVar6[10],0);
        unaff_x28 = in_stack_00000008;
        if (plVar8 == (long *)0x0) {
          plVar6 = (long *)plVar6[10];
          if (plVar6 == (long *)0x0) goto thunk_FUN_0160eeb4;
          (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          FUN_01fbaf30();
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e1fa28 + 300);
          if ((*(byte *)(*plVar8 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_06e1fa28)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar8);
          }
          FUN_036cf09c();
          lVar4 = FUN_036f0df8(plVar8,0);
          if ((lVar4 == 0) || (plVar6 = (long *)FUN_03fbacb0(lVar4,0), plVar6 == (long *)0x0))
          goto thunk_FUN_0160eeb4;
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_036d6b5c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d6b5c:
          plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
LAB_036d6b70:
          lVar4 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x21) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_036d6bbc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d6bbc:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            lVar4 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *unaff_x21) {
                  puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_036d6c1c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d6c1c:
            plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
            if ((*(byte *)(*plVar8 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06e2c7d8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar8);
            }
            if (*(int *)((long)plVar8 + 0x6c) == 2) {
              if (unaff_w24 == 4) {
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                if (DAT_0722c1cb == '\0') {
                  thunk_FUN_0159f088();
                  DAT_0722c1cb = '\x01';
                }
                lVar4 = *unaff_x27;
                if (*(int *)(lVar4 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar4 = *unaff_x27;
                }
                if (**(long **)(lVar4 + 0xb8) != unaff_x25) goto LAB_036d6ccc;
              }
              plVar8 = (long *)plVar8[0x10];
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
              FUN_01fbb4d8();
            }
            else {
LAB_036d6ccc:
              if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar4 = FUN_036f2d10();
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar4 = FUN_03fbac38(lVar4,plVar8[0x10],0);
              if (lVar4 == 0) {
                lVar4 = FUN_036f2d10();
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                FUN_03fba610(lVar4,plVar8[0x10],plVar8,0);
              }
              else {
                plVar8 = (long *)plVar8[0x10];
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                FUN_01fbaf30();
              }
            }
            goto LAB_036d6b70;
          }
          plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
          if (plVar6 != (long *)0x0) {
            lVar4 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e636c0) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_036d6ee0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e636c0,0);
LAB_036d6ee0:
            (*(code *)*puVar7)(plVar6,puVar7[1]);
          }
          unaff_x29 = FUN_036dd3f4();
          unaff_x25 = in_stack_00000018;
        }
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*unaff_x20 + 300) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_06e2c7d8)) goto LAB_036d69fc;
      if ((*(int *)((long)unaff_x20 + 0x6c) == 2) ||
         (FUN_036d1e44(), *(int *)((long)unaff_x20 + 0x6c) == 2)) {
        if (unaff_w24 == 4) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if (DAT_0722c1cb == '\0') {
            thunk_FUN_0159f088();
            DAT_0722c1cb = '\x01';
          }
          lVar4 = *unaff_x27;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar4 = *unaff_x27;
          }
          if (**(long **)(lVar4 + 0xb8) != unaff_x25) goto LAB_036d6e78;
        }
        plVar6 = (long *)unaff_x20[0x10];
        if (plVar6 == (long *)0x0) break;
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        FUN_01fbb4d8();
        goto LAB_036d6f18;
      }
LAB_036d6e78:
      if ((unaff_x19 == 0) || (lVar4 = FUN_036f2d10(), lVar4 == 0)) break;
      lVar4 = FUN_03fbac38(lVar4,unaff_x20[0x10],0);
      if (lVar4 == 0) goto code_r0x036d6f74;
      plVar6 = (long *)unaff_x20[0x10];
      if (plVar6 == (long *)0x0) break;
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_01fbaf30();
    } while( true );
  }
  goto thunk_FUN_0160eeb4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_036d70c0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d70f4;
    }
  }
LAB_036d70d8:
  puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d70f4:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d715c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d715c:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar6;
      lVar4 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 == 0) goto LAB_036d7300;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_036d72e8;
    }
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d71bc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d71bc:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar8);
      }
    }
    lVar4 = FUN_036f2d10();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = (long *)FUN_03fbac38(lVar4,plVar8[0x10],0);
    if (plVar9 == (long *)0x0) {
      lVar4 = FUN_036f2d10();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fba610(lVar4,plVar8[0x10],plVar8,0);
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
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_036d73dc:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d7410;
    }
  }
LAB_036d73f4:
  puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7410:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d7490;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d7490:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar2 = PTR_DAT_06e636c0;
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar6 == (long *)0x0) goto LAB_036d7700;
      lVar4 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar11 == 0) goto LAB_036d76d8;
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_036d76c0;
    }
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x21) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_036d74f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d74f0:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
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
    lVar4 = FUN_036f2d10();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar9 = (long *)FUN_03fbac38(lVar4,plVar8[0x10],0);
    if (plVar9 == (long *)0x0) {
      lVar4 = FUN_036f2d10();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fba610(lVar4,plVar8[0x10],plVar8,0);
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
           (uVar11 = FUN_03fc5448(plVar9[0x12],plVar8[0x12],0,0), (uVar11 & 1) == 0)) {
          FUN_01fbafc0();
        }
        else {
          uVar11 = FUN_036dc9b0(uVar11,plVar8[0x13],plVar9[0x13]);
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
LAB_036d72e8:
    if (*(long *)(piVar12 + -2) == lVar4) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d731c;
    }
  }
LAB_036d7300:
  puVar7 = (undefined8 *)FUN_015c2a80(plVar6,lVar4,0);
LAB_036d731c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar12 + -2) == lVar4) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar7 = (undefined8 *)FUN_015c2a80(plVar6,lVar4,0);
LAB_036d7998:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_036d76c0:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar2,0);
LAB_036d76f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_036d7700:
  if (((unaff_x19 != 0) && (lVar4 = FUN_036f2d10(), lVar4 != 0)) &&
     (plVar6 = (long *)FUN_03fbacb0(lVar4,0), puVar2 = PTR_DAT_06e636c0, plVar6 != (long *)0x0)) {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06e1d6c8) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_036d7794;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    do {
      lVar4 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_036d77fc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,0);
LAB_036d77fc:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_015d0480(plVar6,*(undefined8 *)puVar2);
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar6;
        lVar4 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 == 0) goto LAB_036d797c;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_036d7964;
      }
      lVar4 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x21) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_036d785c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x21,1);
LAB_036d785c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar8 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar8);
        }
      }
      lVar4 = FUN_036f2d10(in_stack_00000018,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar9 = (long *)FUN_03fbac38(lVar4,plVar8[0x10],0);
      if (plVar9 == (long *)0x0) {
        if ((in_stack_00000000 == 0) ||
           (uVar11 = FUN_036f0830(in_stack_00000000,plVar8[0x10],0), (uVar11 & 1) == 0)) {
          FUN_01fbafc0();
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
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


