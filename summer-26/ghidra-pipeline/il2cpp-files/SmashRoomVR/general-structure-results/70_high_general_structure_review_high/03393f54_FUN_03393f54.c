/*
FUNCTION_NAME: FUN_03393f54
ENTRY_POINT: 03393f54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


long FUN_03393f54(long param_1,int param_2,int param_3,long param_4,uint *param_5,uint param_6,
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
  
  puVar7 = StringLiteral_5950;
  if ((DAT_03ff617a & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_7390);
    thunk_FUN_01ad9084(StringLiteral_7316);
    thunk_FUN_01ad9084(StringLiteral_7311);
    thunk_FUN_01ad9084(PTR_DAT_03d8c3b8);
    thunk_FUN_01ad9084(StringLiteral_5950);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff617a = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar9 = FUN_03381bcc(param_10,0);
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
LAB_033940a8:
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
                (uVar19 = (uint)uVar2, 0x20 < (uVar22 - 0x7f & 0xffff))))))))) goto LAB_033941b8;
          break;
        }
        if ((param_9 >> 1 & 1) == 0) {
LAB_0339441c:
          uVar11 = 0x25;
          bVar17 = true;
          break;
        }
        iVar23 = iVar24 + 2;
        if (iVar23 < param_3) {
          uVar3 = *(undefined2 *)(param_1 + (long)iVar23 * 2);
          uVar4 = *(undefined2 *)(param_1 + (long)(iVar24 + 1) * 2);
          if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_03392cfc(uVar4,uVar3);
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
                  if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  if ((0x1f < (uVar11 & 0xffff)) && (0x20 < (uVar11 - 0x7f & 0xffff))) {
                    if (((3 < (uVar11 - 0x23 & 0xffff)) &&
                        (5 < (uVar11 - 0x3b & 0xffff) || (uVar11 & 0xfffd) == 0x3c)) &&
                       ((uVar22 = (uVar11 & 0xffff) - 0x2b, 0x31 < uVar22 ||
                        ((1L << ((ulong)uVar22 & 0x3f) & 0x2000000000013U) == 0))))
                    goto LAB_03394288;
                  }
                }
                else {
LAB_03394288:
                  bVar17 = bVar5;
                  if (bVar9 == 0) break;
                  if ((uVar11 & 0xffff) < 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
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
              uVar14 = thunk_FUN_01ad9084(PTR_DAT_03d8c760);
              uVar14 = FUN_02ec9b78(uVar14,0);
              thunk_FUN_01ad9084(PTR_DAT_03d8c430);
              uVar16 = thunk_FUN_01afaadc();
              FUN_03029ab8(uVar16,uVar14,0);
              uVar14 = thunk_FUN_01ad9084(PTR_DAT_03d8c790);
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar16,uVar14);
            }
            iVar23 = iVar24;
            uVar19 = 0xffff;
          }
        }
        else {
          if ((int)param_9 < 8) goto LAB_0339441c;
          if (0x17 < (int)param_9) {
            uVar14 = thunk_FUN_01ad9084(PTR_DAT_03d8c760);
            uVar14 = FUN_02ec9b78(uVar14,0);
            thunk_FUN_01ad9084(PTR_DAT_03d8c430);
            uVar16 = thunk_FUN_01afaadc();
            FUN_03029ab8(uVar16,uVar14,0);
            uVar14 = thunk_FUN_01ad9084(PTR_DAT_03d8c790);
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar16,uVar14);
          }
          iVar23 = iVar24;
          uVar19 = 0x25;
        }
LAB_033941b8:
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
          FUN_01b48178();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        iVar24 = iVar24 + 3;
        *(short *)(lVar15 + (long)(int)uVar19 * 2 + 0x20) = (short)uVar11;
        goto LAB_03394414;
      }
      if ((local_88 == 0) &&
         (local_88 = FUN_01b47fd0(*(undefined8 *)
                                   Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                  ,param_3 - iVar24), local_88 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(local_88 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
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
          if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          sVar10 = FUN_03392cfc(uVar4,uVar3);
          if (0xff7e < (ushort)(sVar10 - 0x80U)) break;
          if (*(uint *)(local_88 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
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
      plVar13 = (long *)FUN_02efebc4(0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_7311 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7311)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar13);
        }
      }
      uVar14 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7316);
      FUN_030c4f7c(uVar14,*(undefined8 *)
                           Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__
                   ,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02f00b54(plVar13,uVar14,0);
      uVar14 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7390);
      FUN_030c2ebc(uVar14,*(undefined8 *)
                           Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__
                   ,0);
      FUN_02f00c10(plVar13,uVar14,0);
      uVar14 = FUN_01b47fd0(*(undefined8 *)
                             Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                            ,*(undefined4 *)(local_88 + 0x18));
      uVar12 = (**(code **)(*plVar13 + 0x2b8))
                         (plVar13,local_88,0,uVar11,uVar14,0,*(undefined8 *)(*plVar13 + 0x2c0));
      if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03392e44(puVar26,lVar15,param_5,uVar14,uVar12,local_88,uVar11,param_11 & 1,bVar9);
      bVar5 = false;
      iVar25 = iVar24;
      if (iVar24 == param_3) {
        return lVar15;
      }
      goto LAB_033940a8;
    }
    if (cVar6 != '\0') {
      uVar3 = *(undefined2 *)(param_1 + (long)iVar24 * 2);
      if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03393320(uVar3,lVar15,param_5);
      iVar24 = iVar24 + 1;
      cVar6 = cVar6 + -1;
LAB_03394414:
      bVar5 = false;
      iVar25 = iVar24;
      goto LAB_033940a8;
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar15 = FUN_01b47fd0(*(undefined8 *)
                           Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                          ,*(int *)(lVar15 + 0x18) + 0x5a);
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


