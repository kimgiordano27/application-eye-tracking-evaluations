/*
FUNCTION_NAME: FUN_035c6478
ENTRY_POINT: 035c6478
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_035c6478(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  if ((DAT_04537ce8 & 1) == 0) {
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(System_Runtime_InteropServices_GCHandle_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_Demo_GOAPDriver_DemoFixedWing_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_Demo_GOAPDriver_DemoHelicopter_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_GOAPGoal_MoveTo_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_Aircraft_GOAPPathRequest_SimpleAircraft_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>_Init__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(System_Func<Type,_Type>_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>__ctor__);
    DAT_04537ce8 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>__ctor__;
  puVar3 = Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo;
  puVar2 = Cheese_GOAP_Demo_GOAPDriver_DemoHelicopter_TypeInfo;
  if (param_2 == 0) goto LAB_035c6838;
  plVar11 = *(long **)(param_2 + 0x10);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    bVar1 = *(byte *)(*(long *)Cheese_GOAP_Demo_GOAPDriver_DemoHelicopter_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Cheese_GOAP_Demo_GOAPDriver_DemoHelicopter_TypeInfo)) {
      uVar14 = *(undefined4 *)(param_1 + 0x28);
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>__ctor__
                                );
      FUN_03313b6c(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = uVar14;
      *(long *)(param_1 + 0x30) = lVar8;
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)System_Runtime_InteropServices_GCHandle_TypeInfo
                                     ,1);
      if (plVar12 == (long *)0x0) goto LAB_035c6838;
      lVar8 = *(long *)(param_1 + 0x30);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0))
      goto LAB_035c6840;
      if ((int)plVar12[3] != 0) {
        plVar12[4] = lVar8;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          FUN_02eb7d08(plVar11,plVar12,*(undefined8 *)Cheese_GOAP_GOAPGoal_MoveTo_TypeInfo);
          return;
        }
        goto LAB_035c6838;
      }
      goto LAB_035c683c;
    }
    bVar1 = *(byte *)(*(long *)Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo)) {
      uVar14 = *(undefined4 *)(param_1 + 0x28);
      lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector4>_Init__
                                );
      FUN_03313b6c(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = uVar14;
      *(long *)(param_1 + 0x38) = lVar8;
      plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                      Cheese_GOAP_Demo_GOAPDriver_DemoFixedWing_TypeInfo,1);
      if (plVar12 != (long *)0x0) {
        lVar8 = *(long *)(param_1 + 0x38);
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0))
        goto LAB_035c6840;
        if ((int)plVar12[3] == 0) goto LAB_035c683c;
        plVar12[4] = lVar8;
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
          FUN_02eb59e0(plVar11,plVar12,
                       *(undefined8 *)Cheese_GOAP_Aircraft_GOAPPathRequest_SimpleAircraft_TypeInfo);
          return;
        }
      }
      goto LAB_035c6838;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar11 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
    uVar13 = *(undefined8 *)puVar4;
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar8 = *(long *)System_Func<Type,_Type>_TypeInfo;
    }
    else {
      plVar5 = (long *)thunk_FUN_01c5d21c(*(long *)(param_2 + 0x10),0);
      if (plVar5 == (long *)0x0) goto LAB_035c6838;
      lVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    if (plVar11 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
LAB_035c6840:
        uVar13 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar13,0);
      }
      if ((int)plVar11[3] == 0) {
LAB_035c683c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar11[4] = lVar8;
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_035c6690;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01c72498(plVar12,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035c6690:
                    /* WARNING: Could not recover jumptable at 0x035c66b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar7)(plVar12,1,uVar13,plVar11,puVar7[1]);
        return;
      }
    }
  }
LAB_035c6838:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


