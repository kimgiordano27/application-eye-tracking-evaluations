/*
FUNCTION_NAME: FUN_05161a58
ENTRY_POINT: 05161a58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05161a58(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  if ((DAT_06bba199 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
    DAT_06bba199 = 1;
  }
  FUN_05161c38(param_1);
  lVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo;
    if (plVar3 == (long *)0x0) goto LAB_05161c34;
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)puVar1,0);
    if ((uVar5 & 1) != 0) {
      FUN_05161c38(param_1);
      lVar2 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (lVar2 != 0) {
        plVar3 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (plVar3 != (long *)0x0) {
          lVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          if (lVar2 != 0) {
            uVar5 = FUN_04f6dd04(lVar2,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
                                 ,4,0);
            if ((uVar5 & 1) != 0) {
              FUN_05161c38(param_1);
              plVar3 = (long *)(**(code **)(*param_1 + 0x248))
                                         (param_1,*(undefined8 *)(*param_1 + 0x250));
              puVar1 = 
              UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
              ;
              if (plVar3 == (long *)0x0) goto LAB_05161c34;
              uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
              uVar5 = thunk_FUN_04f6d944(uVar4,*(undefined8 *)puVar1,0);
              if ((uVar5 & 1) != 0) {
                return;
              }
            }
            goto LAB_05161bb4;
          }
        }
LAB_05161c34:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
  }
LAB_05161bb4:
  thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
  FUN_02a7d698();
  uVar4 = FUN_050656a0(0);
  local_24 = 1;
  uVar6 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
  uVar6 = thunk_FUN_02f44ec4(uVar6,&local_24);
  uVar7 = thunk_FUN_02f6ef30(
                            UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARPlaneManager>_TypeInfo
                            );
  uVar4 = FUN_051b937c(uVar7,uVar4,uVar6,0);
  uVar4 = FUN_05160b1c(param_1,uVar4);
  uVar6 = thunk_FUN_02f6ef30(
                            UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbTeleportInteractor>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar4,uVar6);
}


