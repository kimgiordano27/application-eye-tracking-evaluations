/*
FUNCTION_NAME: FUN_0627bad8
ENTRY_POINT: 0627bad8
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0627bad8(undefined1 param_1 [16],ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_086de48d & 1) == 0) {
    FUN_0335b6c8(&DAT_083d1200,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08440d58,1);
    DataMemoryBarrier(2,3);
    DAT_086de48d = 1;
  }
  if (DAT_086f09e0 == (code *)0x0) {
    DAT_086f09e0 = (code *)FUN_033d1b68("UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)");
  }
  uVar3 = (*DAT_086f09e0)(8);
  fVar11 = DAT_012ed8ec;
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
    lVar5 = 0x24;
    do {
      if (DAT_086f09f0 == (code *)0x0) {
        DAT_086f09f0 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
      }
      uVar4 = (*DAT_086f09f0)(uVar3 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
LAB_0627bd34:
        if (DAT_086f09f8 == (code *)0x0) {
          DAT_086f09f8 = (code *)FUN_033d1b68("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
        }
        uVar4 = (*DAT_086f09f8)(uVar3 & 0xffffffff);
        fVar15 = (float)param_2;
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)(param_3 + 0x60);
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          if (*(char *)(lVar6 + uVar3 + 0x20) != '\0') {
            *(undefined1 *)(lVar6 + uVar3 + 0x20) = 0;
            if (lVar5 == 0x24) {
              if (*(long *)(param_3 + 0x68) == 0) goto LAB_0627c2cc;
              if (*(int *)(*(long *)(param_3 + 0x68) + 0x18) == 0) goto LAB_0627c2c8;
              FUN_07a67b60(0);
              if (*(long *)(param_3 + 0x48) == 0) goto LAB_0627c2cc;
              if (*(int *)(*(long *)(param_3 + 0x48) + 0x18) == 0) goto LAB_0627c2c8;
              if (*(long *)(param_3 + 0x50) == 0) goto LAB_0627c2cc;
              if (*(int *)(*(long *)(param_3 + 0x50) + 0x18) == 0) goto LAB_0627c2c8;
              FUN_0627c540(param_3,0);
            }
            lVar6 = *(long *)(param_3 + 0x68);
            if (DAT_086d8912 == '\0') {
              FUN_0335b6c8(&DAT_083d2c48,1);
              DataMemoryBarrier(2,3);
              DAT_086d8912 = '\x01';
            }
            if (lVar6 == 0) goto LAB_0627c2cc;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
            *(undefined8 *)(lVar6 + lVar5 + -4) = **(undefined8 **)(DAT_083d2c48 + 0xb8);
            lVar6 = *(long *)(*(long *)(DAT_083d1200 + 0xb8) + 0x18);
            if (lVar6 != 0) {
              FUN_07a67b60(0);
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
            lVar6 = *(long *)(param_3 + 0x38);
            if (lVar6 == 0) goto LAB_0627c2cc;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0627c2c8;
            fVar14 = *(float *)(lVar6 + 0x20);
            fVar16 = *(float *)(lVar6 + 0x24);
            fVar8 = (float)FUN_07a67b60(0);
            if (DAT_086d7d53 == '\0') {
              FUN_0335b6c8(&DAT_083ce8b0,1);
              DataMemoryBarrier(2,3);
              DAT_086d7d53 = '\x01';
            }
            if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar14 = fVar14 - fVar8;
            fVar16 = fVar16 - fVar15;
            fVar16 = fVar16 * fVar16;
            param_2 = (ulong)(uint)fVar16;
            if ((SQRT(fVar14 * fVar14 + fVar16) / *(float *)(param_3 + 0x74) <=
                 *(float *)(param_3 + 0x20)) &&
               (lVar6 = *(long *)(*(long *)(DAT_083d1200 + 0xb8) + 0x28), lVar6 != 0)) {
              FUN_07a67b60(0);
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
          }
        }
        fVar15 = (float)param_2;
        lVar6 = *(long *)(param_3 + 0x60);
        if (lVar6 == 0) goto LAB_0627c2cc;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
        if (*(char *)(lVar6 + uVar3 + 0x20) != '\0') {
          fVar8 = (float)FUN_07a67b60(0);
          FUN_07a67b60(0);
          lVar6 = *(long *)(param_3 + 0x68);
          if (lVar6 == 0) {
LAB_0627c2cc:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar3) {
LAB_0627c2c8:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          fVar16 = fVar15 - *(float *)(lVar6 + lVar5);
          fVar14 = fVar8 - ((float *)(lVar6 + lVar5))[-1];
          uVar4 = (ulong)(uint)(fVar16 * fVar16);
          if (fVar11 <= fVar14 * fVar14 + fVar16 * fVar16) {
            fVar17 = *(float *)(param_3 + 0x74);
            if (DAT_086ef698 == (code *)0x0) {
              DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
            }
            fVar9 = (float)(*DAT_086ef698)();
            lVar6 = *(long *)(*(long *)(DAT_083d1200 + 0xb8) + 8);
            if (lVar6 != 0) {
              uVar12 = FUN_07a67b60(0);
              if (DAT_086ed8a0 == (code *)0x0) {
                DAT_086ed8a0 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
              }
              iVar1 = (*DAT_086ed8a0)();
              if (DAT_086ed8a8 == (code *)0x0) {
                DAT_086ed8a8 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
              }
              iVar2 = (*DAT_086ed8a8)();
              if (DAT_086ef698 == (code *)0x0) {
                DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
              }
              fVar10 = (float)(*DAT_086ef698)();
              (**(code **)(lVar6 + 0x18))
                        (uVar12,uVar4,(fVar14 / (float)iVar1) / fVar10,
                         (fVar16 / (float)iVar2) / fVar10,(fVar14 / fVar17) / fVar9,
                         (fVar16 / fVar17) / fVar9,*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            }
          }
          uVar13 = (undefined4)uVar4;
          lVar6 = *(long *)(param_3 + 0x68);
          uVar7 = FUN_07a67b60(0);
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = uVar13;
          lVar6 = *(long *)(param_3 + 0x48);
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          uVar12 = *(undefined8 *)(lVar6 + lVar5 + -4);
          param_2 = CONCAT44(fVar15,fVar8);
          *(ulong *)(lVar6 + lVar5 + -4) =
               CONCAT44((fVar15 + (float)((ulong)uVar12 >> 0x20)) * 0.5,
                        (fVar8 + (float)uVar12) * 0.5);
          lVar6 = *(long *)(param_3 + 0x50);
          if (DAT_086ef688 == (code *)0x0) {
            DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
          }
          uVar7 = (*DAT_086ef688)();
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          *(undefined4 *)(lVar6 + uVar3 * 4 + 0x20) = uVar7;
        }
      }
      else {
        uVar4 = FUN_0627c378(param_3);
        if ((uVar4 & 1) == 0) {
          lVar6 = *(long *)(param_3 + 0x60);
          if (lVar6 == 0) goto LAB_0627c2cc;
          uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
          if (uVar4 <= uVar3) goto LAB_0627c2c8;
          if ((lVar5 == 0x24) && (*(char *)(lVar6 + uVar3 + 0x20) == '\0')) {
            lVar6 = *(long *)(param_3 + 0x50);
            if (DAT_086ef688 == (code *)0x0) {
              DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
            }
            uVar7 = (*DAT_086ef688)();
            if (lVar6 == 0) goto LAB_0627c2cc;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0627c2c8;
            *(undefined4 *)(lVar6 + 0x20) = uVar7;
            lVar6 = *(long *)(param_3 + 0x60);
            if (lVar6 == 0) goto LAB_0627c2cc;
            uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
          }
          if (uVar4 <= uVar3) goto LAB_0627c2c8;
          *(undefined1 *)(lVar6 + uVar3 + 0x20) = 1;
          lVar6 = *(long *)(param_3 + 0x38);
          uVar7 = FUN_07a67b60(0);
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = (int)param_2;
          lVar6 = *(long *)(param_3 + 0x68);
          uVar7 = FUN_07a67b60(0);
          if (lVar6 == 0) goto LAB_0627c2cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0627c2c8;
          ((undefined4 *)(lVar6 + lVar5))[-1] = uVar7;
          *(undefined4 *)(lVar6 + lVar5) = (int)param_2;
          if (lVar5 == 0x24) {
            lVar6 = *(long *)(param_3 + 0x48);
            uVar7 = FUN_07a67b60(0);
            if (lVar6 == 0) goto LAB_0627c2cc;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0627c2c8;
            *(undefined4 *)(lVar6 + 0x20) = uVar7;
            *(int *)(lVar6 + 0x24) = (int)param_2;
          }
          lVar6 = **(long **)(DAT_083d1200 + 0xb8);
          if (lVar6 != 0) {
            FUN_07a67b60(0);
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar3 & 0xffffffff,
                       *(undefined8 *)(lVar6 + 0x28));
          }
          goto LAB_0627bd34;
        }
      }
      uVar12 = DAT_08440d58;
      lVar5 = lVar5 + 8;
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0x3c);
    if (DAT_086f0ab8 == (code *)0x0) {
      DAT_086f0ab8 = (code *)FUN_033d1b68(
                                         "UnityEngine.Internal.InputUnsafeUtility::GetAxis(System.String)"
                                         );
    }
    fVar11 = (float)(*DAT_086f0ab8)(uVar12);
    if (DAT_012edd80 < ABS(fVar11)) {
      fVar15 = *(float *)(param_3 + 0x2c);
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar8 = (float)(*DAT_086ef698)();
      if (DAT_086ed8a0 == (code *)0x0) {
        DAT_086ed8a0 = (code *)FUN_033d1b68("UnityEngine.Screen::get_width()");
      }
      iVar1 = (*DAT_086ed8a0)();
      if (DAT_086ed8a8 == (code *)0x0) {
        DAT_086ed8a8 = (code *)FUN_033d1b68("UnityEngine.Screen::get_height()");
      }
      iVar2 = (*DAT_086ed8a8)();
      if (DAT_086ef698 == (code *)0x0) {
        DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      }
      fVar14 = (float)(*DAT_086ef698)();
      lVar5 = *(long *)(*(long *)(DAT_083d1200 + 0xb8) + 0x38);
      if (lVar5 != 0) {
        fVar11 = fVar11 * fVar15;
                    /* WARNING: Could not recover jumptable at 0x0627c294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))
                  (((fVar11 / (float)(iVar2 + iVar1)) * 0.5) / fVar14,fVar11 / fVar8,
                   *(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(DAT_083d1200 + 0xb8) + 0x40);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0627bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  return;
}


