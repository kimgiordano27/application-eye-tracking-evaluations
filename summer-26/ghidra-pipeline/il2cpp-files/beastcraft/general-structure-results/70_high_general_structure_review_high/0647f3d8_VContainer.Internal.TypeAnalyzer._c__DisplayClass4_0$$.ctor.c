/*
FUNCTION_NAME: VContainer.Internal.TypeAnalyzer.<>c__DisplayClass4_0$$.ctor
ENTRY_POINT: 0647f3d8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void VContainer_Internal_TypeAnalyzer_<>c__DisplayClass4_0___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  
  FUN_02e3ca1c(PTR_DAT_06a6fb60);
  FUN_02e3ca1c(PTR_DAT_06a6fb68);
  FUN_02e3ca1c(
              Method_Unity_Collections_AllocatorManager_Array32768<AllocatorManager_TableEntry>_ElementAt__
              );
  FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<Expression>__ctor__);
  FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<Expression>_UncheckedAdd__);
  FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__);
  FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>_UncheckedAdd__);
  FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<BigInteger>__ctor__);
  FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<BitArray>__ctor__);
  FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<CultureInfo>__ctor__);
  FUN_02e3ca1c(PTR_DAT_06a6edc8);
  FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo);
  FUN_02e3ca1c(PTR_DAT_06a70700);
  *(undefined1 *)(unaff_x21 + 0x6fc) = 1;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
  ;
  puVar2 = PTR_DAT_06a6fb60;
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x70) == 0) {
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x28);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x9b8))(plVar4,*(undefined8 *)(*plVar4 + 0x9c0));
      uVar6 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
      FUN_04e0aa7c();
      uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
      FUN_064f2254(uVar7,uVar6,0);
      *(undefined8 *)(unaff_x19 + 0x50) = uVar7;
      thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x50),uVar7);
      FUN_0640727c(uVar5,uVar7,0);
      lVar11 = *(long *)(unaff_x19 + 0x18);
      uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
      FUN_05207864();
      puVar2 = PTR_DAT_06a707d8;
      if (lVar11 != 0) {
        FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)PTR_DAT_06a6fb50);
        lVar11 = *(long *)(unaff_x19 + 0x18);
        uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
        FUN_05207864();
        puVar2 = PTR_DAT_06a6fb68;
        if (lVar11 != 0) {
          FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)PTR_DAT_06a707d0);
          lVar11 = *(long *)(unaff_x19 + 0x18);
          uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
          FUN_05207864();
          if (lVar11 != 0) {
            FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)PTR_DAT_06a6fb58);
            puVar2 = PTR_DAT_06a6f968;
            plVar4 = *(long **)(unaff_x20 + 0x70);
            if (plVar4 != (long *)0x0) {
              lVar11 = *plVar4;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a6edc8) {
                    puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0647f684;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar8 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)PTR_DAT_06a6edc8,0);
LAB_0647f684:
              lVar11 = (*(code *)*puVar8)(plVar4,puVar8[1]);
              uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
              FUN_05207864();
              puVar1 = PTR_DAT_06a6f960;
              if (lVar11 != 0) {
                FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)PTR_DAT_06a6f960);
                lVar11 = *(long *)(unaff_x19 + 0x28);
                uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                FUN_05207864();
                if (lVar11 != 0) {
                  FUN_038a48c8(lVar11,uVar5,2,0,
                               *(undefined8 *)
                                Method_Unity_Services_Authentication_Shared_ApiResponse<Player>_get_Data__
                              );
                  lVar11 = *(long *)(unaff_x19 + 0x28);
                  uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                  FUN_05207864();
                  puVar2 = PTR_DAT_06a70730;
                  if (lVar11 != 0) {
                    FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)puVar1);
                    lVar11 = *(long *)(unaff_x19 + 0x28);
                    uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                    FUN_05207864();
                    if (lVar11 != 0) {
                      FUN_038a47c4(lVar11,uVar5,0,*(undefined8 *)PTR_DAT_06a70728);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


