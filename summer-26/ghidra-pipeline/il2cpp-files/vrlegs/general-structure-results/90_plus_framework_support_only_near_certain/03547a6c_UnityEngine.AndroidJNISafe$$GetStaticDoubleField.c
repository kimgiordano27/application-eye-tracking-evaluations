/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$GetStaticDoubleField
ENTRY_POINT: 03547a6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_16;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


long UnityEngine_AndroidJNISafe__GetStaticDoubleField(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long in_stack_00000008;
  
  *(undefined1 *)(unaff_x19 + 0xf0e) = 1;
  puVar1 = OVRPassthroughLayer_ColorLutHandler_TypeInfo;
  plVar8 = (long *)(unaff_x20 + 0x10);
  if (*plVar8 == 0) {
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)OVRPassthroughLayer_NoneStyleHandler_TypeInfo);
    FUN_03543ef8(lVar3,*(undefined8 *)OVRPlugin_<>c__DisplayClass502_0_TypeInfo,
                 *(undefined8 *)PTR_DAT_03cbec50,*(undefined8 *)OVRPlugin_<>c_TypeInfo);
    *plVar8 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar3);
  }
  plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass155_0_TypeInfo)
        {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03547b38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01a472ec(plVar9,*(long *)
                                  UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass155_0_TypeInfo
                          ,0);
LAB_03547b38:
    lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (*plVar8 == 0) goto LAB_03547e24;
    plVar9 = (long *)(*plVar8 + 0x20);
    *plVar9 = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar3);
    if ((*(char *)(unaff_x20 + 0x20) != '\0') && (uVar6 = FUN_025be440(lVar3,0), (uVar6 & 1) == 0))
    {
      uVar6 = FUN_025bd4ac(*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
      if ((uVar6 & 1) != 0) {
        if ((lVar3 == 0) || (lVar5 = FUN_025c0b4c(lVar3,0x2e,0,0), lVar5 == 0)) goto LAB_03547e24;
        if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar10 = *(undefined8 *)(lVar5 + 0x28);
        plVar9 = (long *)FUN_025e6b04(0);
        uVar10 = FUN_035470e8(uVar10);
        if (plVar9 == (long *)0x0) goto LAB_03547e24;
        uVar10 = (**(code **)(*plVar9 + 0x368))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x370));
        FUN_01f909ac(uVar10,&stack0x00000008,*(undefined8 *)OVRPermissionsRequester_<>c_TypeInfo);
        puVar2 = UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo;
        if (in_stack_00000008 == 0) goto LAB_03547e24;
        uVar10 = *(undefined8 *)(in_stack_00000008 + 0x10);
        lVar5 = *(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar11 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar2;
          }
          uVar12 = **(undefined8 **)(lVar5 + 0xb8);
          lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1628);
          FUN_021de1ac(lVar11,uVar12,*(undefined8 *)OVRPermissionsRequester_Permission_TypeInfo,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar9 = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
        }
        FUN_01f67dc0(uVar10,lVar11,&stack0x00000008,
                     *(undefined8 *)OVRPassthroughLayer_StylesHandler_TypeInfo);
        if (in_stack_00000008 == 0) goto LAB_03547e24;
        uVar10 = FUN_025c262c(in_stack_00000008,6,0);
        if (*plVar8 == 0) goto LAB_03547e24;
        puVar4 = (undefined8 *)(*plVar8 + 0x80);
        *puVar4 = uVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar10);
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
        *(long *)(unaff_x20 + 0x18) = lVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x20 + 0x18),lVar3);
      }
    }
  }
  plVar9 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)ExitGames_Client_Photon_StructWrapping_WrappedType_TypeInfo) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03547d50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01a472ec(plVar9,*(long *)
                                  ExitGames_Client_Photon_StructWrapping_WrappedType_TypeInfo,0);
LAB_03547d50:
    uVar10 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = FUN_025be440(uVar10,0);
    if ((uVar6 & 1) == 0) {
      if (*plVar8 == 0) goto LAB_03547e24;
      puVar4 = (undefined8 *)(*plVar8 + 0x48);
      *puVar4 = uVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar10);
    }
  }
  uVar6 = FUN_025be440(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
  if ((uVar6 & 1) == 0) {
    if (*plVar8 == 0) goto LAB_03547e24;
    *(undefined8 *)(*plVar8 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*plVar8 == 0) goto LAB_03547e24;
    *(undefined8 *)(*plVar8 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  uVar6 = FUN_025be440(**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
  if ((uVar6 & 1) == 0) {
    if (*plVar8 == 0) {
LAB_03547e24:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(*plVar8 + 0x50) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  return *plVar8;
}


