/*
FUNCTION_NAME: FUN_0616e39c
ENTRY_POINT: 0616e39c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0616e39c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar3 = UnityEngine_UI_ClipperRegistry_TypeInfo;
  if ((bRam0000000006e957e9 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_UI_ClipperRegistry_TypeInfo);
    FUN_02e3ca1c(UnityWebSocketSharp_CloseEventArgs_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
                );
    FUN_02e3ca1c(PTR_DAT_06a65cb0);
    FUN_02e3ca1c(PTR_DAT_06a65f08);
    FUN_02e3ca1c(PTR_DAT_06a74950);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a66920);
    FUN_02e3ca1c(PTR_DAT_06a6a378);
    FUN_02e3ca1c(PTR_DAT_06a66928);
    FUN_02e3ca1c(PTR_DAT_06a6a380);
    FUN_02e3ca1c(PTR_DAT_06a6a6a8);
    FUN_02e3ca1c(PTR_DAT_06a6a6b0);
    FUN_02e3ca1c(PTR_DAT_06a66930);
    FUN_02e3ca1c(PTR_DAT_06a66938);
    FUN_02e3ca1c(System_Net_CloseExState_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_Internal_CloudCode_CloudCodeApiBaseRequest_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_Internal_Apis_CloudCode_CloudCodeApiClient_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_CloudCodeException_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_CloudCodeExceptionReason_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_CloudCodeInitializer_TypeInfo);
    FUN_02e3ca1c(Unity_Services_CloudCode_CloudCodeInternal_TypeInfo);
    bRam0000000006e957e9 = 1;
  }
  puVar1 = PTR_DAT_06a2ed98;
  lVar5 = FUN_038ac148(param_1,*(undefined8 *)puVar3);
  plVar10 = param_1 + 8;
  *plVar10 = lVar5;
  thunk_FUN_02ee2be8(plVar10,lVar5);
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
LAB_0616e620:
    puVar2 = Unity_Services_CloudCode_CloudCodeInternal_TypeInfo;
    puVar3 = Unity_Services_CloudCode_CloudCodeExceptionReason_TypeInfo;
    uVar8 = FUN_06264e10(param_1,0);
    uVar8 = FUN_054838b8(*(undefined8 *)puVar3,uVar8,0);
    uVar8 = FUN_05482ce0(uVar8,*(undefined8 *)puVar2,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(lVar5);
    }
    FUN_06225060(uVar8,param_1,0);
  }
  else {
    lVar5 = *(long *)PTR_DAT_06a2ed80;
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    goto LAB_0616e620;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar6 = FUN_06267b6c(plVar10,0,0);
    puVar3 = 
    UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo;
    if ((uVar6 & 1) == 0) goto LAB_0616e620;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_02e789bc(lVar11,*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
                              );
    uVar8 = *(undefined8 *)puVar3;
    plVar12 = param_1 + 9;
    *plVar12 = lVar5;
    uVar8 = thunk_FUN_02e789bc(lVar11,uVar8);
    thunk_FUN_02ee2be8(plVar12,uVar8);
    puVar2 = PTR_DAT_06a65cb0;
    lVar11 = param_1[8];
    lVar5 = thunk_FUN_02e789bc(lVar11,*(undefined8 *)PTR_DAT_06a65cb0);
    uVar8 = *(undefined8 *)puVar2;
    plVar10 = param_1 + 10;
    *plVar10 = lVar5;
    uVar8 = thunk_FUN_02e789bc(lVar11,uVar8);
    thunk_FUN_02ee2be8(plVar10,uVar8);
    plVar13 = (long *)*plVar12;
    if (plVar13 != (long *)0x0) {
      lVar5 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0616e890;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar13,*(long *)puVar3,0);
LAB_0616e890:
      lVar5 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6a378);
      FUN_04874b88(uVar8,param_1,*(undefined8 *)System_Net_CloseExState_TypeInfo,0);
      if (lVar5 == 0) goto LAB_0616eb08;
      FUN_0487a1bc(lVar5,uVar8,*(undefined8 *)PTR_DAT_06a6a6b0);
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_0616eb08;
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0616e944;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar12,*(long *)puVar3,1);
LAB_0616e944:
      lVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a6a380);
      FUN_04874b88(uVar8,param_1,
                   *(undefined8 *)
                    Unity_Services_CloudCode_Internal_Apis_CloudCode_CloudCodeApiClient_TypeInfo,0);
      if (lVar5 == 0) goto LAB_0616eb08;
      FUN_0487a1bc(lVar5,uVar8,*(undefined8 *)PTR_DAT_06a6a6a8);
    }
    plVar12 = (long *)*plVar10;
    if (plVar12 != (long *)0x0) {
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0616e9f4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar12,*(long *)puVar2,0);
LAB_0616e9f4:
      lVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a66920);
      FUN_04874b88(uVar8,param_1,
                   *(undefined8 *)
                    Unity_Services_CloudCode_Internal_CloudCode_CloudCodeApiBaseRequest_TypeInfo,0);
      if (lVar5 == 0) goto LAB_0616eb08;
      FUN_0487a1bc(lVar5,uVar8,*(undefined8 *)PTR_DAT_06a66930);
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_0616eb08;
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0616eaa8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02e759c0(plVar10,*(long *)puVar2,1);
LAB_0616eaa8:
      lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a66928);
      FUN_04874b88(uVar8,param_1,*(undefined8 *)Unity_Services_CloudCode_CloudCodeException_TypeInfo
                   ,0);
      if (lVar5 == 0) goto LAB_0616eb08;
      FUN_0487a1bc(lVar5,uVar8,*(undefined8 *)PTR_DAT_06a66938);
    }
  }
  lVar5 = param_1[7];
  if (lVar5 == 0) {
LAB_0616eb08:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
    FUN_038acb18(param_1,lVar5,*(undefined8 *)UnityWebSocketSharp_CloseEventArgs_TypeInfo);
    if (param_1[7] == 0) goto LAB_0616eb08;
    if (*(int *)(param_1[7] + 0x18) == 0) {
      uVar8 = FUN_06264e10(param_1,0);
      uVar8 = FUN_054838b8(*(undefined8 *)Unity_Services_CloudCode_CloudCodeInitializer_TypeInfo,
                           uVar8,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar5);
      }
      FUN_06225060(uVar8,param_1,0);
    }
  }
  puVar3 = PTR_DAT_06a74950;
  bVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  uVar8 = *(undefined8 *)puVar3;
  *(byte *)(param_1 + 0xc) = bVar4 & 1;
  lVar5 = thunk_FUN_02e78ab8(uVar8);
  FUN_06234bc4(lVar5,0);
  param_1[0xb] = lVar5;
  thunk_FUN_02ee2be8(param_1 + 0xb,lVar5);
  if (((char)param_1[6] != '\0') && (plVar10 = (long *)param_1[9], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
           ) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto FUN_0616e7bc;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02e759c0(plVar10,*(long *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRGrabTransformer>_TypeInfo
                          ,5);
FUN_0616e7bc:
    uVar6 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    if ((uVar6 & 1) != 0) goto LAB_0616e844;
  }
  if ((*(char *)((long)param_1 + 0x31) != '\0') &&
     (plVar10 = (long *)param_1[10], plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a65cb0) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_0616e834;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02e759c0(plVar10,*(long *)PTR_DAT_06a65cb0,6);
LAB_0616e834:
    uVar6 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    if ((uVar6 & 1) != 0) {
LAB_0616e844:
                    /* WARNING: Could not recover jumptable at 0x0616e868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
      return;
    }
  }
  return;
}


