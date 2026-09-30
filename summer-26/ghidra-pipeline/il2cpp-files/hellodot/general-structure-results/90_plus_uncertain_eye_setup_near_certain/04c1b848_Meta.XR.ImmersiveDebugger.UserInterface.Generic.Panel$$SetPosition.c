/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 04c1b848
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1c3b4) */

long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  undefined8 uVar23;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  int iStack0000000000000028;
  undefined2 uStack000000000000002c;
  
  plVar9 = (long *)PTR_DAT_065c8688;
  puVar24 = *(undefined8 **)(unaff_x22 + 0x360);
  uVar8 = FUN_04db9688(param_1,0);
  puVar2 = PTR_DAT_065dfe10;
  if ((uVar8 & 1) != 0) {
    uVar23 = **(undefined8 **)(*plVar9 + 0xb8);
    plVar9 = (long *)thunk_FUN_02cea894(*puVar24);
    FUN_04dc5f58(plVar9,uVar23,0);
    return plVar9;
  }
  uVar23 = *(undefined8 *)(unaff_x21 + 0x28);
  plVar10 = (long *)thunk_FUN_02cea894(*puVar24);
  FUN_04dc5f58(plVar10,uVar23,0);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar11 = *(long *)puVar2;
  }
  if (plVar10 != (long *)0x0) {
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
    uVar23 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if ((lVar11 != 0) &&
       (lVar11 = Unity_Burst_Intrinsics_Arm_Neon__vrndpq_f32(lVar11,uVar23,0), lVar11 != 0)) {
      plVar12 = (long *)FUN_056de520(lVar11,0);
      puVar3 = PTR_DAT_065e58d0;
      puVar2 = PTR_DAT_065d8130;
      plVar14 = (long *)PTR_DAT_065c8d08;
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *plVar14) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_04c1b978;
            }
            uVar8 = uVar8 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_02ce0a7c(plVar12,*plVar14,0);
