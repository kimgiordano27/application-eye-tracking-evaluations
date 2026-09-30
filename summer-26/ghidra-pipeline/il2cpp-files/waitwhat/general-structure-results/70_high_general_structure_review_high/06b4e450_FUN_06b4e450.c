/*
FUNCTION_NAME: FUN_06b4e450
ENTRY_POINT: 06b4e450
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_6;telemetry_or_network_hits_5
*/


void FUN_06b4e450(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_0755fec6 & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_AttributeOverride>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_MoveNext__
                );
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
                );
    FUN_03188a78(PTR_DAT_07118610);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Current__
                );
    FUN_03188a78(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                );
    DAT_0755fec6 = 1;
  }
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_get_Current__
  ;
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<TemplateAsset_UxmlSerializedDataOverride>_Dispose__
  ;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_88 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_042e54fc(&local_a0,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_MoveNext__
                );
    local_70 = local_90;
    puStack_78 = puStack_98;
    local_80 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_80;
    while (uVar7 = FUN_054518b4(&local_80,*(undefined8 *)puVar5), lVar10 = local_70,
          (uVar7 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(char *)(local_70 + 0x30) != '\0') {
        if (*(long *)(local_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar8 = *(long *)(*(long *)(local_70 + 0x10) + 0x4b8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar2 = *(undefined8 *)(local_70 + 0x20);
        FUN_06b4b9d4(lVar8,uVar2,*(undefined8 *)(local_70 + 0x28));
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(long *)(*(long *)(lVar10 + 0x10) + 0x4b8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06b4bc14();
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__
                    + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06a95e18(0);
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06c795d0(param_2,&local_88,0);
        uVar3 = local_88;
        uVar14 = *(undefined8 *)(lVar10 + 0x10);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
                    + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06b4e8f4(uVar2,uVar3,uVar14,param_1 + 0x38,param_1 + 0x48,param_1 + 0x50,param_1 + 0x58,
                     param_1 + 0x40);
        lVar8 = FUN_06b54c7c(lVar10 + 0x18,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06c796fc(param_2,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar10 + 0x10),0);
        plVar12 = *(long **)(param_2 + 0x40);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar8 = *plVar12;
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        uVar14 = *(undefined8 *)(param_1 + 0x50);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_06b4e6c4;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)puVar6,2);
LAB_06b4e6c4:
        (*(code *)*puVar9)(plVar12,uVar2,uVar14,uVar3,uVar13,uVar4,puVar9[1]);
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_06b57348(*(long *)(lVar10 + 0x10),param_2,0);
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0595236c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
        lVar8 = *(long *)(param_1 + 0x48);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        lVar8 = *(long *)(param_1 + 0x50);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        lVar8 = *(long *)(param_1 + 0x58);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        lVar8 = *(long *)(param_1 + 0x40);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        FUN_06c7988c(param_2,0);
      }
      FUN_06b4f2f0(lVar10);
    }
    FUN_054518b0(&local_80,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<TemplateAsset_AttributeOverride>_get_Current__
                );
    lVar10 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
      FUN_0585646c(param_1 + 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


