/*
FUNCTION_NAME: FUN_021e93c4
ENTRY_POINT: 021e93c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_021e93c4(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_178;
  uint local_158;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  
  if ((DAT_037817c0 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphRect>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TabGroupAttribute>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Array_Sort<XmlTextReaderImpl_NodeData>__);
    thunk_FUN_00d48444(System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(
                      Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u64__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlBaseConverter_Int64ToUInt32__);
    thunk_FUN_00d48444(System_Collections_Generic_List<Quaternion>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_8208);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
    DAT_037817c0 = 1;
  }
  local_68[0] = 0;
  local_70 = 0;
  if (param_3 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = *(long *)(param_3 + 0x28);
  }
  uVar19 = FUN_015ff8a0(lVar28,0);
  if ((uVar19 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_021e9bd4;
    lVar28 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
  }
  if (lVar28 == 0) goto LAB_021e9bd4;
  iVar18 = FUN_016047a8(lVar28,0x2f,0);
  puVar5 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
  if (param_3 == 0) {
    uVar29 = 0;
    uVar30 = 0;
    uVar24 = 0;
  }
  else {
    uVar30 = *(undefined8 *)(param_3 + 0x88);
    uVar29 = *(undefined8 *)(param_3 + 0x80);
    uVar24 = *(undefined8 *)(param_3 + 0x18);
  }
  uVar19 = FUN_015ff8a0(uVar24,0);
  if ((iVar18 == -1) && ((uVar19 & 1) != 0)) {
    if (param_2 != (long *)0x0) {
      lVar21 = *(long *)puVar5;
      bVar3 = *(byte *)(lVar21 + 300);
      if (((bVar3 <= *(byte *)(*param_2 + 300)) &&
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) == lVar21)) &&
         (lVar21 = FUN_010c8250(param_2,0,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List<GlyphRect>_get_Item__),
         lVar21 != 0)) goto LAB_021e95bc;
    }
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
    ;
    uVar24 = FUN_0213af98(param_2,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar6);
    }
    uVar24 = FUN_021e9bd8(uVar24);
  }
LAB_021e95bc:
  if (param_3 == 0) {
    uVar27 = 0;
    if (param_2 == (long *)0x0) {
LAB_021e9610:
      local_f4 = -1;
    }
    else {
LAB_021e95f4:
      puVar6 = StringLiteral_5238;
      lVar21 = *param_2;
      lVar20 = *(long *)puVar5;
      bVar3 = *(byte *)(lVar20 + 300);
      if (((*(byte *)(lVar21 + 300) < bVar3) || (iVar18 != -1)) ||
         (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar3 * 8 + -8) != lVar20)) goto LAB_021e9610;
      uVar25 = (**(code **)(lVar21 + 0x1c8))(param_2,*(undefined8 *)(lVar21 + 0x1d0));
      uVar26 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      local_70 = thunk_FUN_00d369ac(uVar25,uVar26,0);
      local_f4 = FUN_017bd518(&local_70,0);
    }
    if (param_3 != 0) goto LAB_021e9614;
    local_fc = -1;
    local_f8 = 0;
    local_68[0] = 0;
LAB_021e96dc:
    puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
    if ((local_fc == -1) && (iVar18 == -1)) {
      uVar25 = FUN_0213af98(param_2,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      local_68[0] = FUN_021de720(uVar25,0);
    }
    if (param_3 == 0) {
      local_10c = 0;
      local_118 = 0;
      uVar25 = 0;
      local_108 = 0;
      local_178 = 0;
      uVar26 = 0;
      bVar17 = false;
      auVar31 = ZEXT816(0);
      auVar32 = ZEXT816(0);
      auVar33 = ZEXT816(0);
      local_158 = 8;
      bVar16 = false;
      goto LAB_021e99f4;
    }
  }
  else {
    uVar19 = FUN_015ff8a0(*(undefined8 *)(param_3 + 0x20),0);
    uVar27 = 0;
    if ((uVar19 & 1) == 0) {
      uVar27 = *(undefined8 *)(param_3 + 0x20);
    }
    local_f4 = *(int *)(param_3 + 0x74);
    if (local_f4 == -1) {
      if (param_2 != (long *)0x0) goto LAB_021e95f4;
      goto LAB_021e9610;
    }
LAB_021e9614:
    local_f8 = *(undefined4 *)(param_3 + 0x78);
    local_fc = *(int *)(param_3 + 0x70);
    local_68[0] = 0;
    uVar19 = FUN_015ff8a0(*(undefined8 *)(param_3 + 0x30),0);
    if ((uVar19 & 1) != 0) goto LAB_021e96dc;
    FUN_021fe1f0(local_68,*(undefined8 *)(param_3 + 0x30),0);
  }
  puVar22 = (undefined8 *)Method_System_Array_Sort<XmlTextReaderImpl_NodeData>__;
  puVar6 = UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo;
  puVar5 = UnityEngine_TextCore_Text_TextElementInfo___TypeInfo;
  lVar21 = FUN_010b4b38(*(undefined8 *)(param_3 + 0x58),*(undefined8 *)(param_3 + 0x60),
                        *(undefined8 *)UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo);
  if (lVar21 == 0) {
    local_108 = 0;
  }
  else {
    lVar20 = *(long *)puVar5;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar20 = *(long *)puVar5;
    }
    lVar23 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x10);
    if (lVar23 == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar20 = *(long *)puVar5;
      }
      uVar25 = **(undefined8 **)(lVar20 + 0xb8);
      lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__
                                 );
      if (lVar23 == 0) goto LAB_021e9bd4;
      FUN_012d239c(lVar23,uVar25,
                   *(undefined8 *)
                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__0__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar23;
      puVar22 = (undefined8 *)Method_System_Array_Sort<XmlTextReaderImpl_NodeData>__;
    }
    uVar25 = FUN_010dcdb8(lVar21,lVar23,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<TabGroupAttribute>_GetEnumerator__
                         );
    local_108 = FUN_010df6b8(uVar25,*puVar22);
  }
  lVar21 = FUN_010b4b38(*(undefined8 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x40),
                        *(undefined8 *)puVar6);
  local_178 = 0;
  if (lVar21 != 0) {
    lVar20 = *(long *)puVar5;
    if (*(int *)(lVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar20 = *(long *)puVar5;
    }
    lVar23 = *(long *)(*(long *)(lVar20 + 0xb8) + 0x18);
    if (lVar23 == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar20 = *(long *)puVar5;
      }
      uVar25 = **(undefined8 **)(lVar20 + 0xb8);
      lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_CableSwitchBox_<HideCoroutine>d__22_System_Collections_IEnumerator_Reset__
                                 );
      if (lVar23 == 0) {
LAB_021e9bd4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_012d239c(lVar23,uVar25,*(undefined8 *)StringLiteral_8208,0);
      *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar23;
    }
    uVar25 = FUN_010dcdb8(lVar21,lVar23,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<TabGroupAttribute>_GetEnumerator__
                         );
    local_178 = FUN_010df6b8(uVar25,*puVar22);
  }
  uVar19 = FUN_015ff8a0(*(undefined8 *)(param_3 + 0x48),0);
  uVar25 = 0;
  if ((uVar19 & 1) == 0) {
    uVar25 = FUN_0220273c(*(undefined8 *)(param_3 + 0x48),0);
  }
  uVar19 = FUN_015ff8a0(*(undefined8 *)(param_3 + 0x50),0);
  puVar5 = System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap_TypeInfo;
  uVar26 = 0;
  if ((uVar19 & 1) == 0) {
    uVar26 = FUN_02202060(*(undefined8 *)(param_3 + 0x50),0);
    uVar26 = FUN_010df6b8(uVar26,*(undefined8 *)puVar5);
  }
  uVar19 = FUN_015ff8a0(*(undefined8 *)(param_3 + 0x68),0);
  local_118 = 0;
  if ((uVar19 & 1) == 0) {
    local_118 = *(undefined8 *)(param_3 + 0x68);
  }
  local_10c = *(undefined4 *)(param_3 + 0x7c);
  cVar4 = *(char *)(param_3 + 0x90);
  bVar16 = *(char *)(param_3 + 0x92) != '\0';
  bVar17 = *(char *)(param_3 + 0x91) != '\0';
  auVar31 = FUN_02204f1c(*(undefined8 *)(param_3 + 0x98),0);
  auVar32 = FUN_02204f1c(*(undefined8 *)(param_3 + 0xa0),0);
  auVar33 = FUN_02204f1c(*(undefined8 *)(param_3 + 0xa8),0);
  local_158 = 8;
  if (cVar4 != '\0') {
    local_158 = 10;
  }
LAB_021e99f4:
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u64__;
  puVar5 = Method_System_Xml_Schema_XmlBaseConverter_Int64ToUInt32__;
  local_80 = 0;
  local_78 = 0;
  FUN_021f605c(&local_80,lVar28,0);
  uVar14 = local_78;
  uVar13 = local_80;
  local_90 = 0;
  uStack_88 = 0;
  FUN_021f605c(&local_90,uVar24,0);
  uVar12 = uStack_88;
  uVar11 = local_90;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_021f605c(&local_a0,uVar27,0);
  uVar15 = local_68[0];
  uVar10 = uStack_98;
  uVar9 = local_a0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_01380c7c(&local_b0,uVar25,*(undefined8 *)puVar6);
  uVar8 = uStack_a8;
  uVar7 = local_b0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_01380c7c(&local_c0,uVar26,*(undefined8 *)System_Collections_Generic_List<Quaternion>_TypeInfo)
  ;
  uVar26 = uStack_b8;
  uVar25 = local_c0;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_01380c7c(&local_d0,local_178,*(undefined8 *)puVar5);
  uVar27 = uStack_c8;
  uVar24 = local_d0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_01380c7c(&local_e0,local_108,*(undefined8 *)puVar5);
  param_1[9] = uVar24;
  param_1[10] = uVar27;
  param_1[0xd] = uVar7;
  param_1[0xe] = uVar8;
  local_158 = local_158 | iVar18 != -1;
  param_1[8] = uVar30;
  param_1[7] = uVar29;
  param_1[0xf] = uVar25;
  param_1[0x10] = uVar26;
  param_1[0xc] = uStack_d8;
  param_1[0xb] = local_e0;
  *param_1 = uVar13;
  param_1[1] = uVar14;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[6] = local_118;
  *(int *)(param_1 + 0x11) = local_f4;
  *(int *)((long)param_1 + 0x8c) = local_fc;
  *(undefined4 *)(param_1 + 0x12) = local_f8;
  *(undefined4 *)((long)param_1 + 0x94) = uVar15;
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar31;
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar32;
  uVar1 = local_158 | 0x10;
  if (!bVar16) {
    uVar1 = local_158;
  }
  uVar2 = uVar1 | 4;
  if (!bVar17) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((long)param_1 + 0x9c) = local_10c;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar33;
  return;
}


