/*
FUNCTION_NAME: FUN_05fa57bc
ENTRY_POINT: 05fa57bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long FUN_05fa57bc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_07283280;
  if ((DAT_076dccba & 1) == 0) {
    thunk_FUN_032e1da0(System_Xml_XmlQualifiedName___var);
    thunk_FUN_032e1da0(System_TimeZoneInfo_AdjustmentRule___var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARFoundation_VisualScripting_ARCameraManagerListener_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreAnchorSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreCameraSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreEnvironmentProbeSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreFaceSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCorePlaneSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreRaycastSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreXRDepthSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARCore_ARCoreXRPointCloudSubsystem_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARFoundation_ARDebugMenu_var);
    thunk_FUN_032e1da0(UnityEngine_XR_ARFoundation_VisualScripting_ARFaceListener_var);
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Accelerometer_var);
    thunk_FUN_032e1da0(System_Data_AcceptRejectRule_var);
    thunk_FUN_032e1da0(System_AccessViolationException_var);
    thunk_FUN_032e1da0(System_Action_var);
    thunk_FUN_032e1da0(System_Action<T>_var);
    thunk_FUN_032e1da0(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var);
    thunk_FUN_032e1da0(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var);
    thunk_FUN_032e1da0(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var);
    thunk_FUN_032e1da0(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var);
    thunk_FUN_032e1da0(
                      System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                      );
    thunk_FUN_032e1da0(PTR_DAT_07283278);
    thunk_FUN_032e1da0(PTR_DAT_07283280);
    DAT_076dccba = 1;
  }
  puVar1 = PTR_DAT_07283278;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05fe3e74(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  iVar3 = FUN_05fe3d80(uVar4,0);
  puVar2 = UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var;
  if ((param_2 & 1) == 0) {
    switch(iVar3 + -3) {
    case 0:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 8);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_TimeZoneInfo_AdjustmentRule___var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar6;
      break;
    case 1:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x20);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_ARCore_ARCoreEnvironmentProbeSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar5 = lVar6;
      break;
    case 2:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x10);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Data_AcceptRejectRule_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar5 = lVar6;
      break;
    case 3:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x38);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreAnchorSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar5 = lVar6;
      break;
    case 4:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x18);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreRaycastSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar5 = lVar6;
      break;
    case 5:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x40);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
      *plVar5 = lVar6;
      break;
    case 6:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x28);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreXRDepthSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      *plVar5 = lVar6;
      break;
    case 7:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x48);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var
                                );
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar5 = lVar6;
      break;
    case 8:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x30);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARFoundation_ARDebugMenu_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      *plVar5 = lVar6;
      break;
    case 9:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x50);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                                );
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
      *plVar5 = lVar6;
      break;
    case 10:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x58);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Action_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
      *plVar5 = lVar6;
      break;
    case 0xb:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x60);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
      *plVar5 = lVar6;
      break;
    default:
      if (**(long **)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8) != 0) {
        return **(long **)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8);
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_ARFoundation_VisualScripting_ARFaceListener_var);
      FUN_05fa8738(lVar6,0);
      **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
      plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    }
  }
  else {
    switch(iVar3 + -3) {
    case 0:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x68);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Xml_XmlQualifiedName___var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68);
      *plVar5 = lVar6;
      break;
    case 1:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x80);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreCameraSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80);
      *plVar5 = lVar6;
      break;
    case 2:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x70);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_InputSystem_Accelerometer_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70);
      *plVar5 = lVar6;
      break;
    case 3:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x98);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_ARFoundation_VisualScripting_ARCameraManagerListener_var
                                );
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x98);
      *plVar5 = lVar6;
      break;
    case 4:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x78);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCorePlaneSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78);
      *plVar5 = lVar6;
      break;
    case 5:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0xa0);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_Action<T>_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
      *plVar5 = lVar6;
      break;
    case 6:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x88);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88);
      *plVar5 = lVar6;
      break;
    case 7:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0xa8);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
      *plVar5 = lVar6;
      break;
    case 8:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0x90);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  UnityEngine_XR_ARCore_ARCoreXRPointCloudSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x90);
      *plVar5 = lVar6;
      break;
    case 9:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0xb0);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var
                                );
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
      *plVar5 = lVar6;
      break;
    case 10:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0xb8);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)System_AccessViolationException_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
      *plVar5 = lVar6;
      break;
    default:
      lVar6 = *(long *)(*(long *)(*(long *)UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var + 0xb8
                                 ) + 0xc0);
      if (lVar6 != 0) {
        return lVar6;
      }
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreFaceSubsystem_var);
      FUN_05fa8738(lVar6,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
      *plVar5 = lVar6;
    }
  }
  thunk_FUN_0333a630(plVar5,lVar6);
  return lVar6;
}


