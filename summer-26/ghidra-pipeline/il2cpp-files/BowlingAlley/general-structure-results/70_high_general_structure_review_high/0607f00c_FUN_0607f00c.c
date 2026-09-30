/*
FUNCTION_NAME: FUN_0607f00c
ENTRY_POINT: 0607f00c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_0607f00c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  
  if ((DAT_076dd3fc & 1) == 0) {
    thunk_FUN_032e1da0(System_Func<float[],_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<DebugColor,_Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<float[],_Vector4>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<BestFitAllocator_Block>_TypeInfo);
    thunk_FUN_032e1da0(System_Action<float,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Font,_HashSet<Text>>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Func<AndroidAxis,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Assembly,_IEnumerable<Type>>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Assembly,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<AssemblyName,_Assembly>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<AssetBodyShape,_AssetBodyShape>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<AssetColor,_AssetType>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<AssetType,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Vector3,_int>,_Vector3>_TypeInfo);
    DAT_076dd3fc = 1;
  }
  puVar4 = System_Func<Assembly,_IEnumerable<Type>>_TypeInfo;
  puVar3 = System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo;
  puVar2 = PTR_DAT_072a1998;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x78) == 0)) goto LAB_0607f778;
  uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x10);
  if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar5 = System_Func<AssetBodyShape,_AssetBodyShape>_TypeInfo;
  lVar8 = FUN_06240390(uVar17,0);
  uVar17 = FUN_06240390(*(undefined8 *)(param_2 + 0x50),0);
  lVar9 = FUN_060790fc(uVar17,param_2,*(undefined8 *)puVar4,uVar17);
  uVar17 = FUN_0607f7bc(lVar9,param_2);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar3);
  }
  uVar10 = FUN_06073f60(param_2,*(undefined8 *)puVar5);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_0607f778;
  lVar11 = FUN_060446e0(lVar11,uVar17,uVar10,0);
  if (lVar11 == 0) {
    return;
  }
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
    uVar17 = FUN_06012c10(lVar9,0);
LAB_0607f79c:
    uVar10 = thunk_FUN_032e1da0(System_Func<Attribute,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar17,uVar10);
  }
  plVar12 = *(long **)(param_1 + 0x38);
  if (plVar12 == (long *)0x0) goto LAB_0607f778;
  plVar12 = (long *)(**(code **)(*plVar12 + 0x308))(plVar12,lVar8,*(undefined8 *)(*plVar12 + 0x310))
  ;
  puVar4 = System_Func<Assembly,_bool>_TypeInfo;
  if (plVar12 == (long *)0x0) {
    uVar17 = FUN_06012a44(lVar9,0);
    goto LAB_0607f79c;
  }
  if (*plVar12 != *(long *)System_Func<float[],_Vector3>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
  lVar8 = FUN_0607ebc8(plVar12,plVar12[3],plVar12[2]);
  lVar11 = FUN_0607ebc8(lVar8,param_2,lVar11);
  uVar13 = FUN_0607672c(lVar11,param_2,*(undefined8 *)puVar4,0);
  if ((uVar13 & 1) != 0) {
    if (lVar11 == 0) goto LAB_0607f778;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
    if (((*(long *)(lVar11 + 0x20) == 0) ||
        (lVar15 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x48), lVar15 == 0)) goto LAB_0607f778;
    iVar6 = FUN_06000504(lVar15,lVar9,0);
    if (-1 < iVar6) {
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
      if ((*(long *)(lVar11 + 0x20) == 0) ||
         (lVar15 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar15 == 0)) goto LAB_0607f778;
      lVar15 = *(long *)(lVar15 + 0x48);
      if ((lVar15 == 0) || (plVar12 = (long *)FUN_0600028c(lVar15,iVar6,0), plVar12 == (long *)0x0))
      goto LAB_0607f778;
      uVar17 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
      uVar13 = FUN_057aa92c(uVar17,lVar9,0);
      plVar18 = (long *)0x0;
      if ((uVar13 & 1) == 0) goto LAB_0607f61c;
    }
    plVar18 = (long *)thunk_FUN_032a56a0(*(undefined8 *)System_Action<float,_string>_TypeInfo);
    FUN_0605eb80(plVar18,lVar9,lVar8,lVar11,0);
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
    if (((*(long *)(lVar11 + 0x20) == 0) ||
        (lVar8 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x48), lVar8 == 0)) goto LAB_0607f778;
    FUN_060006ac(lVar8,plVar18,0);
    goto LAB_0607f61c;
  }
  uVar17 = FUN_060790fc(uVar13,param_2,*(undefined8 *)System_Func<AndroidAxis,_string>_TypeInfo,
                        *(undefined8 *)(param_2 + 0x50));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar2);
  }
  lVar15 = FUN_06240390(uVar17,0);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) == 0)) {
    lVar15 = lVar9;
  }
  if (lVar11 == 0) goto LAB_0607f778;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
  if ((((*(long *)(lVar11 + 0x20) == 0) ||
       (lVar16 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar16 == 0)) ||
      (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) ||
     (lVar16 = *(long *)(lVar16 + 0x30), lVar16 == 0)) goto LAB_0607f778;
  iVar6 = FUN_0603010c(lVar16,lVar15,0);
  if (iVar6 < 0) {
LAB_0607f408:
    plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<DebugColor,_Color>_TypeInfo
                                        );
    FUN_06014060(plVar12,lVar15,lVar8,lVar11,0);
    uVar17 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0607465c(plVar12,uVar17);
    if (lVar8 == 0) goto LAB_0607f778;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0607f77c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if ((((*(long *)(lVar8 + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + 0x78), lVar8 == 0)) ||
        (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x30), lVar8 == 0)) goto LAB_0607f778;
    System_Xml_XmlTextReaderImpl___ctor(lVar8,plVar12,0);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      if (plVar12 == (long *)0x0) goto LAB_0607f778;
    }
    else {
      if (plVar12 == (long *)0x0) goto LAB_0607f778;
      uVar13 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if ((uVar13 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x88);
        uVar17 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        if (lVar8 == 0) goto LAB_0607f778;
        uVar13 = FUN_050f8d04(lVar8,uVar17,*(undefined8 *)System_Func<float[],_Vector4>_TypeInfo);
        if ((uVar13 & 1) != 0) {
          lVar8 = *(long *)(param_1 + 0x88);
          uVar17 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          if (lVar8 == 0) goto LAB_0607f778;
          lVar8 = FUN_050f8a90(lVar8,uVar17,
                               *(undefined8 *)System_Func<BestFitAllocator_Block>_TypeInfo);
          uVar17 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
          if (lVar8 == 0) goto LAB_0607f778;
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar15 = *(long *)System_Collections_Generic_Dictionary<Font,_HashSet<Text>>_TypeInfo;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_0607f778;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
            thunk_FUN_0333a630();
          }
          else {
            FUN_041e2c78(lVar8,uVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    plVar18 = (long *)(**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
    if (plVar18 == (long *)0x0) goto LAB_0607f778;
    plVar14 = (long *)(**(code **)(*plVar18 + 0x188))(plVar18,lVar9,*(undefined8 *)(*plVar18 + 400))
    ;
  }
  else {
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
    if (((*(long *)(lVar11 + 0x20) == 0) ||
        (lVar16 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar16 == 0)) ||
       (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) goto LAB_0607f778;
    plVar12 = *(long **)(lVar16 + 0x30);
    if ((plVar12 == (long *)0x0) ||
       (plVar12 = (long *)(**(code **)(*plVar12 + 0x208))
                                    (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x210)),
       plVar12 == (long *)0x0)) goto LAB_0607f778;
    uVar17 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    uVar13 = FUN_057aa92c(uVar17,lVar15,0);
    if ((uVar13 & 1) != 0) goto LAB_0607f408;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0607f77c;
    if (((*(long *)(lVar11 + 0x20) == 0) ||
        (lVar8 = *(long *)(*(long *)(lVar11 + 0x20) + 0x78), lVar8 == 0)) ||
       ((lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0 ||
        (plVar12 = *(long **)(lVar8 + 0x30), plVar12 == (long *)0x0)))) goto LAB_0607f778;
    plVar14 = (long *)(**(code **)(*plVar12 + 0x208))
                                (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x210));
    plVar18 = (long *)0x0;
    plVar12 = plVar14;
  }
  uVar13 = FUN_0607672c(plVar14,param_2,
                        *(undefined8 *)System_Func<KeyValuePair<Vector3,_int>,_Vector3>_TypeInfo,0);
  if ((uVar13 & 1) != 0) {
    if (plVar12 == (long *)0x0) {
LAB_0607f778:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    (**(code **)(*plVar12 + 0x1e8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x1f0));
  }
LAB_0607f61c:
  puVar5 = System_Func<AssetType,_bool>_TypeInfo;
  puVar4 = System_Func<AssetColor,_AssetType>_TypeInfo;
  puVar2 = System_Func<AssemblyName,_Assembly>_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar8 = FUN_06073f60(param_2,*(undefined8 *)puVar5);
  lVar9 = FUN_06073f60(param_2,*(undefined8 *)puVar2);
  lVar11 = FUN_06073f60(param_2,*(undefined8 *)puVar4);
  if (plVar18 == (long *)0x0) {
    return;
  }
  if (lVar8 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_0607ee9c(lVar8);
    (**(code **)(*plVar18 + 0x288))(plVar18,uVar7,*(undefined8 *)(*plVar18 + 0x290));
  }
  if (lVar9 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_0607ef20(lVar9);
    (**(code **)(*plVar18 + 0x2e8))(plVar18,uVar7,*(undefined8 *)(*plVar18 + 0x2f0));
  }
  if (lVar11 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_0607ef20(lVar11);
    (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar7,*(undefined8 *)(*plVar18 + 0x2b0));
  }
  uVar17 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0607465c(plVar18,uVar17);
  return;
}


