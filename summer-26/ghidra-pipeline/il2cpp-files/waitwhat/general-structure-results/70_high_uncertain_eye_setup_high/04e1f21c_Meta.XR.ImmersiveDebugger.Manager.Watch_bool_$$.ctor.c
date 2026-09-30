/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$.ctor
ENTRY_POINT: 04e1f21c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>___ctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack0000000000000004;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar6 = FUN_031c09d4();
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  if (*unaff_x22 != lVar6) {
    in_stack_00000018 = unaff_x21[1];
    in_stack_00000010 = *unaff_x21;
    in_stack_00000028 = unaff_x21[3];
    in_stack_00000020 = unaff_x21[2];
    in_stack_00000038 = unaff_x21[5];
    in_stack_00000030 = unaff_x21[4];
    lVar6 = FUN_02d46f14(*(undefined8 *)(unaff_x19 + 0x20));
    uVar11 = thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000010);
    plVar8 = (long *)thunk_FUN_03196ed8(uVar11,0);
    FUN_02d342ac();
    uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar12 = thunk_FUN_031edd38(PTR_DAT_070f5318);
    uVar11 = FUN_057a1198(uVar12,uVar11,0);
    thunk_FUN_031edd38(PTR_DAT_070c3af0);
    uVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar13 = thunk_FUN_031edd38(PTR_DAT_070f1de8);
    FUN_0589b344(uVar12,uVar11,uVar13,0);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar12);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
  puVar7 = (undefined8 *)thunk_FUN_031c3ef0();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  in_stack_00000010 = *unaff_x21;
  uVar11 = *puVar7;
  uVar2 = *(undefined4 *)(puVar7 + 1);
  uVar13 = puVar7[2];
  uVar3 = *(undefined4 *)(puVar7 + 3);
  uVar12 = puVar7[4];
  uVar1 = *(undefined4 *)(puVar7 + 5);
  uStack0000000000000004 = *(undefined4 *)((long)puVar7 + 0x2c);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
                    /* try { // try from 04e1f2d8 to 04f1f2fb has its CatchHandler @ 04e1f378 */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),&stack0x00000010);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  in_stack_00000008 = uVar11;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),&stack0x00000008);
  puVar4 = PTR_DAT_070f5310;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar6 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070f5310) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04e1f370;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e1f370:
  iVar5 = (*(code *)*puVar7)();
  if (iVar5 == 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 1));
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),&stack0x00000010);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18),&stack0x00000008);
    lVar6 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04e1f430;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e1f430:
    iVar5 = (*(code *)*puVar7)();
    if (iVar5 == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000010 = unaff_x21[2];
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),&stack0x00000010);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000008 = uVar13;
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),&stack0x00000008);
      lVar6 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04e1f4f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e1f4f0:
      iVar5 = (*(code *)*puVar7)();
      if (iVar5 == 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 3));
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),&stack0x00000010);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28),&stack0x00000008);
        lVar6 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04e1f5b0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e1f5b0:
        iVar5 = (*(code *)*puVar7)();
        if (iVar5 == 0) {
          lVar6 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000010 = unaff_x21[4];
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30),&stack0x00000010);
          lVar6 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000008 = uVar12;
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30),&stack0x00000008);
          lVar6 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04e1f670;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e1f670:
          iVar5 = (*(code *)*puVar7)();
          if (iVar5 == 0) {
            lVar6 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 5));
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),&stack0x00000010);
            lVar6 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar1);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),&stack0x00000008);
            iVar5 = FUN_02d355c4(0,*(undefined8 *)puVar4);
            if (iVar5 == 0) {
              lVar6 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000010 =
                   CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)((long)unaff_x21 + 0x2c));
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),&stack0x00000010);
              lVar6 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000008 =
                   CONCAT71(in_stack_00000008._1_7_,(char)uStack0000000000000004) &
                   0xffffffffffffff01;
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40),&stack0x00000008);
              iVar5 = FUN_02d355c4(0,*(undefined8 *)puVar4);
              if (iVar5 == 0) {
                lVar6 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000010 =
                     CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)((long)unaff_x21 + 0x2d));
                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_031c09d4();
                }
                uVar1 = uStack0000000000000004;
                thunk_FUN_031c39fc(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000010);
                lVar6 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,(char)((uint)uVar1 >> 8));
                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                  lVar6 = FUN_031c09d4();
                }
                thunk_FUN_031c39fc(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000008);
                FUN_02d355c4(0,*(undefined8 *)puVar4);
              }
            }
          }
        }
      }
    }
  }
  return;
}


