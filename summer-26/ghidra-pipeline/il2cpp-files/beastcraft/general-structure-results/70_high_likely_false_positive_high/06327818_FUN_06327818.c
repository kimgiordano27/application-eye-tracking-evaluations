/*
FUNCTION_NAME: FUN_06327818
ENTRY_POINT: 06327818
PROGRAM: beastcraft-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06327818(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000006e9b636 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudSave_Internal_Models_SetItemBatch400Response_TypeInfo);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UI_Selectable_TypeInfo);
    FUN_02e3ca1c(System_Xml_Schema_SelectorActiveAxis_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudSave_Internal_Models_SetItemBatchBody_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudSave_Internal_Data_SetItemBatchRequest_TypeInfo);
    FUN_02e3ca1c(Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecT283Field_TypeInfo)
    ;
    FUN_02e3ca1c(System_Threading_SemaphoreFullException_TypeInfo);
    FUN_02e3ca1c(System_Threading_SemaphoreSlim_TypeInfo);
    FUN_02e3ca1c(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP192K1Field_TypeInfo
                );
    FUN_02e3ca1c(
                Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP192K1Curve_TypeInfo
                );
    bRam0000000006e9b636 = 1;
  }
  puVar4 = Unity_Services_CloudSave_Internal_Data_SetItemBatchRequest_TypeInfo;
  puVar3 = Unity_Services_CloudSave_Internal_Models_SetItemBatchBody_TypeInfo;
  lVar11 = *(long *)(param_1 + 0x170);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_88 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if ((lVar11 != 0) && (param_2 != 0)) {
    lVar16 = *(long *)(lVar11 + 0x38);
    lVar11 = *(long *)(lVar11 + 0x18);
    if (*(int *)(*(long *)
                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecT283Field_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_03919764(lVar16,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)puVar4);
    FUN_03919524(lVar11,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)puVar3);
    puVar5 = System_Threading_SemaphoreFullException_TypeInfo;
    puVar4 = UnityEngine_UI_Selectable_TypeInfo;
    puVar3 = UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo;
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar17 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar17) {
LAB_06327cc0:
                    /* WARNING: Subroutine does not return */
          FUN_02e3cccc();
        }
        lVar9 = param_2 + uVar17 * 0x10;
        uStack_68 = *(undefined8 *)(lVar9 + 0x28);
        uStack_70 = *(undefined8 *)(lVar9 + 0x20);
        lVar9 = FUN_063146f4(&uStack_70,0);
        if (lVar9 == 0) {
          return;
        }
        iVar7 = FUN_06314704(&uStack_70,0);
        if (iVar7 == 0) {
          return;
        }
        lVar9 = FUN_063146f4(&uStack_70,0);
        if (lVar9 == 0) goto LAB_06327cbc;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_06327cc0;
        uVar1 = *(undefined4 *)(lVar9 + 0x20);
        uStack_88 = 0;
        uStack_80 = 0;
        uVar10 = FUN_063146f4(&uStack_70,0);
        FUN_063146fc(&uStack_88,uVar10,0);
        uVar8 = FUN_06314704(&uStack_70,0);
        FUN_0631470c(&uStack_88,uVar8,0);
        uVar6 = uStack_80;
        uVar10 = uStack_88;
        if (lVar16 == 0) goto LAB_06327cbc;
        uVar12 = FUN_04e89980(lVar16,uVar1,&lStack_78,*(undefined8 *)puVar3);
        if ((uVar12 & 1) == 0) {
          lVar9 = thunk_FUN_02e78ab8(*(undefined8 *)
                                      Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP192K1Curve_TypeInfo
                                    );
          FUN_03ef7298(lVar9,*(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Custom_Sec_SecP192K1Field_TypeInfo
                      );
          if (lVar9 == 0) goto LAB_06327cbc;
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_06327cbc;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar14 = (undefined8 *)(lVar13 + 0x20);
            *puVar14 = uVar10;
            *(undefined8 *)(lVar13 + 0x28) = uVar6;
            thunk_FUN_02ee2be8(puVar14,0);
          }
          else {
            FUN_03ef7b44(lVar9,uVar10,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          FUN_04e87ea4(lVar16,uVar1,lVar9,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
        }
        else {
          if (lStack_78 == 0) goto LAB_06327cbc;
          FUN_03ef8584(&uStack_d0,lStack_78,*(undefined8 *)System_Threading_SemaphoreSlim_TypeInfo);
          uStack_b0 = uStack_d0;
          uStack_d0 = 0;
          puStack_a8 = puStack_c8;
          uStack_98 = uStack_b8;
          uStack_a0 = uStack_c0;
          puStack_c8 = &uStack_b0;
          while (uVar12 = FUN_04fbb494(&uStack_b0,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
            uVar12 = FUN_0631472c(uVar10,uVar6,uStack_a0,uStack_98,0);
            if ((uVar12 & 1) != 0) {
              FUN_04fbb490(&uStack_b0,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
              return;
            }
          }
          FUN_04fbb490(&uStack_b0,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
          lVar9 = FUN_04e87e04(lVar16,uVar1,
                               *(undefined8 *)
                                Unity_Services_CloudSave_Internal_Models_SetItemBatch400Response_TypeInfo
                              );
          if (lVar9 == 0) goto LAB_06327cbc;
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_06327cbc;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar14 = (undefined8 *)(lVar13 + 0x20);
            *puVar14 = uVar10;
            *(undefined8 *)(lVar13 + 0x28) = uVar6;
            thunk_FUN_02ee2be8(puVar14,0);
          }
          else {
            FUN_03ef7b44(lVar9,uVar10,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (lVar11 == 0) goto LAB_06327cbc;
        lVar9 = *(long *)(lVar11 + 0x10);
        lVar13 = *(long *)puVar5;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_06327cbc;
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          puVar14 = (undefined8 *)(lVar9 + 0x20);
          *puVar14 = uVar10;
          *(undefined8 *)(lVar9 + 0x28) = uVar6;
          thunk_FUN_02ee2be8(puVar14,0);
        }
        else {
          FUN_03ef7b44(lVar11,uVar10,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    return;
  }
LAB_06327cbc:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


