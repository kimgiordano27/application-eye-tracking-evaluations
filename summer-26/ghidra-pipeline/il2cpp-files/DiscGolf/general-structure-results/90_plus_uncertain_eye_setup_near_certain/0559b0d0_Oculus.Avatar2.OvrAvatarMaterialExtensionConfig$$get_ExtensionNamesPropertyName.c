/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarMaterialExtensionConfig$$get_ExtensionNamesPropertyName
ENTRY_POINT: 0559b0d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Avatar2_OvrAvatarMaterialExtensionConfig__get_ExtensionNamesPropertyName(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000000;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0b030);
  FUN_02d965b8(UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var);
  FUN_02d965b8(UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var);
  FUN_02d965b8(PTR_DAT_06a0e0a8);
  FUN_02d965b8(UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var);
  FUN_02d965b8(
              UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
              );
  FUN_02d965b8(System_Diagnostics_Process_ProcInfo_var);
  FUN_02d965b8(Unity_Networking_QoS_QosJob_InternalQosServer_var);
  FUN_02d965b8(UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var);
  *(undefined1 *)(unaff_x19 + 0x5a1) = 1;
  puVar3 = System_Diagnostics_Process_ProcInfo_var;
  puVar2 = PTR_DAT_06a0e0a8;
  puVar1 = PTR_DAT_06a0b030;
  if (unaff_x21 != (long *)0x0) {
LAB_0559b16c:
    do {
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x8f8))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x900));
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
      }
      uVar5 = FUN_05501380(unaff_x21,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if ((unaff_x21 == (long *)0x0) ||
         (lVar6 = (**(code **)(*unaff_x21 + 0x8c8))
                            (unaff_x21,in_stack_00000000._4_4_,*(undefined8 *)(*unaff_x21 + 0x8d0)),
         lVar6 == 0)) break;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar5 = 0;
        uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
LAB_0559b1f0:
        if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar14 = *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20);
        lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
        FUN_0552aca4(lVar7,0);
        if (lVar7 != 0) {
          puVar12 = (undefined8 *)(lVar7 + 0x10);
          *puVar12 = uVar14;
          LeanTween__value(puVar12,uVar14);
          uVar14 = *puVar12;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar10 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(uVar14);
          if ((uVar10 & 1) == 0) {
            uVar14 = *puVar12;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar10 = FUN_05597d3c(uVar14);
            uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            if ((uVar10 & 1) == 0) {
              FUN_03b7820c(uVar14,lVar7,
                           *(undefined8 *)
                            UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var
                           ,0);
              iVar4 = FUN_035a90c0();
              if (iVar4 == -1) {
                if (unaff_x20 != (long *)0x0) {
                  lVar7 = *unaff_x20;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                      goto LAB_0559b4f8;
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
LAB_0559b4e8:
                  puVar12 = (undefined8 *)FUN_02dd004c();
                  goto LAB_0559b508;
                }
              }
              else if (unaff_x20 != (long *)0x0) {
                lVar7 = *unaff_x20;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        *(long *)
                         UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var)
                    {
                      puVar12 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_0559b538;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_02dd004c();
LAB_0559b538:
                uVar14 = (*(code *)*puVar12)();
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)puVar2);
                }
                uVar10 = FUN_05597d3c(uVar14);
                if ((uVar10 & 1) == 0) {
                  lVar7 = *unaff_x20;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)
                           UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var
                         ) {
                        puVar12 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                        goto LAB_0559b5c8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02dd004c();
LAB_0559b5c8:
                  (*(code *)*puVar12)();
                }
                goto LAB_0559b518;
              }
            }
            else {
              FUN_03b7820c(uVar14,lVar7,
                           *(undefined8 *)
                            UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                           ,0);
              iVar4 = FUN_035a90c0();
              if (iVar4 != -1) goto LAB_0559b518;
              if (unaff_x20 != (long *)0x0) {
                lVar7 = *unaff_x20;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                    goto LAB_0559b4f8;
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                goto LAB_0559b4e8;
              }
            }
          }
          else {
            lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                        UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var
                                      );
            FUN_0552aca4(lVar8,0);
            if (lVar8 != 0) {
              plVar13 = (long *)(lVar8 + 0x18);
              *plVar13 = lVar7;
              LeanTween__value(plVar13,lVar7);
              if (*plVar13 != 0) {
                uVar14 = *(undefined8 *)(*plVar13 + 0x10);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                plVar9 = (long *)FUN_05597c7c(uVar14);
                if ((plVar9 == (long *)0x0) ||
                   (lVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220)),
                   lVar7 == 0)) {
                  if ((*plVar13 == 0) ||
                     (plVar9 = *(long **)(*plVar13 + 0x10), plVar9 == (long *)0x0)) break;
                  lVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
                }
                *(long *)(lVar8 + 0x10) = lVar7;
                LeanTween__value();
                uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                FUN_03b7820c(uVar14,lVar8,
                             *(undefined8 *)Unity_Networking_QoS_QosJob_InternalQosServer_var,0);
                iVar4 = FUN_035a90c0();
                if (iVar4 != -1) goto LAB_0559b518;
                if ((*plVar13 != 0) && (unaff_x20 != (long *)0x0)) {
                  lVar7 = *unaff_x20;
                  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                      goto LAB_0559b4f8;
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  goto LAB_0559b4e8;
                }
              }
            }
          }
        }
        break;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_0559b4f8:
  puVar12 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
LAB_0559b508:
  (*(code *)*puVar12)();
LAB_0559b518:
  uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
  uVar5 = uVar5 + 1;
  if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) goto LAB_0559b16c;
  goto LAB_0559b1f0;
}


