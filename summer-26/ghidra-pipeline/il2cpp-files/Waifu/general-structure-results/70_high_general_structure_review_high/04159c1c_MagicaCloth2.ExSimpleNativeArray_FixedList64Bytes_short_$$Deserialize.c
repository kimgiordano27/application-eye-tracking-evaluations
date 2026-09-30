/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<FixedList64Bytes<short>>$$Deserialize
ENTRY_POINT: 04159c1c
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


undefined2
MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__Deserialize
          (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  code *in_x9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  
  uVar5 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x610));
  uVar10 = DAT_083bd530;
  uVar9 = DAT_083bccc0;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar6 = (long *)FUN_0683eca4(uVar10,0);
    uVar9 = DAT_083bc118;
    if (plVar6 == unaff_x21) {
      uVar4 = FUN_079a7298();
      plVar6 = (long *)FUN_03398188(DAT_083c7c90,(ulong)uVar4);
      if (0 < (int)uVar4) {
        uVar5 = 0;
        do {
          if (DAT_086ec618 == (code *)0x0) {
            DAT_086ec618 = (code *)FUN_033d1b68(
                                               "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                               );
          }
          lVar13 = (*DAT_086ec618)();
          lVar7 = FUN_079a4038(lVar13,0);
          if (plVar6 == (long *)0x0) goto LAB_0415a16c;
          if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_0415a170;
          plVar12 = plVar6 + uVar5 + 4;
          *plVar12 = lVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
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
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
    }
    else {
      if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar6 = (long *)FUN_0683eca4(uVar9,0);
      if (plVar6 != unaff_x21) {
        uVar9 = FUN_0335b6c8(&DAT_0843eb18,1);
        uVar10 = (**(code **)(*unaff_x21 + 0x168))();
        uVar11 = FUN_033d1ba8(&DAT_0842f4a8);
        uVar9 = FUN_0666ec64(uVar9,uVar10,uVar11,0);
        FUN_033d1ba8(&DAT_083cb470);
        uVar10 = thunk_FUN_03398a84();
        FUN_06869f9c(uVar10,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar10,unaff_x19);
      }
      uVar4 = FUN_079a7298();
      plVar6 = (long *)FUN_03398188(DAT_083c72f8,(ulong)uVar4);
      if (0 < (int)uVar4) {
        uVar5 = 0;
        do {
          if (DAT_086ec618 == (code *)0x0) {
            DAT_086ec618 = (code *)FUN_033d1b68(
                                               "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                               );
          }
          lVar13 = (*DAT_086ec618)();
          lVar7 = FUN_03398a84(DAT_083c8828);
          FUN_079aa6b0(lVar7,lVar13,0);
          if (plVar6 == (long *)0x0) goto LAB_0415a16c;
          if ((lVar7 != 0) &&
             (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
            uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
            FUN_033d1c20(uVar9,0);
          }
          if (*(uint *)(plVar6 + 3) <= uVar5) {
LAB_0415a170:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          plVar12 = plVar6 + uVar5 + 4;
          *plVar12 = lVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
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
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
    }
    lVar13 = *(long *)(unaff_x19 + 0x38);
  }
  else {
    if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar6 = (long *)FUN_0683eca4(uVar9,0);
    uVar9 = DAT_083bc278;
    if (plVar6 == unaff_x21) {
      plVar6 = (long *)FUN_079a6c50();
    }
    else {
      if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar6 = (long *)FUN_0683eca4(uVar9,0);
      uVar9 = DAT_083bc2f0;
      if (plVar6 == unaff_x21) {
        plVar6 = (long *)FUN_079a6bb0();
      }
      else {
        if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar6 = (long *)FUN_0683eca4(uVar9,0);
        uVar9 = DAT_083bd2a0;
        if (plVar6 == unaff_x21) {
          if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_079ca678(DAT_08433a18,0);
          plVar6 = (long *)FUN_079a6a70();
        }
        else {
                    /* try { // try from 04159cac to 04259cbb has its CatchHandler @ 04159d78 */
          if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
            FUN_033b9870();
          }
                    /* try { // try from 04159cc8 to 04259cd3 has its CatchHandler @ 04159d74 */
          plVar6 = (long *)FUN_0683eca4(uVar9,0);
          uVar9 = DAT_083bccb0;
                    /* try { // try from 04159cd4 to 04259d63 has its CatchHandler @ 04159b7c */
          if (plVar6 == unaff_x21) {
            plVar6 = (long *)FUN_079a6b10();
          }
          else {
            if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            plVar6 = (long *)FUN_0683eca4(uVar9,0);
            uVar9 = DAT_083bccd0;
            if (plVar6 == unaff_x21) {
              plVar6 = (long *)FUN_079a69d0();
            }
            else {
              if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                FUN_033b9870();
              }
              plVar6 = (long *)FUN_0683eca4(uVar9,0);
              uVar9 = DAT_083bd378;
              if (plVar6 == unaff_x21) {
                plVar6 = (long *)FUN_079a6930();
              }
              else {
                if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar6 = (long *)FUN_0683eca4(uVar9,0);
                uVar9 = DAT_083bc5a0;
                if (plVar6 == unaff_x21) {
                  plVar6 = (long *)FUN_079a6890();
                }
                else {
                  if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  plVar6 = (long *)FUN_0683eca4(uVar9,0);
                  uVar9 = DAT_083bc348;
                  if (plVar6 == unaff_x21) {
                    plVar6 = (long *)FUN_079a67f0();
                  }
                  else {
                    if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    plVar6 = (long *)FUN_0683eca4(uVar9,0);
                    if (plVar6 != unaff_x21) {
                      return 0;
                    }
                    plVar6 = (long *)FUN_079a6750();
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
  if (plVar6 != (long *)0x0) {
    if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar13 + 0x40)) {
      return (short)plVar6[2];
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec(plVar6);
  }
LAB_0415a16c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


