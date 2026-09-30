/*
FUNCTION_NAME: FUN_0647f33c
ENTRY_POINT: 0647f33c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0647f33c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  
  if ((bRam0000000006e9c6fc & 1) == 0) {
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70728);
    FUN_02e3ca1c(PTR_DAT_06a6f960);
    FUN_02e3ca1c(Method_Unity_Services_Authentication_Shared_ApiResponse<Player>_get_Data__);
    FUN_02e3ca1c(PTR_DAT_06a6fb50);
    FUN_02e3ca1c(PTR_DAT_06a707d0);
    FUN_02e3ca1c(PTR_DAT_06a6fb58);
    FUN_02e3ca1c(PTR_DAT_06a6f968);
    FUN_02e3ca1c(PTR_DAT_06a707d8);
    FUN_02e3ca1c(PTR_DAT_06a70730);
    FUN_02e3ca1c(PTR_DAT_06a6fb60);
    FUN_02e3ca1c(PTR_DAT_06a6fb68);
    FUN_02e3ca1c(
                Method_Unity_Collections_AllocatorManager_Array32768<AllocatorManager_TableEntry>_ElementAt__
                );
    FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<Expression>__ctor__);
    FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<Expression>_UncheckedAdd__);
    FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__);
    FUN_02e3ca1c(Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>_UncheckedAdd__)
    ;
    FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<BigInteger>__ctor__);
    FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<BitArray>__ctor__);
    FUN_02e3ca1c(Method_MemoryPack_Formatters_ArrayFormatter<CultureInfo>__ctor__);
    FUN_02e3ca1c(PTR_DAT_06a6edc8);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a70700);
    bRam0000000006e9c6fc = 1;
  }
  puVar5 = Method_MemoryPack_Formatters_ArrayFormatter<BigInteger>__ctor__;
  puVar4 = 
  Method_Unity_Collections_AllocatorManager_Array32768<AllocatorManager_TableEntry>_ElementAt__;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_TypeInfo;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_000011CB_PostfixBurstDelegate_TypeInfo
  ;
  puVar2 = PTR_DAT_06a6fb60;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x70) == 0) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x9b8))(plVar6,*(undefined8 *)(*plVar6 + 0x9c0));
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar1);
      FUN_04e0aa7c(uVar8,param_1,*(undefined8 *)puVar4,0);
      uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
      FUN_064f2254(uVar9,uVar8,0);
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x50),uVar9);
      FUN_0640727c(uVar7,uVar9,0);
      lVar13 = *(long *)(param_1 + 0x18);
      uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
      FUN_05207864(uVar7,param_1,*(undefined8 *)puVar5,0);
      puVar1 = Method_MemoryPack_Formatters_ArrayFormatter<BitArray>__ctor__;
      puVar2 = PTR_DAT_06a707d8;
      if (lVar13 != 0) {
        FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)PTR_DAT_06a6fb50);
        lVar13 = *(long *)(param_1 + 0x18);
        uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
        FUN_05207864(uVar7,param_1,*(undefined8 *)puVar1,0);
        puVar1 = Method_MemoryPack_Formatters_ArrayFormatter<CultureInfo>__ctor__;
        puVar2 = PTR_DAT_06a6fb68;
        if (lVar13 != 0) {
          FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)PTR_DAT_06a707d0);
          lVar13 = *(long *)(param_1 + 0x18);
          uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
          FUN_05207864(uVar7,param_1,*(undefined8 *)puVar1,0);
          if (lVar13 != 0) {
            FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)PTR_DAT_06a6fb58);
            puVar1 = 
            Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>_UncheckedAdd__;
            puVar2 = PTR_DAT_06a6f968;
            plVar6 = *(long **)(param_2 + 0x70);
            if (plVar6 != (long *)0x0) {
              lVar13 = *plVar6;
              uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a6edc8) {
                    puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0647f684;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar10 = (undefined8 *)FUN_02e759c0(plVar6,*(long *)PTR_DAT_06a6edc8,0);
LAB_0647f684:
              lVar13 = (*(code *)*puVar10)(plVar6,puVar10[1]);
              uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
              FUN_05207864(uVar7,param_1,*(undefined8 *)puVar1,0);
              puVar3 = Method_System_Collections_Generic_ArrayBuilder<ParameterExpression>__ctor__;
              puVar1 = PTR_DAT_06a6f960;
              if (lVar13 != 0) {
                FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)PTR_DAT_06a6f960);
                lVar13 = *(long *)(param_1 + 0x28);
                uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                FUN_05207864(uVar7,param_1,*(undefined8 *)puVar3,0);
                puVar3 = Method_System_Collections_Generic_ArrayBuilder<Expression>__ctor__;
                if (lVar13 != 0) {
                  FUN_038a48c8(lVar13,uVar7,2,0,
                               *(undefined8 *)
                                Method_Unity_Services_Authentication_Shared_ApiResponse<Player>_get_Data__
                              );
                  lVar13 = *(long *)(param_1 + 0x28);
                  uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                  FUN_05207864(uVar7,param_1,*(undefined8 *)puVar3,0);
                  puVar3 = Method_System_Collections_Generic_ArrayBuilder<Expression>_UncheckedAdd__
                  ;
                  puVar2 = PTR_DAT_06a70730;
                  if (lVar13 != 0) {
                    FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)puVar1);
                    lVar13 = *(long *)(param_1 + 0x28);
                    uVar7 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
                    FUN_05207864(uVar7,param_1,*(undefined8 *)puVar3,0);
                    if (lVar13 != 0) {
                      FUN_038a47c4(lVar13,uVar7,0,*(undefined8 *)PTR_DAT_06a70728);
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


