/*
FUNCTION_NAME: FUN_057730d8
ENTRY_POINT: 057730d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


undefined8
FUN_057730d8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined1 *param_6)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  int local_44;
  
  if ((DAT_06b7ffca & 1) == 0) {
    FUN_02d6084c(UnityEngine_UIElements_ICursorManager_TypeInfo);
    FUN_02d6084c(System_ComponentModel_Design_IComponentChangeService_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_NewArrayExpression___TypeInfo);
    FUN_02d6084c(UnityEngine_InputSystem_XR_FeatureType___TypeInfo);
    FUN_02d6084c(Meta_XR_ImmersiveDebugger_UserInterface_IDebugUIPanel_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_IDelayedField_TypeInfo);
    FUN_02d6084c(Meta_XR_EnvironmentDepth_IDepthProvider_TypeInfo);
    FUN_02d6084c(UnityEngine_EventSystems_IDeselectHandler_TypeInfo);
    FUN_02d6084c(System_Runtime_Serialization_IDeserializationCallback_TypeInfo);
    FUN_02d6084c(System_ComponentModel_Design_IDesignerHost_TypeInfo);
    FUN_02d6084c(Unity_Services_Analytics_Data_IDeviceData_TypeInfo);
    DAT_06b7ffca = 1;
  }
  *param_6 = 0;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    *(undefined1 *)(param_1 + 0xd8) = 1;
    puVar2 = UnityEngine_UIElements_IDelayedField_TypeInfo;
    if (param_2 == 0) goto LAB_057736c4;
    uVar4 = thunk_FUN_04e8bd3c(*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)UnityEngine_UIElements_IDelayedField_TypeInfo,0);
    if (((uVar4 & 1) != 0) ||
       (uVar4 = thunk_FUN_04e8bd3c(*(undefined8 *)(param_2 + 0x10),
                                   *(undefined8 *)Unity_Services_Analytics_Data_IDeviceData_TypeInfo
                                   ,0), (uVar4 & 1) != 0)) {
      if (param_3 == 0) goto LAB_057736c4;
      local_44 = *(int *)(param_3 + 0x14);
      if (99 < local_44 - 200U) {
        uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_44);
        uVar6 = FUN_04e6e9e0(*(undefined8 *)
                              System_Runtime_Serialization_IDeserializationCallback_TypeInfo,uVar6,0
                            );
        *(undefined8 *)(param_1 + 0x68) = uVar6;
        thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x68),uVar6);
        return 0;
      }
      uVar4 = thunk_FUN_04e8bd3c(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)puVar2,0);
      if ((uVar4 & 1) == 0) {
        iVar3 = FUN_05775868(uVar4,*(undefined8 *)(param_3 + 0x18));
      }
      else {
        iVar3 = FUN_0577568c();
      }
      if (iVar3 == -1) {
        if (*(int *)(*(long *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0576a7e0(param_1,*(undefined8 *)Meta_XR_EnvironmentDepth_IDepthProvider_TypeInfo,
                     *(undefined8 *)System_ComponentModel_Design_IDesignerHost_TypeInfo);
      }
      plVar10 = *(long **)(param_1 + 0x40);
      auVar12 = FUN_0577d6ec(param_1,0);
      lVar9 = auVar12._8_8_;
      if ((plVar10 != (long *)0x0) &&
         (lVar9 = *(long *)System_ComponentModel_Design_IComponentChangeService_TypeInfo,
         *plVar10 != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar10);
      }
      lVar9 = FUN_05775a20(auVar12._0_8_,lVar9,auVar12._0_8_);
      plVar10 = (long *)(param_1 + 0x88);
      *plVar10 = lVar9;
      thunk_FUN_02dd37b4(plVar10);
      lVar9 = FUN_0577d6ec(param_1,0);
      if ((lVar9 == 0) ||
         (plVar5 = (long *)FUN_056d8a58(lVar9,0),
         puVar2 = System_Linq_Expressions_NewArrayExpression___TypeInfo, plVar5 == (long *)0x0))
      goto LAB_057736c4;
      lVar9 = *(long *)System_Linq_Expressions_NewArrayExpression___TypeInfo;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar11 = plVar5[2];
      uVar6 = thunk_FUN_02d9d534(lVar9);
      FUN_0576f280(uVar6,lVar11,0);
      if (*plVar10 == 0) goto LAB_057736c4;
      FUN_056d9ccc(*plVar10,uVar6,0);
      uVar6 = FUN_0577d658(param_1,0);
      uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_0576f280(uVar7,uVar6,iVar3);
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x90),uVar7);
    }
    puVar2 = UnityEngine_InputSystem_XR_FeatureType___TypeInfo;
    plVar10 = (long *)(param_1 + 0x90);
    lVar9 = *plVar10;
    if (lVar9 != 0) {
      *plVar10 = 0;
      thunk_FUN_02dd37b4(plVar10,0);
      puVar2 = UnityEngine_InputSystem_XR_FeatureType___TypeInfo;
      if (*(int *)(*(long *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_0576ad98();
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0576aeec(param_1,*(undefined8 *)
                              Meta_XR_ImmersiveDebugger_UserInterface_IDebugUIPanel_TypeInfo,
                     *(undefined8 *)System_ComponentModel_Design_IDesignerHost_TypeInfo);
      }
      puVar2 = UnityEngine_UIElements_ICursorManager_TypeInfo;
      lVar11 = *(long *)(param_1 + 0x88);
      if (*(char *)(param_1 + 0x48) == '\0') {
        if (lVar11 != 0) {
          FUN_056da2b4(lVar11,lVar9,0);
          return 1;
        }
      }
      else {
        if (*(int *)(*(long *)UnityEngine_UIElements_ICursorManager_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar11 != 0) {
          FUN_056daa14(lVar11,lVar9,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),param_1,0
                      );
          return 2;
        }
      }
LAB_057736c4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(int *)(*(long *)UnityEngine_InputSystem_XR_FeatureType___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0576ad98();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0576aeec(param_1,*(undefined8 *)UnityEngine_EventSystems_IDeselectHandler_TypeInfo,
                   *(undefined8 *)System_ComponentModel_Design_IDesignerHost_TypeInfo);
    }
    puVar2 = UnityEngine_UIElements_ICursorManager_TypeInfo;
    plVar10 = (long *)(param_1 + 0x88);
    lVar9 = *plVar10;
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar11 = FUN_056d93ec(lVar9,0);
      *plVar10 = lVar11;
      thunk_FUN_02dd37b4(plVar10);
      plVar5 = (long *)FUN_0577d658(param_1,0);
      if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar8 = (long *)FUN_056d8ed8(*plVar10,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      bVar1 = *(byte *)(*(long *)System_Linq_Expressions_NewArrayExpression___TypeInfo + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Linq_Expressions_NewArrayExpression___TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar4 = (**(code **)(*plVar5 + 0x138))(plVar5,plVar8[2],*(undefined8 *)(*plVar5 + 0x140));
      if ((uVar4 & 1) == 0) {
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_056dcf74(*plVar10,0);
        thunk_FUN_02dc61f4(PTR_DAT_0676aaa8);
        uVar6 = thunk_FUN_02d9d534();
        uVar7 = thunk_FUN_02dc61f4(
                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_ICurveInteractionCaster_TypeInfo
                                  );
        FUN_0577eae4(uVar6,uVar7,7,0);
        uVar7 = thunk_FUN_02dc61f4(
                                  Unity_Services_Core_Telemetry_Internal_IDiagnosticsComponentProvider_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar6,uVar7);
      }
      *param_6 = 1;
      FUN_056dcf74(lVar9,0);
    }
    else {
      if (*(int *)(*(long *)UnityEngine_UIElements_ICursorManager_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (lVar9 == 0) goto LAB_057736c4;
      FUN_056d97a4(lVar9,**(undefined8 **)(*(long *)puVar2 + 0xb8),param_1,0);
    }
  }
  else {
    *param_6 = 1;
  }
  return 2;
}