LAB_04c1b978:
        uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        puVar1 = PTR_DAT_065c8a48;
        if ((uVar8 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02cea798(plVar12,*(undefined8 *)PTR_DAT_065c8a48);
          if (plVar9 == (long *)0x0) {
            return plVar10;
          }
          lVar11 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 == 0) goto LAB_04c1c240;
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_04c1c228;
        }
        lVar11 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *plVar14) {
              puVar13 = (undefined8 *)(lVar11 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_04c1b9dc;
            }
            uVar8 = uVar8 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_02ce0a7c(plVar12,*plVar14,1);
LAB_04c1b9dc:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar15 = FUN_04dbaed4(lVar11,1,*(int *)(lVar11 + 0x10) + -2,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar23 = **(undefined8 **)(*plVar9 + 0xb8);
        uStack000000000000002c = FUN_04db48b0(lVar15,0,0);
        if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar16 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
        if (*(long *)PTR_DAT_065e58d8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(0,uVar16);
        }
        uVar8 = FUN_04dbd9cc(*(long *)PTR_DAT_065e58d8,uVar16,0);
        if ((uVar8 & 1) != 0) {
          uStack000000000000002c = FUN_04db48b0(lVar15,0,0);
          if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar23 = FUN_04e945d8((long)&stack0x00000028 + 4,0);
          lVar15 = FUN_04dbd134(lVar15,1,0);
        }
        plVar9 = (long *)thunk_FUN_02cea894(*puVar24);
        FUN_04dc5d24(plVar9,0);
        lVar17 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,1);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined2 *)(lVar17 + 0x20) = 0x2c;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar15 = FUN_04dbbb18(lVar15,lVar17,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar7 = *(uint *)(lVar15 + 0x18);
        if (0 < (int)uVar7) {
          uVar22 = 0;
          do {
            if (uVar7 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            lVar17 = *(long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20);
            iStack0000000000000028 = 0;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            sVar4 = FUN_04db48b0(lVar17,*(int *)(lVar17 + 0x10) + -1,0);
            if ((sVar4 == 0x2a) &&
               (lVar17 = FUN_04dbaed4(lVar17,0,*(int *)(lVar17 + 0x10) + -1,0), lVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            uVar8 = FUN_04dbd9cc(lVar17,*(undefined8 *)PTR_DAT_065db1f0,0);
            if ((uVar8 & 1) != 0) {
              iVar5 = FUN_04dbda48(lVar17,0x3a,0);
              uVar16 = FUN_04dbd134(lVar17,iVar5 + 1,0);
              uVar8 = FUN_04f2ed74(uVar16,&stack0x00000028,0);
              if ((uVar8 & 1) == 0) {
                uVar16 = *(undefined8 *)(unaff_x21 + 0x28);
                uVar23 = thunk_FUN_02c7737c(PTR_DAT_065e58f8);
                uVar23 = FUN_04db9ab4(uVar23,uVar16,lVar17,0);
                uVar25 = *(undefined8 *)(unaff_x21 + 0x28);
                thunk_FUN_02c7737c(PTR_DAT_065c96d8);
                uVar16 = thunk_FUN_02cea894();
                FUN_04e97fd8(uVar16,uVar23,uVar25,0);
                uVar23 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
                FUN_02ce7b54(uVar16,uVar23);
              }
              uVar6 = FUN_04dbda48(lVar17,0x3a,0);
              lVar17 = FUN_04dbaed4(lVar17,0,uVar6,0);
            }
            uVar7 = FUN_04c1c7a4(uVar23);
            uVar16 = uVar23;
            if (uVar7 < 0x2a0c975f) {
              if (uVar7 == 0x230c8c59) {
                uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065e3e50,0);
LAB_04c1bd60:
                if ((uVar8 & 1) == 0) goto LAB_04c1be78;
                uVar16 = FUN_04db9398(uVar23,lVar17,*(undefined8 *)PTR_DAT_065e3778,0);
                if (sVar4 == 0x2a) {
                  uVar25 = FUN_04db9398(uVar23,lVar17,*(undefined8 *)PTR_DAT_065e3778,0);
                }
                else {
LAB_04c1c100:
                  uVar25 = *(undefined8 *)PTR_DAT_065dfbf8;
                }
              }
              else if (uVar7 == 0x260c9112) {
                uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065e2660,0);
                puVar24 = (undefined8 *)PTR_DAT_065e2660;
joined_r0x04c1bcbc:
                if ((uVar8 & 1) == 0) goto LAB_04c1be78;
                uVar25 = *(undefined8 *)PTR_DAT_065dfbf8;
                uVar16 = *puVar24;
                if (uVar22 != 0) {
                  uVar16 = uVar25;
                }
              }
              else {
                if (uVar7 != 0x2a0c975e) goto LAB_04c1be78;
                uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065cf7b8,0);
LAB_04c1bdc8:
                if ((uVar8 & 1) == 0) goto LAB_04c1be78;
                uVar25 = uVar23;
                if (sVar4 != 0x2a) {
                  uVar25 = *(undefined8 *)PTR_DAT_065dfbf8;
                }
              }
            }
            else {
              if (uVar7 < 0x2e0c9dab) {
                if (uVar7 == 0x2b0c98f1) {
                  uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065c92a0,0);
                  goto LAB_04c1bdc8;
                }
                if (uVar7 == 0x2e0c9daa) {
                  uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)puVar2,0);
                  puVar24 = (undefined8 *)PTR_DAT_065c8668;
                  goto joined_r0x04c1bcbc;
                }
              }
              else if (uVar7 == 0x3a0cb08e) {
                uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065e3e90,0);
                if ((uVar8 & 1) != 0) {
                  puVar24 = (undefined8 *)PTR_DAT_065e3e90;
                  if (uVar22 != 0) {
                    puVar24 = (undefined8 *)PTR_DAT_065e3e50;
                  }
                  uVar16 = FUN_04db9398(*puVar24,lVar17,*(undefined8 *)PTR_DAT_065e3778,0);
                  if (sVar4 == 0x2a) {
                    uVar25 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e3e50,lVar17,
                                          *(undefined8 *)PTR_DAT_065e3778,0);
                    goto LAB_04c1be8c;
                  }
                  goto LAB_04c1c100;
                }
              }
              else if (uVar7 == 0x3e0cb6da) {
                uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065e3d88,0);
                goto LAB_04c1bd60;
              }
LAB_04c1be78:
              uVar25 = *(undefined8 *)PTR_DAT_065dfbf8;
              if (uVar22 != 0) {
                uVar16 = uVar25;
              }
            }
LAB_04c1be8c:
            plVar14 = *(long **)(unaff_x21 + 0x10);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar19 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar8 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                  puVar24 = (undefined8 *)(lVar19 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                  goto LAB_04c1bee4;
                }
                uVar8 = uVar8 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar8 != 0);
            }
            puVar24 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar3,4);
