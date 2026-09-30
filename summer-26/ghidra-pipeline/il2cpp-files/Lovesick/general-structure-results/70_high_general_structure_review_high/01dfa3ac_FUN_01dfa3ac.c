/*
FUNCTION_NAME: FUN_01dfa3ac
ENTRY_POINT: 01dfa3ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5
*/


long FUN_01dfa3ac(long *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong unaff_x23;
  long lVar16;
  int iVar17;
  long lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  byte local_68 [4];
  uint local_64;
  
  puVar14 = &DAT_0377f000;
  if ((DAT_0377f9c3 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Sprite_var);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                      );
    thunk_FUN_00d48444(System_ReflectionOnlyType_var);
    DAT_0377f9c3 = 1;
  }
  puVar5 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
  ;
  puVar4 = UnityEngine_Sprite_var;
  puVar3 = System_ReflectionOnlyType_var;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_68[0] = 0;
  local_64 = param_3;
  switch(param_3) {
  case 4:
    if (*(int *)(*(long *)System_ReflectionOnlyType_var + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    auVar20 = FUN_01dd5364(0,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      bVar2 = false;
      uVar15 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = *(uint *)(param_2 + 0x20 + uVar15 * 4);
        uVar12 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1f0));
        if ((uVar12 & 1) == 0) {
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(ushort *)(lVar16 + (long)(int)uVar9 * 2 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          unaff_x23 = unaff_x23 & 0xffffffffffff0000 | (ulong)uVar1;
          auVar21 = FUN_01dc644c(unaff_x23,0);
          auVar20 = FUN_01dd5480(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
          bVar2 = true;
        }
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_a0 = auVar20;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,local_a0);
        return lVar16;
      }
    }
    break;
  case 5:
    if (*(int *)(*(long *)System_ReflectionOnlyType_var + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    auVar20 = FUN_01dd5364(0,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      iVar17 = 0;
      bVar2 = false;
      uVar15 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = *(uint *)(param_2 + 0x20 + uVar15 * 4);
        uVar12 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1f0));
        if ((uVar12 & 1) == 0) {
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          auVar21 = FUN_01dc63f4(lVar16 + (long)(int)uVar9 * 2 + 0x20,0);
          if (*(int *)(*(long *)System_ReflectionOnlyType_var + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar20 = FUN_01dd5480(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
          iVar17 = iVar17 + 1;
          bVar2 = true;
        }
        puVar3 = System_ReflectionOnlyType_var;
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01dc58a0(0,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        auVar21 = FUN_01dd5364((long)iVar17,0);
        local_90 = FUN_01dd58a8(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
        uVar8 = FUN_01dd5f14(local_90,0);
        local_a0._0_2_ = uVar8;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,local_a0);
        return lVar16;
      }
    }
    break;
  case 6:
    if (*(int *)(*(long *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar15 = (ulong)*(ushort *)(*(long *)(*(long *)puVar5 + 0xb8) + 10);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      bVar2 = false;
      uVar12 = 0;
      uVar13 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = *(uint *)(param_2 + 0x20 + uVar12 * 4);
        uVar13 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1f0));
        if ((uVar13 & 1) == 0) {
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(ushort *)(lVar16 + (long)(int)uVar9 * 2 + 0x20);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          param_3 = param_3 & 0xffff0000 | (uint)uVar1;
          puVar14 = (undefined1 *)((ulong)puVar14 & 0xffffffffffff0000 | uVar15);
          local_68[0] = FUN_01dc61f8(param_3,puVar14,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_01dc4bd8(local_68,0);
          if ((uVar13 & 1) != 0) {
            lVar16 = param_1[10];
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar15 = (ulong)*(ushort *)(lVar16 + (long)(int)uVar9 * 2 + 0x20);
          }
          bVar2 = true;
        }
        uVar13 = (ulong)*(uint *)(param_2 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_a0._0_2_ = (short)uVar15;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,local_a0);
        return lVar16;
      }
    }
    break;
  case 7:
    if (*(int *)(*(long *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar15 = (ulong)*(ushort *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      bVar2 = false;
      uVar12 = 0;
      uVar13 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = *(uint *)(param_2 + 0x20 + uVar12 * 4);
        uVar13 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1f0));
        if ((uVar13 & 1) == 0) {
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(ushort *)(lVar16 + (long)(int)uVar9 * 2 + 0x20);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          param_3 = param_3 & 0xffff0000 | (uint)uVar1;
          puVar14 = (undefined1 *)((ulong)puVar14 & 0xffffffffffff0000 | uVar15);
          local_68[0] = FUN_01dc6264(param_3,puVar14,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_01dc4bd8(local_68,0);
          if ((uVar13 & 1) != 0) {
            lVar16 = param_1[10];
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar15 = (ulong)*(ushort *)(lVar16 + (long)(int)uVar9 * 2 + 0x20);
          }
          bVar2 = true;
        }
        uVar13 = (ulong)*(uint *)(param_2 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_a0._0_2_ = (short)uVar15;
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,local_a0);
        return lVar16;
      }
    }
    break;
  case 8:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
      return 0;
    }
    if ((int)*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar16 = param_1[10];
    if (lVar16 != 0) {
      if (*(uint *)(param_2 + 0x20) < *(uint *)(lVar16 + 0x18)) {
        local_a0._0_2_ = *(undefined2 *)(lVar16 + (long)(int)*(uint *)(param_2 + 0x20) * 2 + 0x20);
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000093D_PostfixBurstDelegate_var
                                    ,local_a0);
        return lVar16;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  case 9:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      iVar17 = 0;
    }
    else {
      iVar17 = 0;
      uVar15 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = (**(code **)(*param_1 + 0x1e8))
                          (param_1,*(undefined4 *)(param_2 + 0x20 + uVar15 * 4),
                           *(undefined8 *)(*param_1 + 0x1f0));
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar15 = uVar15 + 1;
        iVar17 = iVar17 + (~uVar9 & 1);
      } while ((long)uVar15 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    local_a0._0_4_ = iVar17;
    lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                ,local_a0);
    return lVar16;
  case 10:
  case 0xb:
                    /* try { // try from 01dfa490 to 01efa4f7 has its CatchHandler @ 01dfa490
                       catch() { ... } // from try @ 01dfa490 with catch @ 01dfa490
                       catch() { ... } // from try @ 01dfa668 with catch @ 01dfa490
                       catch() { ... } // from try @ 01dfa738 with catch @ 01dfa490
                       catch() { ... } // from try @ 01dfa750 with catch @ 01dfa490
                       catch() { ... } // from try @ 01dfa814 with catch @ 01dfa490 */
    if (*(int *)(*(long *)
                  System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_80 = FUN_01dd02a4(0,0);
    FUN_01dd02a4(0,0);
    auVar20 = FUN_01dd02a4(0,0);
    auVar21 = FUN_01dd02a4(0,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      iVar17 = 0;
    }
    else {
      iVar17 = 0;
      uVar15 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar9 = *(uint *)(param_2 + 0x20 + uVar15 * 4);
        uVar12 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar9,*(undefined8 *)(*param_1 + 0x1f0));
        if ((uVar12 & 1) == 0) {
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar18 = (long)(int)uVar9;
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          auVar22 = FUN_01dc62d0(lVar16 + lVar18 * 2 + 0x20,0);
          if (*(int *)(*(long *)
                        System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar20 = FUN_01dd03e4(auVar20._0_8_,auVar20._8_8_,auVar22._0_8_,auVar22._8_8_,0);
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          auVar22 = FUN_01dc62d0(lVar16 + lVar18 * 2 + 0x20,0);
          lVar16 = param_1[10];
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          auVar23 = FUN_01dc62d0(lVar16 + lVar18 * 2 + 0x20,0);
          auVar22 = FUN_01dd06d4(auVar22._0_8_,auVar22._8_8_,auVar23._0_8_,auVar23._8_8_,0);
          auVar21 = FUN_01dd03e4(auVar21._0_8_,auVar21._8_8_,auVar22._0_8_,auVar22._8_8_,0);
          iVar17 = iVar17 + 1;
        }
        uVar15 = uVar15 + 1;
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
      } while ((long)uVar15 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    uVar10 = auVar20._8_8_;
    uVar11 = auVar20._0_8_;
    if (iVar17 + -1 != 0 && 0 < iVar17) {
      if (*(int *)(*(long *)
                    System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar20 = FUN_01dd02a4((double)iVar17,0);
      uVar9 = local_64;
      puVar3 = UnityEngine_Sprite_var;
      auVar20 = FUN_01dd06d4(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
      auVar21 = FUN_01dd06d4(uVar11,uVar10,uVar11,uVar10,0);
      auVar20 = FUN_01dd055c(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
      local_80 = auVar20;
      auVar21 = FUN_01dd06d4(uVar11,uVar10,uVar11,uVar10,0);
      auVar20 = FUN_01dd084c(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
      auVar21 = FUN_01dd02a4(DAT_02951918,0);
      bVar6 = FUN_01dd0fc4(auVar20._0_8_,auVar20._8_8_,auVar21._0_8_,auVar21._8_8_,0);
      local_68[0] = bVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01dc447c(bVar6,0);
      bVar6 = local_68[0];
      uVar11 = local_80._8_8_;
      uVar10 = local_80._0_8_;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        auVar20 = FUN_01dd02a4(0,0);
        uVar7 = FUN_01dd0fc4(uVar10,uVar11,auVar20._0_8_,auVar20._8_8_,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bVar6 = FUN_01dc4cc8(bVar6,uVar7,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_01dc447c(bVar6,0);
      uVar11 = local_80._8_8_;
      uVar10 = local_80._0_8_;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        auVar20 = FUN_01dd02a4((double)((iVar17 + -1) * iVar17),0);
        local_a0 = FUN_01dd084c(uVar10,uVar11,auVar20._0_8_,auVar20._8_8_,0);
      }
      else {
        if (*(int *)(*(long *)
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_a0 = FUN_01dd02a4(0,0);
      }
      local_80 = local_a0;
      if (uVar9 == 0xb) {
        if (*(int *)(*(long *)
                      System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar19 = (double)FUN_01dd0254(local_80,0);
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_a0._0_8_ = SQRT(dVar19);
        lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,local_a0);
        return lVar16;
      }
      lVar16 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   System_Collections_Generic_IEnumerator<KeyValuePair<string,_JsonSchema>>_TypeInfo
                                  ,local_a0);
      return lVar16;
    }
    break;
  default:
    uVar10 = FUN_01d34390(param_3,param_1[4],0);
    uVar11 = thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleSheet_CheckAccess<Dimension>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar11);
  }
  return param_1[8];
}


