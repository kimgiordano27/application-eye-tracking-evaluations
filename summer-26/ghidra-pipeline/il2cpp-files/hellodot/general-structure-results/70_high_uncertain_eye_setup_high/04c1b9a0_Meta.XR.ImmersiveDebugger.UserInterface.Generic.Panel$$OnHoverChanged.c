/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$OnHoverChanged
ENTRY_POINT: 04c1b9a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1c3b4) */

long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__OnHoverChanged
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong in_x9;
  long in_x10;
  int *piVar17;
  uint uVar18;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar19;
  long *unaff_x23;
  undefined8 uVar20;
  long *unaff_x24;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long in_stack_00000018;
  long *in_stack_00000020;
  int iStack0000000000000028;
  undefined2 uStack000000000000002c;
  
  do {
    piVar17 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar17 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_04c1b9dc;
      }
      in_x9 = in_x9 - 1;
      piVar17 = piVar17 + 4;
    } while (in_x9 != 0);
    do {
      puVar7 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,param_3,1);
LAB_04c1b9dc:
      plVar8 = (long *)(*(code *)*puVar7)(in_stack_00000020,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar10 = FUN_04dbaed4(lVar9,1,*(int *)(lVar9 + 0x10) + -2,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar21 = **(undefined8 **)(*unaff_x24 + 0xb8);
      uStack000000000000002c = FUN_04db48b0(lVar10,0,0);
      if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar11 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
      if (*(long *)PTR_DAT_065e58d8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,uVar11);
      }
      uVar12 = FUN_04dbd9cc(*(long *)PTR_DAT_065e58d8,uVar11,0);
      if ((uVar12 & 1) != 0) {
        uStack000000000000002c = FUN_04db48b0(lVar10,0,0);
        if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar21 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
        lVar10 = FUN_04dbd134(lVar10,1,0);
      }
      plVar8 = (long *)thunk_FUN_02cea894(*unaff_x22);
      FUN_04dc5d24(plVar8,0);
      lVar13 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,1);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined2 *)(lVar13 + 0x20) = 0x2c;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar10 = FUN_04dbbb18(lVar10,lVar13,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar6 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar6) {
        uVar18 = 0;
        do {
          if (uVar6 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          lVar13 = *(long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
          iStack0000000000000028 = 0;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          sVar3 = FUN_04db48b0(lVar13,*(int *)(lVar13 + 0x10) + -1,0);
          if ((sVar3 == 0x2a) &&
             (lVar13 = FUN_04dbaed4(lVar13,0,*(int *)(lVar13 + 0x10) + -1,0), lVar13 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar12 = FUN_04dbd9cc(lVar13,*(undefined8 *)PTR_DAT_065db1f0,0);
          if ((uVar12 & 1) != 0) {
            iVar4 = FUN_04dbda48(lVar13,0x3a,0);
            uVar11 = FUN_04dbd134(lVar13,iVar4 + 1,0);
            uVar12 = FUN_04f2ed74(uVar11,&stack0x00000028,0);
            if ((uVar12 & 1) == 0) {
              uVar11 = *(undefined8 *)(unaff_x21 + 0x28);
              uVar21 = thunk_FUN_02c7737c(PTR_DAT_065e58f8);
              uVar21 = FUN_04db9ab4(uVar21,uVar11,lVar13,0);
              uVar20 = *(undefined8 *)(unaff_x21 + 0x28);
              thunk_FUN_02c7737c(PTR_DAT_065c96d8);
              uVar11 = thunk_FUN_02cea894();
              FUN_04e97fd8(uVar11,uVar21,uVar20,0);
              uVar21 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar11,uVar21);
            }
            uVar5 = FUN_04dbda48(lVar13,0x3a,0);
            lVar13 = FUN_04dbaed4(lVar13,0,uVar5,0);
          }
          uVar6 = FUN_04c1c7a4(uVar21);
          uVar11 = uVar21;
          if (uVar6 < 0x2a0c975f) {
            if (uVar6 == 0x230c8c59) {
              uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065e3e50,0);
LAB_04c1bd60:
              if ((uVar12 & 1) == 0) goto LAB_04c1be78;
              uVar11 = FUN_04db9398(uVar21,lVar13,*(undefined8 *)PTR_DAT_065e3778,0);
              if (sVar3 == 0x2a) {
                uVar20 = FUN_04db9398(uVar21,lVar13,*(undefined8 *)PTR_DAT_065e3778,0);
              }
              else {
LAB_04c1c100:
                uVar20 = *(undefined8 *)PTR_DAT_065dfbf8;
              }
            }
            else if (uVar6 == 0x260c9112) {
              uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065e2660,0);
              puVar7 = (undefined8 *)PTR_DAT_065e2660;
joined_r0x04c1bcbc:
              if ((uVar12 & 1) == 0) goto LAB_04c1be78;
              uVar20 = *(undefined8 *)PTR_DAT_065dfbf8;
              uVar11 = *puVar7;
              if (uVar18 != 0) {
                uVar11 = uVar20;
              }
            }
            else {
              if (uVar6 != 0x2a0c975e) goto LAB_04c1be78;
              uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065cf7b8,0);
LAB_04c1bdc8:
              if ((uVar12 & 1) == 0) goto LAB_04c1be78;
              uVar20 = uVar21;
              if (sVar3 != 0x2a) {
                uVar20 = *(undefined8 *)PTR_DAT_065dfbf8;
              }
            }
          }
          else {
            if (uVar6 < 0x2e0c9dab) {
              if (uVar6 == 0x2b0c98f1) {
                uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065c92a0,0);
                goto LAB_04c1bdc8;
              }
              if (uVar6 == 0x2e0c9daa) {
                uVar12 = thunk_FUN_04db8ae0(uVar21,*unaff_x20,0);
                puVar7 = (undefined8 *)PTR_DAT_065c8668;
                goto joined_r0x04c1bcbc;
              }
            }
            else if (uVar6 == 0x3a0cb08e) {
              uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065e3e90,0);
              if ((uVar12 & 1) != 0) {
                puVar7 = (undefined8 *)PTR_DAT_065e3e90;
                if (uVar18 != 0) {
                  puVar7 = (undefined8 *)PTR_DAT_065e3e50;
                }
                uVar11 = FUN_04db9398(*puVar7,lVar13,*(undefined8 *)PTR_DAT_065e3778,0);
                if (sVar3 == 0x2a) {
                  uVar20 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e3e50,lVar13,
                                        *(undefined8 *)PTR_DAT_065e3778,0);
                  goto LAB_04c1be8c;
                }
                goto LAB_04c1c100;
              }
            }
            else if (uVar6 == 0x3e0cb6da) {
              uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065e3d88,0);
              goto LAB_04c1bd60;
            }
