/*
FUNCTION_NAME: FUN_064fd474
ENTRY_POINT: 064fd474
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_064fd474(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  
                    /* try { // try from 064fd488 to 065fd497 has its CatchHandler @ 064fd58c */
  if ((DAT_06dcd755 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff178);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Position>__);
    FUN_02d965b8(PTR_DAT_06a0b3e0);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<SliceType>__);
    FUN_02d965b8(PTR_DAT_069fc668);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_VisualTreeAsset_<get_templateDependencies>d__27_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<StylePropertyName>__)
    ;
    FUN_02d965b8(Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__);
    FUN_02d965b8(PTR_DAT_069fc670);
    FUN_02d965b8(Method_System_Net_Configuration_WebRequestModulesSection__ctor__);
    FUN_02d965b8(Method_System_Xml_XmlTextReaderImpl_ResolveEntity__);
    FUN_02d965b8(PTR_DAT_069fc1f8);
    DAT_06dcd755 = 1;
  }
  puVar7 = Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__;
  puVar5 = Method_System_Net_Configuration_WebRequestModulesSection__ctor__;
  puVar4 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Position>__;
  puVar3 = PTR_DAT_069ff178;
  puVar2 = PTR_DAT_069fc670;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      iVar15 = 0;
      do {
        lVar10 = FUN_0400ff1c(param_4,iVar15,*(undefined8 *)puVar2);
        if (lVar10 == 0) goto LAB_064fd7b4;
        lVar16 = *(long *)(param_1 + 0x70);
        plVar11 = (long *)FUN_0631f564(lVar10,0);
        if (lVar16 == 0) goto LAB_064fd7b4;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else if (*plVar11 != *(long *)PTR_DAT_069fc1f8) {
          plVar11 = (long *)0x0;
        }
        lVar13 = *(long *)(lVar16 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_064fd7b4;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(long **)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = plVar11;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar16,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (param_5 == 0) goto LAB_064fd7b4;
        uVar8 = FUN_03fb6234(param_5,iVar15,*(undefined8 *)puVar7);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar5);
        }
        uVar12 = FUN_0642901c(uVar8,0);
        uVar8 = 0;
        if ((uVar12 & 1) == 0) {
          lVar16 = *(long *)(param_1 + 0x70);
          if ((lVar16 == 0) ||
             (lVar16 = FUN_0400ff1c(lVar16,*(int *)(lVar16 + 0x18) + -1,
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<StylePropertyName>__
                                   ), lVar16 == 0)) goto LAB_064fd7b4;
          iVar9 = FUN_0632ce98(lVar16,0);
          puVar6 = Method_System_Xml_XmlTextReaderImpl_ResolveEntity__;
          if (iVar9 == 1) {
            lVar16 = *(long *)Method_System_Xml_XmlTextReaderImpl_ResolveEntity__;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar16 = *(long *)puVar6;
            }
            uVar8 = thunk_FUN_06321abc(lVar10,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x6c),0);
          }
        }
        lVar10 = *(long *)(param_1 + 0x78);
        if (lVar10 == 0) goto LAB_064fd7b4;
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_064fd7b4;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          FUN_04059d64(uVar8,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_4 + 0x18));
    }
    FUN_064fd7b8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x70));
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      iVar15 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar15) {
        FUN_0550afb4(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
      }
      lVar10 = *(long *)(param_1 + 0x78);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        return;
      }
    }
  }
LAB_064fd7b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


