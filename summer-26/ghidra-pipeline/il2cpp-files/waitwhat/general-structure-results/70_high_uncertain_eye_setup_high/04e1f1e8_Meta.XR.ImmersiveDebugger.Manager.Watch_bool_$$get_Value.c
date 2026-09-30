/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$get_Value
ENTRY_POINT: 04e1f1e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__get_Value
          (ulong param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack0000000000000004;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5310);
    *(undefined1 *)(unaff_x23 + 0x1ec) = 1;
  }
  if (param_3 == (long *)0x0) {
    uVar10 = 1;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*param_3 != lVar5) {
      in_stack_00000018 = param_2[1];
      in_stack_00000010 = *param_2;
      in_stack_00000028 = param_2[3];
      in_stack_00000020 = param_2[2];
      in_stack_00000038 = param_2[5];
      in_stack_00000030 = param_2[4];
      lVar5 = FUN_02d46f14(*(undefined8 *)(unaff_x19 + 0x20));
      uVar10 = thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000010);
      plVar7 = (long *)thunk_FUN_03196ed8(uVar10,0);
      FUN_02d342ac();
      uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar11 = thunk_FUN_031edd38(PTR_DAT_070f5318);
      uVar10 = FUN_057a1198(uVar11,uVar10,0);
      thunk_FUN_031edd38(PTR_DAT_070c3af0);
      uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      uVar12 = thunk_FUN_031edd38(PTR_DAT_070f1de8);
      FUN_0589b344(uVar11,uVar10,uVar12,0);
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar11);
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    if (*(long *)(*param_3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(param_3);
    }
    puVar6 = (undefined8 *)thunk_FUN_031c3ef0();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000010 = *param_2;
    uVar10 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    uVar12 = puVar6[2];
    uVar3 = *(undefined4 *)(puVar6 + 3);
    uVar11 = puVar6[4];
    uVar1 = *(undefined4 *)(puVar6 + 5);
    uStack0000000000000004 = *(undefined4 *)((long)puVar6 + 0x2c);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),&stack0x00000010);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000008 = uVar10;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),&stack0x00000008);
    puVar4 = PTR_DAT_070f5310;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar5 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070f5310) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e1f370;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e1f370:
    uVar10 = (*(code *)*puVar6)();
    if ((int)uVar10 == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(param_2 + 1));
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),&stack0x00000010);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18),&stack0x00000008);
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04e1f430;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e1f430:
      uVar10 = (*(code *)*puVar6)();
      if ((int)uVar10 == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000010 = param_2[2];
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20),&stack0x00000010);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000008 = uVar12;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20),&stack0x00000008);
        lVar5 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04e1f4f0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e1f4f0:
        uVar10 = (*(code *)*puVar6)();
        if ((int)uVar10 == 0) {
          lVar5 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(param_2 + 3));
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28),&stack0x00000010);
          lVar5 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28),&stack0x00000008);
          lVar5 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04e1f5b0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e1f5b0:
          uVar10 = (*(code *)*puVar6)();
          if ((int)uVar10 == 0) {
            lVar5 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000010 = param_2[4];
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),&stack0x00000010);
            lVar5 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000008 = uVar11;
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),&stack0x00000008);
            lVar5 = *unaff_x20;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
                  puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04e1f670;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_031c0d08();
LAB_04e1f670:
            uVar10 = (*(code *)*puVar6)();
            if ((int)uVar10 == 0) {
              lVar5 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(param_2 + 5));
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38),&stack0x00000010);
              lVar5 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar1);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38),&stack0x00000008);
              uVar10 = FUN_02d355c4(0,*(undefined8 *)puVar4);
              if ((int)uVar10 == 0) {
                lVar5 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000010 =
                     CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)((long)param_2 + 0x2c));
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_031c09d4();
                }
                thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),&stack0x00000010)
                ;
                lVar5 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000008 =
                     CONCAT71(in_stack_00000008._1_7_,(char)uStack0000000000000004) &
                     0xffffffffffffff01;
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_031c09d4();
                }
                thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),&stack0x00000008)
                ;
                uVar10 = FUN_02d355c4(0,*(undefined8 *)puVar4);
                if ((int)uVar10 == 0) {
                  lVar5 = *(long *)(unaff_x19 + 0x20);
                  in_stack_00000010 =
                       CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)((long)param_2 + 0x2d));
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_031c09d4();
                  }
                  uVar1 = uStack0000000000000004;
                  thunk_FUN_031c39fc(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000010);
                  lVar5 = *(long *)(unaff_x19 + 0x20);
                  in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,(char)((uint)uVar1 >> 8));
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_031c09d4();
                  }
                  thunk_FUN_031c39fc(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000008);
                  uVar10 = FUN_02d355c4(0,*(undefined8 *)puVar4);
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar10;
}


