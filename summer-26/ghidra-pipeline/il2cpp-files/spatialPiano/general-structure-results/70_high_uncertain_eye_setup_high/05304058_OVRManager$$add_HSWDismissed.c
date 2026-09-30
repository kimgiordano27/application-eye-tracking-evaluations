/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 05304058
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HSWDismissed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_06bbb123 & 1) == 0) {
    FUN_02f08768(System_Security_Cryptography_DSASignatureDeformatter_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbb40);
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(System_Security_Cryptography_DSASignatureFormatter_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_DataBinding_TypeInfo);
    FUN_02f08768(Mono_Security_Cryptography_DSAManaged_TypeInfo);
    FUN_02f08768(System_Data_DataColumnPropertyDescriptor_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_DataBindingManager_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_DataBindingUtility_TypeInfo);
    FUN_02f08768(System_Data_DataColumn_TypeInfo);
    FUN_02f08768(System_Data_DataColumnChangeEventArgs_TypeInfo);
    FUN_02f08768(System_Data_DataColumnCollection_TypeInfo);
    DAT_06bbb123 = 1;
  }
  puVar1 = System_Data_DataColumnChangeEventArgs_TypeInfo;
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
  FUN_05054f60(uVar4,param_1,*(undefined8 *)puVar1,0);
  puVar2 = System_Data_DataColumnCollection_TypeInfo;
  puVar1 = PTR_DAT_067cbb40;
  if (lVar8 != 0) {
    FUN_037db8fc(lVar8,uVar4,*(undefined8 *)Mono_Security_Cryptography_DSAManaged_TypeInfo);
    lVar8 = *(long *)(param_1 + 0x20);
    uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0475f968(uVar4,param_1,*(undefined8 *)puVar2,0);
    if (lVar8 != 0) {
      FUN_037db540(lVar8,uVar4,*(undefined8 *)System_Data_DataColumnPropertyDescriptor_TypeInfo);
      puVar2 = UnityEngine_UIElements_DataBindingUtility_TypeInfo;
      puVar1 = System_Security_Cryptography_DSASignatureDeformatter_TypeInfo;
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xd8);
        uVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                    System_Security_Cryptography_DSASignatureDeformatter_TypeInfo);
        FUN_0476105c(uVar4,param_1,*(undefined8 *)puVar2,0);
        puVar2 = UnityEngine_UIElements_DataBindingManager_TypeInfo;
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)UnityEngine_UIElements_DataBindingManager_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0530424c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_02f421d0(plVar9,*(long *)UnityEngine_UIElements_DataBindingManager_TypeInfo,1
                               );
LAB_0530424c:
          (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
          puVar3 = System_Data_DataColumn_TypeInfo;
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0xe0);
            uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_0476105c(uVar4,param_1,*(undefined8 *)puVar3,0);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_053042e0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar2,1);
LAB_053042e0:
              (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
              if (*(long *)(param_1 + 0x28) != 0) {
                FUN_0523739c(*(long *)(param_1 + 0x28),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


