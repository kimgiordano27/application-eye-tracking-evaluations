/*
FUNCTION_NAME: FUN_01839890
ENTRY_POINT: 01839890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_01839890(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_58;
  
  if ((DAT_03779543 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PersistentCall>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__);
    thunk_FUN_00d48444(StringLiteral_10060);
    thunk_FUN_00d48444(GetAvailableProfilerStats_<>c_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_INestedSite_TypeInfo);
    thunk_FUN_00d48444(UIntPtr_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass77_0_TypeInfo);
    DAT_03779543 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_58 = 0.0;
  if ((param_2 != 0) && (uVar9 = FUN_0183b434(param_1,param_2,4), (uVar9 & 1) != 0)) {
    FUN_01836504(param_1,param_2);
    puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__;
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
    uStack_78 = *(undefined8 *)(param_2 + 0x50);
    local_80 = *(undefined8 *)(param_2 + 0x48);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c(lVar16);
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__;
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    pcVar11 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar16 + 0x80));
    if (*pcVar11 != '\0') {
      local_90 = *(double *)(param_2 + 0x48);
      uStack_88 = *(undefined8 *)(param_2 + 0x50);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
      iVar8 = FUN_018c0374(6,plVar10,uVar12,0);
      puVar2 = UIntPtr_TypeInfo;
      if (0 < iVar8) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01731954(0);
        local_90 = *(double *)(param_2 + 0x48);
        uStack_88 = *(undefined8 *)(param_2 + 0x50);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
        uVar12 = FUN_018652e8(*(undefined8 *)puVar2,uVar12,plVar10,uVar13,0);
        FUN_01835f8c(param_1,uVar12);
      }
      if (*(char *)(param_2 + 0x59) != '\0') {
        local_90 = *(double *)(param_2 + 0x48);
        uStack_88 = *(undefined8 *)(param_2 + 0x50);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
        iVar8 = FUN_018c0374(6,plVar10,uVar12,0);
        puVar2 = System_ComponentModel_INestedSite_TypeInfo;
        if (iVar8 == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01731954(0);
          local_90 = *(double *)(param_2 + 0x48);
          uStack_88 = *(undefined8 *)(param_2 + 0x50);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
          uVar12 = FUN_018652e8(*(undefined8 *)puVar2,uVar12,plVar10,uVar13,0);
          FUN_01835f8c(param_1,uVar12);
        }
      }
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x40);
    local_80 = *(undefined8 *)(param_2 + 0x38);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar16 + 0x80));
    if (*pcVar11 != '\0') {
      local_90 = *(double *)(param_2 + 0x38);
      uStack_88 = *(undefined8 *)(param_2 + 0x40);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
      iVar8 = FUN_018c0374(6,plVar10,uVar12,0);
      puVar2 = StringLiteral_10060;
      if (iVar8 < 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01731954(0);
        local_90 = *(double *)(param_2 + 0x38);
        uStack_88 = *(undefined8 *)(param_2 + 0x40);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
        uVar12 = FUN_018652e8(*(undefined8 *)puVar2,uVar12,plVar10,uVar13,0);
        FUN_01835f8c(param_1,uVar12);
      }
      if (*(char *)(param_2 + 0x58) != '\0') {
        local_90 = *(double *)(param_2 + 0x38);
        uStack_88 = *(undefined8 *)(param_2 + 0x40);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
        iVar8 = FUN_018c0374(6,plVar10,uVar12,0);
        puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass77_0_TypeInfo;
        if (iVar8 == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01731954(0);
          local_90 = *(double *)(param_2 + 0x38);
          uStack_88 = *(undefined8 *)(param_2 + 0x40);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
          uVar12 = FUN_018652e8(*(undefined8 *)puVar2,uVar12,plVar10,uVar13,0);
          FUN_01835f8c(param_1,uVar12);
        }
      }
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x30);
    local_80 = *(undefined8 *)(param_2 + 0x28);
    lVar16 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    pcVar11 = (char *)thunk_FUN_00d32ed4(&local_80,*(undefined8 *)(lVar16 + 0x80));
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    puVar5 = Method_System_Collections_Generic_List<PersistentCall>__ctor__;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
    if (*pcVar11 != '\0') {
      if ((plVar10 == (long *)0x0) ||
         (*plVar10 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar2 = Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__;
        puVar3 = 
        Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
        ;
        uVar12 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar7);
        }
        lVar16 = FUN_016ff5a8(plVar10,uVar12,0);
        uStack_78 = *(undefined8 *)(param_2 + 0x30);
        local_80 = *(undefined8 *)(param_2 + 0x28);
        dVar17 = (double)FUN_00bec1a8(&local_80,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fmod((double)lVar16,dVar17);
        uVar9 = FUN_0183b580();
        if ((uVar9 & 1) != 0) {
          return;
        }
      }
      else {
        pauVar14 = (undefined1 (*) [16])thunk_FUN_00d624a0(plVar10);
        uStack_78 = *(undefined8 *)(param_2 + 0x30);
        local_80 = *(undefined8 *)(param_2 + 0x28);
        uVar12 = *(undefined8 *)*pauVar14;
        uVar13 = *(undefined8 *)(*pauVar14 + 8);
        auVar1 = *pauVar14;
        auVar19 = *pauVar14;
        FUN_01347408(&local_80,&local_90,*(undefined8 *)puVar5);
        dVar17 = local_90;
        uStack_78 = *(undefined8 *)(param_2 + 0x30);
        local_80 = *(undefined8 *)(param_2 + 0x28);
        FUN_01347408(&local_80,&local_90,*(undefined8 *)puVar5);
        dVar18 = local_90;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar18 = (double)FUN_01772d4c(dVar18,0);
        local_58 = ABS(dVar17 - dVar18);
        uVar9 = FUN_01756130(0,&local_58,0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            auVar19 = auVar1;
          }
        }
        else {
          uStack_78 = *(undefined8 *)(param_2 + 0x30);
          local_80 = *(undefined8 *)(param_2 + 0x28);
          FUN_01347408(&local_80,&local_90,*(undefined8 *)puVar5);
          dVar17 = local_90;
          local_90 = 0.0;
          uStack_88 = 0;
          FUN_01e172a0(dVar17,&local_90,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar19 = FUN_01e1b0c0(uVar12,uVar13,local_90,uStack_88,0);
        }
        uVar9 = FUN_01e1b568(auVar19._0_8_,auVar19._8_8_,0,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
      }
      puVar3 = 
      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
      ;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar4 = GetAvailableProfilerStats_<>c_TypeInfo;
      uVar12 = FUN_01731954(0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar13 = FUN_01800320(plVar10,0);
      local_90 = *(double *)(param_2 + 0x28);
      uStack_88 = *(undefined8 *)(param_2 + 0x30);
      uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_90);
      uVar12 = FUN_018652e8(*(undefined8 *)puVar4,uVar12,uVar13,uVar15,0);
      FUN_01835f8c(param_1,uVar12);
    }
  }
  return;
}


