/*
FUNCTION_NAME: FUN_054eff84
ENTRY_POINT: 054eff84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_054eff84(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  
  puVar2 = System_Action<int,_bool,_bool,_bool,_bool,_byte[]>_TypeInfo;
  if ((DAT_06b7ed3d & 1) == 0) {
    FUN_02d6084c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HashSet<RobotType>>_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                );
    FUN_02d6084c(System_Action<int,_bool,_bool,_bool,_bool,_byte[]>_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                );
    DAT_06b7ed3d = 1;
  }
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_054d5994(lVar7,0);
  FUN_054f0b24(param_1,lVar7,param_3,param_4);
  if ((*(long *)(param_1 + 0x78) != 0) && (lVar7 != 0)) {
    *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x58);
    thunk_FUN_02dd37b4();
    if (*(long *)(param_1 + 0x78) != 0) {
      *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60);
      thunk_FUN_02dd37b4();
      puVar5 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo;
      puVar4 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<CanvasOptimizer>_TypeInfo
      ;
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
      ;
      puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HashSet<RobotType>>_TypeInfo;
      if (param_2 != 0) {
        puVar1 = (undefined8 *)(lVar7 + 0x60);
        while( true ) {
          while( true ) {
            iVar6 = FUN_054f9600(param_2,0);
            if (iVar6 != 1) {
              if (iVar6 == 0xf) {
                FUN_054f9670(param_2,0);
                return lVar7;
              }
              uVar9 = FUN_054ee488(1,param_2);
              uVar9 = FUN_054f9058(uVar9,0);
              uVar11 = thunk_FUN_02dc61f4(
                                         UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbTeleportInteractor>_TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar9,uVar11);
            }
            lVar8 = FUN_054fd2d0(param_2,0);
            if (lVar8 == 0) goto LAB_054f01e0;
            if (*(int *)(lVar8 + 0x10) == 0) break;
            FUN_054ee588(param_1,param_2);
          }
          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          FUN_054d5ccc(lVar8,0);
          uVar9 = FUN_054f92a8(param_2,0);
          if (lVar8 == 0) break;
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
          thunk_FUN_02dd37b4();
          uVar9 = FUN_054ef56c(param_1,param_2);
          *(undefined8 *)(lVar8 + 0x18) = uVar9;
          thunk_FUN_02dd37b4();
          plVar15 = (long *)*puVar1;
          if (plVar15 == (long *)0x0) {
            uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
            FUN_03aabc60(uVar9,*(undefined8 *)puVar4);
            *puVar1 = uVar9;
            thunk_FUN_02dd37b4(puVar1,uVar9);
            plVar15 = (long *)*puVar1;
            if (plVar15 == (long *)0x0) break;
          }
          lVar12 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_054f0198;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar15,*(long *)puVar2,2);
LAB_054f0198:
          (*(code *)*puVar10)(plVar15,lVar8,puVar10[1]);
        }
      }
    }
  }
LAB_054f01e0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