LAB_04c1be78:
            uVar20 = *(undefined8 *)PTR_DAT_065dfbf8;
            if (uVar18 != 0) {
              uVar11 = uVar20;
            }
          }
LAB_04c1be8c:
          plVar19 = *(long **)(unaff_x21 + 0x10);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar15 = *plVar19;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_04c1bee4;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x23,4);
LAB_04c1bee4:
          uVar12 = (*(code *)*puVar7)(plVar19,lVar13,puVar7[1]);
          if ((uVar12 & 1) == 0) {
            uVar11 = *(undefined8 *)(unaff_x21 + 0x28);
            uVar21 = thunk_FUN_02c7737c(PTR_DAT_065e58e8);
            uVar21 = FUN_04db9ab4(uVar21,uVar11,lVar13,0);
            uVar20 = *(undefined8 *)(unaff_x21 + 0x28);
            thunk_FUN_02c7737c(PTR_DAT_065c96d8);
            uVar11 = thunk_FUN_02cea894();
            FUN_04e97fd8(uVar11,uVar21,uVar20,0);
            uVar21 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar11,uVar21);
          }
          plVar19 = *(long **)(unaff_x21 + 0x10);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar15 = *plVar19;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_04c1bf4c;
              }
              uVar12 = uVar12 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x23,0);
