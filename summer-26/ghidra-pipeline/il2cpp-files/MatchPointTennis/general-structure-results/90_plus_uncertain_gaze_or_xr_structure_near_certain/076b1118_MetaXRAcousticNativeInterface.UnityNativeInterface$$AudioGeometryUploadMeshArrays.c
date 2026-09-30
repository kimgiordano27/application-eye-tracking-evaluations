/*
FUNCTION_NAME: MetaXRAcousticNativeInterface.UnityNativeInterface$$AudioGeometryUploadMeshArrays
ENTRY_POINT: 076b1118
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076b0fc4) */
/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b099c) */
/* WARNING: Removing unreachable block (ram,0x076b0ffc) */
/* WARNING: Removing unreachable block (ram,0x076b062c) */
/* WARNING: Removing unreachable block (ram,0x076b0668) */
/* WARNING: Removing unreachable block (ram,0x076b0f94) */
/* WARNING: Removing unreachable block (ram,0x076b1210) */
/* WARNING: Removing unreachable block (ram,0x076b0c7c) */
/* WARNING: Removing unreachable block (ram,0x076b1e1c) */

void MetaXRAcousticNativeInterface_UnityNativeInterface__AudioGeometryUploadMeshArrays
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  undefined1 auVar27 [16];
  long in_stack_00000028;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  int in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if (param_2 == 1) {
    plVar19 = (long *)__cxa_begin_catch(param_1);
    lVar25 = *plVar19;
    __cxa_end_catch();
    if (in_stack_00000028 < 0) {
      FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
    }
    if (lVar25 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e3c(lVar25);
    }
    *(undefined8 *)(in_stack_00000040 + 0x1c) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x16) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x1a) = 0;
    *(undefined8 *)(in_stack_00000040 + 0x18) = 0;
    if (*(char *)(in_stack_00000040 + 0x12) == '\0') {
      bVar6 = false;
    }
    else {
      if (*(long *)(in_stack_00000040 + 0xe) != 0) {
        FUN_07442dbc(&stack0x00000070,*(long *)(in_stack_00000040 + 0xe),
                     *(undefined8 *)PTR_DAT_09f2d550);
        puVar2 = PTR_DAT_09f2d608;
        in_stack_00000178 = in_stack_00000078;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000188 = in_stack_00000088;
        in_stack_00000180 = in_stack_00000080;
        in_stack_00000190 = in_stack_00000090;
        while (uVar13 = FUN_052607f8(&stack0x00000170,*(undefined8 *)puVar2), (uVar13 & 1) != 0) {
          if (in_stack_00000188 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          auVar27 = FUN_076c0674(in_stack_00000188,0);
          lVar25 = *(long *)(in_stack_00000040 + 0x10);
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = *(long *)(lVar25 + 0x10);
          lVar22 = *(long *)PTR_DAT_09f2d6c0;
          *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar24 = *(uint *)(lVar25 + 0x18);
          if (uVar24 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar25 + 0x18) = uVar24 + 1;
            *(undefined1 (*) [16])(lVar21 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
          }
          else {
            FUN_05b19770(lVar25,auVar27._0_8_,auVar27._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (in_stack_00000028 < 0) {
          FUN_05260918(&stack0x00000170,*(undefined8 *)PTR_DAT_09f2d5e8);
        }
      }
      if (*(long *)(in_stack_00000040 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar13 = FUN_076ca814(*(long *)(in_stack_00000040 + 8),0);
      puVar5 = PTR_DAT_09f2d688;
      puVar4 = PTR_DAT_09f2d660;
      puVar3 = PTR_DAT_09f2d658;
      puVar2 = PTR_DAT_09f1f018;
      if ((uVar13 & 1) != 0) {
        plVar19 = *(long **)(in_stack_00000040 + 8);
        if (plVar19 == (long *)0x0) {
LAB_076b0f7c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar26 = 0;
LAB_076b06bc:
        plVar19 = (long *)(**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar25 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar13 != 0) {
          piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d678) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_076b0724;
            }
            uVar13 = uVar13 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2d678,0);
LAB_076b0724:
        iVar8 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        if (iVar26 < iVar8) {
          plVar19 = *(long **)(in_stack_00000040 + 8);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar19 = (long *)(**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400))
          ;
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar25 = *plVar19;
          uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar13 != 0) {
            piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d680) {
                puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b07b0;
              }
              uVar13 = uVar13 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2d680,0);
LAB_076b07b0:
          plVar19 = (long *)(*(code *)*puVar14)(plVar19,iVar26,puVar14[1]);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar15 = (long *)(**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400))
          ;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar25 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar13 != 0) {
            piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d638) {
                puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b0838;
              }
              uVar13 = uVar13 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f2d638,0);
LAB_076b0838:
          plVar15 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar21 = *plVar15;
            lVar25 = *(long *)puVar2;
            uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar13 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == lVar25) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_076b0898;
                }
                uVar13 = uVar13 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_044822ac(plVar15,lVar25,0);
