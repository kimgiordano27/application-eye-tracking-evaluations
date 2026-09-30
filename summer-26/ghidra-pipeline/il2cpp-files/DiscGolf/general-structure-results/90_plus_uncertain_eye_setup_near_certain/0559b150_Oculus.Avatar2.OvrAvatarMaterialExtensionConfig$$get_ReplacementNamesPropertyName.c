/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarMaterialExtensionConfig$$get_ReplacementNamesPropertyName
ENTRY_POINT: 0559b150
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Avatar2_OvrAvatarMaterialExtensionConfig__get_ReplacementNamesPropertyName(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x28;
  undefined8 *puVar14;
  undefined8 in_stack_00000000;
  
  puVar2 = PTR_DAT_06a0e0a8;
  puVar1 = PTR_DAT_06a0b030;
  puVar14 = *(undefined8 **)(unaff_x28 + 0x820);
LAB_0559b16c:
  do {
    unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x8f8))
                                  (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x900));
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
    }
    uVar4 = FUN_05501380(unaff_x21,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((unaff_x21 == (long *)0x0) ||
       (lVar5 = (**(code **)(*unaff_x21 + 0x8c8))
                          (unaff_x21,in_stack_00000000._4_4_,*(undefined8 *)(*unaff_x21 + 0x8d0)),
       lVar5 == 0)) {
LAB_0559b608:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while ((int)*(ulong *)(lVar5 + 0x18) < 1);
  uVar4 = 0;
  uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
LAB_0559b1f0:
  if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  uVar13 = *(undefined8 *)(lVar5 + uVar4 * 8 + 0x20);
  lVar6 = thunk_FUN_02dd3144(*puVar14);
  FUN_0552aca4(lVar6,0);
  if (lVar6 != 0) {
    puVar11 = (undefined8 *)(lVar6 + 0x10);
    *puVar11 = uVar13;
    LeanTween__value(puVar11,uVar13);
    uVar13 = *puVar11;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(uVar13);
    if ((uVar9 & 1) == 0) {
      uVar13 = *puVar11;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05597d3c(uVar13);
      uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      if ((uVar9 & 1) == 0) {
        FUN_03b7820c(uVar13,lVar6,
                     *(undefined8 *)
                      UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var,0);
        iVar3 = FUN_035a90c0();
        if (iVar3 == -1) {
          if (unaff_x20 != (long *)0x0) {
            lVar6 = *unaff_x20;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                goto LAB_0559b4f8;
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
LAB_0559b4e8:
            puVar11 = (undefined8 *)FUN_02dd004c();
            goto LAB_0559b508;
          }
        }
        else if (unaff_x20 != (long *)0x0) {
          lVar6 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var
                 ) {
                puVar11 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0559b538;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_02dd004c();
LAB_0559b538:
          uVar13 = (*(code *)*puVar11)();
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)puVar2);
          }
          uVar9 = FUN_05597d3c(uVar13);
          if ((uVar9 & 1) == 0) {
            lVar6 = *unaff_x20;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)
                     UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var) {
                  puVar11 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0559b5c8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c();
LAB_0559b5c8:
            (*(code *)*puVar11)();
          }
          goto LAB_0559b518;
        }
      }
      else {
        FUN_03b7820c(uVar13,lVar6,
                     *(undefined8 *)
                      UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                     ,0);
        iVar3 = FUN_035a90c0();
        if (iVar3 != -1) goto LAB_0559b518;
        if (unaff_x20 != (long *)0x0) {
          lVar6 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
              goto LAB_0559b4f8;
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          goto LAB_0559b4e8;
        }
      }
    }
    else {
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var
                                );
      FUN_0552aca4(lVar7,0);
      if (lVar7 != 0) {
        plVar12 = (long *)(lVar7 + 0x18);
        *plVar12 = lVar6;
        LeanTween__value(plVar12,lVar6);
        if (*plVar12 != 0) {
          uVar13 = *(undefined8 *)(*plVar12 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          plVar8 = (long *)FUN_05597c7c(uVar13);
          if ((plVar8 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220)),
             lVar6 == 0)) {
            if ((*plVar12 == 0) || (plVar8 = *(long **)(*plVar12 + 0x10), plVar8 == (long *)0x0))
            goto LAB_0559b608;
            lVar6 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          }
          *(long *)(lVar7 + 0x10) = lVar6;
          LeanTween__value();
          uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
          FUN_03b7820c(uVar13,lVar7,*(undefined8 *)Unity_Networking_QoS_QosJob_InternalQosServer_var
                       ,0);
          iVar3 = FUN_035a90c0();
          if (iVar3 != -1) goto LAB_0559b518;
          if ((*plVar12 != 0) && (unaff_x20 != (long *)0x0)) {
            lVar6 = *unaff_x20;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                goto LAB_0559b4f8;
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            goto LAB_0559b4e8;
          }
        }
      }
    }
  }
  goto LAB_0559b608;
LAB_0559b4f8:
  puVar11 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
LAB_0559b508:
  (*(code *)*puVar11)();
LAB_0559b518:
  uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
  uVar4 = uVar4 + 1;
  if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar4) goto LAB_0559b16c;
  goto LAB_0559b1f0;
}


