/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 0785f910
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
          (void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  
  uVar5 = FUN_05db133c();
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_03398188(DAT_083c7c90,5);
    plVar7 = (long *)FUN_0339a700(*unaff_x22 + 0x20);
    if ((plVar7 == (long *)0x0) ||
       (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)), lVar6 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 == 0)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus;
    puVar9 = (undefined8 *)(lVar6 + 0x20);
    *puVar9 = uVar8;
    if (DAT_08908cd0 == 0) {
      if (((uVar2 < 2) || (*(undefined8 *)(lVar6 + 0x28) = DAT_0842e9d8, uVar2 == 2)) ||
         (*(undefined8 *)(lVar6 + 0x30) = unaff_x21, uVar2 < 4))
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus;
      *(undefined8 *)(lVar6 + 0x38) = DAT_084329e0;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(uint *)(lVar6 + 0x18) < 2)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus;
      puVar9 = (undefined8 *)(lVar6 + 0x28);
      *puVar9 = DAT_0842e9d8;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(uint *)(lVar6 + 0x18) < 3)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus;
      puVar9 = (undefined8 *)(lVar6 + 0x30);
      *puVar9 = unaff_x21;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(uint *)(lVar6 + 0x18) < 4)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus;
      puVar9 = (undefined8 *)(lVar6 + 0x38);
      *puVar9 = DAT_084329e0;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar8 = (**(code **)(*unaff_x19 + 0x168))();
    if (*(uint *)(lVar6 + 0x18) < 5) {
UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetLeftTrackedHandStatus:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar9 = (undefined8 *)(lVar6 + 0x40);
    *puVar9 = uVar8;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar8 = FUN_0666ee4c(lVar6,0);
    if (*(int *)(DAT_083d42a0 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d42a0);
    }
    uVar8 = FUN_0784f81c(uVar8);
  }
  else {
    if (*(int *)(DAT_083d42a0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = *(undefined8 *)(*(long *)(DAT_083d42a0 + 0xb8) + 8);
  }
  return uVar8;
}