LAB_076b0898:
            uVar13 = (*(code *)*puVar14)(plVar15,puVar14[1]);
            if ((uVar13 & 1) == 0) goto LAB_076b091c;
            lVar25 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar13 != 0) {
              piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
                  goto LAB_076b08f4;
                }
                uVar13 = uVar13 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar13 != 0);
            }
            puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar3,0);
LAB_076b08f4:
            lVar25 = (*(code *)*puVar14)(plVar15,puVar14[1]);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076a6f40(in_stack_00000030,*(undefined4 *)(lVar25 + 0x10),0x200);
          } while( true );
        }
      }
      plVar19 = *(long **)(in_stack_00000040 + 8);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar25 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar13 != 0) {
        piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d010) {
            puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_076b0e20;
          }
          uVar13 = uVar13 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2d010,0);
LAB_076b0e20:
      uVar10 = (*(code *)*puVar14)(plVar19,puVar14[1]);
      uVar18 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d4e8,uVar10);
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      *(undefined8 *)(in_stack_00000030 + 0x68) = uVar18;
      thunk_FUN_044bb4b4();
      iVar26 = 0;
      in_stack_00000040[0x20] = 0;
      while( true ) {
        puVar3 = PTR_DAT_09f2d410;
        puVar2 = PTR_DAT_09f2d408;
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar26) break;
        plVar19 = *(long **)(in_stack_00000040 + 8);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar19 = (long *)(**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180))
        ;
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar25 = *plVar19;
        uVar10 = in_stack_00000040[0x20];
        uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar13 != 0) {
          piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d018) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_076b12bc;
            }
            uVar13 = uVar13 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
        lVar25 = (*(code *)*puVar14)(plVar19,uVar10,puVar14[1]);
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (-1 < *(int *)(lVar25 + 0x18)) {
          uVar7 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            (lVar25,0);
          switch(uVar7) {
          case 1:
            lVar25 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            iVar26 = *(int *)(lVar25 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if (iVar26 < 0x200) {
              if ((iVar26 == 2) || (iVar26 == 4)) {
                lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
                System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                          (lVar25,*(undefined8 *)PTR_DAT_09f2d4f0);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar21 = *(long *)(in_stack_00000030 + 0x70);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = in_stack_00000040[0x20];
                if (*(uint *)(lVar21 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             (long)(int)uVar24,lVar25 + 0x10,&stack0x00000158,lVar25 + 0x18,
                             *(int *)(lVar21 + (long)(int)uVar24 * 4 + 0x20) == 4);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar27 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar20 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = *(uint *)(lVar21 + 0x18);
                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
                }
                else {
                  FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                plVar19 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40));
                if (lVar21 == 0) {
                  uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar18,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar19[(long)(int)uVar24 + 4] = lVar25;
                thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
              }
            }
            else if ((iVar26 == 0x200) || (iVar26 == 0x2000)) {
              lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
              FUN_07399b20(lVar25,*(undefined8 *)PTR_DAT_09f2d500);
              FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],&stack0x000000e0,&stack0x000000c8);
              if (in_stack_000000e0 != '\0') {
                auVar27 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                *(undefined1 (*) [16])(lVar25 + 0x10) = auVar27;
              }
              if (in_stack_000000c8 != '\0') {
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar27 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar20 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = *(uint *)(lVar21 + 0x18);
                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
                }
                else {
                  FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
              }
              plVar19 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = in_stack_00000040[0x20];
              if ((lVar25 != 0) &&
                 (lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40)), lVar21 == 0)
                 ) {
                uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar18,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar19[(long)(int)uVar24 + 4] = lVar25;
              thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
            }
            break;
          case 3:
            lVar25 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            uVar24 = *(uint *)(lVar25 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
            if ((uVar24 >> 10 & 1) == 0) {
              if ((uVar24 >> 0xc & 1) != 0) {
                lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
                FUN_07399b40(lVar25,*(undefined8 *)PTR_DAT_09f2d4f8);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                             in_stack_00000040[0x20],lVar25 + 0x10,&stack0x000000f8,0);
                lVar21 = *(long *)(in_stack_00000040 + 0x10);
                auVar27 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar22 = *(long *)(lVar21 + 0x10);
                lVar20 = *(long *)PTR_DAT_09f2d6c0;
                *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = *(uint *)(lVar21 + 0x18);
                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                  *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
                }
                else {
                  FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                plVar19 = *(long **)(in_stack_00000030 + 0x68);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                uVar24 = in_stack_00000040[0x20];
                lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40));
                if (lVar21 == 0) {
                  uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                  FUN_04447d10(uVar18,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                plVar19[(long)(int)uVar24 + 4] = lVar25;
                thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
              }
            }
            else {
              lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
              FUN_07399b40(lVar25,*(undefined8 *)PTR_DAT_09f2d4f8);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar25 + 0x10,&stack0x00000128,1);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar27 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar20 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = *(uint *)(lVar21 + 0x18);
              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
              }
              else {
                FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              plVar19 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40));
              if (lVar21 == 0) {
                uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar18,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar19[(long)(int)uVar24 + 4] = lVar25;
              thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
            }
            break;
          case 4:
            lVar25 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((*(uint *)(lVar25 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
              FUN_07399b00(lVar25,*(undefined8 *)PTR_DAT_09f2d510);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar25 + 0x10,&stack0x00000110);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar27 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar20 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = *(uint *)(lVar21 + 0x18);
              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
              }
              else {
                FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              plVar19 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40));
              if (lVar21 == 0) {
                uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar18,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar19[(long)(int)uVar24 + 4] = lVar25;
              thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
            }
            break;
          case 7:
            lVar25 = *(long *)(in_stack_00000030 + 0x70);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if (*(int *)(lVar25 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
              lVar25 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
              FUN_07399ae0(lVar25,*(undefined8 *)PTR_DAT_09f2d508);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                           in_stack_00000040[0x20],lVar25 + 0x10,&stack0x00000140);
              lVar21 = *(long *)(in_stack_00000040 + 0x10);
              auVar27 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar22 = *(long *)(lVar21 + 0x10);
              lVar20 = *(long *)PTR_DAT_09f2d6c0;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = *(uint *)(lVar21 + 0x18);
              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar24 + 1;
                *(undefined1 (*) [16])(lVar22 + (long)(int)uVar24 * 0x10 + 0x20) = auVar27;
              }
              else {
                FUN_05b19770(lVar21,auVar27._0_8_,auVar27._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              plVar19 = *(long **)(in_stack_00000030 + 0x68);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              uVar24 = in_stack_00000040[0x20];
              lVar21 = thunk_FUN_04485110(lVar25,*(undefined8 *)(*plVar19 + 0x40));
              if (lVar21 == 0) {
                uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                FUN_04447d10(uVar18,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              plVar19[(long)(int)uVar24 + 4] = lVar25;
              thunk_FUN_044bb4b4(plVar19 + (long)(int)uVar24 + 4,lVar25);
            }
          }
          plVar19 = *(long **)(in_stack_00000030 + 0x20);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar25 = *plVar19;
          uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar13 != 0) {
            piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2ce28) {
                puVar14 = (undefined8 *)(lVar25 + (long)(*piVar23 + 2) * 0x10 + 0x138);
                goto LAB_076b1af0;
              }
              uVar13 = uVar13 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
          lVar25 = (*(code *)*puVar14)(plVar19,puVar14[1]);
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_00000198 = FUN_07ab3bc0(lVar25,0);
          uVar13 = FUN_0795ad28(&stack0x00000198,0);
          if ((uVar13 & 1) == 0) {
            *in_stack_00000040 = 1;
            *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
            thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
            if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                         *(undefined8 *)PTR_DAT_09f2d528);
            return;
          }
          FUN_0795adf4(&stack0x00000198,0);
        }
        iVar26 = in_stack_00000040[0x20] + 1;
        in_stack_00000040[0x20] = iVar26;
      }
      if (0 < (int)in_stack_00000040[0xc]) {
        uStack0000000000000038 = 0;
        uVar24 = 0;
        do {
          plVar19 = *(long **)(in_stack_00000040 + 8);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          plVar19 = (long *)(**(code **)(*plVar19 + 0x1f8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x200));
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar25 = *plVar19;
          uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar13 != 0) {
            piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d160) {
                puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_076b1bec;
              }
              uVar13 = uVar13 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(plVar19,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
          lVar25 = (*(code *)*puVar14)(plVar19,uStack0000000000000038,puVar14[1]);
          lVar21 = *(long *)(in_stack_00000030 + 0x98);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar21 = *(long *)(lVar21 + (long)(int)uStack0000000000000038 * 8 + 0x20);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar21 = FUN_074427bc(lVar21,*(undefined8 *)PTR_DAT_09f2d5a0);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_06b56d04(&stack0x00000070,lVar21,*(undefined8 *)PTR_DAT_09f2d718);
          in_stack_000000b8 = in_stack_00000078;
          in_stack_000000b0 = in_stack_00000070;
          in_stack_000000c0 = in_stack_00000080;
          while (uVar13 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                                    (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
                lVar21 = in_stack_000000c0, (uVar13 & 1) != 0) {
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
              plVar19 = (long *)0x0;
            }
            else {
              iVar26 = 0;
              plVar19 = (long *)0x0;
              do {
                auVar27 = FUN_059f3e50(lVar21,iVar26,*(undefined8 *)puVar2);
                lVar22 = auVar27._8_8_;
                if (plVar19 == (long *)0x0) {
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar10 = *(undefined4 *)(lVar21 + 0x18);
                  uVar18 = *(undefined8 *)(lVar25 + 0x10);
                  plVar19 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar3);
                  FUN_076c14ec(plVar19,uStack0000000000000038,uVar24,uVar10,uVar18,0);
                }
                else {
                  lVar20 = *(long *)puVar3;
                  bVar1 = *(byte *)(lVar20 + 0x130);
                  if (*(byte *)(*plVar19 + 0x130) < bVar1) goto LAB_076b1e40;
                  if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != lVar20) {
                    plVar19 = (long *)0x0;
                  }
                }
                if (plVar19 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c1680(plVar19,iVar26,auVar27._0_8_ & 0xffffffff,0);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar22 + 0x28) != 0) {
                  if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar20 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar22,
                                        *(undefined8 *)PTR_DAT_09f2d590);
                  plVar19[5] = lVar20;
                  thunk_FUN_044bb4b4();
                }
                FUN_076c1fc8(plVar19,iVar26,*(undefined4 *)(lVar22 + 0x1c),0);
                iVar26 = iVar26 + 1;
              } while (iVar26 < *(int *)(lVar21 + 0x18));
            }
            plVar15 = *(long **)(in_stack_00000030 + 0x88);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if ((plVar19 != (long *)0x0) &&
               (lVar21 = thunk_FUN_04485110(plVar19,*(undefined8 *)(*plVar15 + 0x40)), lVar21 == 0))
            {
              uVar18 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar18,0);
            }
            if (*(uint *)(plVar15 + 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar15[(long)(int)uVar24 + 4] = (long)plVar19;
            thunk_FUN_044bb4b4(plVar15 + (long)(int)uVar24 + 4,plVar19);
            uVar24 = uVar24 + 1;
          }
          if (in_stack_00000028 < 0) {
            FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
          }
          uStack0000000000000038 = uStack0000000000000038 + 1;
        } while ((int)uStack0000000000000038 < (int)in_stack_00000040[0xc]);
      }
      if (*(long *)(in_stack_00000040 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar18 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar18,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar27 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar27;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      bVar6 = *(char *)(in_stack_00000040 + 0x12) != '\0';
    }
    *in_stack_00000040 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
    *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066e2370(in_stack_00000040 + 2,bVar6,*(undefined8 *)PTR_DAT_09f2ce18);
  }
  else {
    if (in_stack_00000028 < 0) {
      FUN_0525e33c(in_stack_00000040 + 0x14,*(undefined8 *)PTR_DAT_09f2d5f8);
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0452a004(param_1);
    }
    puVar14 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar18 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar13 = thunk_FUN_044a9a40(uVar18,*(undefined8 *)*puVar14);
    if ((uVar13 & 1) == 0) {
      puVar12 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar12 = *puVar14;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar12,&PTR_PTR_0991e038,0);
    }
    uVar18 = *puVar14;
    *(undefined8 *)(&stack0x000000a0 + (long)in_stack_000000a8 * 8) = uVar18;
    in_stack_000000a8 = in_stack_000000a8 + 1;
    __cxa_end_catch();
    *in_stack_00000040 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
    *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
    lVar25 = thunk_FUN_044adef4(PTR_DAT_09f2cdd8);
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = thunk_FUN_044adef4(PTR_DAT_09f2ce30);
    FUN_066e25a0(in_stack_00000040 + 2,uVar18,uVar11);
  }
  return;