LAB_04c1bee4:
            uVar8 = (*(code *)*puVar24)(plVar14,lVar17,puVar24[1]);
            if ((uVar8 & 1) == 0) {
              uVar16 = *(undefined8 *)(unaff_x21 + 0x28);
              uVar23 = thunk_FUN_02c7737c(PTR_DAT_065e58e8);
              uVar23 = FUN_04db9ab4(uVar23,uVar16,lVar17,0);
              uVar25 = *(undefined8 *)(unaff_x21 + 0x28);
              thunk_FUN_02c7737c(PTR_DAT_065c96d8);
              uVar16 = thunk_FUN_02cea894();
              FUN_04e97fd8(uVar16,uVar23,uVar25,0);
              uVar23 = thunk_FUN_02c7737c(PTR_DAT_065e58f0);
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar16,uVar23);
            }
            plVar14 = *(long **)(unaff_x21 + 0x10);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            lVar19 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar8 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                  puVar24 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_04c1bf4c;
                }
                uVar8 = uVar8 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar8 != 0);
            }
            puVar24 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar3,0);
LAB_04c1bf4c:
            uVar18 = (*(code *)*puVar24)(plVar14,lVar17,puVar24[1]);
            lVar19 = FUN_04dba1c8(uVar25,uVar18,0);
            if (iStack0000000000000028 != 0) {
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              if (iStack0000000000000028 < *(int *)(lVar19 + 0x10)) {
                lVar19 = FUN_04dbaed4(lVar19,0,iStack0000000000000028,0);
              }
            }
            uVar8 = FUN_04db8dd0(uVar23,*(undefined8 *)puVar2,0);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = FUN_04db8dd0(uVar23,*(undefined8 *)PTR_DAT_065e2660,0), (uVar8 & 1) != 0)) {
              plVar14 = *(long **)(unaff_x21 + 0x10);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              lVar20 = *plVar14;
              uVar8 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar8 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                    puVar24 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_04c1c020;
                  }
                  uVar8 = uVar8 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar8 != 0);
              }
              puVar24 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar3,0);
LAB_04c1c020:
              plVar14 = (long *)(*(code *)*puVar24)(plVar14,lVar17,puVar24[1]);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              lVar17 = *plVar14;
              uVar8 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar8 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_065c8e90) {
                    puVar24 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_04c1c08c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar8 != 0);
              }
              puVar24 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065c8e90,0);
LAB_04c1c08c:
              iVar5 = (*(code *)*puVar24)(plVar14,puVar24[1]);
              if (iVar5 == 1) {
                if (*(int *)(*(long *)PTR_DAT_065c8a78 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                lVar19 = FUN_0568f04c(lVar19,0);
              }
            }
            uVar16 = FUN_04db00f0(uVar16,lVar19,0);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c(uVar16,uVar16);
            }
            FUN_04dc7640(plVar9,uVar16,0);
            uVar7 = *(uint *)(lVar15 + 0x18);
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < (int)uVar7);
        }
        uVar8 = thunk_FUN_04db8ae0(uVar23,*(undefined8 *)PTR_DAT_065e3d88,0);
        plVar14 = (long *)PTR_DAT_065c8d08;
        if ((uVar8 & 1) != 0) {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          iVar5 = FUN_04dc686c(plVar9,0);
          sVar4 = FUN_04dc70e8(plVar9,iVar5 + -1,0);
          if (sVar4 == 0x3d) {
            iVar5 = FUN_04dc686c(plVar9,0);
            plVar9 = (long *)FUN_04dc7c94(plVar9,iVar5 + -1,1,0);
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          plVar9 = (long *)FUN_04dc90f4(plVar9,*(undefined8 *)PTR_DAT_065e58e0,
                                        *(undefined8 *)PTR_DAT_065e3d88,0);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar26 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        puVar24 = (undefined8 *)PTR_DAT_065ce360;
        plVar9 = (long *)PTR_DAT_065c8688;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(0,auVar26._8_8_,auVar26._0_8_);
        }
        plVar10 = (long *)FUN_04dc90f4(plVar10,lVar11,auVar26._0_8_,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar21 = piVar21 + 4;
    if (uVar8 == 0) break;
LAB_04c1c228:
    if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
      puVar24 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_04c1c25c;
    }
  }
LAB_04c1c240:
  puVar24 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0);
LAB_04c1c25c:
  (*(code *)*puVar24)(plVar9,puVar24[1]);
  return plVar10;
}