LAB_04c1bf4c:
          uVar14 = (*(code *)*puVar7)(plVar19,lVar13,puVar7[1]);
          lVar15 = FUN_04dba1c8(uVar20,uVar14,0);
          if (iStack0000000000000028 != 0) {
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (iStack0000000000000028 < *(int *)(lVar15 + 0x10)) {
              lVar15 = FUN_04dbaed4(lVar15,0,iStack0000000000000028,0);
            }
          }
          uVar12 = FUN_04db8dd0(uVar21,*unaff_x20,0);
          if (((uVar12 & 1) != 0) &&
             (uVar12 = FUN_04db8dd0(uVar21,*(undefined8 *)PTR_DAT_065e2660,0), (uVar12 & 1) != 0)) {
            plVar19 = *(long **)(unaff_x21 + 0x10);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar16 = *plVar19;
            uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar12 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *unaff_x23) {
                  puVar7 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_04c1c020;
                }
                uVar12 = uVar12 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x23,0);
LAB_04c1c020:
            plVar19 = (long *)(*(code *)*puVar7)(plVar19,lVar13,puVar7[1]);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar13 = *plVar19;
            uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar12 != 0) {
              piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_065c8e90) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_04c1c08c;
                }
                uVar12 = uVar12 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065c8e90,0);
LAB_04c1c08c:
            iVar4 = (*(code *)*puVar7)(plVar19,puVar7[1]);
            if (iVar4 == 1) {
              if (*(int *)(*(long *)PTR_DAT_065c8a78 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              lVar15 = FUN_0568f04c(lVar15,0);
            }
          }
          uVar11 = FUN_04db00f0(uVar11,lVar15,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c(uVar11,uVar11);
          }
          FUN_04dc7640(plVar8,uVar11,0);
          uVar6 = *(uint *)(lVar10 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar6);
      }
      uVar12 = thunk_FUN_04db8ae0(uVar21,*(undefined8 *)PTR_DAT_065e3d88,0);
      puVar2 = PTR_DAT_065c8d08;
      if ((uVar12 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        iVar4 = FUN_04dc686c(plVar8,0);
        sVar3 = FUN_04dc70e8(plVar8,iVar4 + -1,0);
        if (sVar3 == 0x3d) {
          iVar4 = FUN_04dc686c(plVar8,0);
          plVar8 = (long *)FUN_04dc7c94(plVar8,iVar4 + -1,1,0);
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
      auVar22 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      unaff_x22 = (undefined8 *)PTR_DAT_065ce360;
      unaff_x24 = (long *)PTR_DAT_065c8688;
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,auVar22._8_8_,auVar22._0_8_);
      }
      in_stack_00000018 = FUN_04dc90f4(in_stack_00000018,lVar9,auVar22._0_8_,0);
      if (in_stack_00000020 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar10 = *in_stack_00000020;
      lVar9 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_04c1b978;
          }
          uVar12 = uVar12 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(in_stack_00000020,lVar9,0);
LAB_04c1b978:
      uVar12 = (*(code *)*puVar7)(in_stack_00000020,puVar7[1]);
      puVar1 = PTR_DAT_065c8a48;
      if ((uVar12 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_02cea798(in_stack_00000020,*(undefined8 *)PTR_DAT_065c8a48);
        if (plVar8 == (long *)0x0) {
          return in_stack_00000018;
        }
        lVar9 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 == 0) goto LAB_04c1c240;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04c1c228;
      }
      param_3 = *(long *)puVar2;
      param_1 = *in_stack_00000020;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar17 = piVar17 + 4;
    if (uVar12 == 0) break;
LAB_04c1c228:
    if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_04c1c25c;
    }
  }
LAB_04c1c240:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,0);
LAB_04c1c25c:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return in_stack_00000018;
}


