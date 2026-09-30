/*
FUNCTION_NAME: FUN_024891c4
ENTRY_POINT: 024891c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


undefined1  [16]
FUN_024891c4(undefined1 param_1 [16],ulong param_2,undefined4 param_3,undefined8 param_4,
            ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8,undefined4 *param_9,
            undefined8 param_10,undefined4 *param_11,undefined8 param_12,undefined4 *param_13,
            undefined4 param_14,int param_15)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  long *plVar22;
  int iVar23;
  undefined1 auVar24 [16];
  float fVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  
  puVar5 = Method_System_Data_DataRelation_Create__;
  uVar27 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  if ((DAT_037825d0 & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12736);
    thunk_FUN_00d48444(StringLiteral_4340);
    thunk_FUN_00d48444(PTR_DAT_033f4210);
    thunk_FUN_00d48444(Method_System_Net_HttpWebRequest_<GetRewriteHandler>b__271_0__);
    thunk_FUN_00d48444(Sirenix_Serialization_AnimationCurveFormatter_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed4b8);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair___TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_4585);
    thunk_FUN_00d48444(Method_System_Data_DataRelation_Create__);
    DAT_037825d0 = 1;
  }
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_d4 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uVar17 = (ulong)**(uint **)(*(long *)puVar5 + 0xb8);
  uVar28 = 0;
  *param_13 = 0;
  *param_11 = 0;
  *param_9 = 0;
  puVar5 = StringLiteral_12736;
  if ((int)param_5 < 3) goto LAB_02489ab8;
  lVar16 = *(long *)StringLiteral_12736;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar16 = *(long *)puVar5;
  }
  puVar6 = 
  Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_GetEnumerator__
  ;
  puVar4 = PTR_DAT_033ed4b8;
  if (((int)param_7 == 0) ||
     (lVar19 = *(long *)(lVar16 + 0xb8), *(int *)(lVar19 + 0xc) <= (int)param_5)) goto LAB_02489ab8;
  local_98 = 0;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar19 = *(long *)(*(long *)puVar5 + 0xb8);
  }
  FUN_013421d4(&local_b0,*(undefined4 *)(lVar19 + 8),param_3,1,*(undefined8 *)puVar4);
  FUN_013421d4(&local_c0,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),param_3,1,
               *(undefined8 *)puVar6);
  uVar14 = FUN_024833b8(param_3,param_4,param_5,param_5 & 0xffffffff,param_6,param_7,
                        param_7 & 0xffffffff,&local_c0,&local_98,&local_b0,(long)&local_98 + 4);
  plVar22 = (long *)StringLiteral_12736;
  puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
  puVar5 = Sirenix_Serialization_AnimationCurveFormatter_TypeInfo;
  fVar29 = (float)param_2;
  fVar25 = param_1._0_4_;
  bVar1 = false;
  if ((fVar25 != 0.0 || fVar29 != 0.0) && ((uVar14 & 1) != 0)) {
    local_c8 = 0;
    local_d0 = 0;
    local_d4 = 0;
    lVar16 = *(long *)StringLiteral_12736;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar16 = *plVar22;
    }
    FUN_013421d4(&local_e8,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 4),param_3,1,
                 *(undefined8 *)puVar5);
    FUN_013421d4(&local_f8,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0xc),param_3,1,
                 *(undefined8 *)puVar6);
    FUN_013421d4(&local_108,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 8),param_3,1,
                 *(undefined8 *)PTR_DAT_033ed4b8);
    FUN_013421d4(&local_118,*(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0xc),param_3,1,
                 *(undefined8 *)puVar6);
    uVar2 = *(undefined4 *)(*(long *)(*plVar22 + 0xb8) + 0x14);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar20 = (undefined8 *)PTR_DAT_033f4210;
    iVar15 = FUN_017726a0(param_14,uVar2,0);
    fVar3 = DAT_028aa3e4;
    uVar2 = (undefined4)local_98;
    uVar12 = local_98._4_4_;
    if (fVar29 != 0.0) {
      do {
        lVar16 = *plVar22;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar16 = *plVar22;
        }
        if ((iVar15 < 1) || ((float)**(int **)(lVar16 + 0xb8) <= (float)param_2)) goto LAB_02489790;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02488384(param_4,param_5,param_5 & 0xffffffff,&local_f8,(long)&local_d0 + 4,param_6,
                     param_7,param_7 & 0xffffffff,&local_e8,&local_c8);
        FUN_02488480(local_b0,uStack_a8,uVar12,&local_108,&local_d0,local_c0,uStack_b8,uVar2,
                     &local_118,&local_d4);
        if (*(int *)(*(long *)
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair___TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_02482bb0(uVar26,param_2,param_3,&local_f8,(long)&local_d0 + 4,&local_e8,
                              &local_c8,&local_118,&local_d4,&local_108,&local_d0,
                              (long)&local_c8 + 4);
        if ((uVar17 & 1) != 0) {
          iVar21 = (int)local_d0;
          iVar23 = local_d0._4_4_;
          if (local_d0._4_4_ < (int)local_d0) goto LAB_024897ac;
        }
        param_2 = (ulong)(uint)(fVar29 / 10.0 + (float)param_2);
        plVar22 = (long *)StringLiteral_12736;
        iVar15 = iVar15 + -1;
      } while( true );
    }
    if (((fVar25 == 0.0) || (iVar15 < 1)) ||
       (fVar25 = ((fVar25 + DAT_028aa314) / DAT_0293fff4) * DAT_0295821c + DAT_028aa040,
       DAT_028aa3e4 <= fVar25)) {
      bVar1 = false;
      uVar26 = 0;
      uVar27 = 0;
    }
    else {
      fVar29 = fVar25 / 10.0;
      do {
        uVar26 = (ulong)(uint)fVar25;
        uVar27 = 0;
        if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02488384(param_4,param_5,param_5 & 0xffffffff,&local_f8,(long)&local_d0 + 4,param_6,
                     param_7,param_7 & 0xffffffff,&local_e8,&local_c8);
        FUN_02488480(local_b0,uStack_a8,uVar12,&local_108,&local_d0,local_c0,uStack_b8,uVar2,
                     &local_118,&local_d4);
        if (*(int *)(*(long *)
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair___TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_02482bb0(uVar26,param_2,param_3,&local_f8,(long)&local_d0 + 4,&local_e8,
                              &local_c8,&local_118,&local_d4,&local_108,&local_d0,
                              (long)&local_c8 + 4);
        if ((uVar17 & 1) != 0) {
          iVar21 = (int)local_d0;
          iVar23 = local_d0._4_4_;
          if (local_d0._4_4_ < (int)local_d0) goto LAB_024897ac;
        }
        if (iVar15 < 2) break;
        fVar25 = fVar29 + fVar25;
        iVar15 = iVar15 + -1;
      } while (fVar25 < fVar3);
LAB_02489790:
      bVar1 = false;
      uVar26 = 0;
      uVar27 = 0;
      puVar20 = (undefined8 *)PTR_DAT_033f4210;
    }
    goto LAB_024899d4;
  }
  goto LAB_02489a20;
LAB_024897ac:
  uVar17 = local_c8;
  uVar12 = local_d4;
  uVar11 = uStack_e0;
  uVar10 = local_e8;
  uVar9 = uStack_100;
  uVar8 = local_108;
  uVar7 = uStack_110;
  uVar28 = local_118;
  if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0248857c(uVar10,uVar11,uVar17 & 0xffffffff,param_12,param_13,uVar8,uVar9,iVar21,param_10,
               param_11,uVar28,uVar7,uVar12,param_8,param_9);
  if ((float)uVar26 != 0.0) {
    if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02488b00(uVar2,&local_108,&local_d0,&local_118,&local_d4);
  }
  puVar5 = StringLiteral_12736;
  lVar16 = *(long *)StringLiteral_12736;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar16 = *(long *)puVar5;
  }
  fVar25 = 0.0;
  iVar15 = *(int *)(*(long *)(lVar16 + 0xb8) + 0x18);
  if (param_15 <= iVar15) {
    iVar15 = param_15;
  }
  if (iVar15 < 1) {
    bVar1 = true;
    puVar20 = (undefined8 *)PTR_DAT_033f4210;
  }
  else {
    do {
      uVar7 = uStack_e0;
      uVar28 = local_e8;
      if (*(int *)(*(long *)StringLiteral_4585 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_02483a68(param_3,&local_f8,iVar23,uVar28,uVar7,uVar17 & 0xffffffff,&local_118,
                            &local_d4,&local_108,&local_d0);
      uVar13 = local_d0;
      uVar12 = local_d4;
      uVar11 = uStack_e0;
      uVar10 = local_e8;
      uVar9 = uStack_100;
      uVar8 = local_108;
      uVar7 = uStack_110;
      uVar28 = local_118;
      if ((uVar18 & 1) == 0) break;
      if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar25 = (float)iVar15;
      FUN_0248857c(uVar10,uVar11,uVar17 & 0xffffffff,param_12,param_13,uVar8,uVar9,
                   uVar13 & 0xffffffff,param_10,param_11,uVar28,uVar7,uVar12,param_8,param_9);
      iVar21 = iVar15 + -1;
      bVar1 = 0 < iVar15;
      iVar15 = iVar21;
    } while (iVar21 != 0 && bVar1);
    puVar20 = (undefined8 *)PTR_DAT_033f4210;
    if (fVar25 != 0.0) {
      if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02488b00(uVar2,param_10,param_11,param_8,param_9);
    }
    bVar1 = true;
  }
LAB_024899d4:
  puVar5 = Method_System_Net_HttpWebRequest_<GetRewriteHandler>b__271_0__;
  FUN_01342a94(&local_118,
               *(undefined8 *)Method_System_Net_HttpWebRequest_<GetRewriteHandler>b__271_0__);
  FUN_01342a94(&local_108,*(undefined8 *)StringLiteral_4340);
  FUN_01342a94(&local_f8,*(undefined8 *)puVar5);
  FUN_01342a94(&local_e8,*puVar20);
  uVar17 = uVar26;
  uVar28 = uVar27;
LAB_02489a20:
  uVar9 = uStack_a8;
  uVar8 = local_b0;
  uVar7 = uStack_b8;
  uVar27 = local_c0;
  if ((!bVar1) && (((uVar14 ^ 1) & 1) == 0)) {
    uVar12 = local_98._4_4_;
    uVar2 = (undefined4)local_98;
    if (*(int *)(*(long *)StringLiteral_12736 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0248857c(param_6,param_7,param_7 & 0xffffffff,param_12,param_13,uVar8,uVar9,uVar12,param_10,
                 param_11,uVar27,uVar7,uVar2,param_8,param_9);
  }
  FUN_01342a94(&local_c0,
               *(undefined8 *)Method_System_Net_HttpWebRequest_<GetRewriteHandler>b__271_0__);
  FUN_01342a94(&local_b0,*(undefined8 *)StringLiteral_4340);
LAB_02489ab8:
  auVar24._8_8_ = uVar28;
  auVar24._0_8_ = uVar17;
  return auVar24;
}


