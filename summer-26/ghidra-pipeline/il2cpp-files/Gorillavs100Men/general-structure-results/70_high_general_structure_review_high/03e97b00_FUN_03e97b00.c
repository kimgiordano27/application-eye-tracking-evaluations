/*
FUNCTION_NAME: FUN_03e97b00
ENTRY_POINT: 03e97b00
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 FUN_03e97b00(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined4 uVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  uint uVar34;
  undefined8 uVar35;
  uint *puVar36;
  undefined1 auVar37 [16];
  int local_170;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  if ((DAT_049226f5 & 1) == 0) {
    FUN_020612a4(StringLiteral_8880);
    FUN_020612a4(PTR_DAT_046b2248);
    FUN_020612a4(PTR_DAT_046bccf0);
    FUN_020612a4(PTR_DAT_046b2278);
    FUN_020612a4(PTR_DAT_046bcc38);
    FUN_020612a4(PTR_DAT_046a60d8);
    FUN_020612a4(PTR_DAT_046bc9e8);
    FUN_020612a4(PTR_DAT_046bccf8);
    FUN_020612a4(PTR_DAT_046bcd00);
    FUN_020612a4(PTR_DAT_046bcd08);
    FUN_020612a4(PTR_DAT_046bcd10);
    FUN_020612a4(PTR_DAT_046bcd18);
    FUN_020612a4(StringLiteral_12279);
    FUN_020612a4(StringLiteral_8766);
    FUN_020612a4(StringLiteral_8731);
    FUN_020612a4(PTR_DAT_046bcd20);
    FUN_020612a4(PTR_DAT_046bcc78);
    FUN_020612a4(PTR_DAT_046bcd28);
    FUN_020612a4(PTR_DAT_046bca00);
    FUN_020612a4(PTR_DAT_046bca10);
    FUN_020612a4(PTR_DAT_046bca18);
    FUN_020612a4(PTR_DAT_046bcd30);
    FUN_020612a4(PTR_DAT_046bcd38);
    FUN_020612a4(PTR_DAT_046bcd40);
    FUN_020612a4(PTR_DAT_046bca38);
    FUN_020612a4(PTR_DAT_046bca40);
    FUN_020612a4(PTR_DAT_046bca88);
    FUN_020612a4(PTR_DAT_046bcaa0);
    FUN_020612a4(PTR_DAT_046bcab8);
    FUN_020612a4(PTR_DAT_046bcd48);
    FUN_020612a4(PTR_DAT_046bcd50);
    FUN_020612a4(PTR_DAT_046bcd58);
    FUN_020612a4(PTR_DAT_046bcd60);
    DAT_049226f5 = 1;
  }
  puVar6 = PTR_DAT_046bcaa0;
  local_64[0] = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84 = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)(param_1 + 0x292) = 0;
  plVar19 = (long *)PTR_DAT_046bcab8;
  *(undefined2 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x280);
  FUN_03efc22c(param_1 + 0x288,0);
  puVar5 = PTR_DAT_046bca88;
  if ((*(byte *)(param_1 + 0x284) & 1) == 0) {
    uVar30 = *(undefined4 *)(param_1 + 0x238);
  }
  else {
    uVar30 = 700;
  }
  uVar23 = *(undefined8 *)puVar6;
  *(undefined4 *)(param_1 + 0x23c) = uVar30;
  FUN_02ad9da4(param_1 + 0x240,uVar30,uVar23);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  thunk_FUN_020ccb58(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  thunk_FUN_020ccb58(param_1 + 0x118);
  lVar15 = *plVar19;
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar30 = 0;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_020b5864(lVar15,0);
    uVar30 = *(undefined4 *)(param_1 + 0x120);
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_03e92f58(*(undefined4 *)(param_1 + 0x630),&local_c0,uVar30,*(undefined8 *)(param_1 + 0x100),0,
               *(undefined8 *)(param_1 + 0x118));
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_120 = local_90;
  FUN_02ada3d4(*(long *)(*plVar19 + 0xb8) + 0x10,&local_150,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_046bca38;
  lVar15 = *(long *)(*(long *)(*plVar19 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_03e99f6c;
  FUN_02e6cb24(lVar15,*(undefined8 *)PTR_DAT_046b2248);
  FUN_03e9311c(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*plVar19 + 0xb8),*(undefined8 *)(*(long *)(*plVar19 + 0xb8) + 8));
  plVar1 = (long *)(param_1 + 0x3a0);
  if (*(long *)(param_1 + 0x3a0) == 0) {
    uVar30 = *(undefined4 *)(param_1 + 0x490);
    uVar23 = thunk_FUN_02094760(*(undefined8 *)puVar5);
    FUN_03efa828(uVar23,uVar30,0);
    *(undefined8 *)(param_1 + 0x3a0) = uVar23;
    thunk_FUN_020ccb58(plVar1,uVar23);
  }
  else {
    plVar31 = (long *)(*(long *)(param_1 + 0x3a0) + 0x38);
    lVar15 = *plVar31;
    if (lVar15 == 0) goto LAB_03e99f6c;
    iVar8 = *(int *)(param_1 + 0x490);
    if (*(int *)(lVar15 + 0x18) < iVar8) {
      if (*(int *)(*(long *)PTR_DAT_046bca38 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      FUN_025d5400(plVar31,iVar8,0,*(undefined8 *)PTR_DAT_046bcd30);
    }
  }
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (*(int *)(param_1 + 0x310) == 1) {
    FUN_03edbb28(param_1,*(undefined8 *)(param_1 + 0x100),0);
    puVar5 = PTR_DAT_046bca10;
    if (*(long *)(param_1 + 0x668) == 0) {
      *(undefined4 *)(param_1 + 0x310) = 3;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar16 = FUN_03ef1348(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
        uVar23 = thunk_FUN_040cfa2c(*(long *)(param_1 + 0x100),0);
        uVar23 = FUN_03738350(*(undefined8 *)PTR_DAT_046bcd58,uVar23,*(undefined8 *)PTR_DAT_046bcd60
                              ,0);
        if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
          thunk_FUN_020b5864(*(long *)StringLiteral_8880);
        }
        FUN_0408ce2c(uVar23,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x670) == 0) goto LAB_03e99f6c;
      iVar8 = FUN_040cf77c(*(long *)(param_1 + 0x670),0);
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
      iVar9 = FUN_040cf77c(*(long *)(param_1 + 0x100),0);
      if (iVar8 != iVar9) {
        if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar16 = FUN_03ef1868(0);
        if ((uVar16 & 1) == 0) {
LAB_03e97f40:
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_03e99f6c;
          uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
          *(undefined8 *)(param_1 + 0x678) = uVar23;
        }
        else {
          if (*(long *)(param_1 + 0x118) == 0) goto LAB_03e99f6c;
          iVar8 = FUN_040cf77c(*(long *)(param_1 + 0x118),0);
          if ((*(long *)(param_1 + 0x670) == 0) ||
             (lVar15 = *(long *)(*(long *)(param_1 + 0x670) + 0x88), lVar15 == 0))
          goto LAB_03e99f6c;
          iVar9 = FUN_040cf77c(lVar15,0);
          if (iVar8 == iVar9) goto LAB_03e97f40;
          if (*(long *)(param_1 + 0x670) == 0) goto LAB_03e99f6c;
          uVar23 = *(undefined8 *)(param_1 + 0x118);
          uVar32 = *(undefined8 *)(*(long *)(param_1 + 0x670) + 0x88);
          if (*(int *)(*(long *)PTR_DAT_046bcd28 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          uVar23 = FUN_03eec82c(uVar23,uVar32,0);
          *(undefined8 *)(param_1 + 0x678) = uVar23;
        }
        thunk_FUN_020ccb58(param_1 + 0x678,uVar23);
        lVar15 = *plVar19;
        uVar23 = *(undefined8 *)(param_1 + 0x678);
        uVar32 = *(undefined8 *)(param_1 + 0x670);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar15 = *plVar19;
        }
        uVar10 = FUN_03e9311c(uVar23,uVar32,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        lVar15 = *plVar19;
        *(uint *)(param_1 + 0x680) = uVar10;
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_03e99f6c;
        if (*(uint *)(lVar15 + 0x18) <= uVar10) {

          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          :
                    /* WARNING: Subroutine does not return */
          FUN_02061554();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (*(long *)(param_1 + 0x330) == 0) {
LAB_03e99f6c:
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  uVar10 = FUN_03534f20(*(long *)(param_1 + 0x330),0x6c696761,*(undefined8 *)PTR_DAT_046bc9e8);
  if (*(int *)(param_1 + 0x310) == 6) {
    uVar23 = *(undefined8 *)(param_1 + 0x318);
    if (*(int *)(*(long *)StringLiteral_8731 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar16 = FUN_040ca3b8(uVar23,0,0);
    if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x42d) == '\0')) {
      plVar31 = *(long **)(param_1 + 0x318);
      if (plVar31 == (long *)0x0) goto LAB_03e99f6c;
      (**(code **)(*plVar31 + 0x558))
                (plVar31,**(undefined8 **)(*(long *)(StringLiteral_8735 + 0x90) + 0xb8),
                 *(undefined8 *)(*plVar31 + 0x560));
    }
  }
  if (param_2 == 0) goto LAB_03e99f6c;
  uVar11 = *(uint *)(param_2 + 0x18);
  if ((int)uVar11 < 1) {
    local_170 = 0;
LAB_03e996f8:
    if (*(char *)(param_1 + 0x42d) != '\0') {
      *(undefined1 *)(param_1 + 0x42d) = 0;
LAB_03e99704:
      return *(undefined4 *)(param_1 + 0x4a0);
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      lVar26 = *plVar19;
      *(int *)(lVar15 + 0x1c) = local_170;
      puVar5 = PTR_DAT_046bca38;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar26 = *plVar19;
      }
      lVar26 = *(long *)(*(long *)(lVar26 + 0xb8) + 8);
      if (lVar26 != 0) {
        uVar10 = FUN_02e6c79c(lVar26,*(undefined8 *)PTR_DAT_046bcc38);
        *(uint *)(lVar15 + 0x34) = uVar10;
        if (*plVar1 != 0) {
          plVar31 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar31;
          if (lVar15 != 0) {
            if (*(int *)(lVar15 + 0x18) < (int)uVar10) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_020b5864();
              }
              FUN_025d54ac(plVar31,(ulong)uVar10,0,*(undefined8 *)PTR_DAT_046bcd38);
            }
            if (*(long *)(param_1 + 0x720) != 0) {
              plVar31 = (long *)(param_1 + 0x720);
              if (*(int *)(*(long *)(param_1 + 0x720) + 0x18) < (int)uVar10) {
                uVar11 = uVar10 | (int)uVar10 >> 0x10;
                uVar11 = uVar11 | (int)uVar11 >> 8;
                uVar11 = uVar11 | (int)uVar11 >> 4;
                uVar11 = uVar11 | (int)uVar11 >> 2;
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_020b5864();
                }
                FUN_025d51d0(plVar31,(uVar11 | (int)uVar11 >> 1) + 1,*(undefined8 *)PTR_DAT_046bcd40
                            );
              }
              if (*(char *)(param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_03e99f6c;
                plVar33 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar33;
                if (lVar15 == 0) goto LAB_03e99f6c;
                iVar8 = *(int *)(param_1 + 0x4a0);
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_020b5864();
                  }
                  FUN_025d5400(plVar33,iVar9,1,*(undefined8 *)PTR_DAT_046bcd30);
                }
              }
              puVar5 = PTR_DAT_046bca00;
              if (0 < (int)uVar10) {
                lVar15 = 0;
                uVar16 = 0;
                lVar26 = 0x54;
                lVar17 = 0x20;
                do {
                  if (uVar16 != 0) {
                    lVar24 = *plVar31;
                    if (lVar24 == 0) goto LAB_03e99f6c;
                    if (*(uint *)(lVar24 + 0x18) <= uVar16)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                    ;
                    uVar23 = *(undefined8 *)(lVar24 + uVar16 * 8 + 0x20);
                    if (*(int *)(*(long *)StringLiteral_8731 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    uVar20 = FUN_040cbf6c(uVar23,0,0);
                    if ((uVar20 & 1) != 0) {
                      lVar24 = *plVar19;
                      plVar33 = (long *)*plVar31;
                      if (*(int *)(lVar24 + 0xe4) == 0) {
                        thunk_FUN_020b5864();
                        lVar24 = *plVar19;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = lVar24 + lVar26;
                      local_d0 = *(undefined8 *)(lVar24 + -4);
                      uStack_d8 = *(undefined8 *)(lVar24 + -0xc);
                      uStack_e0 = *(undefined8 *)(lVar24 + -0x14);
                      uStack_f8 = *(undefined8 *)(lVar24 + -0x2c);
                      local_100 = *(undefined8 *)(lVar24 + -0x34);
                      uStack_e8 = *(undefined8 *)(lVar24 + -0x1c);
                      local_f0 = *(undefined8 *)(lVar24 + -0x24);
                      lVar24 = FUN_03ef8394(param_1,&local_100,0);
                      if (plVar33 == (long *)0x0) goto LAB_03e99f6c;
                      if ((lVar24 != 0) &&
                         (lVar21 = thunk_FUN_02094664(lVar24,*(undefined8 *)(*plVar33 + 0x40)),
                         lVar21 == 0)) {
LAB_03e99f74:
                        uVar23 = thunk_FUN_020a1c44();
                    /* WARNING: Subroutine does not return */
                        FUN_02061410(uVar23,0);
                      }
                      if (*(uint *)(plVar33 + 3) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      plVar33[uVar16 + 4] = lVar24;
                      thunk_FUN_020ccb58((long)plVar33 + lVar17,lVar24);
                      if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                      goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      puVar22 = (undefined8 *)(lVar24 + lVar15 + 0x30);
                      *puVar22 = 0;
                      thunk_FUN_020ccb58(puVar22,0);
                    }
                    lVar24 = *plVar31;
                    if (lVar24 == 0) goto LAB_03e99f6c;
                    if (*(uint *)(lVar24 + 0x18) <= uVar16)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                    ;
                    lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                    if (lVar24 == 0) goto LAB_03e99f6c;
                    uVar23 = *(undefined8 *)(lVar24 + 0x38);
                    if (*(int *)(*(long *)StringLiteral_8731 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                    }
                    uVar20 = FUN_040cbf6c(uVar23,0,0);
                    if ((uVar20 & 1) == 0) {
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
                      goto LAB_03e99f6c;
                      iVar8 = FUN_040cf77c(lVar24,0);
                      lVar24 = *plVar19;
                      if (*(int *)(lVar24 + 0xe4) == 0) {
                        thunk_FUN_020b5864(lVar24);
                        lVar24 = *plVar19;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + lVar26 + -0x1c);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      iVar9 = FUN_040cf77c(lVar24,0);
                      if (iVar8 != iVar9) goto LAB_03e99a90;
                    }
                    else {
LAB_03e99a90:
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar21 = *plVar19;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe4) == 0) {
                        thunk_FUN_020b5864();
                        lVar21 = *plVar19;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      thunk_FUN_03ef7ec4(lVar24,*(undefined8 *)(lVar21 + lVar26 + -0x1c),0);
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar21 = **(long **)(*plVar19 + 0xb8);
                      if (lVar21 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(lVar21 + lVar26 + -0x2c);
                      thunk_FUN_020ccb58();
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar21 = **(long **)(*plVar19 + 0xb8);
                      if (lVar21 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(lVar21 + lVar26 + -0x24);
                      thunk_FUN_020ccb58();
                    }
                    lVar24 = *plVar19;
                    if (*(int *)(lVar24 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                      lVar24 = *plVar19;
                    }
                    lVar21 = **(long **)(lVar24 + 0xb8);
                    if (lVar21 == 0) goto LAB_03e99f6c;
                    if (*(uint *)(lVar21 + 0x18) <= uVar16)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                    ;
                    if (*(char *)(lVar21 + lVar26 + -0x13) != '\0') {
                      lVar27 = *plVar31;
                      if (lVar27 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar27 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar27 = *(long *)(lVar27 + uVar16 * 8 + 0x20);
                      if (*(int *)(lVar24 + 0xe4) == 0) {
                        thunk_FUN_020b5864();
                        lVar21 = **(long **)(*plVar19 + 0xb8);
                        if (lVar21 == 0) goto LAB_03e99f6c;
                      }
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      if (lVar27 == 0) goto LAB_03e99f6c;
                      FUN_03ef7ef4(lVar27,*(undefined8 *)(lVar21 + lVar26 + -0x1c),0);
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar21 = **(long **)(*plVar19 + 0xb8);
                      if (lVar21 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      *(undefined8 *)(lVar24 + 0x48) = *(undefined8 *)(lVar21 + lVar26 + -0xc);
                      thunk_FUN_020ccb58();
                    }
                  }
                  lVar24 = *plVar19;
                  if (*(int *)(lVar24 + 0xe4) == 0) {
                    thunk_FUN_020b5864();
                    lVar24 = *plVar19;
                  }
                  lVar24 = **(long **)(lVar24 + 0xb8);
                  if (lVar24 == 0) goto LAB_03e99f6c;
                  if (*(uint *)(lVar24 + 0x18) <= uVar16)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                  ;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_03e99f6c;
                  if (*(uint *)(lVar21 + 0x18) <= uVar16)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                  ;
                  lVar27 = lVar21 + lVar15;
                  uVar11 = *(uint *)(lVar24 + lVar26);
                  if (*(long *)(lVar27 + 0x30) == 0) {
                    if (uVar16 == 0) {
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_03eed360(&local_150,*(undefined8 *)(param_1 + 0x3d8),uVar11 + 1,0);
                      if (*(int *)(lVar21 + 0x18) == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                    }
                    else {
                      lVar24 = *plVar31;
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar24 = *(long *)(lVar24 + uVar16 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_03e99f6c;
                      uVar23 = FUN_03ef8230(lVar24,0);
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_03eed360(&local_150,uVar23,uVar11 + 1,0);
                      if (*(uint *)(lVar21 + 0x18) <= uVar16)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                      lVar21 = lVar21 + lVar15;
                    }
                    memmove((void *)(lVar21 + 0x20),&local_150,0x50);
                    thunk_FUN_020ccb58(lVar27 + 0x20,0);
                  }
                  else {
                    iVar8 = *(int *)(*(long *)(lVar27 + 0x30) + 0x18);
                    if (iVar8 < (int)(uVar11 * 4)) {
                      if ((int)uVar11 < 0x401) {
                        uVar11 = uVar11 | (int)uVar11 >> 0x10;
                        uVar11 = uVar11 | (int)uVar11 >> 8;
                        uVar11 = uVar11 | (int)uVar11 >> 4;
                        uVar11 = uVar11 | (int)uVar11 >> 2;
                        uVar11 = uVar11 | (int)uVar11 >> 1;
LAB_03e99dac:
                        iVar8 = uVar11 + 1;
                      }
                      else {
LAB_03e99cd8:
                        iVar8 = uVar11 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_020b5864();
                      }
                      FUN_03eee13c(lVar27 + 0x20,iVar8,0);
                    }
                    else if ((*(char *)(param_1 + 0x359) != '\0') && (0 < (int)uVar11)) {
                      iVar9 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar9 = iVar8;
                      }
                      if (0x100 < (int)((iVar9 >> 2) - uVar11)) {
                        if (uVar11 < 0x401) {
                          uVar11 = uVar11 >> 4 | uVar11 >> 8 | uVar11;
                          uVar11 = uVar11 | uVar11 >> 2;
                          uVar11 = uVar11 | uVar11 >> 1;
                          goto LAB_03e99dac;
                        }
                        goto LAB_03e99cd8;
                      }
                    }
                  }
                  plVar19 = (long *)PTR_DAT_046bcab8;
                  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                  goto LAB_03e99f6c;
                  lVar21 = *(long *)PTR_DAT_046bcab8;
                  if (*(int *)(lVar21 + 0xe4) == 0) {
                    thunk_FUN_020b5864();
                    lVar21 = *plVar19;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_03e99f6c;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar16) || (*(uint *)(lVar24 + 0x18) <= uVar16))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                  ;
                  *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar21 + lVar26 + -0x1c)
                  ;
                  thunk_FUN_020ccb58();
                  uVar16 = uVar16 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar26 = lVar26 + 0x38;
                  lVar17 = lVar17 + 8;
                } while (uVar10 != uVar16);
              }
              puVar5 = PTR_DAT_046bca00;
              lVar15 = *plVar31;
              if (lVar15 != 0) {
                lVar17 = (long)(int)uVar10;
                lVar26 = (long)(int)uVar10 * 0x50 + 0x20;
                do {
                  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if ((int)uVar10 <= lVar17) goto LAB_03e99704;
                  if (uVar10 <= (uint)lVar17)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                  ;
                  uVar23 = *(undefined8 *)(lVar15 + lVar17 * 8 + 0x20);
                  if (*(int *)(*(long *)StringLiteral_8731 + 0xe4) == 0) {
                    thunk_FUN_020b5864();
                  }
                  uVar16 = FUN_040ca3b8(uVar23,0,0);
                  if ((uVar16 & 1) == 0) goto LAB_03e99704;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if (lVar17 < (int)uVar10) {
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      thunk_FUN_020b5864();
                      uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
                    }
                    if (uVar10 <= (uint)lVar17)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                    ;
                    FUN_03eef0b4(lVar15 + lVar26,0,1,0);
                  }
                  lVar15 = *plVar31;
                  lVar17 = lVar17 + 1;
                  lVar26 = lVar26 + 0x50;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_03e99f6c;
  }
  uVar34 = 0;
  lVar15 = param_2 + 0x20;
  local_170 = 0;
LAB_03e98148:
  if (uVar11 <= uVar34)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  puVar36 = (uint *)(lVar15 + (long)(int)uVar34 * 0x10 + 4);
  if (*puVar36 == 0) goto LAB_03e996f8;
  if (*plVar1 == 0) goto LAB_03e99f6c;
  plVar31 = (long *)(*plVar1 + 0x38);
  lVar26 = *plVar31;
  iVar8 = *(int *)(param_1 + 0x4a0);
  if ((lVar26 == 0) || (*(int *)(lVar26 + 0x18) <= iVar8)) {
    if (*(int *)(*(long *)PTR_DAT_046bca38 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    FUN_025d5400(plVar31,iVar8 + 1,1,*(undefined8 *)PTR_DAT_046bcd30);
    uVar11 = *(uint *)(param_2 + 0x18);
  }
  if (uVar11 <= uVar34)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  uVar11 = *puVar36;
  uVar30 = *(undefined4 *)(param_1 + 0x120);
  if ((*(char *)(param_1 + 0x33a) != '\0') && (uVar11 == 0x3c)) {
    uVar16 = FUN_03ed117c(param_1,param_2,uVar34 + 1,&local_68,0);
    uVar25 = local_68;
    if ((uVar16 & 1) == 0) {
      uVar30 = *(undefined4 *)(param_1 + 0x120);
      goto LAB_03e983e0;
    }
    if (*(uint *)(param_2 + 0x18) <= uVar34)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    iVar8 = *(int *)(lVar15 + (long)(int)uVar34 * 0x10 + 8);
    if ((*(byte *)(param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x292) = 1;
    }
    uVar34 = local_68;
    if (*(int *)(param_1 + 0x65c) != 1) goto LAB_03e996e0;
    lVar26 = *plVar19;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar26 = *plVar19;
    }
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 != 0) {
      if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar26 + 0x18)) {
        lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
        *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar26 = *(long *)(*plVar1 + 0x38), lVar26 != 0)) {
          if (*(uint *)(param_1 + 0x4a0) < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
            sVar4 = *(short *)(param_1 + 0x6bc);
            *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(param_1 + 0x100);
            *(short *)(lVar26 + 0x24) = sVar4 + -0x2000;
            thunk_FUN_020ccb58();
            if ((*(long *)(param_1 + 0x3a0) != 0) &&
               (lVar26 = *(long *)(*(long *)(param_1 + 0x3a0) + 0x38), lVar26 != 0)) {
              uVar11 = *(uint *)(param_1 + 0x4a0);
              if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                *(undefined4 *)(lVar26 + 0x20 + (long)(int)uVar11 * 0x178 + 0x30) =
                     *(undefined4 *)(param_1 + 0x120);
                if ((*(long *)(param_1 + 0x6b0) != 0) &&
                   (lVar17 = FUN_03ef5318(*(long *)(param_1 + 0x6b0),0), lVar17 != 0)) {
                  uVar23 = FUN_034a2698(lVar17,*(undefined4 *)(param_1 + 0x6bc),
                                        *(undefined8 *)PTR_DAT_046bcd10);
                  if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                    *(undefined8 *)(lVar26 + 0x20 + (long)(int)uVar11 * 0x178 + 0x10) = uVar23;
                    thunk_FUN_020ccb58();
                    if ((*plVar1 != 0) && (lVar26 = *(long *)(*plVar1 + 0x38), lVar26 != 0)) {
                      uVar11 = *(uint *)(param_1 + 0x4a0);
                      if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                        puVar28 = (undefined4 *)(lVar26 + 0x20 + (long)(int)uVar11 * 0x178);
                        *puVar28 = *(undefined4 *)(param_1 + 0x65c);
                        puVar28[2] = iVar8;
                        if (uVar25 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar26 + 0x20 + (long)(int)uVar11 * 0x178 + 0xc) =
                               (*(int *)(lVar15 + (long)(int)uVar25 * 0x10 + 8) - iVar8) + 1;
                          *(undefined4 *)(param_1 + 0x65c) = 0;
                          *(undefined4 *)(param_1 + 0x120) = uVar30;
                          uVar34 = uVar25;
                          goto LAB_03e991dc;
                        }
                      }
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                      ;
                    }
                    goto LAB_03e99f6c;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
                  ;
                }
                goto LAB_03e99f6c;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
              ;
            }
            goto LAB_03e99f6c;
          }
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
        }
        goto LAB_03e99f6c;
      }
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
      ;
    }
    goto LAB_03e99f6c;
  }
LAB_03e983e0:
  uVar32 = *(undefined8 *)(param_1 + 0x100);
  uVar23 = *(undefined8 *)(param_1 + 0x118);
  local_64[0] = 0;
  if (*(int *)(param_1 + 0x65c) != 0) goto LAB_03e984b4;
  uVar25 = *(uint *)(param_1 + 0x284);
  if ((uVar25 >> 4 & 1) == 0) {
    if ((uVar25 >> 3 & 1) == 0) {
      if ((uVar25 >> 5 & 1) != 0) goto LAB_03e98408;
    }
    else {
      if (*(int *)(*(long *)(StringLiteral_8735 + 0x88) + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar16 = FUN_03750ac0(uVar11,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)(StringLiteral_8735 + 0x88) + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar11 = FUN_03750f60(uVar11,0);
        goto LAB_03e984b0;
      }
    }
  }
  else {
LAB_03e98408:
    if (*(int *)(*(long *)(StringLiteral_8735 + 0x88) + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar16 = FUN_03750b60(uVar11,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)(StringLiteral_8735 + 0x88) + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar11 = FUN_03750de8(uVar11,0);
LAB_03e984b0:
      uVar11 = uVar11 & 0xffff;
    }
  }
LAB_03e984b4:
  uVar25 = uVar34 + 1;
  if ((int)uVar25 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar25)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    uVar29 = *(uint *)(lVar15 + (long)(int)uVar25 * 0x10 + 4);
  }
  else {
    uVar29 = 0;
  }
  uVar12 = uVar11;
  if (*(char *)(param_1 + 0x33b) == '\0') {
LAB_03e98640:
    lVar26 = UnityEngine_XR_Interaction_Toolkit_Interactables_Visuals_XRTintInteractableVisual___cctor
                       (param_1,uVar11,*(undefined8 *)(param_1 + 0x100),
                        *(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x23c),local_64,0
                       );
    if (lVar26 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar34)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
      ;
      FUN_03edc588(param_1,uVar11,*(undefined4 *)(lVar15 + (long)(int)uVar34 * 0x10 + 8),
                   *(undefined8 *)(param_1 + 0x100),0);
      if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      iVar8 = FUN_03ef1230(0);
      bVar7 = *(uint *)(param_2 + 0x18) <= uVar34;
      if (iVar8 == 0) {
        if (bVar7)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
        ;
        uVar12 = 0x25a1;
      }
      else {
        if (bVar7)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
        ;
        if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar12 = FUN_03ef1230(0);
      }
      *puVar36 = uVar12;
      uVar35 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      lVar26 = FUN_03eb946c(uVar12,uVar35,1,0,400,local_64,0);
      if (lVar26 == 0) {
        if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        lVar26 = FUN_03ef17a8(0);
        if (lVar26 != 0) {
          if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          lVar26 = FUN_03ef17a8(0);
          if (lVar26 == 0) goto LAB_03e99f6c;
          if (0 < *(int *)(lVar26 + 0x18)) {
            uVar35 = *(undefined8 *)(param_1 + 0x100);
            if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
              thunk_FUN_020b5864();
            }
            uVar18 = FUN_03ef17a8(0);
            if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
              thunk_FUN_020b5864(*(long *)PTR_DAT_046bcd20);
            }
            lVar26 = FUN_03eb9bb0(uVar12,uVar35,uVar18,1,0,400,local_64,0);
            if (lVar26 != 0) goto LAB_03e987fc;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar35 = FUN_03ef13a4(0);
        if (*(int *)(*(long *)StringLiteral_8731 + 0xe4) == 0) {
          thunk_FUN_020b5864(*(long *)StringLiteral_8731);
        }
        uVar16 = FUN_040ca3b8(uVar35,0,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          uVar35 = FUN_03ef13a4(0);
          if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
            thunk_FUN_020b5864(*(long *)PTR_DAT_046bcd20);
          }
          lVar26 = FUN_03eb946c(uVar12,uVar35,1,0,400,local_64,0);
          if (lVar26 != 0) goto LAB_03e987fc;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar34)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
        ;
        *puVar36 = 0x20;
        uVar35 = *(undefined8 *)(param_1 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar12 = 0x20;
        lVar26 = FUN_03eb946c(0x20,uVar35,1,0,400,local_64,0);
        if (lVar26 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar34)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          *puVar36 = 3;
          uVar35 = *(undefined8 *)(param_1 + 0x100);
          if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          uVar12 = 3;
          lVar26 = FUN_03eb946c(3,uVar35,1,0,400,local_64,0);
        }
      }
LAB_03e987fc:
      if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar16 = FUN_03ef1348(0);
      if ((uVar16 & 1) == 0) {
        plVar19 = (long *)RootMotion_Dynamics_Muscle__get_colliders
                                    (*(undefined8 *)StringLiteral_8766,4);
        if (uVar11 >> 0x10 == 0) {
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar17 = thunk_FUN_02094398(*(undefined8 *)(StringLiteral_8735 + 0x50),&local_150);
          if (plVar19 == (long *)0x0) goto LAB_03e99f6c;
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((int)plVar19[3] == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[4] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 4,lVar17);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e99f6c;
          lVar17 = thunk_FUN_040cfa2c(*(long *)(param_1 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[5] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 5,lVar17);
          if (lVar26 == 0) goto LAB_03e99f6c;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar26 + 0x14));
          lVar17 = thunk_FUN_02094398(*(undefined8 *)(StringLiteral_8735 + 0x50),&local_c0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if (*(uint *)(plVar19 + 3) < 3)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[6] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 6,lVar17);
          lVar17 = thunk_FUN_040cfa2c(param_1,0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[7] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 7,lVar17);
          puVar22 = (undefined8 *)PTR_DAT_046bcd50;
        }
        else {
          local_150 = CONCAT44(local_150._4_4_,uVar11);
          lVar17 = thunk_FUN_02094398(*(undefined8 *)(StringLiteral_8735 + 0x50),&local_150);
          if (plVar19 == (long *)0x0) goto LAB_03e99f6c;
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((int)plVar19[3] == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[4] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 4,lVar17);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e99f6c;
          lVar17 = thunk_FUN_040cfa2c(*(long *)(param_1 + 0xf8),0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[5] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 5,lVar17);
          if (lVar26 == 0) goto LAB_03e99f6c;
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar26 + 0x14));
          lVar17 = thunk_FUN_02094398(*(undefined8 *)(StringLiteral_8735 + 0x50),&local_c0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if (*(uint *)(plVar19 + 3) < 3)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[6] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 6,lVar17);
          lVar17 = thunk_FUN_040cfa2c(param_1,0);
          if ((lVar17 != 0) &&
             (lVar24 = thunk_FUN_02094664(lVar17,*(undefined8 *)(*plVar19 + 0x40)), lVar24 == 0))
          goto LAB_03e99f74;
          if ((*(uint *)(plVar19 + 3) & 0xfffffffc) == 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          plVar19[7] = lVar17;
          thunk_FUN_020ccb58(plVar19 + 7,lVar17);
          puVar22 = (undefined8 *)PTR_DAT_046bcd48;
        }
        uVar35 = FUN_03738cb4(*puVar22,plVar19,0);
        plVar19 = (long *)PTR_DAT_046bcab8;
        if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        FUN_0408ce2c(uVar35,param_1,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_046bca40 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar16 = FUN_03efbb9c(uVar11,0);
    if (((uVar16 & 1) == 0) || (uVar29 == 0xfe0e)) {
      if (*(int *)(*(long *)PTR_DAT_046bca40 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar16 = FUN_03efbb1c(uVar11,0);
      if (((uVar16 & 1) == 0) || (uVar29 != 0xfe0f)) goto LAB_03e98640;
    }
    if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    lVar26 = FUN_03ef1bb8(0);
    if (lVar26 == 0) goto LAB_03e98640;
    if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    lVar26 = FUN_03ef1bb8(0);
    if (lVar26 == 0) goto LAB_03e99f6c;
    if (*(int *)(lVar26 + 0x18) < 1) goto LAB_03e98640;
    uVar35 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar18 = FUN_03ef1bb8(0);
    uVar14 = *(undefined4 *)(param_1 + 0x280);
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    if (*(int *)(*(long *)PTR_DAT_046bcd20 + 0xe4) == 0) {
      thunk_FUN_020b5864(*(long *)PTR_DAT_046bcd20);
    }
    lVar26 = FUN_03eb9dcc(uVar11,uVar35,uVar18,1,uVar14,uVar2,local_64,0);
    plVar19 = (long *)PTR_DAT_046bcab8;
    if (lVar26 == 0) goto LAB_03e98640;
  }
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_03e99f6c;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0))
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  puVar22 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38);
  *puVar22 = 0;
  thunk_FUN_020ccb58(puVar22,0);
  if (lVar26 == 0) goto LAB_03e99f6c;
  if (*(char *)(lVar26 + 0x10) == '\x01') {
    if (*(long *)(lVar26 + 0x18) == 0) goto LAB_03e99f6c;
    iVar8 = FUN_03ea4ffc(*(long *)(lVar26 + 0x18),0);
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
    iVar9 = FUN_03ea4ffc(*(long *)(param_1 + 0x100),0);
    bVar7 = iVar8 != iVar9;
    if (bVar7) {
      plVar31 = *(long **)(lVar26 + 0x18);
      if (plVar31 == (long *)0x0) {
        plVar31 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
      else {
        lVar17 = *(long *)PTR_DAT_046bcc78;
        bVar3 = *(byte *)(lVar17 + 0x130);
        if (*(byte *)(*plVar31 + 0x130) < bVar3) {
          plVar33 = (long *)0x0;
        }
        else {
          plVar33 = plVar31;
          if (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
            plVar33 = (long *)0x0;
          }
        }
        *(long **)(param_1 + 0x100) = plVar33;
        if (*(byte *)(*plVar31 + 0x130) < bVar3) {
          plVar31 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
          plVar31 = (long *)0x0;
        }
      }
      thunk_FUN_020ccb58(param_1 + 0x100,plVar31);
    }
    if ((uVar29 >> 4 == 0xfe0) || (uVar29 - 0xe0100 < 0xf0)) {
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
      iVar8 = FUN_03eb285c(*(long *)(param_1 + 0x100),uVar12,uVar29,0);
      if (iVar8 != 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
        uVar16 = FUN_03eb4c90(*(long *)(param_1 + 0x100),iVar8,&local_78,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
          goto LAB_03e99f6c;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0))
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) = local_78;
          thunk_FUN_020ccb58();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar25)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
      ;
      *(undefined4 *)(lVar15 + (long)(int)uVar25 * 0x10 + 4) = 0x1a;
      uVar34 = uVar25;
    }
    if ((uVar10 & 1) != 0) {
      if (((*(long *)(param_1 + 0x100) == 0) ||
          (lVar17 = *(long *)(*(long *)(param_1 + 0x100) + 0x178), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_03e99f6c;
      uVar16 = FUN_02f3e4c4(lVar17,*(undefined4 *)(lVar26 + 0x28),&local_70,
                            *(undefined8 *)PTR_DAT_046bccf0);
      if ((uVar16 & 1) == 0) goto LAB_03e99054;
      if (local_70 == 0) goto LAB_03e996f8;
      iVar8 = 0;
      while (iVar8 < *(int *)(local_70 + 0x18)) {
        auVar37 = FUN_03478a90(local_70,iVar8,*(undefined8 *)PTR_DAT_046bcd18);
        lVar17 = auVar37._0_8_;
        if (lVar17 == 0) goto LAB_03e99f6c;
        uVar16 = *(ulong *)(lVar17 + 0x18);
        iVar9 = (int)uVar16;
        if (1 < iVar9) {
          lVar24 = 0;
          do {
            uVar11 = uVar34 + 1 + (int)lVar24;
            if (*(uint *)(param_2 + 0x18) <= uVar11)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
            ;
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
            iVar13 = FUN_03eb2780(*(long *)(param_1 + 0x100),
                                  *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4),0);
            if (*(uint *)(lVar17 + 0x18) <= (int)lVar24 + 1U)
            goto 
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
            ;
            if (iVar13 != *(int *)(lVar17 + 0x24 + lVar24 * 4)) goto LAB_03e98f70;
            lVar24 = lVar24 + 1;
          } while (iVar9 + -1 != (int)lVar24);
        }
        if (auVar37._8_4_ != 0) {
          if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
          uVar20 = FUN_03eb4c90(*(long *)(param_1 + 0x100),auVar37._8_8_ & 0xffffffff,&local_80,0);
          if ((uVar20 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0))
            goto LAB_03e99f6c;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0))
            goto 
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
            ;
            *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x38) =
                 local_80;
            thunk_FUN_020ccb58();
            plVar19 = (long *)PTR_DAT_046bcab8;
            if (iVar9 < 1) goto LAB_03e9904c;
            uVar20 = 0;
            goto LAB_03e99008;
          }
        }
LAB_03e98f70:
        iVar8 = iVar8 + 1;
        plVar19 = (long *)PTR_DAT_046bcab8;
        if (local_70 == 0) goto LAB_03e99f6c;
      }
    }
  }
  else {
    bVar7 = false;
  }
  goto LAB_03e99054;
