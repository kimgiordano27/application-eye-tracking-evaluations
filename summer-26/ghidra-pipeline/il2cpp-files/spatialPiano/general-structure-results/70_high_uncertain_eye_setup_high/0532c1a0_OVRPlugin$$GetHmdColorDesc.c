/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 0532c1a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHmdColorDesc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long unaff_x19;
  int iVar9;
  undefined8 *unaff_x20;
  long lVar10;
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000080;
  undefined1 in_stack_000000a0 [16];
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  
  FUN_048b4580();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_048b4580(*(long *)(unaff_x19 + 0x30),*unaff_x20);
    if ((*(long *)(unaff_x19 + 0x40) != 0) &&
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10), lVar8 != 0)) {
      FUN_03729ddc(lVar8,*(undefined8 *)UnityEngine_UIElements_EditorPanelRootElement_TypeInfo);
      if ((*(long *)(unaff_x19 + 0x40) != 0) &&
         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18), lVar8 != 0)) {
        FUN_048ae048(lVar8,*(undefined8 *)System_ComponentModel_EditorAttribute_TypeInfo);
        puVar4 = System_Runtime_Serialization_ElementData_TypeInfo;
        puVar3 = System_ComponentModel_EditorBrowsableAttribute_TypeInfo;
        puVar2 = UnityEngine_UIElements_EasingMode_TypeInfo;
        puVar1 = 
        UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>_TypeInfo;
        lVar8 = *(long *)(unaff_x19 + 0x28);
        if (lVar8 != 0) {
          iVar9 = 0;
          while( true ) {
            if (*(int *)(lVar8 + 0x18) <= iVar9) {
              return;
            }
            lVar10 = *(long *)(unaff_x19 + 0x38);
            FUN_03b96dd4(&stack0x00000080,lVar8,iVar9,*(undefined8 *)puVar4);
            uVar6 = in_stack_00000080;
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            FUN_03b96dd4(&stack0x00000080,*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            if (lVar10 == 0) break;
            uStack0000000000000048 = in_stack_000000a0._12_4_;
            in_stack_00000040 = in_stack_000000a0._4_8_;
            uStack0000000000000054 = (undefined4)in_stack_000000b8;
            in_stack_00000058 = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
            uStack000000000000004c = uStack00000000000000b0;
            uStack0000000000000050 = uStack00000000000000b4;
            FUN_048b42ec(lVar10,uVar6,&stack0x00000040,*(undefined8 *)puVar1);
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            lVar8 = *(long *)(unaff_x19 + 0x30);
            FUN_03b96dd4(&stack0x00000040,*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            uVar5 = in_stack_00000040;
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            FUN_03b96dd4(&stack0x00000040,*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            uVar7 = uStack000000000000004c;
            uVar6 = uStack0000000000000048;
            if (lVar8 == 0) break;
            FUN_048b42ec(lVar8,uVar5 & 0xffffffff);
            if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
            lVar8 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x10);
            FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            if (lVar8 == 0) break;
            FUN_0372a908(lVar8,uVar6,*(undefined8 *)puVar3);
            if ((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) break;
            lVar8 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x18);
            FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x19 + 0x28) == 0) break;
            FUN_03b96dd4(*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar4);
            if (lVar8 == 0) break;
            FUN_048adec8(lVar8,uVar6,uVar7,*(undefined8 *)puVar2);
            lVar8 = *(long *)(unaff_x19 + 0x28);
            iVar9 = iVar9 + 1;
            if (lVar8 == 0) break;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


