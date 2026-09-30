/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 05163204
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  code *pcVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x26;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if (in_x9 != 0) {
    piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05163248;
      }
      in_x9 = in_x9 + -1;
      piVar14 = piVar14 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05163248:
  uVar4 = (*(code *)*puVar6)();
  puVar2 = PTR_DAT_06782538;
  puVar1 = PTR_DAT_06782530;
  switch(uVar4) {
  case 1:
    uVar12 = FUN_05164f5c();
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = FUN_05165ef0();
      if ((uVar12 & 1) != 0) {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_05163d68;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05163d68:
        lVar10 = (*(code *)*puVar6)();
        if (lVar10 == 0) break;
        if (0 < *(int *)(lVar10 + 0x18)) goto LAB_051632cc;
      }
    }
    if (unaff_x20 == (long *)0x0) break;
    (**(code **)(*unaff_x20 + 0x1d8))();
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_05163e00;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05163e00:
    lVar10 = (*(code *)*puVar6)();
    if (lVar10 == 0) break;
    FUN_03aaceb0(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_06782520);
    puVar3 = PTR_DAT_06782510;
    puVar2 = PTR_DAT_0676bca0;
    puVar1 = PTR_DAT_0676bc98;
    in_stack_00000030 = (long *)CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    while (uVar12 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar3), plVar7 = in_stack_00000030
          , (uVar12 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = *in_stack_00000030;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto LAB_05163eb4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x26,8);
LAB_05163eb4:
      uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      uVar12 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar1,0);
      if ((uVar12 & 1) != 0) {
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_05163f20;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x26,1);
LAB_05163f20:
        uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar12 = FUN_04e8c024(uVar8,*(undefined8 *)puVar2,0);
        if ((uVar12 & 1) != 0) {
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_05163fa4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x26,1);
LAB_05163fa4:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0566e384(uVar8,0);
        }
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
              goto OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x26,5);
OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow:
        auVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (auVar15._0_8_ == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_067699f0,auVar15._8_8_,0);
          uVar8 = thunk_FUN_02d9d534();
          uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06782598);
          thunk_FUN_050931fc(uVar8,uVar9,0);
          uVar9 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar8,uVar9);
        }
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
    if ((unaff_x23 & 1) != 0) {
      FUN_05164b1c();
      if (unaff_x19 == (long *)0x0) break;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_051640e8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051640e8:
    uVar8 = (*(code *)*puVar6)();
    uVar12 = FUN_0516619c(uVar8,uVar8);
    if ((uVar12 & 1) == 0) {
      lVar10 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_05164150;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05164150:
      lVar10 = (*(code *)*puVar6)();
      if (lVar10 == 0) break;
      if (*(int *)(lVar10 + 0x18) == 1) {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_051641bc;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
        lVar10 = (*(code *)*puVar6)();
        puVar1 = PTR_DAT_06782408;
        if ((lVar10 == 0) ||
           (plVar7 = (long *)FUN_03aac1c4(lVar10,0,*(undefined8 *)PTR_DAT_06782408),
           plVar7 == (long *)0x0)) break;
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05164234;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x26,0);
LAB_05164234:
        iVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (iVar5 == 3) {
          lVar10 = *unaff_x21;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_05164554;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
          lVar10 = (*(code *)*puVar6)();
          if ((lVar10 == 0) ||
             (plVar7 = (long *)FUN_03aac1c4(lVar10,0,*(undefined8 *)puVar1), plVar7 == (long *)0x0))
          break;
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                goto LAB_051645c8;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x26,5);
LAB_051645c8:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
          if (unaff_x19 == (long *)0x0) break;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
      }
    }
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_051642d8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
    lVar10 = (*(code *)*puVar6)();
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *unaff_x26) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_05164340;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
        lVar10 = (*(code *)*puVar6)();
        puVar1 = PTR_DAT_06782540;
        if (lVar10 == 0) break;
        if (*(int *)(lVar10 + 0x18) == 0) {
          lVar10 = thunk_FUN_02d9d438();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88();
          }
          lVar10 = *(long *)puVar1;
          plVar7 = (long *)thunk_FUN_02d9d438();
          if (plVar7 == (long *)0x0) goto LAB_051646a8;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar10) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_05164604;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar10,2);
LAB_05164604:
          uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar12 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) break;
            (**(code **)(*unaff_x19 + 0x698))();
          }
          else {
            if (unaff_x19 == (long *)0x0) break;
            pcVar13 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
            (*pcVar13)();
          }
