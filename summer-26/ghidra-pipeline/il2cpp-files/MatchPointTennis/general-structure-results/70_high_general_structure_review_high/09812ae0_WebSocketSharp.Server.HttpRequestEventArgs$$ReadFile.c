/*
FUNCTION_NAME: WebSocketSharp.Server.HttpRequestEventArgs$$ReadFile
ENTRY_POINT: 09812ae0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_HttpRequestEventArgs__ReadFile
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_var;
  ulong uVar10;
  float extraout_w1;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  int unaff_w22;
  int unaff_w26;
  float fVar16;
  float extraout_s0;
  float extraout_s0_00;
  float fVar17;
  undefined8 uVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  int unaff_s12;
  
  if (DAT_0a51c153 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1fb40);
    DAT_0a51c153 = '\x01';
  }
  puVar1 = PTR_DAT_09f1fb40;
  fVar19 = **(float **)(*(long *)PTR_DAT_09f1fb40 + 0xb8);
  plVar7 = (long *)FUN_09633ba4();
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    uVar5 = unaff_w22 - unaff_w26 & (unaff_w22 - unaff_w26 >> 0x1f ^ 0xffffffffU);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Collections_Generic_ICollection<char>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_09812b84;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_044822ac(plVar7,*(long *)System_Collections_Generic_ICollection<char>_TypeInfo,0);
LAB_09812b84:
    iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((int)uVar5 < iVar3) {
      plVar7 = (long *)FUN_09633ba4();
      if (plVar7 == (long *)0x0) goto LAB_09812e00;
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_ICollection<Vector2[]>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_09812c00;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_044822ac(plVar7,*(long *)
                                    System_Collections_Generic_ICollection<Vector2[]>_TypeInfo,0);
LAB_09812c00:
      fVar19 = (float)(*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
    }
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      fVar16 = (float)FUN_0982b298(*(long *)(unaff_x19 + 0x108),0);
      if ((*(long *)(unaff_x19 + 0x108) != 0) &&
         (lVar11 = FUN_09640b80(*(long *)(unaff_x19 + 0x108),0), lVar11 != 0)) {
        fVar19 = fVar19 / fVar16;
        uVar9 = FUN_095389b0(lVar11,0);
        if (param_3 + extraout_s0 < fVar19) {
          if ((*(long *)(unaff_x19 + 0x108) == 0) ||
             (lVar11 = FUN_09640b80(*(long *)(unaff_x19 + 0x108),0), lVar11 == 0))
          goto LAB_09812e00;
          uVar9 = FUN_095389b0(lVar11,0);
          fVar19 = param_3 + extraout_s0_00;
        }
        uVar4 = FUN_098107c8(uVar9,uVar5);
        plVar7 = (long *)FUN_09633bd4();
        puVar2 = System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo;
        if (plVar7 != (long *)0x0) {
          lVar11 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_09812cec;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_044822ac(plVar7,*(long *)
                                        System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo
                                ,0);
LAB_09812cec:
          (*(code *)*puVar8)(plVar7,uVar4,puVar8[1]);
          if (*(long *)(unaff_x19 + 0x108) != 0) {
            fVar16 = (float)FUN_0982b298(*(long *)(unaff_x19 + 0x108),0);
            plVar7 = (long *)FUN_09633bd4();
            if (plVar7 != (long *)0x0) {
              lVar11 = *plVar7;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_09812d74;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)FUN_044822ac(plVar7,*(long *)puVar2,0);
LAB_09812d74:
              (*(code *)*puVar8)(plVar7,uVar4,puVar8[1]);
              if (*(long *)(unaff_x19 + 0x108) != 0) {
                fVar17 = (float)FUN_0982b298(*(long *)(unaff_x19 + 0x108),0);
                lVar11 = *(long *)(unaff_x19 + 0x1a8);
                if (lVar11 != 0) {
                  fVar16 = extraout_w1 / fVar16;
                  uVar13 = 0;
                  lVar15 = 0x48;
                  do {
                    iVar3 = (int)*(undefined8 *)(lVar11 + 0x18);
                    if ((long)iVar3 <= (long)uVar13) {
                      if (iVar3 == 0) goto LAB_09813114;
                      fVar17 = fVar16 - (float)extraout_var / fVar17;
                      *(float *)(lVar11 + 0x20) = fVar19;
                      *(float *)(lVar11 + 0x24) = fVar17;
                      *(undefined4 *)(lVar11 + 0x28) = 0;
                      lVar11 = *(long *)(unaff_x19 + 0x1a8);
                      if (lVar11 != 0) {
                        if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_09813114;
                        *(float *)(lVar11 + 0x8c) = fVar19 + (float)unaff_s12;
                        *(float *)(lVar11 + 0x90) = fVar17;
                        *(undefined4 *)(lVar11 + 0x94) = 0;
                        lVar11 = *(long *)(unaff_x19 + 0x1a8);
                        if (lVar11 != 0) {
                          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_09813114;
                          *(float *)(lVar11 + 0xf8) = fVar19 + (float)unaff_s12;
                          *(float *)(lVar11 + 0xfc) = fVar16;
                          *(undefined4 *)(lVar11 + 0x100) = 0;
                          lVar11 = *(long *)(unaff_x19 + 0x1a8);
                          if (lVar11 != 0) {
                            if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_09813114;
                            *(float *)(lVar11 + 0x164) = fVar19;
                            *(float *)(lVar11 + 0x168) = fVar16;
                            *(undefined4 *)(lVar11 + 0x16c) = 0;
                            if (DAT_0a51c153 == '\0') {
                              FUN_04447ba8(PTR_DAT_09f1fb40);
                              DAT_0a51c153 = '\x01';
                            }
                            fVar19 = unaff_s9 - **(float **)(*(long *)puVar1 + 0xb8);
                            fVar16 = unaff_s8 - (*(float **)(*(long *)puVar1 + 0xb8))[1];
                            if (fVar19 * fVar19 + fVar16 * fVar16 < DAT_01c759c8) goto LAB_09812ee8;
                            if (*(long *)(unaff_x19 + 0x1a8) != 0) {
                              uVar5 = *(uint *)(*(long *)(unaff_x19 + 0x1a8) + 0x18);
                              if ((int)uVar5 < 1) goto LAB_09812ee8;
                              uVar12 = 0;
                              goto WebSocketSharp_Server_WebSocketSessionManager__get_Count;
                            }
                          }
                        }
                      }
                      break;
                    }
                    FUN_0980bb08();
                    uVar4 = FUN_04624244(0);
                    if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_09813114;
                    *(undefined4 *)(lVar11 + lVar15) = uVar4;
                    lVar11 = *(long *)(unaff_x19 + 0x1a8);
                    lVar15 = lVar15 + 0x6c;
                    uVar13 = uVar13 + 1;
                  } while (lVar11 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_09812e00;
  while (uVar12 = uVar12 + 1, (int)uVar12 < (int)uVar5) {
WebSocketSharp_Server_WebSocketSessionManager__get_Count:
    if (uVar5 <= uVar12) goto LAB_09813114;
  }
LAB_09812ee8:
  if (unaff_x20 == 0) goto LAB_09812e00;
  FUN_0982be50();
  iVar3 = FUN_094d0908(0);
  if ((*(long *)(unaff_x19 + 0x108) == 0) ||
     (lVar11 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar11 == 0)) goto LAB_09812e00;
  uVar5 = FUN_098091ac(lVar11,0);
  puVar1 = PTR_DAT_09f9b010;
  if (0 < (int)uVar5) {
    lVar11 = *(long *)PTR_DAT_09f9b010;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar11 = *(long *)puVar1;
    }
    lVar15 = **(long **)(lVar11 + 0xb8);
    if (lVar15 == 0) goto LAB_09812e00;
    if ((int)uVar5 < *(int *)(lVar15 + 0x18)) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar15 == 0) goto LAB_09812e00;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_09813114;
      lVar11 = *(long *)(lVar15 + (ulong)uVar5 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_09812e00;
      iVar3 = FUN_094ce72c(lVar11,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x108) != 0) &&
     (lVar11 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar11 != 0)) {
    iVar6 = FUN_0980837c(lVar11,0);
    if (iVar6 == 0) {
      uVar9 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x108) == 0) ||
         (lVar11 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar11 == 0)) goto LAB_09812e00;
      uVar9 = FUN_09809cd4(lVar11,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b8) != 0) &&
       (lVar11 = FUN_095259a0(*(long *)(unaff_x19 + 0x1b8),0), lVar11 != 0)) {
      lVar11 = FUN_0952a094(lVar11,0);
      lVar15 = *(long *)(unaff_x19 + 0x1a8);
      if (lVar15 != 0) {
        if (*(int *)(lVar15 + 0x18) == 0) {
LAB_09813114:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (lVar11 != 0) {
          uVar13 = (ulong)*(uint *)(lVar15 + 0x24);
          uVar10 = (ulong)*(uint *)(lVar15 + 0x28);
          uVar18 = FUN_09537f40(*(undefined4 *)(lVar15 + 0x20),uVar13,uVar10,lVar11,0);
          if (*(int *)(*(long *)PTR_DAT_09f20648 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar18 = FUN_09807a48(uVar18,uVar13,uVar10,uVar9,0);
          uVar9 = FUN_0980a668();
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar10 = FUN_09531730(uVar9,0,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          plVar7 = (long *)FUN_0980a668();
          if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x098130ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x288))
                      (uVar18,(float)iVar3 - (float)uVar13,plVar7,*(undefined8 *)(*plVar7 + 0x290));
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


