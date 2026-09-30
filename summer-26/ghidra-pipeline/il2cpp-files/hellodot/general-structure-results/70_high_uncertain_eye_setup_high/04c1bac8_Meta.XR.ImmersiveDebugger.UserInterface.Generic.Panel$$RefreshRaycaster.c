/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 04c1bac8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1c3b4) */

long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar18;
  undefined8 uVar19;
  long *unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar20;
  undefined1 auVar21 [16];
  long in_stack_00000018;
  long *in_stack_00000020;
  int iStack0000000000000028;
  undefined2 uStack000000000000002c;
  
  do {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c1bac0 with catch @ 04c1bacc
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c1b9fc with catch @ 04c1bad0
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c1b948 with catch @ 04c1bad4
                        */
    unaff_x26 = FUN_04dbd134(unaff_x26,1,0);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c1b988 with catch @ 04c1bad8
                        */
    do {
      plVar8 = (long *)thunk_FUN_02cea894(*unaff_x22);
      FUN_04dc5d24(plVar8,0);
                    /* try { // try from 04c1baf0 to 04d1baf3 has its CatchHandler @ 04c1bb00 */
                    /* catch() { ... } // from try @ 04c1baf0 with catch @ 04c1bb00 */
      lVar9 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,1);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined2 *)(lVar9 + 0x20) = 0x2c;
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = FUN_04dbbb18(unaff_x26,lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
                    /* try { // try from 04c1bb38 to 04d1bb5f has its CatchHandler @ 04c1bb74 */
      uVar7 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar7) {
        uVar17 = 0;
        do {
          if (uVar7 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar20 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
          iStack0000000000000028 = 0;
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
                    /* try { // try from 04c1bb60 to 04d1bb6b has its CatchHandler @ 04c1b844 */
                    /* try { // try from 04c1bb6c to 04d1bb73 has its CatchHandler @ 04c1bb74 */
          sVar4 = FUN_04db48b0(lVar20,*(int *)(lVar20 + 0x10) + -1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c1bb38 with catch @ 04c1bb74
                       catch(type#2 @ 00000000) { ... } // from try @ 04c1bb6c with catch @ 04c1bb74
                        */
          if ((sVar4 == 0x2a) &&
             (lVar20 = FUN_04dbaed4(lVar20,0,*(int *)(lVar20 + 0x10) + -1,0), lVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar10 = FUN_04dbd9cc(lVar20,*(undefined8 *)PTR_DAT_065db1f0,0);
          if ((uVar10 & 1) != 0) {
            iVar5 = FUN_04dbda48(lVar20,0x3a,0);
            uVar11 = FUN_04dbd134(lVar20,iVar5 + 1,0);
            uVar10 = FUN_04f2ed74(uVar11,&stack0x00000028,0);
            if ((uVar10 & 1) == 0) {
              uVar19 = *(undefined8 *)(unaff_x21 + 0x28);
              uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e58f8);
              uVar11 = FUN_04db9ab4(uVar11,uVar19,lVar20,0);
              uVar13 = *(undefined8 *)(unaff_x21 + 0x28);
              thunk_FUN_02c7737c(PTR_DAT_065c96d8);
              uVar19 = thunk_FUN_02cea894();
              FUN_04e97fd8(uVar19,uVar11,uVar13,0);
              uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar19,uVar11);
            }
            uVar6 = FUN_04dbda48(lVar20,0x3a,0);
            lVar20 = FUN_04dbaed4(lVar20,0,uVar6,0);
          }
          uVar7 = FUN_04c1c7a4(unaff_x25);
          uVar11 = unaff_x25;
          if (uVar7 < 0x2a0c975f) {
            if (uVar7 == 0x230c8c59) {
              uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3e50,0);
LAB_04c1bd60:
              if ((uVar10 & 1) == 0) goto LAB_04c1be78;
              uVar11 = FUN_04db9398(unaff_x25,lVar20,*(undefined8 *)PTR_DAT_065e3778,0);
              if (sVar4 == 0x2a) {
                uVar19 = FUN_04db9398(unaff_x25,lVar20,*(undefined8 *)PTR_DAT_065e3778,0);
              }
              else {
LAB_04c1c100:
                uVar19 = *(undefined8 *)PTR_DAT_065dfbf8;
              }
            }
            else if (uVar7 == 0x260c9112) {
              uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e2660,0);
              puVar12 = (undefined8 *)PTR_DAT_065e2660;
joined_r0x04c1bcbc:
              if ((uVar10 & 1) == 0) goto LAB_04c1be78;
              uVar19 = *(undefined8 *)PTR_DAT_065dfbf8;
              uVar11 = *puVar12;
              if (uVar17 != 0) {
                uVar11 = uVar19;
              }
            }
            else {
              if (uVar7 != 0x2a0c975e) goto LAB_04c1be78;
              uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065cf7b8,0);
LAB_04c1bdc8:
              if ((uVar10 & 1) == 0) goto LAB_04c1be78;
              uVar19 = unaff_x25;
              if (sVar4 != 0x2a) {
                uVar19 = *(undefined8 *)PTR_DAT_065dfbf8;
              }
            }
          }
          else {
            if (uVar7 < 0x2e0c9dab) {
              if (uVar7 == 0x2b0c98f1) {
                uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065c92a0,0);
                goto LAB_04c1bdc8;
              }
              if (uVar7 == 0x2e0c9daa) {
                uVar10 = thunk_FUN_04db8ae0(unaff_x25,*unaff_x20,0);
                puVar12 = (undefined8 *)PTR_DAT_065c8668;
                goto joined_r0x04c1bcbc;
              }
            }
            else if (uVar7 == 0x3a0cb08e) {
              uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3e90,0);
              if ((uVar10 & 1) != 0) {
                puVar12 = (undefined8 *)PTR_DAT_065e3e90;
                if (uVar17 != 0) {
                  puVar12 = (undefined8 *)PTR_DAT_065e3e50;
                }
                uVar11 = FUN_04db9398(*puVar12,lVar20,*(undefined8 *)PTR_DAT_065e3778,0);
                if (sVar4 == 0x2a) {
                  uVar19 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e3e50,lVar20,
                                        *(undefined8 *)PTR_DAT_065e3778,0);
                  goto LAB_04c1be8c;
                }
                goto LAB_04c1c100;
              }
            }
            else if (uVar7 == 0x3e0cb6da) {
              uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3d88,0);
              goto LAB_04c1bd60;
            }
