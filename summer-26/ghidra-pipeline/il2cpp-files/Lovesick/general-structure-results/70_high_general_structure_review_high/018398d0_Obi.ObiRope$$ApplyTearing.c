/*
FUNCTION_NAME: Obi.ObiRope$$ApplyTearing
ENTRY_POINT: 018398d0
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


void Obi_ObiRope__ApplyTearing(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  double dVar16;
  undefined1 auVar17 [16];
  double in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double in_stack_00000038;
  
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
  *(undefined1 *)(unaff_x21 + 0x543) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000038 = 0.0;
  if ((unaff_x20 != 0) && (uVar8 = FUN_0183b434(), (uVar8 & 1) != 0)) {
    FUN_01836504();
    puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__;
    plVar9 = *(long **)(unaff_x19 + 0x78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar15 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c(lVar15);
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__;
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar15 + 0x80));
    if (*pcVar10 != '\0') {
      in_stack_00000000 = *(double *)(unaff_x20 + 0x48);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
      iVar7 = FUN_018c0374(6,plVar9,uVar11,0);
      puVar2 = UIntPtr_TypeInfo;
      if (0 < iVar7) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01731954(0);
        in_stack_00000000 = *(double *)(unaff_x20 + 0x48);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        FUN_018652e8(*(undefined8 *)puVar2,uVar11,plVar9,uVar12,0);
        FUN_01835f8c();
      }
      if (*(char *)(unaff_x20 + 0x59) != '\0') {
        in_stack_00000000 = *(double *)(unaff_x20 + 0x48);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        iVar7 = FUN_018c0374(6,plVar9,uVar11,0);
        puVar2 = System_ComponentModel_INestedSite_TypeInfo;
        if (iVar7 == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01731954(0);
          in_stack_00000000 = *(double *)(unaff_x20 + 0x48);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
          FUN_018652e8(*(undefined8 *)puVar2,uVar11,plVar9,uVar12,0);
          FUN_01835f8c();
        }
      }
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar15 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar15 + 0x80));
    if (*pcVar10 != '\0') {
      in_stack_00000000 = *(double *)(unaff_x20 + 0x38);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
      iVar7 = FUN_018c0374(6,plVar9,uVar11,0);
      puVar2 = StringLiteral_10060;
      if (iVar7 < 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01731954(0);
        in_stack_00000000 = *(double *)(unaff_x20 + 0x38);
        uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        FUN_018652e8(*(undefined8 *)puVar2,uVar11,plVar9,uVar12,0);
        FUN_01835f8c();
      }
      if (*(char *)(unaff_x20 + 0x58) != '\0') {
        in_stack_00000000 = *(double *)(unaff_x20 + 0x38);
        uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        iVar7 = FUN_018c0374(6,plVar9,uVar11,0);
        puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass77_0_TypeInfo;
        if (iVar7 == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01731954(0);
          in_stack_00000000 = *(double *)(unaff_x20 + 0x38);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
          FUN_018652e8(*(undefined8 *)puVar2,uVar11,plVar9,uVar12,0);
          FUN_01835f8c();
        }
      }
    }
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar15 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar15 + 0x80));
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
    if (*pcVar10 != '\0') {
      if ((plVar9 == (long *)0x0) ||
         (*plVar9 != *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo)) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar2 = Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__;
        puVar3 = 
        Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
        ;
        uVar11 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        lVar15 = FUN_016ff5a8(plVar9,uVar11,0);
        in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
        in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x28);
        dVar16 = (double)FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fmod((double)lVar15,dVar16);
        uVar8 = FUN_0183b580();
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      else {
        pauVar13 = (undefined1 (*) [16])thunk_FUN_00d624a0(plVar9);
        in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
        in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar11 = *(undefined8 *)*pauVar13;
        uVar12 = *(undefined8 *)(*pauVar13 + 8);
        auVar1 = *pauVar13;
        auVar17 = *pauVar13;
        FUN_01347408(&stack0x00000010);
        in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
        in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x28);
        FUN_01347408(&stack0x00000010);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar16 = (double)FUN_01772d4c(in_stack_00000000,0);
        in_stack_00000038 = ABS(in_stack_00000000 - dVar16);
        uVar8 = FUN_01756130(0,&stack0x00000038,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            auVar17 = auVar1;
          }
        }
        else {
          in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x30);
          in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0x28);
          FUN_01347408(&stack0x00000010);
          FUN_01e172a0(in_stack_00000000);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          auVar17 = FUN_01e1b0c0(uVar11,uVar12,0,0,0);
        }
        uVar8 = FUN_01e1b568(auVar17._0_8_,auVar17._8_8_,0,0);
        if ((uVar8 & 1) == 0) {
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
      uVar11 = FUN_01731954(0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar12 = FUN_01800320(plVar9,0);
      uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
      FUN_018652e8(*(undefined8 *)puVar4,uVar11,uVar12,uVar14,0);
      FUN_01835f8c();
    }
  }
  return;
}


