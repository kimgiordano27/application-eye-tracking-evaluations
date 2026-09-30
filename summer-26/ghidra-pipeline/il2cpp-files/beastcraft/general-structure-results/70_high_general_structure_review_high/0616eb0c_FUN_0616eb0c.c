/*
FUNCTION_NAME: FUN_0616eb0c
ENTRY_POINT: 0616eb0c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_0616eb0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000006e957ea & 1) == 0) {
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a65cb0);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a66920);
    FUN_02e3ca1c(PTR_DAT_06a6a378);
    FUN_02e3ca1c(PTR_DAT_06a66928);
    FUN_02e3ca1c(PTR_DAT_06a6a380);
    FUN_02e3ca1c(PTR_DAT_06a66950);
    FUN_02e3ca1c(PTR_DAT_06a6a388);
    FUN_02e3ca1c(PTR_DAT_06a66958);
    FUN_02e3ca1c(PTR_DAT_06a6a390);
    FUN_02e3ca1c(System_Net_CloseExState_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_Internal_CloudCode_CloudCodeApiBaseRequest_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_Internal_Apis_CloudCode_CloudCodeApiClient_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_CloudCodeException_TypeInfo);
    bRam0000000006e957ea = 1;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_06a2ed80;
    if (*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
      return;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar3 = FUN_06267b6c(plVar7,0,0);
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo;
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x48);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
             ) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0616ec9c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02e759c0(plVar7,*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
                            ,0);
LAB_0616ec9c:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6a378);
      FUN_04874b88(uVar5,param_1,*(undefined8 *)System_Net_CloseExState_TypeInfo,0);
      if (lVar2 == 0) goto LAB_0616ef34;
      FUN_0487a1f8(lVar2,uVar5,*(undefined8 *)PTR_DAT_06a6a388);
      plVar7 = *(long **)(param_1 + 0x48);
      if (plVar7 == (long *)0x0) goto LAB_0616ef34;
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0616ed50;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_0616ed50:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6a380);
      FUN_04874b88(uVar5,param_1,
                   *(undefined8 *)
                    Unity_Services_CloudCode_Internal_Apis_CloudCode_CloudCodeApiClient_TypeInfo,0);
      if (lVar2 == 0) goto LAB_0616ef34;
      FUN_0487a1f8(lVar2,uVar5,*(undefined8 *)PTR_DAT_06a6a390);
    }
    puVar1 = PTR_DAT_06a65cb0;
    plVar7 = *(long **)(param_1 + 0x50);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06a65cb0) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0616ee18;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)PTR_DAT_06a65cb0,0);
LAB_0616ee18:
      lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a66920);
      FUN_04874b88(uVar5,param_1,
                   *(undefined8 *)
                    Unity_Services_CloudCode_Internal_CloudCode_CloudCodeApiBaseRequest_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_0487a1f8(lVar2,uVar5,*(undefined8 *)PTR_DAT_06a66950);
        plVar7 = *(long **)(param_1 + 0x50);
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0616eecc;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)puVar1,1);
LAB_0616eecc:
          lVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          uVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a66928);
          FUN_04874b88(uVar5,param_1,
                       *(undefined8 *)Unity_Services_CloudCode_CloudCodeException_TypeInfo,0);
          if (lVar2 != 0) {
            FUN_0487a1f8(lVar2,uVar5,*(undefined8 *)PTR_DAT_06a66958);
            return;
          }
        }
      }
LAB_0616ef34:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  }
  return;
}


