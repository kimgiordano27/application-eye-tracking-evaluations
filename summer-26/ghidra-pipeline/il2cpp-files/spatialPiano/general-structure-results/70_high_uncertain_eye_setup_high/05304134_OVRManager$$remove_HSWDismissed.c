/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 05304134
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


void OVRManager__remove_HSWDismissed(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  FUN_05054f60();
  puVar1 = PTR_DAT_067cbb40;
  if (unaff_x20 != 0) {
    FUN_037db8fc();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_0475f968();
    if (lVar7 != 0) {
      FUN_037db540(lVar7,uVar3,*(undefined8 *)System_Data_DataColumnPropertyDescriptor_TypeInfo);
      puVar1 = System_Security_Cryptography_DSASignatureDeformatter_TypeInfo;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
        uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                    System_Security_Cryptography_DSASignatureDeformatter_TypeInfo);
        FUN_0476105c();
        puVar2 = UnityEngine_UIElements_DataBindingManager_TypeInfo;
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)UnityEngine_UIElements_DataBindingManager_TypeInfo) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0530424c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02f421d0(plVar8,*(long *)UnityEngine_UIElements_DataBindingManager_TypeInfo,1
                               );
LAB_0530424c:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
            FUN_0476105c();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_053042e0;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar2,1);
LAB_053042e0:
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                FUN_0523739c(*(long *)(unaff_x19 + 0x28),0);
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