LAB_03e99008:
  do {
    if (uVar20 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar34)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
      ;
      *(int *)(lVar15 + (long)(int)uVar34 * 0x10 + 0xc) = iVar9;
    }
    else {
      uVar11 = uVar34 + (int)uVar20;
      if (*(uint *)(param_2 + 0x18) <= uVar11)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
      ;
      *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x10 + 4) = 0x1a;
    }
    uVar20 = uVar20 + 1;
  } while ((uVar16 & 0xffffffff) != uVar20);
LAB_03e9904c:
  uVar34 = (uVar34 + iVar9) - 1;
LAB_03e99054:
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_03e99f6c;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x4a0))
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  lVar17 = lVar17 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178;
  plVar31 = (long *)(lVar17 + 0x30);
  *plVar31 = lVar26;
  *(undefined4 *)(lVar17 + 0x20) = 0;
  thunk_FUN_020ccb58(plVar31,lVar26);
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x38), lVar17 == 0)) goto LAB_03e99f6c;
  uVar11 = *(uint *)(param_1 + 0x4a0);
  if (*(uint *)(lVar17 + 0x18) <= uVar11)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  lVar24 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  *(undefined1 *)(lVar24 + 0x34) = local_64[0];
  *(short *)(lVar24 + 4) = (short)uVar12;
  if (*(uint *)(param_2 + 0x18) <= uVar34)
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  lVar17 = lVar17 + 0x20 + (long)(int)uVar11 * 0x178;
  uVar35 = *(undefined8 *)(lVar15 + (long)(int)uVar34 * 0x10 + 8);
  *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(lVar17 + 8) = uVar35;
  thunk_FUN_020ccb58();
  if (*(char *)(lVar26 + 0x10) == '\x02') {
    plVar31 = *(long **)(lVar26 + 0x18);
    if (plVar31 == (long *)0x0) goto LAB_03e99f6c;
    bVar3 = *(byte *)(*(long *)PTR_DAT_046bca18 + 0x130);
    if ((*(byte *)(*plVar31 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_046bca18))
    goto LAB_03e99f6c;
    lVar26 = *plVar19;
    lVar17 = plVar31[0x11];
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar26 = *plVar19;
    }
    uVar11 = FUN_03e93358(lVar17,plVar31,*(long *)(lVar26 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 8));
    lVar26 = *plVar19;
    *(uint *)(param_1 + 0x120) = uVar11;
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 == 0) goto LAB_03e99f6c;
    if (*(uint *)(lVar26 + 0x18) <= uVar11)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    lVar26 = lVar26 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar26 = *(long *)(*plVar1 + 0x38), lVar26 == 0)) goto LAB_03e99f6c;
    uVar11 = *(uint *)(param_1 + 0x4a0);
    if (*(uint *)(lVar26 + 0x18) <= uVar11)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    lVar26 = lVar26 + (long)(int)uVar11 * 0x178;
    *(undefined4 *)(lVar26 + 0x20) = 1;
    *(undefined4 *)(lVar26 + 0x50) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x120) = uVar30;
