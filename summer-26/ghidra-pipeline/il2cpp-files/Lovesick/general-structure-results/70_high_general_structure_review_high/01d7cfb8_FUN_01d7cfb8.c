/*
FUNCTION_NAME: FUN_01d7cfb8
ENTRY_POINT: 01d7cfb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_01d7cfb8(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  bool bVar24;
  undefined1 uVar25;
  int iVar26;
  uint uVar27;
  undefined4 uVar28;
  double *pdVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  int *piVar33;
  ulong uVar34;
  undefined1 *puVar35;
  undefined4 *puVar36;
  long lVar37;
  undefined8 uVar38;
  undefined *puVar39;
  int iVar40;
  double dVar41;
  long lVar42;
  long *plVar43;
  long *plVar44;
  undefined8 uVar45;
  long lVar46;
  uint uVar47;
  undefined1 auVar48 [16];
  undefined8 local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80 [8];
  double dStack_78;
  long local_68;
  
  lVar37 = tpidr_el0;
  local_68 = *(long *)(lVar37 + 0x28);
  if ((DAT_0377f62b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(
                      Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eb8b0);
    thunk_FUN_00d48444(StringLiteral_8955);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupUnregisteredEventArgs>_Get__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0377f62b = 1;
  }
  puVar23 = StringLiteral_8955;
  puVar22 = StringLiteral_2672;
  puVar21 = 
  Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__;
  puVar20 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar19 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupUnregisteredEventArgs>_Get__
  ;
  puVar18 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar17 = System_IO_FileNotFoundException_TypeInfo;
  puVar16 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar15 = PTR_DAT_033f2f78;
  puVar39 = PTR_DAT_033eb8b0;
  local_b8._8_8_ = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8._0_8_ = 0;
  auVar7 = ZEXT816(0);
  auVar4 = ZEXT816(0);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auVar48 = auVar4;
  switch(param_2) {
  case 2:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    if (*(int *)(*(long *)PTR_DAT_033eb8b0 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar30 = FUN_01de5af8(lVar31,0);
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    if ((uVar30 & 1) == 0) {
      if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
      lVar31 = param_3[5];
      if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar30 = FUN_01de5af8(lVar31,0);
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      if ((uVar30 & 1) == 0) {
        uVar27 = *(uint *)(param_3 + 3);
        if (uVar27 == 0) goto LAB_01d7e4a0;
        if (((long *)param_3[4] != (long *)0x0) && (*(long *)param_3[4] == *(long *)puVar19)) {
          puVar32 = (undefined8 *)thunk_FUN_00d624a0();
          uStack_98 = puVar32[1];
          local_a0 = *puVar32;
          uStack_88 = puVar32[3];
          uStack_90 = puVar32[2];
          if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar31 = FUN_01dc7824(&local_a0,0);
          if ((lVar31 != 0) &&
             (lVar46 = thunk_FUN_00d6225c(lVar31,*(undefined8 *)(*param_3 + 0x40)), lVar46 == 0))
          goto LAB_01d7e690;
          auVar48._8_8_ = local_b8._8_8_;
          auVar48._0_8_ = local_b8._0_8_;
          uVar27 = *(uint *)(param_3 + 3);
          if (uVar27 == 0) goto LAB_01d7e4a0;
          param_3[4] = lVar31;
        }
        auVar48._8_8_ = local_b8._8_8_;
        auVar48._0_8_ = local_b8._0_8_;
        if (uVar27 < 2) goto LAB_01d7e4a0;
        plVar44 = (long *)param_3[5];
        if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
        if (*plVar44 == *(long *)puVar19) {
          puVar32 = (undefined8 *)thunk_FUN_00d624a0(plVar44);
          uStack_98 = puVar32[1];
          local_a0 = *puVar32;
          uStack_88 = puVar32[3];
          uStack_90 = puVar32[2];
          if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar44 = (long *)FUN_01dc7824(&local_a0,0);
          if ((plVar44 != (long *)0x0) &&
             (lVar31 = thunk_FUN_00d6225c(plVar44,*(undefined8 *)(*param_3 + 0x40)), lVar31 == 0))
          goto LAB_01d7e690;
          auVar48._8_8_ = local_b8._8_8_;
          auVar48._0_8_ = local_b8._0_8_;
          if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
          param_3[5] = (long)plVar44;
          if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
        }
        lVar31 = *(long *)puVar16;
        plVar43 = plVar44;
        if ((*plVar44 != lVar31) ||
           ((plVar43 = (long *)param_3[4], plVar43 != (long *)0x0 && (*plVar43 != lVar31)))) {
LAB_01d7e6b0:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar43,lVar31);
        }
        uVar28 = FUN_01604750(plVar44,plVar43,4,0);
        goto LAB_01d7d8fc;
      }
    }
    break;
  default:
    thunk_FUN_00d48444(System_IO_FileNotFoundException_TypeInfo);
    FUN_00acb0a4();
    lVar37 = thunk_FUN_00d48444(puVar17);
    iVar26 = *(int *)(param_1 + 0x20);
    uVar45 = **(undefined8 **)(lVar37 + 0xb8);
    FUN_00ac2be8(uVar45);
    lVar37 = FUN_00c46a38(uVar45,(long)iVar26);
    FUN_00ac2be8();
    uVar45 = FUN_01d6e1b4(*(undefined8 *)(lVar37 + 0x10));
    goto LAB_01d7e548;
  case 4:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    iVar26 = (int)param_3[3];
    auVar48 = ZEXT816(0);
    if (iVar26 == 0) goto LAB_01d7e4a0;
    plVar43 = (long *)param_3[4];
    if ((plVar43 != (long *)0x0) &&
       (*plVar43 ==
        *(long *)
         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<InteractionGroupUnregisteredEventArgs>_Get__
       )) {
      puVar32 = (undefined8 *)thunk_FUN_00d624a0(plVar43);
      uStack_98 = puVar32[1];
      local_a0 = *puVar32;
      uStack_88 = puVar32[3];
      uStack_90 = puVar32[2];
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar30 = FUN_01dc7814(&local_a0,0);
      auVar7._8_8_ = local_b8._8_8_;
      auVar7._0_8_ = local_b8._0_8_;
      if ((uVar30 & 1) != 0) break;
      auVar48 = auVar7;
      if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
      if ((long *)param_3[4] == (long *)0x0) goto LAB_01d7e4a4;
      if (*(long *)(*(long *)param_3[4] + 0x40) != *(long *)(*(long *)puVar19 + 0x40))
      goto LAB_01d7e564;
      puVar32 = (undefined8 *)thunk_FUN_00d624a0();
      uStack_98 = puVar32[1];
      local_a0 = *puVar32;
      uStack_88 = puVar32[3];
      uStack_90 = puVar32[2];
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar43 = (long *)FUN_01dc7824(&local_a0,0);
      if ((plVar43 != (long *)0x0) &&
         (lVar31 = thunk_FUN_00d6225c(plVar43,*(undefined8 *)(*param_3 + 0x40)), lVar31 == 0))
      goto LAB_01d7e690;
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      iVar26 = (int)param_3[3];
      if (iVar26 == 0) goto LAB_01d7e4a0;
      param_3[4] = (long)plVar43;
    }
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    if (iVar26 == 0) goto LAB_01d7e4a0;
    if (plVar43 == (long *)0x0) {
LAB_01d7e4a4:
      local_b8 = auVar48;
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*plVar43 != *(long *)puVar16) {
LAB_01d7e578:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar43);
    }
    uVar45 = *(undefined8 *)puVar18;
    local_80._0_4_ = (int)plVar43[2];
    goto LAB_01d7dd68;
  case 0x10:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
    auVar48 = auVar4;
    if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
    if (*(long *)(*(long *)param_3[5] + 0x40) !=
        *(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                 + 0x40)) goto LAB_01d7e564;
    piVar33 = (int *)thunk_FUN_00d624a0();
    auVar7._8_8_ = local_b8._8_8_;
    auVar7._0_8_ = local_b8._0_8_;
    auVar48 = auVar7;
    if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
    if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
    if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
    goto LAB_01d7e564;
    iVar26 = *piVar33 + -1;
    piVar33 = (int *)thunk_FUN_00d624a0();
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    puVar39 = StringLiteral_2446;
    if ((iVar26 < 0) ||
       (iVar2 = *piVar33, puVar39 = Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__
       , iVar2 < 0)) {
      uVar45 = thunk_FUN_00d48444(puVar39);
      uVar38 = thunk_FUN_00d48444(OVR_OpenVR_IVRTrackedCamera_var);
      uVar45 = FUN_01d7bb9c(uVar45,uVar38);
      goto LAB_01d7e548;
    }
    if (iVar2 == 0) {
      lVar31 = *(long *)puVar16;
      goto LAB_01d7dc6c;
    }
    iVar40 = (int)param_3[3];
    if (iVar40 == 0) goto LAB_01d7e4a0;
    plVar43 = (long *)param_3[4];
    if ((plVar43 != (long *)0x0) && (*plVar43 == *(long *)puVar19)) {
      puVar32 = (undefined8 *)thunk_FUN_00d624a0(plVar43);
      uStack_98 = puVar32[1];
      local_a0 = *puVar32;
      uStack_88 = puVar32[3];
      uStack_90 = puVar32[2];
      if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar43 = (long *)FUN_01dc7824(&local_a0,0);
      if ((plVar43 != (long *)0x0) &&
         (lVar31 = thunk_FUN_00d6225c(plVar43,*(undefined8 *)(*param_3 + 0x40)), lVar31 == 0))
      goto LAB_01d7e690;
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      iVar40 = (int)param_3[3];
      if (iVar40 == 0) goto LAB_01d7e4a0;
      param_3[4] = (long)plVar43;
    }
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    if (iVar40 == 0) goto LAB_01d7e4a0;
    if (plVar43 == (long *)0x0) goto LAB_01d7e4a4;
    if (*plVar43 != *(long *)puVar16) goto LAB_01d7e570;
    iVar40 = (int)plVar43[2];
    if (iVar26 <= iVar40) {
      iVar1 = iVar40 - iVar26;
      if (iVar2 + iVar26 <= iVar40) {
        iVar1 = iVar2;
      }
      lVar31 = FUN_01601d40(plVar43,iVar26,iVar1,0);
      goto LAB_01d7dd74;
    }
    break;
  case 0x12:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    if (*(int *)(*(long *)PTR_DAT_033eb8b0 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar30 = FUN_01de5af8(lVar31,0);
    uVar27 = *(uint *)(param_3 + 3);
    if ((uVar30 & 1) != 0) {
      auVar48 = local_b8;
      if (1 < uVar27) {
        lVar31 = param_3[5];
        goto LAB_01d7dd74;
      }
      goto LAB_01d7e4a0;
    }
LAB_01d7dea0:
    auVar48 = local_b8;
    if (uVar27 == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    goto LAB_01d7dd74;
  case 0x13:
    lVar31 = *(long *)(param_1 + 0x28);
    if (lVar31 != 0) {
      auVar48 = ZEXT816(0);
      if (*(int *)(lVar31 + 0x18) == 0) goto LAB_01d7e4a0;
      plVar43 = *(long **)(lVar31 + 0x20);
      auVar48 = auVar4;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x1a8))(plVar43,param_4,param_5,*(undefined8 *)(*plVar43 + 0x1b0));
        uVar30 = FUN_01d75c4c();
        auVar14._8_8_ = local_b8._8_8_;
        auVar14._0_8_ = local_b8._0_8_;
        auVar13._8_8_ = local_b8._8_8_;
        auVar13._0_8_ = local_b8._0_8_;
        lVar31 = *(long *)(param_1 + 0x28);
        auVar48 = auVar14;
        if (lVar31 != 0) {
          if ((uVar30 & 1) == 0) {
            if (*(uint *)(lVar31 + 0x18) < 3) goto LAB_01d7e4a0;
            plVar43 = *(long **)(lVar31 + 0x30);
          }
          else {
            auVar48 = auVar13;
            if (*(uint *)(lVar31 + 0x18) < 2) goto LAB_01d7e4a0;
            plVar43 = *(long **)(lVar31 + 0x28);
          }
          auVar48 = auVar14;
          if (plVar43 != (long *)0x0) {
            lVar31 = (**(code **)(*plVar43 + 0x1a8))
                               (plVar43,param_4,param_5,*(undefined8 *)(*plVar43 + 0x1b0));
            goto LAB_01d7dd74;
          }
        }
      }
    }
    goto LAB_01d7e4a4;
  case 0x14:
    if (*(int *)(param_1 + 0x24) != 2) {
      uVar45 = FUN_01d7bc04(*(undefined8 *)(param_1 + 0x18));
      goto LAB_01d7e548;
    }
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar46 = *(long *)
              Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
    ;
    lVar31 = param_3[4];
    if (*(int *)(lVar46 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar46 = *(long *)puVar21;
    }
    puVar17 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    if (lVar31 != **(long **)(lVar46 + 0xb8)) {
      auVar48 = local_b8;
      if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
      plVar43 = (long *)param_3[5];
      if (plVar43 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 300);
        if ((*(byte *)(*plVar43 + 300) < bVar3) ||
           (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__)) {
LAB_01d7e570:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar43);
        }
      }
      if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar30 = FUN_01de5384(plVar43,0);
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
      if (param_3[4] == 0) goto LAB_01d7e4a4;
      uVar45 = thunk_FUN_00d93c64(param_3[4],0);
      uVar34 = FUN_01de5384(uVar45,0);
      puVar39 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
      auVar12._8_8_ = local_b8._8_8_;
      auVar12._0_8_ = local_b8._0_8_;
      auVar11._8_8_ = local_b8._8_8_;
      auVar11._0_8_ = local_b8._0_8_;
      auVar10._8_8_ = local_b8._8_8_;
      auVar10._0_8_ = local_b8._0_8_;
      auVar9._8_8_ = local_b8._8_8_;
      auVar9._0_8_ = local_b8._0_8_;
      auVar8._8_8_ = local_b8._8_8_;
      auVar8._0_8_ = local_b8._0_8_;
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      uVar47 = (uint)uVar30;
      uVar27 = (uint)uVar34;
      if ((uVar47 == 0x17) && (uVar27 == 0x12)) {
        if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
        plVar44 = (long *)param_3[4];
        uVar45 = FUN_01d75be0(param_1);
        if ((plVar44 != (long *)0x0) && (*plVar44 != *(long *)puVar16)) goto LAB_01d7e568;
        _local_80 = FUN_01df7fa8(plVar44,uVar45,0);
        uVar45 = *(undefined8 *)puVar23;
        goto LAB_01d7dadc;
      }
      if (uVar47 == 1) {
        uVar27 = *(uint *)(param_3 + 3);
        goto LAB_01d7dea0;
      }
      if ((uVar47 != 0x13) || (uVar27 != 0x12)) {
        if ((((uVar27 < 0x22) && ((1L << (uVar34 & 0x3f) & 0x30000e000U) != 0)) ||
            ((uVar27 | 1) == 0x27)) &&
           ((uVar47 < 0x26 && ((1L << (uVar30 & 0x3f) & 0x3810001fe0U) != 0)))) {
          if (uVar27 == 0xf) {
            auVar48 = auVar12;
            if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
            lVar31 = param_3[4];
            uVar45 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
            if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar45 = FUN_01780344(uVar45,0);
            uVar38 = FUN_01d75be0(param_1);
            plVar44 = (long *)FUN_01df81ec(lVar31,0xf,uVar45,uVar38,0);
            puVar39 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
            auVar7._8_8_ = local_b8._8_8_;
            auVar7._0_8_ = local_b8._0_8_;
            auVar48 = auVar7;
            if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
            if (*(long *)(*plVar44 + 0x40) !=
                *(long *)(*(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo + 0x40)
               ) goto LAB_01d7e564;
            pdVar29 = (double *)thunk_FUN_00d624a0();
            dStack_78 = pdVar29[1];
            local_80 = (undefined1  [8])*pdVar29;
            uVar45 = *(undefined8 *)puVar39;
          }
          else if (uVar27 == 0xe) {
            auVar48 = auVar11;
            if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
            lVar31 = param_3[4];
            uVar45 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
            if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar45 = FUN_01780344(uVar45,0);
            uVar38 = FUN_01d75be0(param_1);
            plVar44 = (long *)FUN_01df81ec(lVar31,0xe,uVar45,uVar38,0);
            auVar7._8_8_ = local_b8._8_8_;
            auVar7._0_8_ = local_b8._0_8_;
            auVar48 = auVar7;
            if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
            if (*(long *)(*plVar44 + 0x40) != *(long *)(*(long *)puVar15 + 0x40)) goto LAB_01d7e564;
            pdVar29 = (double *)thunk_FUN_00d624a0();
            local_80 = (undefined1  [8])*pdVar29;
            uVar45 = *(undefined8 *)puVar15;
          }
          else {
            if (uVar27 != 0xd) goto LAB_01d7e470;
            auVar48 = auVar9;
            if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
            lVar31 = param_3[4];
            uVar45 = *(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
            ;
            if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar45 = FUN_01780344(uVar45,0);
            uVar38 = FUN_01d75be0(param_1);
            plVar44 = (long *)FUN_01df81ec(lVar31,0xd,uVar45,uVar38,0);
            puVar39 = System_Runtime_InteropServices_InAttribute_TypeInfo;
            auVar7._8_8_ = local_b8._8_8_;
            auVar7._0_8_ = local_b8._0_8_;
            auVar48 = auVar7;
            if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
            if (*(long *)(*plVar44 + 0x40) !=
                *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
            goto LAB_01d7e564;
            puVar36 = (undefined4 *)thunk_FUN_00d624a0();
            uVar45 = *(undefined8 *)puVar39;
            local_80._0_4_ = *puVar36;
          }
          lVar31 = thunk_FUN_00d61fa0(uVar45,local_80);
        }
        else {
LAB_01d7e470:
          auVar48 = auVar10;
          if ((int)param_3[3] == 0) {
LAB_01d7e4a0:
            local_b8 = auVar48;
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar31 = param_3[4];
        }
        uVar45 = FUN_01d75be0(param_1);
        lVar31 = FUN_01df81ec(lVar31,uVar30 & 0xffffffff,plVar43,uVar45,0);
        goto LAB_01d7dd74;
      }
      auVar48 = auVar8;
      if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
      plVar43 = (long *)param_3[4];
      local_80 = (undefined1  [8])0x0;
      dStack_78 = 0.0;
      if ((plVar43 != (long *)0x0) && (lVar31 = *(long *)puVar16, *plVar43 != lVar31))
      goto LAB_01d7e6b0;
      FUN_01768d04(local_80,plVar43,0);
      uVar45 = *(undefined8 *)puVar39;
LAB_01d7e334:
      pdVar29 = &local_d0;
      local_d0 = (double)local_80;
      dStack_c8 = dStack_78;
      goto LAB_01d7dd6c;
    }
    if (*(int *)(lVar46 + 0xe0) != 0) goto LAB_01d7dd74;
    thunk_FUN_00d32864();
    lVar31 = *(long *)puVar21;
LAB_01d7dc6c:
    plVar43 = *(long **)(lVar31 + 0xb8);
    goto LAB_01d7da48;
  case 0x15:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    uVar45 = FUN_01d75be0(param_1);
    if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar20);
    }
    uVar28 = FUN_016fec00(lVar31,uVar45,0);
LAB_01d7d8fc:
    uVar45 = *(undefined8 *)puVar18;
    local_80._0_4_ = uVar28;
    goto LAB_01d7dadc;
  case 0x16:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    auVar48 = auVar4;
    if (param_3[4] == 0) goto LAB_01d7e4a4;
    uVar45 = thunk_FUN_00d93c64(param_3[4],0);
    if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar39);
    }
    puVar39 = StringLiteral_9958;
    iVar26 = FUN_01de5384(uVar45,0);
    auVar7._8_8_ = local_b8._8_8_;
    auVar7._0_8_ = local_b8._0_8_;
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    auVar6._8_8_ = local_b8._8_8_;
    auVar6._0_8_ = local_b8._0_8_;
    auVar5._8_8_ = local_b8._8_8_;
    auVar5._0_8_ = local_b8._0_8_;
    if (iVar26 < 10) {
      if (iVar26 == 3) {
        auVar48 = auVar7;
        if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
        if ((long *)param_3[4] == (long *)0x0) goto LAB_01d7e4a4;
        if (*(long *)(*(long *)param_3[4] + 0x40) != *(long *)(*(long *)puVar39 + 0x40))
        goto LAB_01d7e564;
        puVar35 = (undefined1 *)thunk_FUN_00d624a0();
        uVar25 = *puVar35;
        uVar45 = *(undefined8 *)puVar39;
        goto LAB_01d7dd64;
      }
      if (iVar26 == 9) {
        if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
        auVar48 = auVar7;
        if ((long *)param_3[4] == (long *)0x0) goto LAB_01d7e4a4;
        if (*(long *)(*(long *)param_3[4] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
        goto LAB_01d7e564;
        piVar33 = (int *)thunk_FUN_00d624a0();
        uVar45 = *(undefined8 *)puVar39;
        bVar24 = *piVar33 == 0;
        goto LAB_01d7dd28;
      }
    }
    else {
      if (iVar26 == 0xe) {
        auVar48 = auVar6;
        if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
        auVar48 = auVar7;
        if ((long *)param_3[4] == (long *)0x0) goto LAB_01d7e4a4;
        if (*(long *)(*(long *)param_3[4] + 0x40) != *(long *)(*(long *)puVar15 + 0x40))
        goto LAB_01d7e564;
        pdVar29 = (double *)thunk_FUN_00d624a0();
        uVar45 = *(undefined8 *)puVar39;
        bVar24 = false;
        if (!NAN(*pdVar29)) {
          bVar24 = *pdVar29 == 0.0;
        }
LAB_01d7dd28:
        uVar25 = !bVar24;
LAB_01d7dd64:
        local_80[0] = uVar25;
        goto LAB_01d7dd68;
      }
      if (iVar26 == 0x12) {
        auVar48 = auVar5;
        if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
        plVar44 = (long *)param_3[4];
        if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((plVar44 != (long *)0x0) && (*plVar44 != *(long *)puVar16)) goto LAB_01d7e568;
        uVar25 = FUN_016f61a4(plVar44,0);
        uVar45 = *(undefined8 *)puVar39;
        local_80 = (undefined1  [8])(CONCAT71(local_80._1_7_,uVar25) & 0xffffffffffffff01);
        goto LAB_01d7dadc;
      }
    }
    FUN_00ac2be8(param_3);
    uVar45 = FUN_00c46a5c(param_3,0);
    FUN_00ac2be8();
    uVar45 = thunk_FUN_00d93c64(uVar45,0);
    uVar38 = thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    FUN_00acb0a4();
    uVar38 = FUN_01780344(uVar38,0);
    uVar45 = FUN_01d7bc54(uVar45,uVar38);
    goto LAB_01d7e548;
  case 0x17:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    uVar45 = FUN_01d75be0(param_1);
    if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar20);
    }
    uVar45 = FUN_017009c4(lVar31,uVar45,0);
    local_80 = (undefined1  [8])uVar45;
    uVar45 = *(undefined8 *)puVar22;
LAB_01d7dadc:
    pdVar29 = (double *)local_80;
    goto LAB_01d7dd6c;
  case 0x18:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    uVar45 = FUN_01d75be0(param_1);
    if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar20);
    }
    local_80 = (undefined1  [8])FUN_01700318(lVar31,uVar45,0);
    uVar45 = *(undefined8 *)puVar15;
    goto LAB_01d7dd68;
  case 0x19:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    uVar45 = FUN_01d75be0(param_1);
    if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar20);
    }
    lVar31 = FUN_01700c3c(lVar31,uVar45,0);
    goto LAB_01d7dd74;
  case 0x1a:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    auVar48 = auVar4;
    if (param_3[4] == 0) goto LAB_01d7e4a4;
    uVar45 = thunk_FUN_00d93c64(param_3[4],0);
    if (*(int *)(*(long *)puVar39 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar39);
    }
    puVar16 = System_Threading_Timer_TimerComparer_TypeInfo;
    iVar26 = FUN_01de5384(uVar45,0);
    puVar39 = System_IO_FileNotFoundException_TypeInfo;
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    auVar4._8_8_ = local_b8._8_8_;
    auVar4._0_8_ = local_b8._0_8_;
    if (iVar26 - 5U < 8) {
      auVar48 = auVar4;
      if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
      plVar44 = (long *)param_3[4];
      if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar39 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      auVar48 = local_b8;
      if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
      if (*(long *)(*plVar44 + 0x40) !=
          *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
      goto LAB_01d7e568;
      pdVar29 = (double *)thunk_FUN_00d624a0(plVar44);
      dVar41 = *pdVar29;
      uVar45 = *(undefined8 *)puVar39;
      local_80 = (undefined1  [8])-(long)dVar41;
      if (-1 < (long)dVar41) {
        local_80 = (undefined1  [8])dVar41;
      }
    }
    else {
      if (8 < iVar26 - 7U) {
        thunk_FUN_00d48444(System_IO_FileNotFoundException_TypeInfo);
        FUN_00acb0a4();
        lVar37 = thunk_FUN_00d48444(puVar39);
        iVar26 = *(int *)(param_1 + 0x20);
        uVar45 = **(undefined8 **)(lVar37 + 0xb8);
        FUN_00ac2be8(uVar45);
        lVar37 = FUN_00c46a38(uVar45,(long)iVar26);
        FUN_00ac2be8();
        uVar45 = FUN_01d7be78(*(undefined8 *)(lVar37 + 0x10),1);
        goto LAB_01d7e548;
      }
      if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
      plVar44 = (long *)param_3[4];
      if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar48 = local_b8;
      if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
      if (*(long *)(*plVar44 + 0x40) != *(long *)(*(long *)puVar15 + 0x40)) goto LAB_01d7e568;
      pdVar29 = (double *)thunk_FUN_00d624a0(plVar44);
      uVar45 = *(undefined8 *)puVar15;
      local_80 = (undefined1  [8])ABS(*pdVar29);
    }
LAB_01d7dd68:
    pdVar29 = (double *)local_80;
LAB_01d7dd6c:
    lVar31 = thunk_FUN_00d61fa0(uVar45,pdVar29);
    goto LAB_01d7dd74;
  case 0x1c:
    thunk_FUN_00d48444(System_IO_FileNotFoundException_TypeInfo);
    FUN_00acb0a4();
    lVar37 = thunk_FUN_00d48444(puVar17);
    iVar26 = *(int *)(param_1 + 0x20);
    uVar45 = **(undefined8 **)(lVar37 + 0xb8);
    FUN_00ac2be8(uVar45);
    lVar37 = FUN_00c46a38(uVar45,(long)iVar26);
    FUN_00ac2be8();
    uVar45 = FUN_01d7bafc(*(undefined8 *)(lVar37 + 0x10));
LAB_01d7e548:
    uVar38 = thunk_FUN_00d48444(StringLiteral_5576);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar45,uVar38);
  case 0x1d:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = param_3[4];
    if (*(int *)(*(long *)PTR_DAT_033eb8b0 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar30 = FUN_01de5af8(lVar31,0);
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    if ((uVar30 & 1) == 0) {
      iVar26 = (int)param_3[3];
      if (iVar26 == 0) goto LAB_01d7e4a0;
      plVar43 = (long *)param_3[4];
      if ((plVar43 != (long *)0x0) && (*plVar43 == *(long *)puVar19)) {
        puVar32 = (undefined8 *)thunk_FUN_00d624a0(plVar43);
        uStack_98 = puVar32[1];
        local_a0 = *puVar32;
        uStack_88 = puVar32[3];
        uStack_90 = puVar32[2];
        if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar43 = (long *)FUN_01dc7824(&local_a0,0);
        if ((plVar43 != (long *)0x0) &&
           (lVar31 = thunk_FUN_00d6225c(plVar43,*(undefined8 *)(*param_3 + 0x40)), lVar31 == 0)) {
LAB_01d7e690:
          uVar45 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar45,0);
        }
        auVar48._8_8_ = local_b8._8_8_;
        auVar48._0_8_ = local_b8._0_8_;
        iVar26 = (int)param_3[3];
        if (iVar26 == 0) goto LAB_01d7e4a0;
        param_3[4] = (long)plVar43;
      }
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      if (iVar26 == 0) goto LAB_01d7e4a0;
      if (plVar43 == (long *)0x0) goto LAB_01d7e4a4;
      if (*plVar43 == *(long *)puVar16) {
        lVar31 = FUN_01604318(plVar43,0);
        goto LAB_01d7dd74;
      }
      goto LAB_01d7e578;
    }
    break;
  case 0x26:
    if (param_3 == (long *)0x0) goto LAB_01d7e4a4;
    auVar48 = ZEXT816(0);
    if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
    lVar31 = *(long *)
              Method_GoogleSheetsToUnity_SpreadsheetManager_<Read>d__2_System_Collections_IEnumerator_Reset__
    ;
    lVar46 = param_3[4];
    if (*(int *)(lVar31 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar31 = *(long *)puVar21;
    }
    auVar48._8_8_ = local_b8._8_8_;
    auVar48._0_8_ = local_b8._0_8_;
    lVar42 = **(long **)(lVar31 + 0xb8);
    if (lVar46 != lVar42) {
      if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
      lVar46 = param_3[5];
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar31 = *(long *)puVar21;
        lVar42 = **(long **)(lVar31 + 0xb8);
      }
      auVar48._8_8_ = local_b8._8_8_;
      auVar48._0_8_ = local_b8._0_8_;
      if (lVar46 != lVar42) {
        if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
        lVar46 = param_3[6];
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *(long *)puVar21;
          lVar42 = **(long **)(lVar31 + 0xb8);
        }
        auVar48._8_8_ = local_b8._8_8_;
        auVar48._0_8_ = local_b8._0_8_;
        if (lVar46 != lVar42) {
          if ((int)param_3[3] == 0) goto LAB_01d7e4a0;
          if ((long *)param_3[4] == (long *)0x0) goto LAB_01d7e4a4;
          auVar7 = auVar48;
          if (*(long *)(*(long *)param_3[4] + 0x40) != *(long *)(*(long *)puVar22 + 0x40))
          goto LAB_01d7e564;
          puVar32 = (undefined8 *)thunk_FUN_00d624a0();
          local_a8 = *puVar32;
          if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar26 = FUN_0174f08c(&local_a8,0);
          puVar39 = Newtonsoft_Json_Linq_JToken_TypeInfo;
          if (iVar26 == 2) {
            if (*(int *)(*(long *)puVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            local_b8 = FUN_01752878(0);
            local_c0 = FUN_01752b6c(local_b8,0);
            lVar31 = *(long *)puVar39;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar31);
            }
            iVar26 = FUN_017888a8(&local_c0,0);
            auVar48 = local_b8;
            if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
            if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
            auVar7 = local_b8;
            if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
            goto LAB_01d7e564;
            piVar33 = (int *)thunk_FUN_00d624a0();
            if (iVar26 != *piVar33) {
              if (*(int *)(*(long *)puVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar48 = FUN_01752878(0);
              local_b8 = auVar48;
              local_c0 = FUN_01752b6c(local_b8,0);
              lVar31 = *(long *)puVar39;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_00d32864(lVar31);
              }
              iVar26 = FUN_017888f0(&local_c0,0);
              auVar48 = local_b8;
              if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
              if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
              auVar7 = local_b8;
              if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
              goto LAB_01d7e564;
              piVar33 = (int *)thunk_FUN_00d624a0();
              if (iVar26 != *piVar33) {
LAB_01d7e6b8:
                uVar45 = FUN_01d7c0cc();
                goto LAB_01d7e548;
              }
            }
          }
          else if (iVar26 == 1) {
            auVar48 = local_b8;
            if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
            if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
            auVar7 = local_b8;
            if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
            goto LAB_01d7e564;
            piVar33 = (int *)thunk_FUN_00d624a0();
            if (*piVar33 != 0) {
              auVar48 = local_b8;
              if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
              if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
              auVar7 = local_b8;
              if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
              goto LAB_01d7e564;
              piVar33 = (int *)thunk_FUN_00d624a0();
              if (*piVar33 != 0) goto LAB_01d7e6b8;
            }
          }
          auVar48 = local_b8;
          if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
          if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
          auVar7 = local_b8;
          if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
          goto LAB_01d7e564;
          piVar33 = (int *)thunk_FUN_00d624a0();
          if (-0xf < *piVar33) {
            auVar48 = local_b8;
            if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
            if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
            auVar7 = local_b8;
            if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
            goto LAB_01d7e564;
            piVar33 = (int *)thunk_FUN_00d624a0();
            if (*piVar33 < 0xf) {
              auVar48 = local_b8;
              if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
              if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
              auVar7 = local_b8;
              if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
              goto LAB_01d7e564;
              piVar33 = (int *)thunk_FUN_00d624a0();
              if (-0x3c < *piVar33) {
                auVar48 = local_b8;
                if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
                if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
                auVar7 = local_b8;
                if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
                goto LAB_01d7e564;
                piVar33 = (int *)thunk_FUN_00d624a0();
                if (*piVar33 < 0x3c) {
                  auVar48 = local_b8;
                  if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
                  if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
                  auVar7 = local_b8;
                  if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
                  goto LAB_01d7e564;
                  piVar33 = (int *)thunk_FUN_00d624a0();
                  if (*piVar33 == 0xe) {
                    auVar48 = local_b8;
                    if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
                    if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
                    auVar7 = local_b8;
                    if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
                    goto LAB_01d7e564;
                    piVar33 = (int *)thunk_FUN_00d624a0();
                    if (*piVar33 < 1) goto LAB_01d7e1ec;
LAB_01d7e6a4:
                    uVar45 = FUN_01d7c08c();
                    goto LAB_01d7e548;
                  }
LAB_01d7e1ec:
                  auVar48 = local_b8;
                  if (*(uint *)(param_3 + 3) < 2) goto LAB_01d7e4a0;
                  if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
                  auVar7 = local_b8;
                  if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
                  goto LAB_01d7e564;
                  piVar33 = (int *)thunk_FUN_00d624a0();
                  if (*piVar33 == -0xe) {
                    auVar48 = local_b8;
                    if (*(uint *)(param_3 + 3) < 3) goto LAB_01d7e4a0;
                    if ((long *)param_3[6] == (long *)0x0) goto LAB_01d7e4a4;
                    auVar7 = local_b8;
                    if (*(long *)(*(long *)param_3[6] + 0x40) != *(long *)(*(long *)puVar18 + 0x40))
                    goto LAB_01d7e564;
                    piVar33 = (int *)thunk_FUN_00d624a0();
                    if (*piVar33 < 0) goto LAB_01d7e6a4;
                  }
                  uVar27 = *(uint *)(param_3 + 3);
                  auVar48 = local_b8;
                  if (((uVar27 == 0) || (uVar27 == 1)) || (uVar27 < 3)) goto LAB_01d7e4a0;
                  plVar43 = (long *)param_3[4];
                  plVar44 = (long *)param_3[6];
                  local_d8 = 0;
                  if ((long *)param_3[5] == (long *)0x0) goto LAB_01d7e4a4;
                  auVar7 = local_b8;
                  if (*(long *)(*(long *)param_3[5] + 0x40) != *(long *)(*(long *)puVar18 + 0x40)) {
LAB_01d7e564:
                    local_b8 = auVar7;
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c();
                  }
                  puVar36 = (undefined4 *)thunk_FUN_00d624a0();
                  auVar48 = local_b8;
                  if (plVar44 == (long *)0x0) goto LAB_01d7e4a4;
                  if (*(long *)(*plVar44 + 0x40) != *(long *)(*(long *)puVar18 + 0x40)) {
LAB_01d7e568:
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar44);
                  }
                  uVar28 = *puVar36;
                  puVar36 = (undefined4 *)thunk_FUN_00d624a0(plVar44);
                  FUN_01788698(&local_d8,uVar28,*puVar36,0,0);
                  local_80 = (undefined1  [8])0x0;
                  dStack_78 = 0.0;
                  auVar48 = local_b8;
                  if (plVar43 == (long *)0x0) goto LAB_01d7e4a4;
                  auVar7 = local_b8;
                  if (*(long *)(*plVar43 + 0x40) != *(long *)(*(long *)puVar22 + 0x40))
                  goto LAB_01d7e564;
                  puVar32 = (undefined8 *)thunk_FUN_00d624a0(plVar43);
                  FUN_017523ec(local_80,*puVar32,local_d8,0);
                  uVar45 = *(undefined8 *)puVar23;
                  goto LAB_01d7e334;
                }
              }
              uVar45 = FUN_01d7c04c();
              goto LAB_01d7e548;
            }
          }
          uVar45 = FUN_01d7c00c();
          goto LAB_01d7e548;
        }
      }
    }
    goto LAB_01d7da34;
  }
  lVar31 = *(long *)puVar21;
LAB_01d7da34:
  if (*(int *)(lVar31 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar31 = *(long *)puVar21;
  }
  plVar43 = *(long **)(lVar31 + 0xb8);
LAB_01d7da48:
  lVar31 = *plVar43;
LAB_01d7dd74:
  if (*(long *)(lVar37 + 0x28) == local_68) {
    return lVar31;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


