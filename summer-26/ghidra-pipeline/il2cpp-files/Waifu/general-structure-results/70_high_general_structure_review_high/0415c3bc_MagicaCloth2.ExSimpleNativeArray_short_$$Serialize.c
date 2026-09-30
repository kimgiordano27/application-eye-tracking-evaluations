/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<short>$$Serialize
ENTRY_POINT: 0415c3bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4 MagicaCloth2_ExSimpleNativeArray<short>__Serialize(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x23;
  
  plVar5 = (long *)(**(code **)(param_1 + 0x448))(param_2,*(undefined8 *)(param_1 + 0x450));
  if (*(int *)(DAT_083c8850 + 0xe0) == 0) {
    FUN_033b9870(DAT_083c8850);
  }
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x608))(plVar5,*(undefined8 *)(*plVar5 + 0x610));
    uVar11 = DAT_083bd530;
    uVar10 = DAT_083bccc0;
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar7 = (long *)FUN_0683eca4(uVar11,0);
      uVar10 = DAT_083bc118;
      if (plVar7 == plVar5) {
        uVar4 = FUN_079a7298();
        plVar5 = (long *)FUN_03398188(DAT_083c7c90,(ulong)uVar4);
        if (0 < (int)uVar4) {
          uVar6 = 0;
          do {
            if (DAT_086ec618 == (code *)0x0) {
              DAT_086ec618 = (code *)FUN_033d1b68(
                                                 "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                                 );
            }
            lVar13 = (*DAT_086ec618)();
            lVar8 = FUN_079a4038(lVar13,0);
            if (plVar5 == (long *)0x0) goto LAB_0415c940;
            if (*(uint *)(plVar5 + 3) <= uVar6) goto LAB_0415c944;
            plVar7 = plVar5 + uVar6 + 4;
            *plVar7 = lVar8;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (lVar13 != 0) {
              if (DAT_086ec1b0 == (code *)0x0) {
                DAT_086ec1b0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)"
                                                  );
              }
              (*DAT_086ec1b0)(lVar13);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar4);
        }
      }
      else {
        if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar7 = (long *)FUN_0683eca4(uVar10,0);
        if (plVar7 != plVar5) {
          uVar10 = FUN_0335b6c8(&DAT_0843eb18,1);
          uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          uVar12 = FUN_033d1ba8(&DAT_0842f4a8);
          uVar10 = FUN_0666ec64(uVar10,uVar11,uVar12,0);
          FUN_033d1ba8(&DAT_083cb470);
          uVar11 = thunk_FUN_03398a84();
          FUN_06869f9c(uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar11,unaff_x19);
        }
        uVar4 = FUN_079a7298();
        plVar5 = (long *)FUN_03398188(DAT_083c72f8,(ulong)uVar4);
        if (0 < (int)uVar4) {
          uVar6 = 0;
          do {
            if (DAT_086ec618 == (code *)0x0) {
              DAT_086ec618 = (code *)FUN_033d1b68(
                                                 "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                                 );
            }
            lVar13 = (*DAT_086ec618)();
            lVar8 = FUN_03398a84(DAT_083c8828);
            FUN_079aa6b0(lVar8,lVar13,0);
            if (plVar5 == (long *)0x0) goto LAB_0415c940;
            if ((lVar8 != 0) &&
               (lVar9 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
              uVar10 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar10,0);
            }
            if (*(uint *)(plVar5 + 3) <= uVar6) {
LAB_0415c944:
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            plVar7 = plVar5 + uVar6 + 4;
            *plVar7 = lVar8;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (lVar13 != 0) {
              if (DAT_086ec1b0 == (code *)0x0) {
                DAT_086ec1b0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)"
                                                  );
              }
              (*DAT_086ec1b0)(lVar13);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar4);
        }
      }
      lVar13 = *(long *)(unaff_x19 + 0x38);
    }
    else {
      if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar7 = (long *)FUN_0683eca4(uVar10,0);
      uVar10 = DAT_083bc278;
      if (plVar7 == plVar5) {
        plVar5 = (long *)FUN_079a6c50();
      }
      else {
        if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar7 = (long *)FUN_0683eca4(uVar10,0);
        uVar10 = DAT_083bc2f0;
        if (plVar7 == plVar5) {
          plVar5 = (long *)FUN_079a6bb0();
        }
        else {
          if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar7 = (long *)FUN_0683eca4(uVar10,0);
          uVar10 = DAT_083bd2a0;
          if (plVar7 == plVar5) {
            if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
              FUN_033b9870();
            }
            FUN_079ca678(DAT_08433a18,0);
            plVar5 = (long *)FUN_079a6a70();
          }
          else {
            if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            plVar7 = (long *)FUN_0683eca4(uVar10,0);
            uVar10 = DAT_083bccb0;
            if (plVar7 == plVar5) {
              plVar5 = (long *)FUN_079a6b10();
            }
            else {
              if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                FUN_033b9870();
              }
              plVar7 = (long *)FUN_0683eca4(uVar10,0);
              uVar10 = DAT_083bccd0;
              if (plVar7 == plVar5) {
                plVar5 = (long *)FUN_079a69d0();
              }
              else {
                if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar7 = (long *)FUN_0683eca4(uVar10,0);
                uVar10 = DAT_083bd378;
                if (plVar7 == plVar5) {
                  plVar5 = (long *)FUN_079a6930();
                }
                else {
                  if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  plVar7 = (long *)FUN_0683eca4(uVar10,0);
                  uVar10 = DAT_083bc5a0;
                  if (plVar7 == plVar5) {
                    plVar5 = (long *)FUN_079a6890();
                  }
                  else {
                    if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    plVar7 = (long *)FUN_0683eca4(uVar10,0);
                    uVar10 = DAT_083bc348;
                    if (plVar7 == plVar5) {
                      plVar5 = (long *)FUN_079a67f0();
                    }
                    else {
                      if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                        FUN_033b9870();
                      }
                      plVar7 = (long *)FUN_0683eca4(uVar10,0);
                      if (plVar7 != plVar5) {
                        return 0;
                      }
                      plVar5 = (long *)FUN_079a6750(0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      lVar13 = *(long *)(unaff_x19 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_0338f618(lVar13);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar13 + 0x40)) {
        return (int)plVar5[2];
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar5);
    }
  }
LAB_0415c940:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


