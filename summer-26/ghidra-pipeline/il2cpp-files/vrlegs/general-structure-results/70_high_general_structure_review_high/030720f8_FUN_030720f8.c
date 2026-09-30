/*
FUNCTION_NAME: FUN_030720f8
ENTRY_POINT: 030720f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


void FUN_030720f8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  int local_11c;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  if ((DAT_0412b43f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc3778);
    FUN_01ab69ac(PTR_DAT_03cc0698);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
    FUN_01ab69ac(Newtonsoft_Json_JsonTextReader_var);
    FUN_01ab69ac(Newtonsoft_Json_JsonTextWriter_var);
    FUN_01ab69ac(Newtonsoft_Json_JsonExtensionDataAttribute_var);
    FUN_01ab69ac(Unity_Services_CloudSave_Internal_Http_JsonObject_var);
    FUN_01ab69ac(Newtonsoft_Json_JsonToken_var);
    FUN_01ab69ac(PTR_DAT_03cbf288);
    DAT_0412b43f = 1;
  }
  iVar5 = FUN_03071b5c(param_6);
  puVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var;
  puVar3 = PTR_DAT_03cbf288;
  if (param_3 != 0) {
    uVar22 = *(uint *)(param_3 + 0x18);
    plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc3778,uVar22);
    plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)puVar4,uVar22);
    auVar25 = FUN_01ab6a94(*(undefined8 *)puVar3,uVar22);
    uVar11 = auVar25._8_8_;
    lVar10 = auVar25._0_8_;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 4) {
        *(undefined4 *)(lVar10 + 0x2c) = 0x3f800000;
      }
      if (param_4 != 0) {
        if (0 < (int)*(ulong *)(param_4 + 0x18)) {
          uVar13 = 0;
          uVar19 = 0;
          iVar21 = uVar22 << 1;
          uVar16 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
          iVar2 = uVar22 * 3;
          local_11c = 0;
          uVar17 = uVar22;
          do {
            if (uVar16 <= uVar19) goto LAB_03072880;
            uVar24 = *(undefined4 *)(param_4 + uVar19 * 4 + 0x20);
            if (iVar5 == 2) {
              lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uVar22);
              if (lVar8 == 0) goto LAB_03072884;
              uVar12 = *(uint *)(lVar8 + 0x18);
              if (0 < (long)((ulong)uVar12 << 0x20)) {
                uVar16 = 0;
                lVar18 = (ulong)uVar17 << 0x20;
                do {
                  if (param_5 == 0) goto LAB_03072884;
                  if (((ulong)*(uint *)(param_5 + 0x18) <= uVar17 + uVar16) || (uVar12 <= uVar16))
                  goto LAB_03072880;
                  lVar9 = lVar18 >> 0x1e;
                  lVar18 = lVar18 + 0x100000000;
                  *(undefined4 *)(lVar8 + 0x20 + uVar16 * 4) =
                       *(undefined4 *)(param_5 + lVar9 + 0x20);
                  uVar16 = uVar16 + 1;
                } while ((long)(int)uVar12 != uVar16);
              }
              if (param_8 == 0) goto LAB_03072884;
              auVar25 = (**(code **)(param_8 + 0x18))
                                  (*(undefined8 *)(param_8 + 0x40),lVar8,lVar10,
                                   *(undefined8 *)(param_8 + 0x28));
              lVar10 = auVar25._0_8_;
              if (plVar7 == (long *)0x0) goto LAB_03072884;
              uVar12 = *(uint *)(plVar7 + 3);
              if (0 < (int)uVar12) {
                uVar15 = 0;
                do {
                  if (uVar12 <= uVar15) goto LAB_03072880;
                  plVar20 = plVar7 + (long)(int)uVar15 + 4;
                  if (*plVar20 == 0) {
                    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
                    Animancer_AnimancerState__OnSetIsPlaying
                              (lVar8,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                    if ((lVar8 != 0) &&
                       (lVar18 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar18 == 0)) goto LAB_03072888;
                    if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_03072880;
                    *plVar20 = lVar8;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar8)
                    ;
                    uVar12 = *(uint *)(plVar7 + 3);
                  }
                  if (uVar12 <= uVar15) goto LAB_03072880;
                  if (lVar10 == 0) goto LAB_03072884;
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_03072880;
                  if (param_5 == 0) goto LAB_03072884;
                  if ((*(uint *)(param_5 + 0x18) <= local_11c + uVar15) ||
                     (*(uint *)(param_5 + 0x18) <= iVar21 + uVar15)) goto LAB_03072880;
                  lVar8 = *plVar20;
                  local_90 = 0;
                  uStack_88 = 0;
                  uStack_84 = 0;
                  local_78 = 0;
                  local_80 = 0;
                  uStack_7c = 0;
                  FUN_0366c030(uVar24,*(undefined4 *)(lVar10 + (long)(int)uVar15 * 4 + 0x20),
                               *(undefined4 *)(param_5 + 0x20 + (long)(int)(local_11c + uVar15) * 4)
                               ,*(undefined4 *)(param_5 + 0x20 + (long)(int)(iVar21 + uVar15) * 4),
                               &local_90,0);
                  if (lVar8 == 0) goto LAB_03072884;
                  uStack_9c = CONCAT44(local_78,uStack_7c);
                  uStack_a8 = uStack_88;
                  local_b0 = local_90;
                  uStack_a4 = uStack_84;
                  uStack_a0 = local_80;
                  FUN_01b5f01c(lVar8,&local_b0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                  auVar25._8_8_ = extraout_x1;
                  auVar25._0_8_ = lVar10;
                  uVar12 = *(uint *)(plVar7 + 3);
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < (int)uVar12);
              }
            }
            else {
              lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uVar22);
              if (lVar8 == 0) goto LAB_03072884;
              uVar12 = *(uint *)(lVar8 + 0x18);
              if (0 < (long)((ulong)uVar12 << 0x20)) {
                uVar16 = 0;
                lVar18 = uVar13 << 0x20;
                do {
                  if (param_5 == 0) goto LAB_03072884;
                  if (((ulong)*(uint *)(param_5 + 0x18) <= uVar13 + uVar16) || (uVar12 <= uVar16))
                  goto LAB_03072880;
                  lVar9 = lVar18 >> 0x1e;
                  lVar18 = lVar18 + 0x100000000;
                  *(undefined4 *)(lVar8 + 0x20 + uVar16 * 4) =
                       *(undefined4 *)(param_5 + lVar9 + 0x20);
                  uVar16 = uVar16 + 1;
                } while ((long)(int)uVar12 != uVar16);
              }
              if (param_8 == 0) goto LAB_03072884;
              auVar25 = (**(code **)(param_8 + 0x18))
                                  (*(undefined8 *)(param_8 + 0x40),lVar8,lVar10,
                                   *(undefined8 *)(param_8 + 0x28));
              uVar16 = auVar25._8_8_;
              lVar10 = auVar25._0_8_;
              if (plVar7 == (long *)0x0) goto LAB_03072884;
              if (0 < (int)plVar7[3]) {
                uVar14 = plVar7[3] & 0xffffffff;
                lVar8 = 8;
                plVar20 = plVar7 + 4;
                do {
                  uVar23 = lVar8 - 8;
                  if (uVar14 <= uVar23) goto LAB_03072880;
                  if (*plVar20 == 0) {
                    lVar18 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var,uVar16)
                    ;
                    Animancer_AnimancerState__OnSetIsPlaying
                              (lVar18,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                    if ((lVar18 != 0) &&
                       (lVar9 = thunk_FUN_01a89d6c(lVar18,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_03072888;
                    if (*(uint *)(plVar7 + 3) <= uVar23) goto LAB_03072880;
                    *plVar20 = lVar18;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (plVar20,lVar18);
                    uVar16 = extraout_x1_00;
                  }
                  if (iVar5 == 1) {
                    if (*(uint *)(plVar7 + 3) <= uVar23) goto LAB_03072880;
                    if (lVar10 == 0) goto LAB_03072884;
                    if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_03072880;
                    lVar18 = *plVar20;
                    local_90 = 0;
                    uStack_88 = 0;
                    uStack_84 = 0;
                    local_78 = 0;
                    local_80 = 0;
                    uStack_7c = 0;
                    FUN_0366c030(uVar24,*(undefined4 *)(lVar10 + lVar8 * 4),0,0x7f800000,&local_90,0
                                );
                    if (lVar18 == 0) goto LAB_03072884;
                    uStack_dc = CONCAT44(local_78,uStack_7c);
                    uStack_e8 = uStack_88;
                    local_f0 = local_90;
                    uStack_e4 = uStack_84;
                    uStack_e0 = local_80;
                    FUN_01b5f01c(lVar18,&local_f0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var)
                    ;
                    uVar16 = extraout_x1_02;
                  }
                  else if (iVar5 == 0) {
                    if (*(uint *)(plVar7 + 3) <= uVar23) goto LAB_03072880;
                    if (lVar10 == 0) goto LAB_03072884;
                    if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_03072880;
                    lVar18 = *plVar20;
                    local_90 = 0;
                    uStack_88 = 0;
                    uStack_84 = 0;
                    local_78 = 0;
                    local_80 = 0;
                    uStack_7c = 0;
                    FUN_0366c030(uVar24,*(undefined4 *)(lVar10 + lVar8 * 4),0,0,&local_90,0);
                    if (lVar18 == 0) goto LAB_03072884;
                    uStack_bc = CONCAT44(local_78,uStack_7c);
                    uStack_c8 = uStack_88;
                    local_d0 = local_90;
                    uStack_c4 = uStack_84;
                    uStack_c0 = local_80;
                    FUN_01b5f01c(lVar18,&local_d0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var)
                    ;
                    if (*(uint *)(plVar7 + 3) <= uVar23) goto LAB_03072880;
                    if (*plVar20 == 0) goto LAB_03072884;
                    iVar1 = *(int *)(*plVar20 + 0x18);
                    uVar16 = (ulong)(iVar1 - 1);
                    if (0 < iVar1) {
                      FUN_03071cb4();
                      uVar16 = extraout_x1_01;
                    }
                  }
                  auVar25._8_8_ = uVar16;
                  auVar25._0_8_ = lVar10;
                  uVar14 = (ulong)*(uint *)(plVar7 + 3);
                  lVar18 = lVar8 + -7;
                  lVar8 = lVar8 + 1;
                  plVar20 = plVar20 + 1;
                } while (lVar18 < (int)*(uint *)(plVar7 + 3));
              }
            }
            uVar11 = auVar25._8_8_;
            lVar10 = auVar25._0_8_;
            uVar16 = (ulong)*(uint *)(param_4 + 0x18);
            uVar19 = uVar19 + 1;
            iVar21 = iVar21 + iVar2;
            uVar13 = (ulong)((int)uVar13 + uVar22);
            local_11c = local_11c + iVar2;
            uVar17 = uVar17 + iVar2;
          } while ((long)uVar19 < (long)(int)*(uint *)(param_4 + 0x18));
        }
        puVar4 = Unity_Services_CloudSave_Internal_Http_JsonObject_var;
        puVar3 = PTR_DAT_03cc0698;
        if (plVar6 != (long *)0x0) {
          if (0 < (int)plVar6[3]) {
            uVar22 = 0;
            do {
              lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar3,uVar11);
              FUN_0366cc40(lVar10,0);
              if ((lVar10 != 0) &&
                 (lVar8 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_03072888:
                uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar11,0);
              }
              if (*(uint *)(plVar6 + 3) <= uVar22) {
LAB_03072880:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar8 = (long)(int)uVar22;
              plVar20 = plVar6 + lVar8 + 4;
              *plVar20 = lVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20,lVar10);
              if (plVar7 == (long *)0x0) goto LAB_03072884;
              if (*(uint *)(plVar7 + 3) <= uVar22) goto LAB_03072880;
              iVar5 = 0;
              while( true ) {
                lVar10 = plVar7[lVar8 + 4];
                if (lVar10 == 0) goto LAB_03072884;
                if (*(int *)(lVar10 + 0x18) <= iVar5) break;
                if (*(uint *)(plVar6 + 3) <= uVar22) goto LAB_03072880;
                lVar18 = *plVar20;
                FUN_02215a88(lVar10,iVar5,&local_90,*(undefined8 *)puVar4);
                if (lVar18 == 0) goto LAB_03072884;
                uStack_fc = CONCAT44(local_78,uStack_7c);
                uStack_108 = uStack_88;
                local_110 = local_90;
                uStack_104 = uStack_84;
                uStack_100 = local_80;
                FUN_0366c440(lVar18,&local_110,0);
                iVar5 = iVar5 + 1;
                if (*(uint *)(plVar7 + 3) <= uVar22) goto LAB_03072880;
              }
              if ((*(uint *)(param_3 + 0x18) <= uVar22) || (*(uint *)(plVar6 + 3) <= uVar22))
              goto LAB_03072880;
              if (param_1 == 0) goto LAB_03072884;
              FUN_0365234c(param_1,param_2,param_7,*(undefined8 *)(param_3 + lVar8 * 8 + 0x20),
                           *plVar20,0);
              uVar22 = uVar22 + 1;
              uVar11 = extraout_x1_03;
            } while ((int)uVar22 < (int)plVar6[3]);
          }
          return;
        }
      }
    }
  }
LAB_03072884:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


