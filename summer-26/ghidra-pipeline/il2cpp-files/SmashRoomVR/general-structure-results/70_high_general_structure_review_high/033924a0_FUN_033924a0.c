/*
FUNCTION_NAME: FUN_033924a0
ENTRY_POINT: 033924a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_9
*/


void FUN_033924a0(long param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  long lVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  int local_74;
  char local_70 [4];
  int local_6c;
  undefined8 local_68;
  
  puVar6 = Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
  ;
  if ((DAT_03ff6175 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(StringLiteral_7390);
    thunk_FUN_01ad9084(StringLiteral_7316);
    thunk_FUN_01ad9084(StringLiteral_7311);
    thunk_FUN_01ad9084(PTR_DAT_03d8c758);
    thunk_FUN_01ad9084(PTR_DAT_03d8c3b8);
    thunk_FUN_01ad9084(StringLiteral_5950);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff6175 = 1;
  }
  local_6c = 0;
  lVar10 = FUN_01b47fd0(*(undefined8 *)puVar6,param_3 - param_2);
  local_68 = FUN_02f7c218(lVar10,3,0);
  uVar11 = FUN_02f7c128(&local_68,0);
  lVar12 = FUN_0308acc8(uVar11,0);
  local_6c = 0;
  if (param_2 < param_3) {
    lVar20 = 0;
    local_74 = 0;
    do {
      local_70[0] = '\0';
      puVar1 = (ushort *)(param_1 + (long)param_2 * 2);
      uVar17 = *puVar1;
      if (uVar17 == 0x25) {
        iVar19 = param_2 + 2;
        if (iVar19 < param_3) {
          uVar4 = *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
          uVar5 = *(undefined2 *)(param_1 + (long)iVar19 * 2);
          if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_03392cfc(uVar4,uVar5);
          uVar8 = (uint)uVar11;
          if ((((uVar8 & 0xffff) != 0x25) && ((uVar8 & 0xffff) != 0xffff)) &&
             (uVar13 = FUN_0339235c(uVar11,param_4), (uVar13 & 1) == 0)) {
            if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if ((0x1f < (uVar8 & 0xffff)) && (0x20 < (uVar8 - 0x7f & 0xffff))) {
              if ((3 < (uVar8 - 0x23 & 0xffff)) &&
                 (5 < (uVar8 - 0x3b & 0xffff) || (uVar8 & 0xfffd) == 0x3c)) {
                uVar21 = (uVar8 & 0xffff) - 0x2b;
                if ((0x31 < uVar21) || ((1L << ((ulong)uVar21 & 0x3f) & 0x2000000000013U) == 0)) {
                  if ((uVar8 & 0xffff) < 0x80) {
                    lVar16 = (long)local_6c;
                    local_6c = local_6c + 1;
                    *(short *)(lVar12 + lVar16 * 2) = (short)uVar11;
                    param_2 = iVar19;
                  }
                  else {
                    if ((lVar20 == 0) &&
                       (lVar20 = FUN_01b47fd0(*(undefined8 *)
                                               Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                              ,param_3 - param_2), lVar20 == 0)) goto LAB_03392cdc;
                    puVar6 = 
                    Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
                    if (*(int *)(lVar20 + 0x18) == 0) {
LAB_03392cd8:
                    /* WARNING: Subroutine does not return */
                      FUN_01b48180();
                    }
                    *(char *)(lVar20 + 0x20) = (char)uVar11;
                    if (param_2 + 3 < param_3) {
                      uVar21 = 1;
                      iVar18 = param_2;
                      do {
                        uVar8 = uVar21;
                        iVar19 = iVar18;
                        if ((*(short *)(param_1 + (long)(iVar18 + 3) * 2) != 0x25) ||
                           (param_3 <= iVar18 + 5)) break;
                        uVar4 = *(undefined2 *)(param_1 + (long)(iVar18 + 5) * 2);
                        uVar5 = *(undefined2 *)(param_1 + (long)(iVar18 + 4) * 2);
                        if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        sVar7 = FUN_03392cfc(uVar5,uVar4);
                        if (0xff7e < (ushort)(sVar7 - 0x80U)) break;
                        if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_03392cd8;
                        uVar8 = uVar21 + 1;
                        iVar19 = iVar18 + 3;
                        iVar9 = iVar18 + 6;
                        *(char *)(lVar20 + (int)uVar21 + 0x20) = (char)sVar7;
                        uVar21 = uVar8;
                        iVar18 = iVar19;
                      } while (iVar9 < param_3);
                      iVar19 = iVar19 + 2;
                    }
                    else {
                      uVar8 = 1;
                    }
                    plVar14 = (long *)FUN_02efebc4(0);
                    if (plVar14 == (long *)0x0) goto LAB_03392cdc;
                    plVar14 = (long *)(**(code **)(*plVar14 + 0x1c8))
                                                (plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
                    if (plVar14 != (long *)0x0) {
                      bVar2 = *(byte *)(*(long *)StringLiteral_7311 + 0x130);
                      if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)StringLiteral_7311)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b4841c(plVar14);
                      }
                    }
                    uVar11 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7316);
                    FUN_030c4f7c(uVar11,*(undefined8 *)puVar6,0);
                    if (plVar14 == (long *)0x0) goto LAB_03392cdc;
                    FUN_02f00b54(plVar14,uVar11,0);
                    uVar11 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7390);
                    FUN_030c2ebc(uVar11,*(undefined8 *)puVar6,0);
                    FUN_02f00c10(plVar14,uVar11,0);
                    uVar11 = FUN_01b47fd0(*(undefined8 *)
                                           Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                                          ,*(undefined4 *)(lVar20 + 0x18));
                    iVar9 = (**(code **)(*plVar14 + 0x2b8))
                                      (plVar14,lVar20,0,uVar8,uVar11,0,
                                       *(undefined8 *)(*plVar14 + 0x2c0));
                    iVar18 = param_2;
                    param_2 = iVar19;
                    if (iVar9 == 0) {
                      for (; iVar18 <= iVar19; iVar18 = iVar18 + 1) {
                        *(undefined2 *)(lVar12 + (long)local_6c * 2) =
                             *(undefined2 *)(param_1 + (long)iVar18 * 2);
                        local_6c = local_6c + 1;
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_03392e44(lVar12,lVar10,&local_6c,uVar11,iVar9,lVar20,uVar8,param_4 == 0x20
                                   ,1);
                    }
                  }
                  goto LAB_033927a4;
                }
              }
            }
          }
          *(ushort *)(lVar12 + (long)local_6c * 2) = *puVar1;
          *(undefined2 *)(lVar12 + (long)(local_6c + 1) * 2) =
               *(undefined2 *)(param_1 + (long)(param_2 + 1) * 2);
          *(undefined2 *)(lVar12 + (long)(local_6c + 2) * 2) =
               *(undefined2 *)(param_1 + (long)iVar19 * 2);
          param_2 = iVar19;
          local_6c = local_6c + 3;
        }
        else {
          uVar17 = 0x25;
          iVar19 = local_6c;
LAB_0339279c:
          local_6c = iVar19 + 1;
          *(ushort *)(lVar12 + (long)iVar19 * 2) = uVar17;
        }
      }
      else {
        uVar8 = (uint)uVar17;
        if (uVar17 < 0x80) {
          *(ushort *)(lVar12 + (long)local_6c * 2) = uVar17;
          local_6c = local_6c + 1;
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = (uint)uVar17;
          uVar13 = FUN_02fdf194(uVar17,0);
          if (((uVar13 & 1) == 0) || (iVar19 = param_2 + 1, param_3 <= iVar19)) {
            if (((uVar21 - 0xa0 >> 5 & 0x7ff) < 0x6bb) || ((uVar21 + 0x700 & 0xffff) < 0x4d0)) {
LAB_03392764:
              if (*(int *)(*(long *)StringLiteral_5950 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_0338d688(uVar8,0);
              if ((uVar13 & 1) == 0) {
                uVar17 = *puVar1;
                iVar19 = local_6c;
                goto LAB_0339279c;
              }
            }
            else {
              if ((param_4 == 0x20) && (0x1ff < (uVar8 + 0x210 & 0xffff))) {
                if ((uVar8 + 0x2000 >> 8 & 0xff) < 0x19) goto LAB_03392764;
              }
              else if ((uVar8 + 0x210 & 0xffff) < 0x200) goto LAB_03392764;
LAB_033927c0:
              if (local_74 < 0xc) {
                if (lVar10 == 0) goto LAB_03392cdc;
                if (0x7fffffa5 < *(int *)(lVar10 + 0x18)) {
                  uVar11 = FUN_01b48188();
                    /* WARNING: Subroutine does not return */
                  FUN_01b48050(uVar11,*(undefined8 *)PTR_DAT_03d8c758);
                }
                lVar10 = FUN_01b47fd0(*(undefined8 *)
                                       Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                                      ,*(int *)(lVar10 + 0x18) + 0x5a);
                lVar16 = lVar10;
                if (lVar10 != 0) {
                  if (*(int *)(lVar10 + 0x18) == 0) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = lVar10 + 0x20;
                  }
                }
                FUN_0306bb54(lVar16,lVar12,local_6c << 1,0);
                uVar13 = FUN_02f7c07c(&local_68,0);
                if ((uVar13 & 1) != 0) {
                  System_RuntimeType__get_UnderlyingSystemType(&local_68,0);
                }
                local_74 = local_74 + 0x5a;
                local_68 = FUN_02f7c218(lVar10,3,0);
                uVar11 = FUN_02f7c128(&local_68,0);
                lVar12 = FUN_0308acc8(uVar11,0);
              }
              lVar16 = FUN_01b47fd0(*(undefined8 *)
                                     Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                    ,4);
              if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
                lVar22 = 0;
              }
              else {
                lVar22 = lVar16 + 0x20;
              }
              plVar14 = (long *)FUN_02efebc4(0);
              if (plVar14 == (long *)0x0) {
LAB_03392cdc:
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar15 = 1;
              if (local_70[0] != '\0') {
                uVar15 = 2;
              }
              uVar8 = (**(code **)(*plVar14 + 0x268))
                                (plVar14,puVar1,uVar15,lVar22,4,*(undefined8 *)(*plVar14 + 0x270));
              local_74 = uVar8 * -3 + local_74;
              if (0 < (int)uVar8) {
                if (lVar16 == 0) goto LAB_03392cdc;
                uVar13 = 0;
                do {
                  if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_03392cd8;
                  uVar3 = *(undefined1 *)(lVar16 + 0x20 + uVar13);
                  if (*(int *)(*(long *)PTR_DAT_03d8c3b8 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_03393320(uVar3,lVar10,&local_6c);
                  uVar13 = uVar13 + 1;
                } while (uVar8 != uVar13);
              }
            }
          }
          else {
            uVar13 = FUN_03391d2c(uVar21,*(undefined2 *)(param_1 + (long)iVar19 * 2),local_70,
                                  param_4 == 0x20);
            if ((uVar13 & 1) == 0) goto LAB_033927c0;
            *(ushort *)(lVar12 + (long)local_6c * 2) = *puVar1;
            *(undefined2 *)(lVar12 + (long)(local_6c + 1) * 2) =
                 *(undefined2 *)(param_1 + (long)iVar19 * 2);
            param_2 = iVar19;
            local_6c = local_6c + 2;
          }
        }
      }
LAB_033927a4:
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  uVar13 = FUN_02f7c07c(&local_68,0);
  if ((uVar13 & 1) != 0) {
    System_RuntimeType__get_UnderlyingSystemType(&local_68,0);
  }
  FUN_02eeda98(0,lVar10,0,local_6c,0);
  return;
}


