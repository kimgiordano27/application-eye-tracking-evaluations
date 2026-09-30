/*
FUNCTION_NAME: Obi.ObiRope$$SplitParticle
ENTRY_POINT: 01839f74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Obi_ObiRope__SplitParticle(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_03779545 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__);
    thunk_FUN_00d48444(System_Xml_Schema_AxisStack_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<VisualElement,_Vector2>_TypeInfo);
    thunk_FUN_00d48444(SubtitleManager_<>c__DisplayClass35_1_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eb4f8);
    thunk_FUN_00d48444(StringLiteral_7077);
    DAT_03779545 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((param_2 != 0) && (uVar7 = FUN_0183b434(param_1,param_2,2), (uVar7 & 1) != 0)) {
    FUN_01836504(param_1,param_2);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    puVar4 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    plVar8 = *(long **)(param_1 + 0x78);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__;
    uVar10 = FUN_01731954(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    dVar14 = (double)FUN_01700318(uVar9,uVar10,0);
    in_stack_00000018 = *(undefined8 *)(param_2 + 0x50);
    in_stack_00000010 = *(undefined8 *)(param_2 + 0x48);
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    puVar6 = 
    Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
    ;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s8__;
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
    ;
    pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar12 != '\0') {
      in_stack_00000018 = *(undefined8 *)(param_2 + 0x50);
      in_stack_00000010 = *(undefined8 *)(param_2 + 0x48);
      dVar15 = (double)FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar2);
      lVar11 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c();
      }
      pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
      if ((dVar15 < dVar14) && (*pcVar12 != '\0')) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar1 = SubtitleManager_<>c__DisplayClass35_1_TypeInfo;
        uVar9 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar10 = FUN_017ffa6c(dVar14,0);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        uVar9 = FUN_018652e8(*(undefined8 *)puVar1,uVar9,uVar10,uVar13,0);
        FUN_01835f8c(param_1,uVar9);
      }
      if (*(char *)(param_2 + 0x59) != '\0') {
        in_stack_00000018 = *(undefined8 *)(param_2 + 0x50);
        in_stack_00000010 = *(undefined8 *)(param_2 + 0x48);
        dVar15 = (double)FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar2);
        lVar11 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
        if ((dVar14 == dVar15) && (*pcVar12 != '\0')) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar1 = PTR_DAT_033eb4f8;
          uVar9 = FUN_01731954(0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar6);
          }
          uVar10 = FUN_017ffa6c(dVar14,0);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
          uVar9 = FUN_018652e8(*(undefined8 *)puVar1,uVar9,uVar10,uVar13,0);
          FUN_01835f8c(param_1,uVar9);
        }
      }
    }
    in_stack_00000018 = *(undefined8 *)(param_2 + 0x40);
    in_stack_00000010 = *(undefined8 *)(param_2 + 0x38);
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
    if (*pcVar12 != '\0') {
      in_stack_00000018 = *(undefined8 *)(param_2 + 0x40);
      in_stack_00000010 = *(undefined8 *)(param_2 + 0x38);
      dVar15 = (double)FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar2);
      lVar11 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        lVar11 = FUN_00d5941c();
      }
      pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
      if ((dVar14 < dVar15) && (*pcVar12 != '\0')) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar1 = System_Collections_Generic_Dictionary<VisualElement,_Vector2>_TypeInfo;
        uVar9 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar10 = FUN_017ffa6c(dVar14,0);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        uVar9 = FUN_018652e8(*(undefined8 *)puVar1,uVar9,uVar10,uVar13,0);
        FUN_01835f8c(param_1,uVar9);
      }
      if (*(char *)(param_2 + 0x58) != '\0') {
        in_stack_00000018 = *(undefined8 *)(param_2 + 0x40);
        in_stack_00000010 = *(undefined8 *)(param_2 + 0x38);
        dVar15 = (double)FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar2);
        lVar11 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
        if ((dVar14 == dVar15) && (*pcVar12 != '\0')) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar1 = System_Xml_Schema_AxisStack_TypeInfo;
          uVar9 = FUN_01731954(0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar6);
          }
          uVar10 = FUN_017ffa6c(dVar14,0);
          uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
          uVar9 = FUN_018652e8(*(undefined8 *)puVar1,uVar9,uVar10,uVar13,0);
          FUN_01835f8c(param_1,uVar9);
        }
      }
    }
    in_stack_00000018 = *(undefined8 *)(param_2 + 0x30);
    in_stack_00000010 = *(undefined8 *)(param_2 + 0x28);
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      lVar11 = FUN_00d5941c();
    }
    pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar11 + 0x80));
    puVar3 = Method_System_Linq_Enumerable_Last<SimulatedResponseMessage>__;
    if (*pcVar12 != '\0') {
      in_stack_00000018 = *(undefined8 *)(param_2 + 0x30);
      in_stack_00000010 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = FUN_00bec1a8(&stack0x00000010,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0183b5ec(dVar14,uVar9);
      uVar7 = FUN_0183b580();
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar4 = StringLiteral_7077;
        uVar9 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar10 = FUN_017ffa6c(dVar14,0);
        uVar13 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
        uVar9 = FUN_018652e8(*(undefined8 *)puVar4,uVar9,uVar10,uVar13,0);
        FUN_01835f8c(param_1,uVar9);
      }
    }
  }
  return;
}


