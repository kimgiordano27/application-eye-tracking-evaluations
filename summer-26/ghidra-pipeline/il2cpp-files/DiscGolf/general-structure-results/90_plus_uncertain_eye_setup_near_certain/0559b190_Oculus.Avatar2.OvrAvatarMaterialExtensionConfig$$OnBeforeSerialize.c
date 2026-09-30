/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarMaterialExtensionConfig$$OnBeforeSerialize
ENTRY_POINT: 0559b190
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Avatar2_OvrAvatarMaterialExtensionConfig__OnBeforeSerialize(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02df485c(param_1);
    }
    uVar2 = FUN_05501380(unaff_x21,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((unaff_x21 == (long *)0x0) ||
       (lVar3 = (**(code **)(*unaff_x21 + 0x8c8))
                          (unaff_x21,in_stack_00000000._4_4_,*(undefined8 *)(*unaff_x21 + 0x8d0)),
       lVar3 == 0)) {
LAB_0559b608:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
LAB_0559b1f0:
      if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar11 = *(undefined8 *)(lVar3 + uVar2 * 8 + 0x20);
      lVar4 = thunk_FUN_02dd3144(*unaff_x28);
      FUN_0552aca4(lVar4,0);
      if (lVar4 != 0) {
        puVar9 = (undefined8 *)(lVar4 + 0x10);
        *puVar9 = uVar11;
        LeanTween__value(puVar9,uVar11);
        uVar11 = *puVar9;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar7 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative(uVar11);
        if ((uVar7 & 1) == 0) {
          uVar11 = *puVar9;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_05597d3c(uVar11);
          uVar11 = thunk_FUN_02dd3144(*unaff_x19);
          if ((uVar7 & 1) == 0) {
            FUN_03b7820c(uVar11,lVar4,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoletePerScenarioData_var,
                         0);
            iVar1 = FUN_035a90c0();
            if (iVar1 == -1) {
              if (unaff_x20 != (long *)0x0) {
                lVar4 = *unaff_x20;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                    goto LAB_0559b4f8;
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
LAB_0559b4e8:
                puVar9 = (undefined8 *)FUN_02dd004c();
                goto LAB_0559b508;
              }
            }
            else if (unaff_x20 != (long *)0x0) {
              lVar4 = *unaff_x20;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      *(long *)
                       UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var) {
                    puVar9 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0559b538;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_02dd004c();
LAB_0559b538:
              uVar11 = (*(code *)*puVar9)();
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02df485c(*unaff_x29);
              }
              uVar7 = FUN_05597d3c(uVar11);
              if ((uVar7 & 1) == 0) {
                lVar4 = *unaff_x20;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        *(long *)
                         UnityEngine_Rendering_ProbeVolumeBakingSet_SerializedPerSceneCellList_var)
                    {
                      puVar9 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_0559b5c8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar9 = (undefined8 *)FUN_02dd004c();
LAB_0559b5c8:
                (*(code *)*puVar9)();
              }
              goto LAB_0559b518;
            }
          }
          else {
            FUN_03b7820c(uVar11,lVar4,
                         *(undefined8 *)
                          UnityEngine_Rendering_ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem_var
                         ,0);
            iVar1 = FUN_035a90c0();
            if (iVar1 != -1) goto LAB_0559b518;
            if (unaff_x20 != (long *)0x0) {
              lVar4 = *unaff_x20;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                  goto LAB_0559b4f8;
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              goto LAB_0559b4e8;
            }
          }
        }
        else {
          lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                      UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Enumerator_var
                                    );
          FUN_0552aca4(lVar5,0);
          if (lVar5 != 0) {
            plVar10 = (long *)(lVar5 + 0x18);
            *plVar10 = lVar4;
            LeanTween__value(plVar10,lVar4);
            if (*plVar10 != 0) {
              uVar11 = *(undefined8 *)(*plVar10 + 0x10);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              plVar6 = (long *)FUN_05597c7c(uVar11);
              if ((plVar6 == (long *)0x0) ||
                 (lVar4 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220)),
                 lVar4 == 0)) {
                if ((*plVar10 == 0) || (plVar6 = *(long **)(*plVar10 + 0x10), plVar6 == (long *)0x0)
                   ) goto LAB_0559b608;
                lVar4 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
              }
              *(long *)(lVar5 + 0x10) = lVar4;
              LeanTween__value();
              uVar11 = thunk_FUN_02dd3144(*unaff_x19);
              FUN_03b7820c(uVar11,lVar5,
                           *(undefined8 *)Unity_Networking_QoS_QosJob_InternalQosServer_var,0);
              iVar1 = FUN_035a90c0();
              if (iVar1 != -1) goto LAB_0559b518;
              if ((*plVar10 != 0) && (unaff_x20 != (long *)0x0)) {
                lVar4 = *unaff_x20;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        *(long *)UnityEngine_Rendering_ProbeReferenceVolume_RuntimeResources_var)
                    goto LAB_0559b4f8;
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                goto LAB_0559b4e8;
              }
            }
          }
        }
      }
      goto LAB_0559b608;
    }
LAB_0559b16c:
    unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x8f8))
                                  (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x900));
    param_1 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
  } while( true );
LAB_0559b4f8:
  puVar9 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
LAB_0559b508:
  (*(code *)*puVar9)();
LAB_0559b518:
  uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar2 = uVar2 + 1;
  if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar2) goto LAB_0559b16c;
  goto LAB_0559b1f0;
}