LAB_076b091c:
  if ((in_stack_00000028 < 0) && (plVar15 != (long *)0x0)) {
    lVar25 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar13 != 0) {
      piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0984;
        }
        uVar13 = uVar13 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0984:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  plVar15 = (long *)(**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar25 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar13 != 0) {
    piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f2d648) {
        puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_076b0a14;
      }
      uVar13 = uVar13 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar13 != 0);
  }
  puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f2d648,0);
LAB_076b0a14:
  plVar15 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
switchD_076b0b98_default:
  lVar21 = *plVar15;
  lVar25 = *(long *)puVar2;
  uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar13 != 0) {
    piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar23 + -2) == lVar25) {
        puVar14 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
        goto LAB_076b0a74;
      }
      uVar13 = uVar13 - 1;
      piVar23 = piVar23 + 4;
    } while (uVar13 != 0);
  }
  puVar14 = (undefined8 *)FUN_044822ac(plVar15,lVar25,0);
LAB_076b0a74:
  uVar13 = (*(code *)*puVar14)(plVar15,puVar14[1]);
  if ((uVar13 & 1) != 0) {
    lVar25 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar13 != 0) {
      piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0ad0;
        }
        uVar13 = uVar13 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)puVar4,0);
LAB_076b0ad0:
    plVar16 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
    plVar17 = (long *)(**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar21 = *plVar17;
    lVar25 = plVar16[2];
    uVar13 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar13 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
          puVar14 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto MetaXRAcousticNativeInterface___ctor;
        }
        uVar13 = uVar13 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar17,*(long *)puVar5,0);
MetaXRAcousticNativeInterface___ctor:
    lVar25 = (*(code *)*puVar14)(plVar17,(int)lVar25,puVar14[1]);
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar10 = *(undefined4 *)(lVar25 + 0x24);
    lVar25 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar9 = FUN_076bd41c(lVar25,0);
    switch(uVar9) {
    case 2:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar10,0x400);
      break;
    case 3:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar10,0x800);
      break;
    case 4:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar10,0x1000);
      break;
    case 5:
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a6f40(in_stack_00000030,uVar10,0x2000);
    }
    goto switchD_076b0b98_default;
  }
  if ((in_stack_00000028 < 0) && (plVar15 != (long *)0x0)) {
    lVar25 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar13 != 0) {
      piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar14 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_076b0c64;
        }
        uVar13 = uVar13 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f1f008,0);
LAB_076b0c64:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
  }
  plVar19 = *(long **)(in_stack_00000040 + 8);
  iVar26 = iVar26 + 1;
  if (plVar19 == (long *)0x0) goto LAB_076b0f7c;
  goto LAB_076b06bc;
}


