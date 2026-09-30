/*
FUNCTION_NAME: WebSocketSharp.Server.HttpRequestEventArgs$$tryReadFile
ENTRY_POINT: 09812a10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_HttpRequestEventArgs__tryReadFile
               (float param_1,float param_2,float param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int extraout_var;
  ulong uVar12;
  float extraout_w1;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  float fVar17;
  float extraout_s0;
  float extraout_s0_00;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  
  if ((DAT_0a548142 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f9b010);
    FUN_04447ba8(System_Collections_Generic_ICollection<char>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_ICollection<Vector2[]>_TypeInfo);
    FUN_04447ba8(System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f20648);
    DAT_0a548142 = 1;
  }
  if (*(char *)(param_4 + 0x1d4) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x1a8) == 0) {
    FUN_0981389c(param_4);
  }
  iVar22 = *(int *)(param_4 + 0x18c);
  iVar4 = FUN_0980c33c(param_4);
  if (*(long *)(param_4 + 0x108) != 0) {
    iVar1 = *(int *)(param_4 + 0x1e4);
    lVar8 = FUN_0982a7e0(*(long *)(param_4 + 0x108),0);
    if (lVar8 == 0) {
      return;
    }
    iVar5 = FUN_09633c84(lVar8,0);
    if (iVar5 == 0) {
      return;
    }
    if (DAT_0a51c153 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1fb40);
      DAT_0a51c153 = '\x01';
    }
    puVar2 = PTR_DAT_09f1fb40;
    fVar21 = **(float **)(*(long *)PTR_DAT_09f1fb40 + 0xb8);
    plVar9 = (long *)FUN_09633ba4(lVar8,0);
    if (plVar9 != (long *)0x0) {
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar7 = iVar4 - iVar1;
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Collections_Generic_ICollection<char>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_09812b84;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_044822ac(plVar9,*(long *)System_Collections_Generic_ICollection<char>_TypeInfo,0
                            );
LAB_09812b84:
      iVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((int)uVar7 < iVar4) {
        plVar9 = (long *)FUN_09633ba4(lVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_09812e00;
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Collections_Generic_ICollection<Vector2[]>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_09812c00;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_044822ac(plVar9,*(long *)
                                       System_Collections_Generic_ICollection<Vector2[]>_TypeInfo,0)
        ;
LAB_09812c00:
        fVar21 = (float)(*(code *)*puVar10)(plVar9,uVar7,puVar10[1]);
      }
      if (*(long *)(param_4 + 0x108) != 0) {
        fVar17 = (float)FUN_0982b298(*(long *)(param_4 + 0x108),0);
        if ((*(long *)(param_4 + 0x108) != 0) &&
           (lVar13 = FUN_09640b80(*(long *)(param_4 + 0x108),0), lVar13 != 0)) {
          fVar21 = fVar21 / fVar17;
          uVar11 = FUN_095389b0(lVar13,0);
          if (param_3 + extraout_s0 < fVar21) {
            if ((*(long *)(param_4 + 0x108) == 0) ||
               (lVar13 = FUN_09640b80(*(long *)(param_4 + 0x108),0), lVar13 == 0))
            goto LAB_09812e00;
            uVar11 = FUN_095389b0(lVar13,0);
            fVar21 = param_3 + extraout_s0_00;
          }
          uVar6 = FUN_098107c8(uVar11,uVar7,lVar8);
          plVar9 = (long *)FUN_09633bd4(lVar8,0);
          puVar3 = System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo;
          if (plVar9 != (long *)0x0) {
            lVar13 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo)
                {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_09812cec;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_044822ac(plVar9,*(long *)
                                           System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo
                                   ,0);
LAB_09812cec:
            (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
            if (*(long *)(param_4 + 0x108) != 0) {
              fVar17 = (float)FUN_0982b298(*(long *)(param_4 + 0x108),0);
              plVar9 = (long *)FUN_09633bd4(lVar8,0);
              if (plVar9 != (long *)0x0) {
                lVar8 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_09812d74;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar10 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar3,0);
LAB_09812d74:
                (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
                if (*(long *)(param_4 + 0x108) != 0) {
                  fVar18 = (float)FUN_0982b298(*(long *)(param_4 + 0x108),0);
                  lVar8 = *(long *)(param_4 + 0x1a8);
                  if (lVar8 != 0) {
                    fVar17 = extraout_w1 / fVar17;
                    uVar15 = 0;
                    lVar13 = 0x48;
                    do {
                      iVar4 = (int)*(undefined8 *)(lVar8 + 0x18);
                      if ((long)iVar4 <= (long)uVar15) {
                        if (iVar4 == 0) goto LAB_09813114;
                        fVar18 = fVar17 - (float)extraout_var / fVar18;
                        *(float *)(lVar8 + 0x20) = fVar21;
                        *(float *)(lVar8 + 0x24) = fVar18;
                        *(undefined4 *)(lVar8 + 0x28) = 0;
                        lVar8 = *(long *)(param_4 + 0x1a8);
                        if (lVar8 != 0) {
                          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_09813114;
                          fVar20 = fVar21 + (float)iVar22;
                          *(float *)(lVar8 + 0x8c) = fVar20;
                          *(float *)(lVar8 + 0x90) = fVar18;
                          *(undefined4 *)(lVar8 + 0x94) = 0;
                          lVar8 = *(long *)(param_4 + 0x1a8);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_09813114;
                            *(float *)(lVar8 + 0xf8) = fVar20;
                            *(float *)(lVar8 + 0xfc) = fVar17;
                            *(undefined4 *)(lVar8 + 0x100) = 0;
                            lVar8 = *(long *)(param_4 + 0x1a8);
                            if (lVar8 != 0) {
                              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_09813114;
                              *(float *)(lVar8 + 0x164) = fVar21;
                              *(float *)(lVar8 + 0x168) = fVar17;
                              *(undefined4 *)(lVar8 + 0x16c) = 0;
                              if (DAT_0a51c153 == '\0') {
                                FUN_04447ba8(PTR_DAT_09f1fb40);
                                DAT_0a51c153 = '\x01';
                              }
                              param_1 = param_1 - **(float **)(*(long *)puVar2 + 0xb8);
                              param_2 = param_2 - (*(float **)(*(long *)puVar2 + 0xb8))[1];
                              if (param_1 * param_1 + param_2 * param_2 < DAT_01c759c8)
                              goto LAB_09812ee8;
                              if (*(long *)(param_4 + 0x1a8) != 0) {
                                uVar7 = *(uint *)(*(long *)(param_4 + 0x1a8) + 0x18);
                                if ((int)uVar7 < 1) goto LAB_09812ee8;
                                uVar14 = 0;
                                goto WebSocketSharp_Server_WebSocketSessionManager__get_Count;
                              }
                            }
                          }
                        }
                        break;
                      }
                      FUN_0980bb08(param_4);
                      uVar6 = FUN_04624244(0);
                      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_09813114;
                      *(undefined4 *)(lVar8 + lVar13) = uVar6;
                      lVar8 = *(long *)(param_4 + 0x1a8);
                      lVar13 = lVar13 + 0x6c;
                      uVar15 = uVar15 + 1;
                    } while (lVar8 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_09812e00;
  while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar7) {
WebSocketSharp_Server_WebSocketSessionManager__get_Count:
    if (uVar7 <= uVar14) goto LAB_09813114;
  }
LAB_09812ee8:
  if (param_5 == 0) goto LAB_09812e00;
  FUN_0982be50(param_5,*(undefined8 *)(param_4 + 0x1a8),0);
  iVar4 = FUN_094d0908(0);
  if ((*(long *)(param_4 + 0x108) == 0) ||
     (lVar8 = FUN_096404c4(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_09812e00;
  uVar7 = FUN_098091ac(lVar8,0);
  puVar2 = PTR_DAT_09f9b010;
  if (0 < (int)uVar7) {
    lVar8 = *(long *)PTR_DAT_09f9b010;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar8 = *(long *)puVar2;
    }
    lVar13 = **(long **)(lVar8 + 0xb8);
    if (lVar13 == 0) goto LAB_09812e00;
    if ((int)uVar7 < *(int *)(lVar13 + 0x18)) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar13 == 0) goto LAB_09812e00;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_09813114;
      lVar8 = *(long *)(lVar13 + (ulong)uVar7 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_09812e00;
      iVar4 = FUN_094ce72c(lVar8,0);
    }
  }
  if ((*(long *)(param_4 + 0x108) != 0) &&
     (lVar8 = FUN_096404c4(*(long *)(param_4 + 0x108),0), lVar8 != 0)) {
    iVar22 = FUN_0980837c(lVar8,0);
    if (iVar22 == 0) {
      uVar11 = 0;
    }
    else {
      if ((*(long *)(param_4 + 0x108) == 0) ||
         (lVar8 = FUN_096404c4(*(long *)(param_4 + 0x108),0), lVar8 == 0)) goto LAB_09812e00;
      uVar11 = FUN_09809cd4(lVar8,0);
    }
    if ((*(long *)(param_4 + 0x1b8) != 0) &&
       (lVar8 = FUN_095259a0(*(long *)(param_4 + 0x1b8),0), lVar8 != 0)) {
      lVar8 = FUN_0952a094(lVar8,0);
      lVar13 = *(long *)(param_4 + 0x1a8);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) == 0) {
LAB_09813114:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (lVar8 != 0) {
          uVar15 = (ulong)*(uint *)(lVar13 + 0x24);
          uVar12 = (ulong)*(uint *)(lVar13 + 0x28);
          uVar19 = FUN_09537f40(*(undefined4 *)(lVar13 + 0x20),uVar15,uVar12,lVar8,0);
          if (*(int *)(*(long *)PTR_DAT_09f20648 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar19 = FUN_09807a48(uVar19,uVar15,uVar12,uVar11,0);
          uVar11 = FUN_0980a668();
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar12 = FUN_09531730(uVar11,0,0);
          if ((uVar12 & 1) == 0) {
            return;
          }
          plVar9 = (long *)FUN_0980a668();
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x098130ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x288))
                      (uVar19,(float)iVar4 - (float)uVar15,plVar9,*(undefined8 *)(*plVar9 + 0x290));
            return;
          }
        }
      }
    }
  }
LAB_09812e00:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


