/*
FUNCTION_NAME: FUN_05bfc428
ENTRY_POINT: 05bfc428
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05bfc428(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  undefined8 uVar20;
  
  if ((DAT_06b82107 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                );
    FUN_02d6084c(Method_System_Collections_Generic_KeyValuePair<InternedString,_string>_get_Key__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__)
    ;
    DAT_06b82107 = 1;
  }
  if (((param_2 != 0) && (lVar5 = FUN_06066c74(param_2,0), lVar5 != 0)) &&
     (lVar6 = thunk_FUN_060795f8(lVar5,0), lVar6 != 0)) {
    iVar3 = FUN_0607aa84(lVar6,0);
    puVar1 = PTR_DAT_0675e1b8;
    if (1 < iVar3) {
      uVar10 = 0x1e;
      do {
        iVar3 = uVar10 - 0x1d;
        uVar7 = FUN_0607b2ac(lVar6,iVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar1);
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(uVar7,lVar5,0);
        if ((uVar8 & 1) != 0) {
          uVar9 = uVar10 - 0x1e;
          if ((int)uVar9 < 0) {
            return;
          }
          if (*(char *)(param_1 + 0x134) == '\0') {
            if (*(char *)(param_2 + 0x120) == '\0') {
              FUN_063626b0(param_2,1,0);
            }
          }
          else {
            if (iVar3 == 2) {
              if ((*(long *)(param_1 + 0x138) != 0) &&
                 (lVar5 = *(long *)(*(long *)(param_1 + 0x138) + 0x10), lVar5 != 0)) {
                iVar3 = *(int *)(lVar5 + 0x18);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = iVar3 - 1;
                if (iVar3 < 1) {
                  uVar11 = 0;
                }
                else {
                  uVar9 = iVar3 + 3U & 0xfffffffc;
                  auVar13 = ZEXT816(0);
                  uVar7 = _DAT_0120ada0;
                  uVar20 = _UNK_0120ada8;
                  do {
                    auVar14 = auVar13;
                    auVar15._0_5_ =
                         CONCAT14((char)((ulong)uVar7 >> 0x20),(uint)((byte)uVar7 & 0x1f)) &
                         0x1fffffffff;
                    auVar15._5_3_ = 0;
                    auVar15[8] = (byte)uVar20 & 0x1f;
                    auVar15._9_3_ = 0;
                    auVar15[0xc] = (byte)((ulong)uVar20 >> 0x20) & 0x1f;
                    auVar15._13_3_ = 0;
                    auVar16._8_4_ = 1;
                    auVar16._0_8_ = 0x100000001;
                    auVar16._12_4_ = 1;
                    auVar16 = NEON_ushl(auVar16,auVar15,4);
                    uVar9 = uVar9 - 4;
                    auVar13[0] = auVar16[0] | auVar14[0];
                    auVar13[1] = auVar16[1] | auVar14[1];
                    auVar13[2] = auVar16[2] | auVar14[2];
                    auVar13[3] = auVar16[3] | auVar14[3];
                    auVar13[4] = auVar16[4] | auVar14[4];
                    auVar13[5] = auVar16[5] | auVar14[5];
                    auVar13[6] = auVar16[6] | auVar14[6];
                    auVar13[7] = auVar16[7] | auVar14[7];
                    auVar13[8] = auVar16[8] | auVar14[8];
                    auVar13[9] = auVar16[9] | auVar14[9];
                    auVar13[10] = auVar16[10] | auVar14[10];
                    auVar13[0xb] = auVar16[0xb] | auVar14[0xb];
                    auVar13[0xc] = auVar16[0xc] | auVar14[0xc];
                    auVar13[0xd] = auVar16[0xd] | auVar14[0xd];
                    auVar13[0xe] = auVar16[0xe] | auVar14[0xe];
                    auVar13[0xf] = auVar16[0xf] | auVar14[0xf];
                    uVar17 = (uint)uVar7;
                    uVar18 = (uint)((ulong)uVar7 >> 0x20);
                    uVar7 = CONCAT44(uVar18 + 4,uVar17 + 4);
                    uVar19 = (uint)uVar20;
                    uVar21 = (uint)((ulong)uVar20 >> 0x20);
                    uVar20 = CONCAT44(uVar21 + 4,uVar19 + 4);
                  } while (uVar9 != 0);
                  auVar12._0_4_ = -(uint)(uVar10 < uVar17);
                  auVar12._4_4_ = -(uint)(uVar10 < uVar18);
                  auVar12._8_4_ = -(uint)(uVar10 < uVar19);
                  auVar12._12_4_ = -(uint)(uVar10 < uVar21);
                  auVar13 = auVar13 ^ (auVar13 ^ auVar14) & auVar12;
                  uVar11 = CONCAT13(auVar13[3] | auVar13[0xb] | auVar13[7] | auVar13[0xf],
                                    CONCAT12(auVar13[2] | auVar13[10] | auVar13[6] | auVar13[0xe],
                                             CONCAT11(auVar13[1] | auVar13[9] |
                                                      auVar13[5] | auVar13[0xd],
                                                      auVar13[0] | auVar13[8] |
                                                      auVar13[4] | auVar13[0xc])));
                }
                FUN_05bf8f84(param_1,uVar11,1);
                iVar3 = FUN_0607aa84(lVar6,0);
                puVar2 = 
                Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                ;
                if (iVar3 < 4) goto LAB_05bfc7bc;
                iVar3 = 3;
                while (lVar5 = FUN_0607b2ac(lVar6,iVar3,0), lVar5 != 0) {
                  lVar5 = FUN_0335b3f4(lVar5,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)puVar1);
                  }
                  uVar8 = FUN_0606f530(lVar5,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar5 == 0) break;
                    FUN_063626b0(lVar5,1,0);
                  }
                  iVar3 = iVar3 + 1;
                  iVar4 = FUN_0607aa84(lVar6,0);
                  if (iVar4 <= iVar3) goto LAB_05bfc7bc;
                }
              }
              goto LAB_05bfc7d8;
            }
            if (iVar3 == 1) {
              FUN_05bf8f84(param_1,0,1);
              iVar3 = FUN_0607aa84(lVar6,0);
              puVar2 = 
              Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
              ;
              if (iVar3 < 4) goto LAB_05bfc5ec;
              iVar3 = 3;
              goto LAB_05bfc57c;
            }
            uVar9 = 1 << (ulong)(uVar10 & 0x1f);
            uVar10 = *(uint *)(param_1 + 0x130) & uVar9;
            FUN_063626b0(param_2,uVar10 == 0,0);
            if (uVar10 == 0) {
              uVar9 = *(uint *)(param_1 + 0x130) | uVar9;
            }
            else {
              uVar9 = *(uint *)(param_1 + 0x130) & (uVar9 ^ 0xffffffff);
            }
          }
          FUN_05bf8f84(param_1,uVar9,1);
          goto LAB_05bfc7bc;
        }
        iVar4 = FUN_0607aa84(lVar6,0);
        iVar3 = uVar10 - 0x1c;
        uVar10 = uVar10 + 1;
      } while (iVar3 < iVar4);
    }
                    /* try { // try from 05bfc600 to 05cfc80f has its CatchHandler @ 05bfc600
                       catch() { ... } // from try @ 05bfc600 with catch @ 05bfc600
                       catch() { ... } // from try @ 05bfc864 with catch @ 05bfc600
                       catch() { ... } // from try @ 05bfc8cc with catch @ 05bfc600
                       catch() { ... } // from try @ 05bfc8fc with catch @ 05bfc600 */
    return;
  }
LAB_05bfc7d8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05bfc57c:
  lVar5 = FUN_0607b2ac(lVar6,iVar3,0);
  if (lVar5 == 0) goto LAB_05bfc7d8;
  lVar5 = FUN_0335b3f4(lVar5,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar8 = FUN_0606f530(lVar5,0);
  if ((uVar8 & 1) != 0) {
    if (lVar5 == 0) goto LAB_05bfc7d8;
    FUN_063626b0(lVar5,0,0);
  }
  iVar3 = iVar3 + 1;
  iVar4 = FUN_0607aa84(lVar6,0);
  if (iVar4 <= iVar3) {
LAB_05bfc5ec:
    FUN_063626a4(param_2,1,0);
LAB_05bfc7bc:
    FUN_05bfb584(param_1);
    return;
  }
  goto LAB_05bfc57c;
}


