/*
FUNCTION_NAME: FUN_0559b094
ENTRY_POINT: 0559b094
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0559b094(long *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  
  if ((DAT_06dbb5a1 & 1) == 0) {
    FUN_02d965b8(UnityEngine_Rendering_ProbeBrickPool_DataLocation_var);
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
    DAT_06dbb5a1 = 1;
  }
  puVar4 = System_Diagnostics_Process_ProcInfo_var;
  puVar3 = UnityEngine_Rendering_ProbeBrickPool_DataLocation_var;
  puVar2 = PTR_DAT_06a0e0a8;
  puVar1 = PTR_DAT_06a0b030;
  if (param_2 != (long *)0x0) {
LAB_0559b16c:
    do {
      param_2 = (long *)(**(code **)(*param_2 + 0x8f8))(param_2,*(undefined8 *)(*param_2 + 0x900));
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
      }
      uVar6 = FUN_05501380(param_2,0,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      if ((param_2 == (long *)0x0) ||
         (lVar7 = (**(code **)(*param_2 + 0x8c8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x8d0))
         , lVar7 == 0)) break;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar6 = 0;
        uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
LAB_0559b1f0:
        if (uVar12 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar16 = *(undefined8 *)(lVar7 + uVar6 * 8 + 0x20);
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_0552aca4(lVar8,0);
        if (lVar8 != 0) {
          puVar14 = (undefined8 *)(lVar8 + 0x10);
          *puVar14 = uVar16;
          LeanTween__value(puVar14,uVar16);
          uVar16 = *puVar14;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar12 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(uVar16);
          if ((uVar12 & 1) == 0) {
            uVar16 = *puVar14;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_05597d3c(uVar16);
            uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            if ((uVar12 & 1) == 0) {
              FUN_03b7820c(uVar16,lVar8,
                           *(undefined8 *)
                            UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var
                           ,0);
              iVar5 = FUN_035a90c0(param_1,uVar16,*(undefined8 *)puVar3);
              if (iVar5 == -1) {
                if (param_1 != (long *)0x0) {
                  lVar9 = *param_1;
                  uVar16 = *puVar14;
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  lVar8 = *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var;
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar8) goto LAB_0559b4f8;
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
LAB_0559b4e8:
                  puVar14 = (undefined8 *)FUN_02dd004c(param_1,lVar8,2);
                  goto LAB_0559b508;
                }
              }
              else if (param_1 != (long *)0x0) {
                lVar8 = *param_1;
                uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)
                         UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var)
                    {
                      puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0559b538;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_02dd004c(param_1,*(long *)
                                                UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var
                                       ,0);
LAB_0559b538:
                uVar16 = (*(code *)*puVar11)(param_1,iVar5,puVar11[1]);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)puVar2);
                }
                uVar12 = FUN_05597d3c(uVar16);
                if ((uVar12 & 1) == 0) {
                  lVar8 = *param_1;
                  uVar16 = *puVar14;
                  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) ==
                          *(long *)
                           UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var
                         ) {
                        puVar14 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_0559b5c8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar14 = (undefined8 *)
                            FUN_02dd004c(param_1,*(long *)
                                                  UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var
                                         ,1);
LAB_0559b5c8:
                  (*(code *)*puVar14)(param_1,iVar5,uVar16,puVar14[1]);
                }
                goto LAB_0559b518;
              }
            }
            else {
              FUN_03b7820c(uVar16,lVar8,
                           *(undefined8 *)
                            UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                           ,0);
              iVar5 = FUN_035a90c0(param_1,uVar16,*(undefined8 *)puVar3);
              if (iVar5 != -1) goto LAB_0559b518;
              if (param_1 != (long *)0x0) {
                lVar9 = *param_1;
                uVar16 = *puVar14;
                uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                lVar8 = *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var;
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar8) goto LAB_0559b4f8;
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                goto LAB_0559b4e8;
              }
            }
          }
          else {
            lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                        UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var
                                      );
            FUN_0552aca4(lVar9,0);
            if (lVar9 != 0) {
              plVar15 = (long *)(lVar9 + 0x18);
              *plVar15 = lVar8;
              LeanTween__value(plVar15,lVar8);
              if (*plVar15 != 0) {
                uVar16 = *(undefined8 *)(*plVar15 + 0x10);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                plVar10 = (long *)FUN_05597c7c(uVar16);
                if ((plVar10 == (long *)0x0) ||
                   (lVar8 = (**(code **)(*plVar10 + 0x218))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x220)), lVar8 == 0)) {
                  if ((*plVar15 == 0) ||
                     (plVar10 = *(long **)(*plVar15 + 0x10), plVar10 == (long *)0x0)) break;
                  lVar8 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220))
                  ;
                }
                *(long *)(lVar9 + 0x10) = lVar8;
                LeanTween__value();
                uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                FUN_03b7820c(uVar16,lVar9,
                             *(undefined8 *)Unity_Networking_QoS_QosJob_InternalQosServer_var,0);
                iVar5 = FUN_035a90c0(param_1,uVar16,*(undefined8 *)puVar3);
                if (iVar5 != -1) goto LAB_0559b518;
                if ((*plVar15 != 0) && (param_1 != (long *)0x0)) {
                  lVar9 = *param_1;
                  uVar16 = *(undefined8 *)(*plVar15 + 0x10);
                  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  lVar8 = *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var;
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar8) goto LAB_0559b4f8;
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
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
  puVar14 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
LAB_0559b508:
  (*(code *)*puVar14)(param_1,uVar16,puVar14[1]);
LAB_0559b518:
  uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
  uVar6 = uVar6 + 1;
  if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar6) goto LAB_0559b16c;
  goto LAB_0559b1f0;
}


