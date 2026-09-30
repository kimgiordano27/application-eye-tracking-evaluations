/*
FUNCTION_NAME: FUN_056eb3b8
ENTRY_POINT: 056eb3b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


long FUN_056eb3b8(long param_1,int param_2,int param_3,long param_4,uint *param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,undefined8 param_10,byte param_11)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined2 *puVar26;
  long local_88;
  
  puVar7 = PTR_DAT_06764580;
  if ((DAT_06b7fb82 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760700);
    FUN_02d6084c(PTR_DAT_06771558);
    FUN_02d6084c(PTR_DAT_06771238);
    FUN_02d6084c(PTR_DAT_06771318);
    FUN_02d6084c(Unity_Properties_TypeConverter<uint,_long>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06764580);
    FUN_02d6084c(PTR_DAT_0675e638);
    DAT_06b7fb82 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  bVar9 = FUN_056b7764(param_10,0);
  cVar6 = '\0';
  bVar9 = (param_9 & 3) == 3 & bVar9;
  bVar5 = false;
  local_88 = 0;
  lVar15 = param_4;
  iVar25 = param_2;
  iVar24 = param_2;
  do {
    if (lVar15 == 0) {
      puVar26 = (undefined2 *)0x0;
    }
    else {
      puVar26 = (undefined2 *)0x0;
      if (*(int *)(lVar15 + 0x18) != 0) {
        puVar26 = (undefined2 *)(lVar15 + 0x20);
      }
    }
    if ((param_9 & 3) == 0) {
      if (param_2 < param_3) {
        uVar11 = *param_5;
        lVar15 = (long)param_3 - (long)param_2;
        puVar18 = (undefined2 *)(param_1 + (long)param_2 * 2);
        do {
          lVar15 = lVar15 + -1;
          puVar26[(int)uVar11] = *puVar18;
          uVar11 = uVar11 + 1;
          puVar18 = puVar18 + 1;
        } while (lVar15 != 0);
        *param_5 = uVar11;
      }
      return param_4;
    }
LAB_056eb50c:
    if (iVar24 < param_3) {
      do {
        uVar2 = *(ushort *)(param_1 + (long)iVar24 * 2);
        uVar11 = (uint)uVar2;
        iVar23 = iVar24;
        if (uVar2 != 0x25) {
          uVar19 = (uint)uVar2;
          if ((((param_9 ^ 0xffffffff) & 10) == 0 || (param_9 & 1) == 0) ||
             ((((bVar17 = true, (uint)uVar2 != (param_8 & 0xffff) &&
                (uVar22 = (uint)uVar2, uVar22 != (param_6 & 0xffff))) &&
               (uVar22 != (param_7 & 0xffff))) &&
              (((param_9 >> 2 & 1) != 0 ||
               ((bVar17 = true, 0x1f < uVar22 &&
                (uVar19 = (uint)uVar2, 0x20 < (uVar22 - 0x7f & 0xffff))))))))) goto LAB_056eb61c;
          break;
        }
        if ((param_9 >> 1 & 1) == 0) {
LAB_056eb880:
          uVar11 = 0x25;
          bVar17 = true;
          break;
        }
        iVar23 = iVar24 + 2;
        if (iVar23 < param_3) {
          uVar3 = *(undefined2 *)(param_1 + (long)iVar23 * 2);
          uVar4 = *(undefined2 *)(param_1 + (long)(iVar24 + 1) * 2);
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_056ea174(uVar4,uVar3);
          if ((int)param_9 < 8) {
            if ((~uVar11 & 0xffff) == 0) {
              uVar11 = 0xffff;
              iVar23 = iVar24;
              uVar19 = 0xffff;
              if ((param_9 & 1) != 0) {
                bVar17 = true;
                break;
              }
            }
            else if ((uVar11 & 0xffff) == 0x25) {
              uVar19 = 0x25;
            }
            else {
              uVar19 = uVar11;
              if ((((uVar11 & 0xffff) != (param_8 & 0xffff)) &&
                  ((uVar11 & 0xffff) != (param_6 & 0xffff))) &&
                 ((uVar11 & 0xffff) != (param_7 & 0xffff))) {
                if ((param_9 >> 2 & 1) == 0) {
                  if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  if ((0x1f < (uVar11 & 0xffff)) && (0x20 < (uVar11 - 0x7f & 0xffff))) {
                    if (((3 < (uVar11 - 0x23 & 0xffff)) &&
                        (5 < (uVar11 - 0x3b & 0xffff) || (uVar11 & 0xfffd) == 0x3c)) &&
                       ((uVar22 = (uVar11 & 0xffff) - 0x2b, 0x31 < uVar22 ||
                        ((1L << ((ulong)uVar22 & 0x3f) & 0x2000000000013U) == 0))))
                    goto LAB_056eb6ec;
                  }
                }
                else {
LAB_056eb6ec:
                  bVar17 = bVar5;
                  if (bVar9 == 0) break;
                  if ((uVar11 & 0xffff) < 0xa0) {
                    if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4
                                ) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    if ((0x1f < (uVar11 & 0xffff)) && (0x20 < (uVar11 - 0x7f & 0xffff))) {
                      if (((3 < (uVar11 - 0x23 & 0xffff)) &&
                          (5 < (uVar11 - 0x3b & 0xffff) || (uVar11 & 0xfffd) == 0x3c)) &&
                         ((uVar22 = (uVar11 & 0xffff) - 0x2b, 0x31 < uVar22 ||
                          ((1L << ((ulong)uVar22 & 0x3f) & 0x2000000000013U) == 0)))) break;
                    }
                  }
                  else {
                    if (((uVar11 - 0xa0 >> 5 & 0x7ff) < 0x6bb) ||
                       ((uVar11 + 0x700 & 0xffff) < 0x4d0)) break;
                    bVar8 = 0x1ff < (uVar11 + 0x210 & 0xffff);
                    if (bVar8 && ((param_11 ^ 1) & 1) == 0) {
                      bVar8 = 0x18 < (uVar11 + 0x2000 >> 8 & 0xff);
                    }
                    if (!bVar8) break;
                  }
                }
              }
            }
          }
          else {
            bVar17 = bVar5;
            if ((~uVar11 & 0xffff) != 0) break;
            if (0x17 < (int)param_9) {
              uVar14 = thunk_FUN_02dc61f4(OVRPlugin_TrackingConfidence___TypeInfo);
              uVar14 = FUN_04e6f6dc(uVar14,0);
              thunk_FUN_02dc61f4(PTR_DAT_06764588);
              uVar16 = thunk_FUN_02d9d534();
              FUN_04fefd84(uVar16,uVar14,0);
              uVar14 = thunk_FUN_02dc61f4(
                                         OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar16,uVar14);
            }
            iVar23 = iVar24;
            uVar19 = 0xffff;
          }
        }
        else {
          if ((int)param_9 < 8) goto LAB_056eb880;
          if (0x17 < (int)param_9) {
            uVar14 = thunk_FUN_02dc61f4(OVRPlugin_TrackingConfidence___TypeInfo);
            uVar14 = FUN_04e6f6dc(uVar14,0);
            thunk_FUN_02dc61f4(PTR_DAT_06764588);
            uVar16 = thunk_FUN_02d9d534();
            FUN_04fefd84(uVar16,uVar14,0);
            uVar14 = thunk_FUN_02dc61f4(
                                       OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar16,uVar14);
          }
          iVar23 = iVar24;
          uVar19 = 0x25;
        }
LAB_056eb61c:
        uVar11 = uVar19;
        iVar24 = iVar23 + 1;
        bVar17 = bVar5;
      } while (iVar24 < param_3);
    }
    else {
      uVar11 = 0;
      bVar17 = bVar5;
    }
    if (iVar25 < iVar24) {
      lVar21 = (long)iVar24 - (long)iVar25;
      uVar19 = *param_5;
      puVar18 = (undefined2 *)(param_1 + (long)iVar25 * 2);
      do {
        lVar21 = lVar21 + -1;
        puVar26[(int)uVar19] = *puVar18;
        uVar19 = uVar19 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar21 != 0);
      *param_5 = uVar19;
      iVar25 = iVar24;
    }
    if (iVar24 == param_3) {
      return lVar15;
    }
    if (!bVar17) {
      if ((uVar11 & 0xffff) < 0x80) {
        uVar19 = *param_5;
        *param_5 = uVar19 + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        iVar24 = iVar24 + 3;
        *(short *)(lVar15 + (long)(int)uVar19 * 2 + 0x20) = (short)uVar11;
        goto LAB_056eb878;
      }
      if ((local_88 == 0) &&
         (local_88 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,param_3 - iVar24), local_88 == 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(local_88 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      iVar24 = iVar24 + 3;
      *(char *)(local_88 + 0x20) = (char)uVar11;
      if (iVar24 < param_3) {
        uVar19 = 1;
        do {
          uVar11 = uVar19;
          if ((*(short *)(param_1 + (long)iVar24 * 2) != 0x25) || (param_3 <= iVar24 + 2)) break;
          uVar3 = *(undefined2 *)(param_1 + (long)(iVar24 + 2) * 2);
          uVar4 = *(undefined2 *)(param_1 + (long)(iVar24 + 1) * 2);
          if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          sVar10 = FUN_056ea174(uVar4,uVar3);
          if (0xff7e < (ushort)(sVar10 - 0x80U)) break;
          if (*(uint *)(local_88 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          uVar11 = uVar19 + 1;
          iVar24 = iVar24 + 3;
          *(char *)(local_88 + (int)uVar19 + 0x20) = (char)sVar10;
          uVar19 = uVar11;
        } while (iVar24 < param_3);
      }
      else {
        uVar11 = 1;
      }
      plVar13 = (long *)FUN_04ea62a0(0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06771318 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_06771318)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar13);
        }
      }
      uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771238);
      FUN_04e93b68(uVar14,*(undefined8 *)PTR_DAT_0675e638,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_04ea81dc(plVar13,uVar14,0);
      uVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06771558);
      FUN_0508bde4(uVar14,*(undefined8 *)PTR_DAT_0675e638,0);
      FUN_04ea8298(plVar13,uVar14,0);
      uVar14 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(undefined4 *)(local_88 + 0x18));
      uVar12 = (**(code **)(*plVar13 + 0x2d8))
                         (plVar13,local_88,0,uVar11,uVar14,0,*(undefined8 *)(*plVar13 + 0x2e0));
      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_056ea2bc(puVar26,lVar15,param_5,uVar14,uVar12,local_88,uVar11,param_11 & 1,bVar9);
      bVar5 = false;
      iVar25 = iVar24;
      if (iVar24 == param_3) {
        return lVar15;
      }
      goto LAB_056eb50c;
    }
    if (cVar6 != '\0') {
      uVar3 = *(undefined2 *)(param_1 + (long)iVar24 * 2);
      if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_long>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_056ea790(uVar3,lVar15,param_5);
      iVar24 = iVar24 + 1;
      cVar6 = cVar6 + -1;
LAB_056eb878:
      bVar5 = false;
      iVar25 = iVar24;
      goto LAB_056eb50c;
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar15 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,*(int *)(lVar15 + 0x18) + 0x5a);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) == 0)) {
      puVar18 = (undefined2 *)0x0;
    }
    else {
      puVar18 = (undefined2 *)(lVar15 + 0x20);
    }
    bVar5 = true;
    uVar20 = (ulong)*param_5;
    cVar6 = '\x1e';
    if (0 < (int)*param_5) {
      do {
        uVar20 = uVar20 - 1;
        bVar5 = true;
        *puVar18 = *puVar26;
        puVar18 = puVar18 + 1;
        puVar26 = puVar26 + 1;
      } while (uVar20 != 0);
      cVar6 = '\x1e';
    }
  } while( true );
}


