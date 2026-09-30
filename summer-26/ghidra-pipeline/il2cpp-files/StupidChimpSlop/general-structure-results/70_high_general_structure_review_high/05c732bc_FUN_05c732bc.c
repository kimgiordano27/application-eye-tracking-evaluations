/*
FUNCTION_NAME: FUN_05c732bc
ENTRY_POINT: 05c732bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_05c732bc(long param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  ulong uVar35;
  double dVar36;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_158 [2];
  undefined8 *local_148;
  undefined8 uStack_140;
  long local_138 [2];
  undefined1 auStack_128 [136];
  
  puVar3 = PTR_DAT_0664e780;
  if ((DAT_06a57a45 & 1) == 0) {
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyAPI_RedeemAppleAppStoreWithJwsInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyAPI_RedeemPlayStationStoreInventoryItems__);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                );
    FUN_02d4dc40(Method_System_Linq_Expressions_Interpreter_MulInstruction_Create__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyAPI_RedeemSteamInventoryItems__);
    FUN_02d4dc40(Method_PlayFab_PlayFabEconomyAPI_ReportItem__);
    FUN_02d4dc40(PTR_DAT_0664e780);
    DAT_06a57a45 = 1;
  }
  memset(auStack_128,0,0x88);
  local_138[0] = 0;
  local_138[1] = 0;
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_174 = 0;
  memmove(auStack_128,
          (void *)(*(long *)(param_1 + 0x10) + (long)(param_2 - *(int *)(param_1 + 8)) * 0x88),0x88)
  ;
  FUN_05f1cb1c(&local_1b8,auStack_128,0);
  fVar45 = fStack_1b4;
  fVar34 = local_1b0;
  fVar30 = (float)FUN_05a86f38(local_1b8,0);
  FUN_05f1cb1c(&local_1b8,auStack_128,0);
  fVar43 = local_1a8;
  fVar38 = fStack_1a4;
  fVar31 = (float)FUN_05a86f38(local_1ac,0);
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar16 = *(long *)puVar3;
  }
  if (**(long **)(lVar16 + 0xb8) != 0) {
    FUN_038af394(local_138,*(undefined4 *)(**(long **)(lVar16 + 0xb8) + 0x18),2,1,
                 *(undefined8 *)Method_PlayFab_PlayFabEconomyAPI_RedeemSteamInventoryItems__);
    puVar5 = Method_PlayFab_PlayFabEconomyAPI_ReportItem__;
    puVar4 = Method_PlayFab_PlayFabEconomyAPI_RedeemAppleAppStoreWithJwsInventoryItems__;
    puVar27 = (undefined8 *)Method_System_Linq_Expressions_Interpreter_MulInstruction_Create__;
    puVar28 = (undefined8 *)
              Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
    ;
    lVar16 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar16 != 0) && (lVar19 = (*(long **)(*(long *)puVar3 + 0xb8))[1], lVar19 != 0)) {
      FUN_038ae304(&local_148,*(int *)(lVar19 + 0x18) * 3 + *(int *)(lVar16 + 0x18),2,1,
                   *(undefined8 *)Method_PlayFab_PlayFabEconomyAPI_ReportItem__);
      lVar16 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar22 = 0;
      while( true ) {
        puVar3 = PTR_DAT_0664e780;
        lVar19 = *(long *)PTR_DAT_0664e780;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar19 = *(long *)puVar3;
        }
        if (**(long **)(lVar19 + 0xb8) == 0) goto LAB_05c73b00;
        if ((long)*(int *)(**(long **)(lVar19 + 0xb8) + 0x18) <= (long)uVar26) {
          uVar26 = 0;
          goto 
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000347_PostfixBurstDelegate__Invoke
          ;
        }
        FUN_04bed500(&local_1b8,param_1 + 0x38,*(undefined4 *)(param_1 + 0x110),
                     *(undefined8 *)puVar4);
        fVar10 = local_180;
        uVar41 = local_188;
        fVar9 = local_190;
        uVar44 = local_198;
        fVar8 = local_1a0;
        fVar7 = fStack_1a4;
        fVar6 = local_1a8;
        fVar40 = local_1b0;
        fVar37 = fStack_1b4;
        fVar33 = local_1b8;
        puVar3 = PTR_DAT_0664e780;
        lVar19 = *(long *)PTR_DAT_0664e780;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar19 = *(long *)puVar3;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05c73b00;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) break;
        lVar19 = lVar19 + lVar16;
        fVar32 = fVar30 + fVar31 * *(float *)(lVar19 + 0x20);
        fVar39 = fVar45 + fVar43 * *(float *)(lVar19 + 0x24);
        fVar42 = fVar34 + fVar38 * *(float *)(lVar19 + 0x28);
        fVar33 = (float)uVar41 + fVar33 * fVar32 + fVar6 * fVar39 + (float)uVar44 * fVar42;
        fVar37 = (float)((ulong)uVar41 >> 0x20) +
                 fVar37 * fVar32 + fVar7 * fVar39 + (float)((ulong)uVar44 >> 0x20) * fVar42;
        uVar44 = CONCAT44(fVar37,fVar33);
        fVar40 = -(fVar10 + fVar40 * fVar32 + fVar8 * fVar39 + fVar9 * fVar42);
        *(undefined8 *)(local_138[0] + lVar16) = uVar44;
        *(float *)((undefined8 *)(local_138[0] + lVar16) + 1) = fVar40;
        uVar20 = uVar22;
        if (*(float *)(param_1 + 0x100) <= fVar40) {
          if (*(char *)(param_1 + 0x104) == '\0') {
            uVar44 = CONCAT44(fVar37 / fVar40,fVar33 / fVar40);
          }
          local_148[(int)uVar22] = uVar44;
          uVar20 = uVar22 + 1;
          if ((float)uVar44 <
              *(float *)((long)local_148 + (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3)))
          {
            uVar25 = (ulong)uVar22;
          }
        }
        uVar22 = uVar20;
        uVar26 = uVar26 + 1;
        lVar16 = lVar16 + 0xc;
      }
LAB_05c73b04:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
  }
LAB_05c73b00:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();

  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000347_PostfixBurstDelegate__Invoke
  :
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar19 = *(long *)PTR_DAT_0664e780;
  }
  lVar16 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
  if (lVar16 == 0) goto LAB_05c73b00;
  if ((long)*(int *)(lVar16 + 0x18) <= (long)uVar26) {
    FUN_038ae304(local_158,uVar22,2,1,*(undefined8 *)puVar5);
    plVar24 = (long *)PTR_DAT_0664e780;
    if (0 < (int)uVar22) {
      uVar35 = 0;
      uVar23 = uVar25;
      do {
        uVar18 = uVar35;
        uVar35 = local_148[(int)(uint)uVar23];
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05c73b08(uVar35,uVar35 >> 0x20,0x3f800000,param_1);
        uVar21 = 0;
        uVar20 = 0;
        *(ulong *)(local_158[0] + uVar18 * 8) = uVar35;
        fVar45 = (float)(uVar35 >> 0x20);
        uVar44 = CONCAT44((float)((ulong)*local_148 >> 0x20) - fVar45,
                          (float)*local_148 - (float)uVar35);
        do {
          fVar34 = (float)local_148[uVar21] - (float)uVar35;
          fVar43 = (float)((ulong)local_148[uVar21] >> 0x20) - fVar45;
          if (uVar20 == (uint)uVar23) {
LAB_05c73844:
            uVar20 = (uint)uVar21;
            uVar44 = CONCAT44(fVar43,fVar34);
          }
          else {
            uVar41 = NEON_rev64(CONCAT44(fVar43,fVar34),4);
            fVar38 = (float)uVar44;
            fVar30 = (float)((ulong)uVar44 >> 0x20);
            fVar31 = fVar38 * (float)uVar41 - fVar30 * (float)((ulong)uVar41 >> 0x20);
            if ((0.0 < fVar31) ||
               ((fVar31 == 0.0 &&
                (uVar41 = NEON_ext(CONCAT44(fVar43 * fVar43,fVar34 * fVar34),
                                   CONCAT44(fVar30 * fVar30,fVar38 * fVar38),4,1),
                fVar30 * fVar30 + (float)((ulong)uVar41 >> 0x20) < fVar34 * fVar34 + (float)uVar41))
               )) goto LAB_05c73844;
          }
          uVar21 = uVar21 + 1;
        } while (uVar22 != uVar21);
      } while ((uVar20 != (uint)uVar25) &&
              (uVar23 = (ulong)uVar20, uVar35 = uVar18 + 1, uVar18 + 1 < (ulong)uVar22));
      FUN_05c6fe2c((undefined4 *)(param_1 + 0x106),0,*(ushort *)(param_1 + 0xfc) - 1);
      if (*(short *)(param_1 + 0x106) < *(short *)(param_1 + 0x108)) {
        iVar29 = *(short *)(param_1 + 0x106) + 1;
        do {
          puVar3 = Method_PlayFab_PlayFabEconomyAPI_RedeemPlayStationStoreInventoryItems__;
          local_174 = 0x80007fff;
          fVar45 = (float)FUN_04becf70(param_1 + 200,*(undefined4 *)(param_1 + 0x110),
                                       *(undefined8 *)
                                        Method_PlayFab_PlayFabEconomyAPI_RedeemPlayStationStoreInventoryItems__
                                      );
          fVar34 = (float)FUN_04becf70(param_1 + 0xd0,*(undefined4 *)(param_1 + 0x110),
                                       *(undefined8 *)puVar3);
          lVar16 = 0;
          uVar25 = 0;
          fVar45 = fVar45 + (fVar34 - fVar45) * *(float *)(param_1 + 0xc4) * (float)iVar29;
          do {
            lVar19 = 0;
            if (uVar18 != uVar25) {
              lVar19 = uVar25 + 1;
            }
            pfVar1 = (float *)(local_158[0] + lVar19 * 8);
            fVar34 = *(float *)(local_158[0] + lVar16 + 4);
            fVar34 = (fVar45 - fVar34) / (pfVar1[1] - fVar34);
            bVar11 = false;
            bVar12 = false;
            bVar13 = false;
            if (0.0 <= fVar34) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar34)) {
                bVar11 = fVar34 < 1.0;
                bVar12 = fVar34 == 1.0;
                bVar13 = false;
              }
            }
            if (bVar12 || bVar11 != bVar13) {
              fVar34 = *(float *)(local_158[0] + lVar16) +
                       fVar34 * (*pfVar1 - *(float *)(local_158[0] + lVar16));
              if (*(char *)(param_1 + 0x104) == '\0') {
                if (*(int *)(*plVar24 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                fVar34 = (float)FUN_05c74d78(fVar34,fVar45,0x3f800000,param_1);
              }
              else {
                if (*(int *)(*plVar24 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                fVar34 = (float)FUN_05c75bd4(fVar34,fVar45,0x3f800000,param_1);
              }
              fVar43 = (float)(*(int *)(param_1 + 0xf8) + -1);
              bVar11 = false;
              bVar12 = false;
              bVar13 = false;
              if ((uint)ABS(fVar34) < 0x7f800001) {
                bVar11 = false;
                bVar12 = false;
                bVar13 = true;
                if (!NAN(fVar34) && !NAN(fVar43)) {
                  bVar11 = fVar34 < fVar43;
                  bVar12 = fVar34 == fVar43;
                  bVar13 = false;
                }
              }
              if (bVar12 || bVar11 != bVar13) {
                fVar43 = fVar34;
              }
              bVar11 = true;
              if (((uint)ABS(fVar43) < 0x7f800001) && (bVar11 = false, !NAN(fVar43))) {
                bVar11 = fVar43 < 0.0;
              }
              dVar36 = 0.0;
              if (!bVar11) {
                dVar36 = (double)fVar43;
              }
              iVar14 = 0;
              if (dVar36 != INFINITY) {
                iVar14 = (int)dVar36;
              }
              FUN_05c6fda0(&local_174,iVar14);
            }
            uVar25 = uVar25 + 1;
            lVar16 = lVar16 + 8;
          } while (uVar18 + 1 != uVar25);
          iVar2 = *(int *)(param_1 + 0x10c);
          iVar14 = iVar29 + 1 + iVar2;
          uVar26 = uVar26 & 0xffffffff00000000 |
                   (ulong)*(uint *)(*(long *)(param_1 + 0x20) + (long)iVar14 * 4);
          uVar15 = FUN_05c6fef0(uVar26);
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar14 * 4) = uVar15;
          plVar24 = (long *)PTR_DAT_0664e780;
          uVar15 = FUN_05c6fef0();
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar2 + iVar29) * 4) = uVar15;
          bVar11 = iVar29 < *(short *)(param_1 + 0x108);
          iVar29 = iVar29 + 1;
        } while (bVar11);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x10c) * 4) =
           *(undefined4 *)(param_1 + 0x106);
      puVar27 = (undefined8 *)Method_System_Linq_Expressions_Interpreter_MulInstruction_Create__;
      puVar28 = (undefined8 *)
                Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
      ;
    }
    FUN_038ae600(local_158,*puVar28);
    FUN_038ae600(&local_148,*puVar28);
    FUN_038af6b8(local_138,*puVar27);
    return;
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_0664e780 + 0xb8) + 8);
    if (lVar16 == 0) goto LAB_05c73b00;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05c73b04;
  lVar16 = lVar16 + uVar26 * 0x10;
  iVar29 = 1;
  uStack_168 = *(undefined8 *)(lVar16 + 0x28);
  local_170 = *(undefined8 *)(lVar16 + 0x20);
  puVar17 = (undefined8 *)(local_138[0] + (long)(int)local_170 * 0xc);
  uVar44 = *puVar17;
  fVar45 = *(float *)(puVar17 + 1);
  do {
    iVar14 = FUN_05ab4570(&local_170,iVar29,0);
    fVar34 = *(float *)(param_1 + 0x100);
    puVar17 = (undefined8 *)(local_138[0] + (long)iVar14 * 0xc);
    uVar41 = *puVar17;
    fVar43 = *(float *)(puVar17 + 1);
    uVar20 = uVar22;
    if (fVar34 <= fVar45) {
      if (fVar43 < fVar34) goto LAB_05c736ec;
    }
    else if (fVar34 <= fVar43) {
LAB_05c736ec:
      fVar30 = (fVar34 - fVar45) / (fVar43 - fVar45);
      fVar34 = (float)uVar44;
      fVar38 = (float)((ulong)uVar44 >> 0x20);
      fVar34 = fVar34 + ((float)uVar41 - fVar34) * fVar30;
      fVar38 = fVar38 + ((float)((ulong)uVar41 >> 0x20) - fVar38) * fVar30;
      uVar41 = CONCAT44(fVar38,fVar34);
      if (*(char *)(param_1 + 0x104) == '\0') {
        fVar43 = fVar45 + (fVar43 - fVar45) * fVar30;
        uVar41 = CONCAT44(fVar38 / fVar43,fVar34 / fVar43);
      }
      local_148[(int)uVar22] = uVar41;
      uVar20 = uVar22 + 1;
      if ((float)uVar41 <
          *(float *)((long)local_148 + (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3))) {
        uVar25 = (ulong)uVar22;
      }
    }
    uVar22 = uVar20;
    iVar29 = iVar29 + 1;
  } while (iVar29 != 4);
  uVar26 = uVar26 + 1;
  lVar19 = *(long *)PTR_DAT_0664e780;
  goto 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000347_PostfixBurstDelegate__Invoke
  ;
}