LAB_03e991dc:
    local_170 = local_170 + 1;
    goto LAB_03e996d8;
  }
  if (bVar7) {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
    iVar8 = FUN_03ea4ffc(*(long *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03e99f6c;
    iVar9 = FUN_03ea4ffc(*(long *)(param_1 + 0xf8),0);
    if (iVar8 != iVar9) {
      if (*(int *)(*(long *)PTR_DAT_046bca10 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar16 = FUN_03ef1868(0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
        uVar35 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x88);
      }
      else {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_03e99f6c;
        uVar35 = *(undefined8 *)(param_1 + 0x118);
        uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x88);
        if (*(int *)(*(long *)PTR_DAT_046bcd28 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar35 = FUN_03eec82c(uVar35,uVar18,0);
      }
      *(undefined8 *)(param_1 + 0x118) = uVar35;
      thunk_FUN_020ccb58(param_1 + 0x118);
      lVar17 = *plVar19;
      uVar35 = *(undefined8 *)(param_1 + 0x118);
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar17 = *plVar19;
      }
      uVar14 = FUN_03e9311c(uVar35,uVar18,*(long *)(lVar17 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x120) = uVar14;
    }
  }
  if (*(long *)(lVar26 + 0x20) == 0) goto LAB_03e99f6c;
  iVar8 = FUN_041733f4(*(long *)(lVar26 + 0x20),0);
  if (0 < iVar8) {
    if (*(long *)(lVar26 + 0x20) == 0) goto LAB_03e99f6c;
    uVar35 = *(undefined8 *)(param_1 + 0x100);
    uVar18 = *(undefined8 *)(param_1 + 0x118);
    uVar14 = FUN_041733f4(*(long *)(lVar26 + 0x20),0);
    if (*(int *)(*(long *)PTR_DAT_046bcd28 + 0xe4) == 0) {
      thunk_FUN_020b5864(*(long *)PTR_DAT_046bcd28);
    }
    uVar35 = FUN_03eec2a8(uVar35,uVar18,uVar14,0);
    *(undefined8 *)(param_1 + 0x118) = uVar35;
    thunk_FUN_020ccb58(param_1 + 0x118,uVar35);
    lVar26 = *plVar19;
    uVar35 = *(undefined8 *)(param_1 + 0x118);
    uVar18 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar26 = *plVar19;
    }
    uVar14 = FUN_03e9311c(uVar35,uVar18,*(long *)(lVar26 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 8));
    bVar7 = true;
    *(undefined4 *)(param_1 + 0x120) = uVar14;
  }
  if (*(int *)(*(long *)(StringLiteral_8735 + 0x88) + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar16 = FUN_0374e5e0(uVar12,0);
  if (((uVar16 & 1) == 0) && (uVar12 != 0x200b)) {
    lVar26 = *plVar19;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar26 = *plVar19;
    }
    lVar17 = **(long **)(lVar26 + 0xb8);
    if (lVar17 == 0) goto LAB_03e99f6c;
    uVar11 = *(uint *)(param_1 + 0x120);
    if (*(uint *)(lVar17 + 0x18) <= uVar11)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    if (*(int *)(lVar17 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        plVar31 = *(long **)(*plVar19 + 0xb8);
        goto LAB_03e99528;
      }
LAB_03e99530:
      uVar11 = *(uint *)(param_1 + 0x120);
      uVar25 = *(uint *)(lVar17 + 0x18);
    }
    else {
      if (bVar7) {
        if (*(long *)(param_1 + 0x780) == 0) goto LAB_03e99f6c;
        uVar16 = FUN_02e6e310(*(long *)(param_1 + 0x780),(long)(int)uVar11,&local_84,
                              *(undefined8 *)PTR_DAT_046b2278);
        if ((uVar16 & 1) == 0) {
LAB_03e99478:
          uVar18 = *(undefined8 *)(param_1 + 0x118);
          uVar35 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_12279);
          FUN_0409e808(uVar35,uVar18,0);
          lVar26 = *plVar19;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_020b5864();
            lVar26 = *plVar19;
          }
          uVar11 = FUN_03e9311c(uVar35,uVar18,*(long *)(lVar26 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 8));
          if (*(long *)(param_1 + 0x780) == 0) goto LAB_03e99f6c;
          FUN_02e6c990(*(long *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x120),uVar11,
                       *(undefined8 *)PTR_DAT_046a60d8);
          lVar26 = *plVar19;
        }
        else {
          lVar26 = *plVar19;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_020b5864();
            lVar26 = *plVar19;
          }
          lVar17 = **(long **)(lVar26 + 0xb8);
          if (lVar17 == 0) goto LAB_03e99f6c;
          if (*(uint *)(lVar17 + 0x18) <= local_84)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
          ;
          uVar11 = local_84;
          if (0x3ffe < *(int *)(lVar17 + (long)(int)local_84 * 0x38 + 0x54)) goto LAB_03e99478;
        }
        *(uint *)(param_1 + 0x120) = uVar11;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar26 = *plVar19;
        }
        plVar31 = *(long **)(lVar26 + 0xb8);
LAB_03e99528:
        lVar17 = *plVar31;
        if (lVar17 == 0) goto LAB_03e99f6c;
        goto LAB_03e99530;
      }
      uVar18 = *(undefined8 *)(param_1 + 0x118);
      uVar35 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_12279);
      FUN_0409e808(uVar35,uVar18,0);
      lVar26 = *plVar19;
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar26 = *plVar19;
      }
      uVar11 = FUN_03e9311c(uVar35,uVar18,*(long *)(lVar26 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 8));
      lVar26 = *plVar19;
      *(uint *)(param_1 + 0x120) = uVar11;
      lVar17 = **(long **)(lVar26 + 0xb8);
      if (lVar17 == 0) goto LAB_03e99f6c;
      uVar25 = *(uint *)(lVar17 + 0x18);
    }
    if (uVar25 <= uVar11)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    lVar17 = lVar17 + (long)(int)uVar11 * 0x38;
    *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
  }
  if ((*plVar1 == 0) || (lVar26 = *(long *)(*plVar1 + 0x38), lVar26 == 0)) goto LAB_03e99f6c;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x4a0))
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  *(undefined8 *)(lVar26 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x48) =
       *(undefined8 *)(param_1 + 0x118);
  thunk_FUN_020ccb58();
  if ((*plVar1 == 0) || (lVar26 = *(long *)(*plVar1 + 0x38), lVar26 == 0)) goto LAB_03e99f6c;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x4a0))
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)(param_1 + 0x4a0) * 0x178 + 0x50) =
       *(undefined4 *)(param_1 + 0x120);
  lVar26 = *plVar19;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar26 = *plVar19;
  }
  lVar17 = **(long **)(lVar26 + 0xb8);
  if (lVar17 == 0) goto LAB_03e99f6c;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x120))
  goto 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
  ;
  *(bool *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38 + 0x41) = bVar7;
  if (bVar7) {
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar17 = **(long **)(*plVar19 + 0xb8);
      if (lVar17 == 0) goto LAB_03e99f6c;
    }
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x120))
    goto 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000846_PostfixBurstDelegate__BeginInvoke
    ;
    puVar22 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38 + 0x48);
    *puVar22 = uVar23;
    thunk_FUN_020ccb58(puVar22,uVar23);
    *(undefined8 *)(param_1 + 0x100) = uVar32;
    thunk_FUN_020ccb58(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x118) = uVar23;
    thunk_FUN_020ccb58(param_1 + 0x118,uVar23);
    *(undefined4 *)(param_1 + 0x120) = uVar30;
  }
  uVar11 = *(uint *)(param_1 + 0x4a0);
LAB_03e996d8:
  *(uint *)(param_1 + 0x4a0) = uVar11 + 1;
LAB_03e996e0:
  uVar11 = *(uint *)(param_2 + 0x18);
  uVar34 = uVar34 + 1;
  if ((int)uVar11 <= (int)uVar34) goto LAB_03e996f8;
  goto LAB_03e98148;
}