LAB_051644a0:
          (**(code **)(*unaff_x20 + 0x1e8))();
          return;
        }
      }
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x578))();
        puVar1 = PTR_DAT_06782408;
        iVar5 = 0;
        do {
          lVar10 = *unaff_x21;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_051643cc;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
          lVar10 = (*(code *)*puVar6)();
          if (lVar10 == 0) break;
          if (*(int *)(lVar10 + 0x18) <= iVar5) {
            FUN_051652f4();
            pcVar13 = *(code **)(*unaff_x19 + 0x588);
            goto LAB_05164498;
          }
          lVar10 = *unaff_x21;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_05164438;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
          lVar10 = (*(code *)*puVar6)();
          if (lVar10 == 0) break;
          FUN_03aac1c4(lVar10,iVar5,*(undefined8 *)puVar1);
          FUN_05163090();
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
    break;
  case 2:
  case 3:
  case 4:
  case 7:
  case 0xd:
  case 0xe:
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_051632e4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051632e4:
    uVar8 = (*(code *)*puVar6)();
    uVar12 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_0676bc98,0);
    if ((uVar12 & 1) != 0) {
      lVar10 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
            goto LAB_05163544;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05163544:
      uVar8 = (*(code *)*puVar6)();
      uVar12 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782550,0);
      if ((uVar12 & 1) != 0) {
        return;
      }
    }
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_051635b8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051635b8:
    uVar8 = (*(code *)*puVar6)();
    uVar12 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar12 & 1) != 0) {
      lVar10 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0516362c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_0516362c:
      uVar8 = (*(code *)*puVar6)();
      uVar12 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782580,0);
      if ((uVar12 & 1) != 0) {
        return;
      }
    }
    if ((unaff_x23 & 1) != 0) {
      FUN_05164b1c();
      if (unaff_x19 == (long *)0x0) break;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_051636cc;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_051636cc:
    (*(code *)*puVar6)();
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x698);
LAB_051636ec:
      (*pcVar13)();
      return;
    }
    break;
  default:
    FUN_028f4e40();
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067823f0);
    uVar4 = FUN_028f925c(0,uVar8);
    in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_067825a8);
    in_stack_00000010 = 0xffffffffffffffff;
    uStack0000000000000018 = uVar4;
    uVar8 = FUN_0503c914(&stack0x00000008,0);
    uVar9 = thunk_FUN_02dc61f4(PTR_DAT_067825b0);
    uVar8 = FUN_04e83184(uVar9,uVar8,0);
    thunk_FUN_02dc61f4(PTR_DAT_067699f0);
    uVar9 = thunk_FUN_02d9d534();
    thunk_FUN_050931fc(uVar9,uVar8,0);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar9,uVar8);
  case 8:
    if ((unaff_x23 & 1) == 0) {
      return;
    }
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent:
    (*(code *)*puVar6)();
    if (unaff_x19 != (long *)0x0) {
      pcVar13 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_051636ec;
    }
    break;
  case 9:
  case 0xb:
LAB_051632cc:
    FUN_051652f4();
    return;
  case 10:
    plVar7 = (long *)thunk_FUN_02d9d438();
    if (plVar7 == (long *)0x0) {
LAB_051646a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    FUN_05164b1c();
    if (unaff_x19 == (long *)0x0) break;
    (**(code **)(*unaff_x19 + 0x5d8))();
    (**(code **)(*unaff_x19 + 0x578))();
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05163788;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_05163788:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05163a28;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_05163a28:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_05163a9c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,2);
LAB_05163a9c:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_05163b24;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,2);
LAB_05163b24:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_05163b98;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,1);
LAB_05163b98:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05163c20;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,1);
LAB_05163c20:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_05163c94;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,3);
LAB_05163c94:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) != 0) goto LAB_05163d40;
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) goto LAB_05163d0c;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    goto LAB_05163cfc;
  case 0x11:
    plVar7 = (long *)thunk_FUN_02d9d438();
    if (plVar7 == (long *)0x0) goto LAB_051646a8;
    FUN_05164b1c();
    if (unaff_x19 == (long *)0x0) break;
    (**(code **)(*unaff_x19 + 0x5d8))();
    (**(code **)(*unaff_x19 + 0x578))();
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05163704;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_05163704:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05163840;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_05163840:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_051638b4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,1);
LAB_051638b4:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0516393c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,1);
LAB_0516393c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_051639b0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,3);
LAB_051639b0:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar12 = FUN_050f0eb8(uVar8,0);
    if ((uVar12 & 1) != 0) goto LAB_05163d40;
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar11 = *plVar7;
    lVar10 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) goto LAB_05163d0c;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
LAB_05163cfc:
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar10,3);
LAB_05163d1c:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    (**(code **)(*unaff_x19 + 0x698))();
LAB_05163d40:
    (**(code **)(*unaff_x19 + 0x588))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05163d0c:
  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
  goto LAB_05163d1c;
}


