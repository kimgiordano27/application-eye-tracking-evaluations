/*
FUNCTION_NAME: FUN_061e5a7c
ENTRY_POINT: 061e5a7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_061e5a7c(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  int local_58;
  int local_54;
  int local_48;
  uint local_44;
  
                    /* try { // try from 061e5a90 to 062e5a93 has its CatchHandler @ 061e65ac */
  if ((DAT_076dde40 & 1) == 0) {
                    /* try { // try from 061e5aac to 062e5ab3 has its CatchHandler @ 061e6618 */
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0728f6d0);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
                    /* try { // try from 061e5ad0 to 062e5ad3 has its CatchHandler @ 061e65a8 */
                    /* try { // try from 061e5ad4 to 062e5aeb has its CatchHandler @ 061e65ec */
    thunk_FUN_032e1da0(PTR_DAT_0727ddc8);
    thunk_FUN_032e1da0(OVRTask<bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_TypeInfo);
    DAT_076dde40 = 1;
  }
  local_44 = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[6] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if ((param_1 == 0) ||
     (lVar7 = FUN_057af330(param_1,0),
     puVar4 = Unity_VisualScripting_StaticFunctionInvoker<Vector4,_Vector4>_TypeInfo,
     puVar3 = PTR_DAT_07279560, lVar7 == 0)) goto LAB_061e61d0;
  iVar1 = *(int *)(lVar7 + 0x10);
  local_48 = 0;
  local_54 = 0;
  if (0 < iVar1) {
    sVar6 = FUN_057a62b4(lVar7,0,0);
    bVar5 = sVar6 == 0x2d;
    uVar12 = 0;
    if (bVar5) {
      uVar12 = 0x80000000;
      local_48 = 1;
    }
    param_3[6] = uVar12;
    if ((int)(uint)bVar5 < iVar1) {
      local_48 = bVar5 + 1;
      sVar6 = FUN_057a62b4(lVar7,bVar5,0);
      if (sVar6 == 0x50) {
        lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
        iVar13 = local_48;
        if (lVar8 != 0) goto LAB_061e5bc0;
        if (local_48 < iVar1) {
          sVar6 = FUN_057a62b4(lVar7,local_48,0);
          if (sVar6 == 0x59) {
            if (local_54 != 0) {
              local_48 = iVar13 + 1;
              *param_3 = local_44;
              if (local_48 == iVar1) {
                uVar12 = 1;
LAB_061e60c0:
                if (param_2 == 1) {
                  if (uVar12 < 4) {
                    return 0;
                  }
                }
                else if ((param_2 != 2) || ((uVar12 & 3) == 0)) {
                  return 0;
                }
              }
              else {
                lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                if (lVar8 != 0) goto LAB_061e5bc0;
                if (local_48 < iVar1) {
                  uVar12 = 1;
                  iVar13 = local_48;
                  goto LAB_061e5ce0;
                }
              }
            }
          }
          else {
            uVar12 = 0;
LAB_061e5ce0:
            sVar6 = FUN_057a62b4(lVar7,iVar13,0);
            if (sVar6 == 0x4d) {
              if (local_54 != 0) {
                local_48 = iVar13 + 1;
                uVar12 = uVar12 | 2;
                param_3[1] = local_44;
                if (local_48 == iVar1) goto LAB_061e60c0;
                lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                if (lVar8 != 0) goto LAB_061e5bc0;
                iVar13 = local_48;
                if (local_48 < iVar1) goto LAB_061e5d48;
              }
            }
            else {
LAB_061e5d48:
              sVar6 = FUN_057a62b4(lVar7,iVar13,0);
              if (sVar6 == 0x44) {
                if (local_54 != 0) {
                  local_48 = iVar13 + 1;
                  uVar12 = uVar12 | 4;
                  param_3[2] = local_44;
                  if (local_48 == iVar1) goto LAB_061e60c0;
                  lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                  if (lVar8 != 0) goto LAB_061e5bc0;
                  iVar13 = local_48;
                  if (local_48 < iVar1) goto LAB_061e5db0;
                }
              }
              else {
LAB_061e5db0:
                sVar6 = FUN_057a62b4(lVar7,iVar13,0);
                if (sVar6 == 0x54) {
                  if (local_54 == 0) {
                    local_48 = iVar13 + 1;
                    lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                    iVar13 = local_48;
                    if (lVar8 != 0) {
LAB_061e5bc0:
                      plVar9 = (long *)FUN_032d5d3c(*(undefined8 *)puVar3,2);
                      if (plVar9 == (long *)0x0) goto LAB_061e61d0;
                      lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                      if (lVar8 != 0) {
                        if ((int)plVar9[3] != 0) {
                          plVar9[4] = lVar7;
                          thunk_FUN_0333a630(plVar9 + 4,lVar7);
                          local_58 = param_2;
                          lVar7 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,&local_58);
                          if ((lVar7 != 0) &&
                             (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                             lVar8 == 0)) goto LAB_061e61d8;
                          if (1 < *(uint *)(plVar9 + 3)) {
                            plVar9[5] = lVar7;
                            thunk_FUN_0333a630(plVar9 + 5,lVar7);
                            uVar10 = FUN_0623eb78(*(undefined8 *)OVRTask<bool>_TypeInfo,plVar9,0);
                            uVar11 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ddc8);
                            FUN_059328f4(uVar11,uVar10,0);
                            return uVar11;
                          }
                        }
                        goto LAB_061e61d4;
                      }
                      goto LAB_061e61d8;
                    }
                    if (local_48 < iVar1) {
                      sVar6 = FUN_057a62b4(lVar7,local_48,0);
                      if (sVar6 == 0x48) {
                        if (local_54 != 0) {
                          local_48 = iVar13 + 1;
                          uVar12 = uVar12 | 8;
                          param_3[3] = local_44;
                          if (local_48 == iVar1) goto LAB_061e60c0;
                          lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                          if (lVar8 != 0) goto LAB_061e5bc0;
                          iVar13 = local_48;
                          if (local_48 < iVar1) goto LAB_061e5e6c;
                        }
                      }
                      else {
LAB_061e5e6c:
                        sVar6 = FUN_057a62b4(lVar7,iVar13,0);
                        if (sVar6 != 0x4d) {
LAB_061e5ed4:
                          sVar6 = FUN_057a62b4(lVar7,iVar13,0);
                          if (sVar6 == 0x2e) {
                            local_48 = iVar13 + 1;
                            param_3[5] = local_44;
                            lVar8 = FUN_061e6b8c(lVar7,&local_48,1,&local_44,&local_54);
                            iVar13 = local_48;
                            if (lVar8 != 0) goto LAB_061e5bc0;
                            if (local_54 == 0) {
                              local_44 = 0;
LAB_061e5fec:
                              uVar2 = 8 - local_54;
                              uVar16 = 1;
                              uVar18 = 1;
                              uVar20 = 1;
                              uVar21 = 0;
                              do {
                                uVar22 = uVar21;
                                uVar19 = uVar20;
                                uVar17 = uVar18;
                                uVar15 = uVar16;
                                uVar14 = local_44;
                                local_44 = uVar14 * 10;
                                uVar16 = uVar15 * 10;
                                uVar18 = uVar17 * 10;
                                uVar20 = uVar19 * 10;
                                uVar21 = uVar22 + 4;
                              } while ((0xcU - local_54 & 0xfffffffc) != uVar22 + 4);
                              bVar23 = (byte)uVar22;
                              bVar24 = (byte)(uVar22 >> 8);
                              bVar25 = (byte)(uVar22 >> 0x10);
                              bVar26 = (byte)(uVar22 >> 0x18);
                              uVar21 = CONCAT13(bVar26 | (byte)((ulong)_DAT_013a3450 >> 0x18),
                                                CONCAT12(bVar25 | (byte)((ulong)_DAT_013a3450 >>
                                                                        0x10),
                                                         CONCAT11(bVar24 | (byte)((ulong)
                                                  _DAT_013a3450 >> 8),bVar23 | (byte)_DAT_013a3450))
                                               );
                              uVar22 = CONCAT13(bVar26 | (byte)((ulong)_UNK_013a3458 >> 0x18),
                                                CONCAT12(bVar25 | (byte)((ulong)_UNK_013a3458 >>
                                                                        0x10),
                                                         CONCAT11(bVar24 | (byte)((ulong)
                                                  _UNK_013a3458 >> 8),bVar23 | (byte)_UNK_013a3458))
                                               );
                              local_44 = (local_44 ^ (local_44 ^ uVar14) & -(uint)(uVar2 < uVar21))
                                         * (uVar18 ^ (uVar18 ^ uVar17) & -(uint)(uVar2 < uVar22)) *
                                         (uVar16 ^ (uVar16 ^ uVar15) &
                                                   -(uint)(uVar2 < (uint)(CONCAT17(bVar26 | (byte)((
                                                  ulong)_DAT_013a3450 >> 0x38),
                                                  CONCAT16(bVar25 | (byte)((ulong)_DAT_013a3450 >>
                                                                          0x30),
                                                           CONCAT15(bVar24 | (byte)((ulong)
                                                  _DAT_013a3450 >> 0x28),
                                                  CONCAT14(bVar23 | (byte)((ulong)_DAT_013a3450 >>
                                                                          0x20),uVar21)))) >> 0x20))
                                         ) * (uVar20 ^ (uVar20 ^ uVar19) &
                                                       -(uint)(uVar2 < (uint)(CONCAT17(bVar26 | (
                                                  byte)((ulong)_UNK_013a3458 >> 0x38),
                                                  CONCAT16(bVar25 | (byte)((ulong)_UNK_013a3458 >>
                                                                          0x30),
                                                           CONCAT15(bVar24 | (byte)((ulong)
                                                  _UNK_013a3458 >> 0x28),
                                                  CONCAT14(bVar23 | (byte)((ulong)_UNK_013a3458 >>
                                                                          0x20),uVar22)))) >> 0x20))
                                             );
                              local_54 = 9;
                            }
                            else if (local_54 < 10) {
                              if (local_54 != 9) goto LAB_061e5fec;
                            }
                            else {
                              local_54 = local_54 + 1;
                              do {
                                local_54 = local_54 + -1;
                                local_44 = (int)local_44 / 10;
                              } while (10 < local_54);
                              local_54 = 9;
                            }
                            param_3[6] = local_44 | param_3[6];
                            if ((iVar1 <= local_48) ||
                               (sVar6 = FUN_057a62b4(lVar7,local_48,0), sVar6 != 0x53))
                            goto LAB_061e60d8;
                          }
                          else {
                            sVar6 = FUN_057a62b4(lVar7,iVar13,0);
                            if (sVar6 != 0x53) goto LAB_061e60ac;
                            if (local_54 == 0) goto LAB_061e60d8;
                            param_3[5] = local_44;
                          }
                          iVar13 = iVar13 + 1;
                          uVar12 = uVar12 | 0x20;
                          local_48 = iVar13;
                          if (iVar13 == iVar1) goto LAB_061e60c0;
                          goto LAB_061e60ac;
                        }
                        if (local_54 != 0) {
                          local_48 = iVar13 + 1;
                          uVar12 = uVar12 | 0x10;
                          param_3[4] = local_44;
                          if (local_48 == iVar1) goto LAB_061e60c0;
                          lVar8 = FUN_061e6b8c(lVar7,&local_48,0,&local_44,&local_54);
                          if (lVar8 != 0) goto LAB_061e5bc0;
                          iVar13 = local_48;
                          if (local_48 < iVar1) goto LAB_061e5ed4;
                        }
                      }
                    }
                  }
                }
                else {
LAB_061e60ac:
                  if (((uVar12 != 0) && (local_54 == 0)) && (iVar13 == iVar1)) goto LAB_061e60c0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_061e60d8:
  plVar9 = (long *)FUN_032d5d3c(*(undefined8 *)puVar3,2);
  if (plVar9 == (long *)0x0) {
LAB_061e61d0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar9 + 0x40));
  if (lVar8 == 0) {
LAB_061e61d8:
    uVar10 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar10,0);
  }
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar7;
    thunk_FUN_0333a630(plVar9 + 4,lVar7);
    local_58 = param_2;
    lVar7 = thunk_FUN_032a52d0(*(undefined8 *)puVar4,&local_58);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_032a55a4(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
    goto LAB_061e61d8;
    puVar4 = System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_TypeInfo;
    puVar3 = PTR_DAT_0728f6d0;
    if (1 < *(uint *)(plVar9 + 3)) {
      plVar9[5] = lVar7;
      thunk_FUN_0333a630(plVar9 + 5,lVar7);
      uVar10 = FUN_0623eb78(*(undefined8 *)puVar4,plVar9,0);
      uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_0590c438(uVar11,uVar10,0);
      return uVar11;
    }
  }
LAB_061e61d4:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


