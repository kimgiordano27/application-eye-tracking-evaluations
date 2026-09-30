/*
FUNCTION_NAME: FUN_07c05f64
ENTRY_POINT: 07c05f64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07c06444) */

void FUN_07c05f64(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_08993021 & 1) == 0) {
    FUN_03a8a718(UnityEngine_UIElements_PanelInputConfiguration_TypeInfo);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PanelRaycaster_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_ObjectIDCustomPass_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_ObjectManager_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_Formatters_Binary_ObjectNull_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PanelRootElement_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_PanelSettings_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(UnityEngine_UIElements_PanelTextSettings_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_ParameterByRefUpdater_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(System_Collections_Specialized_OrderedDictionary_TypeInfo);
    FUN_03a8a718(System_Runtime_Serialization_Formatters_Binary_ObjectProgress_TypeInfo);
    FUN_03a8a718(Normal_Realtime_QuaternionSphericalInterpolator_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Data_QueryDefaultCustomDataRequest_TypeInfo);
    FUN_03a8a718(Newtonsoft_Json_Linq_JsonPath_QueryFilter_TypeInfo);
    DAT_08993021 = 1;
  }
  puVar7 = Newtonsoft_Json_Linq_JsonPath_QueryFilter_TypeInfo;
  puVar6 = System_Linq_Expressions_Interpreter_ParameterByRefUpdater_TypeInfo;
  puVar5 = UnityEngine_UIElements_PanelInputConfiguration_TypeInfo;
  puVar4 = System_Collections_Specialized_OrderedDictionary_TypeInfo;
  puVar3 = System_Runtime_Serialization_ObjectManager_TypeInfo;
  puVar2 = PTR_DAT_08488568;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = (long *)0x0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&local_a0,param_2,
               *(undefined8 *)System_Runtime_Serialization_Formatters_Binary_ObjectProgress_TypeInfo
              );
  local_70 = local_90;
  uStack_78 = plStack_98;
  local_80 = local_a0;
  local_a0 = 0;
  plStack_98 = &local_80;
  do {
    do {
      do {
        uVar9 = FUN_061c1964(&local_80,*(undefined8 *)puVar3);
        lVar8 = local_70;
        lVar10 = local_a0;
        if ((uVar9 & 1) == 0) {
          FUN_061c1960(plStack_98,
                       *(undefined8 *)
                        UnityEngine_Rendering_HighDefinition_ObjectIDCustomPass_TypeInfo);
          if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9b8(lVar10);
          }
          return;
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = *(long *)puVar7;
        uVar15 = *(undefined8 *)(local_70 + 0x20);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          lVar10 = *(long *)puVar7;
        }
        puVar12 = *(undefined8 **)(lVar10 + 0xb8);
        lVar16 = puVar12[1];
        if (lVar16 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
          }
          uVar17 = *puVar12;
          lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)
                                       UnityEngine_UIElements_PanelRootElement_TypeInfo);
          FUN_04962b78(lVar16,uVar17,
                       *(undefined8 *)Normal_Realtime_QuaternionSphericalInterpolator_TypeInfo,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
          *plVar11 = lVar16;
          thunk_FUN_03afed3c(plVar11,lVar16);
        }
        uVar15 = FUN_044e3520(uVar15,lVar16,
                              *(undefined8 *)UnityEngine_UIElements_PanelRaycaster_TypeInfo);
        uVar9 = FUN_044b18d4(uVar15,*(undefined8 *)puVar5);
      } while ((uVar9 & 1) == 0);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *(long *)puVar7;
      uVar15 = *(undefined8 *)(param_3 + 0x28);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        lVar10 = *(long *)puVar7;
      }
      puVar12 = *(undefined8 **)(lVar10 + 0xb8);
      lVar16 = puVar12[2];
      if (lVar16 == 0) {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
          puVar12 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
        }
        uVar17 = *puVar12;
        lVar16 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_PanelSettings_TypeInfo);
        FUN_04962b78(lVar16,uVar17,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_QueryDefaultCustomDataRequest_TypeInfo,
                     0);
        plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
        *plVar11 = lVar16;
        thunk_FUN_03afed3c(plVar11,lVar16);
      }
      plVar11 = (long *)FUN_044e3520(uVar15,lVar16,
                                     *(undefined8 *)
                                      Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster_TypeInfo
                                    );
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)UnityEngine_UIElements_PanelTextSettings_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07c06284;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_03ac43c4(plVar11,*(long *)UnityEngine_UIElements_PanelTextSettings_TypeInfo,0);
LAB_07c06284:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
joined_r0x07c062a0:
      local_88 = plVar11;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07c062f0;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar2,0);
LAB_07c062f0:
      uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      plVar11 = local_88;
      if ((uVar9 & 1) != 0) {
        if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = *local_88;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_07c06354;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_03ac43c4(local_88,*(long *)puVar6,0);
LAB_07c06354:
        uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        lVar10 = *(long *)(lVar8 + 0x28);
        if (lVar10 == 0) {
LAB_07c06448:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_07c06448;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *puVar12 = uVar15;
          thunk_FUN_03afed3c(puVar12);
          plVar11 = local_88;
        }
        else {
          FUN_04de85b0(lVar10,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          plVar11 = local_88;
        }
        goto joined_r0x07c062a0;
      }
    } while (local_88 == (long *)0x0);
    lVar10 = *local_88;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08488550) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_07c06434;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)FUN_03ac43c4(local_88,*(long *)PTR_DAT_08488550,0);
LAB_07c06434:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  } while( true );
}