LAB_04c1be78:
            uVar19 = *(undefined8 *)PTR_DAT_065dfbf8;
            if (uVar17 != 0) {
              uVar11 = uVar19;
            }
          }
LAB_04c1be8c:
          plVar18 = *(long **)(unaff_x21 + 0x10);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar18;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x23) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_04c1bee4;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_02ce0a7c(plVar18,*unaff_x23,4);
LAB_04c1bee4:
          uVar10 = (*(code *)*puVar12)(plVar18,lVar20,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            uVar19 = *(undefined8 *)(unaff_x21 + 0x28);
            uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e58e8);
            uVar11 = FUN_04db9ab4(uVar11,uVar19,lVar20,0);
            uVar13 = *(undefined8 *)(unaff_x21 + 0x28);
            thunk_FUN_02c7737c(PTR_DAT_065c96d8);
            uVar19 = thunk_FUN_02cea894();
            FUN_04e97fd8(uVar19,uVar11,uVar13,0);
            uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar19,uVar11);
          }
          plVar18 = *(long **)(unaff_x21 + 0x10);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar14 = *plVar18;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *unaff_x23) {
                puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04c1bf4c;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_02ce0a7c(plVar18,*unaff_x23,0);
LAB_04c1bf4c:
          uVar13 = (*(code *)*puVar12)(plVar18,lVar20,puVar12[1]);
          lVar14 = FUN_04dba1c8(uVar19,uVar13,0);
          if (iStack0000000000000028 != 0) {
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (iStack0000000000000028 < *(int *)(lVar14 + 0x10)) {
              lVar14 = FUN_04dbaed4(lVar14,0,iStack0000000000000028,0);
            }
          }
          uVar10 = FUN_04db8dd0(unaff_x25,*unaff_x20,0);
          if (((uVar10 & 1) != 0) &&
             (uVar10 = FUN_04db8dd0(unaff_x25,*(undefined8 *)PTR_DAT_065e2660,0), (uVar10 & 1) != 0)
             ) {
            plVar18 = *(long **)(unaff_x21 + 0x10);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar15 = *plVar18;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *unaff_x23) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04c1c020;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_02ce0a7c(plVar18,*unaff_x23,0);
LAB_04c1c020:
            plVar18 = (long *)(*(code *)*puVar12)(plVar18,lVar20,puVar12[1]);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar20 = *plVar18;
            uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_065c8e90) {
                  puVar12 = (undefined8 *)(lVar20 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_04c1c08c;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_065c8e90,0);
LAB_04c1c08c:
            iVar5 = (*(code *)*puVar12)(plVar18,puVar12[1]);
            if (iVar5 == 1) {
              if (*(int *)(*(long *)PTR_DAT_065c8a78 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar14 = FUN_0568f04c(lVar14,0);
            }
          }
          uVar11 = FUN_04db00f0(uVar11,lVar14,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c(uVar11,uVar11);
          }
          FUN_04dc7640(plVar8,uVar11,0);
          uVar7 = *(uint *)(lVar9 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar7);
      }
      uVar10 = thunk_FUN_04db8ae0(unaff_x25,*(undefined8 *)PTR_DAT_065e3d88,0);
      puVar3 = PTR_DAT_065c8d08;
      if ((uVar10 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        iVar5 = FUN_04dc686c(plVar8,0);
        sVar4 = FUN_04dc70e8(plVar8,iVar5 + -1,0);
        if (sVar4 == 0x3d) {
          iVar5 = FUN_04dc686c(plVar8,0);
          plVar8 = (long *)FUN_04dc7c94(plVar8,iVar5 + -1,1,0);
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar8 = (long *)FUN_04dc90f4(plVar8,*(undefined8 *)PTR_DAT_065e58e0,
                                      *(undefined8 *)PTR_DAT_065e3d88,0);
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar21 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      unaff_x22 = (undefined8 *)PTR_DAT_065ce360;
      puVar1 = PTR_DAT_065c8688;
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,auVar21._8_8_,auVar21._0_8_);
      }
      in_stack_00000018 = FUN_04dc90f4(in_stack_00000018,unaff_x19,auVar21._0_8_,0);
      if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar20 = *in_stack_00000020;
      lVar9 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar12 = (undefined8 *)(lVar20 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04c1b978;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,lVar9,0);
LAB_04c1b978:
      uVar10 = (*(code *)*puVar12)(in_stack_00000020,puVar12[1]);
      puVar2 = PTR_DAT_065c8a48;
      if ((uVar10 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_02cea798(in_stack_00000020,*(undefined8 *)PTR_DAT_065c8a48);
        if (plVar8 == (long *)0x0) {
          return in_stack_00000018;
        }
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_04c1c240;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04c1c228;
      }
      lVar9 = *(long *)puVar3;
      lVar20 = *in_stack_00000020;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar12 = (undefined8 *)(lVar20 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_04c1b9dc;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,lVar9,1);
LAB_04c1b9dc:
      plVar8 = (long *)(*(code *)*puVar12)(in_stack_00000020,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x19 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x26 = FUN_04dbaed4(unaff_x19,1,*(int *)(unaff_x19 + 0x10) + -2,0);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x25 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      uStack000000000000002c = FUN_04db48b0(unaff_x26,0,0);
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar11 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
      if (*(long *)PTR_DAT_065e58d8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,uVar11);
      }
      uVar10 = FUN_04dbd9cc(*(long *)PTR_DAT_065e58d8,uVar11,0);
    } while ((uVar10 & 1) == 0);
    uStack000000000000002c = FUN_04db48b0(unaff_x26,0,0);
    if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    unaff_x25 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_04c1c228:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_04c1c25c;
    }
  }
LAB_04c1c240:
  puVar12 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_04c1c25c:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  return in_stack_00000018;
}


