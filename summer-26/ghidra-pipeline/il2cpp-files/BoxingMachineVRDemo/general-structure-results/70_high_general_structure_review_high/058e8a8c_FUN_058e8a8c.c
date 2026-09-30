/*
FUNCTION_NAME: FUN_058e8a8c
ENTRY_POINT: 058e8a8c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_14;telemetry_or_network_hits_3
*/


void FUN_058e8a8c(int *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_58;
  int local_54;
  
  if ((DAT_06b80b93 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067683e8);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_OptimizedReflection_<>c_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_OrHandler_<>c_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo);
    FUN_02d6084c(System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
    DAT_06b80b93 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if ((param_1[1] != 1) || (*param_1 != 0x39)) {
    return;
  }
  local_70 = FUN_058e8244(param_1);
  uVar5 = FUN_0583d570(local_70,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *param_4;
  uVar6 = FUN_04e83184(param_3,*(undefined8 *)Unity_VisualScripting_OrHandler_<>c_TypeInfo,0);
  if (lVar11 == 0) {
LAB_058e90f8:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  local_80 = FUN_0590b48c(lVar11,uVar6,0);
  puVar2 = PTR_DAT_067683e8;
  lVar11 = *(long *)PTR_DAT_067683e8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar2;
  }
  auVar12 = FUN_0590ba0c(local_80,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
  puVar3 = System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
  local_80 = auVar12;
  auVar12 = FUN_0590b91c(local_80,*(undefined8 *)System_Net_HttpWebRequest_NtlmAuthState_TypeInfo,0)
  ;
  local_80 = auVar12;
  if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_04f8e414(0);
  plVar7 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
  puVar1 = PTR_DAT_0675e258;
  local_54 = param_1[5];
  lVar11 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_54);
  if (plVar7 == (long *)0x0) goto LAB_058e90f8;
  if (lVar11 != 0) {
    lVar8 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) goto LAB_058e9100;
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    thunk_FUN_02dd37b4(plVar7 + 4,lVar11);
    local_58 = param_1[4] + 1;
    lVar11 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_58);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_058e9100;
    }
    if (*(uint *)(plVar7 + 3) < 2) goto LAB_058e90fc;
    plVar7[5] = lVar11;
    thunk_FUN_02dd37b4(plVar7 + 5,lVar11);
    lVar11 = FUN_0584b85c(local_70,0);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_058e9100;
    }
    if (2 < *(uint *)(plVar7 + 3)) {
      plVar7[6] = lVar11;
      thunk_FUN_02dd37b4(plVar7 + 6,lVar11);
      local_84 = param_1[5];
      lVar11 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_84);
      if (lVar11 != 0) {
        lVar8 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_058e9100:
          uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,0);
        }
      }
      if (3 < *(uint *)(plVar7 + 3)) {
        plVar7[7] = lVar11;
        thunk_FUN_02dd37b4(plVar7 + 7,lVar11);
        uVar6 = FUN_04e8e8dc(uVar6,*(undefined8 *)
                                    System_Linq_Expressions_Interpreter_OrInstruction_OrBoolean_TypeInfo
                             ,plVar7,0);
        auVar12 = FUN_0590c024(local_80,uVar6,0);
        local_80 = auVar12;
        auVar12 = FUN_0590bad0(local_80,*(uint *)(param_2 + 0x30) & 7,0);
        local_80 = auVar12;
        FUN_0590bc38(local_80,param_1[0xb],0);
        lVar11 = *param_4;
        uVar6 = FUN_04e83184(param_3,*(undefined8 *)
                                      UnityEngine_XR_OpenXR_OpenXRSettings_DepthSubmissionMode_TypeInfo
                             ,0);
        if (lVar11 != 0) {
          auVar12 = FUN_0590b48c(lVar11,uVar6,0);
          local_80 = auVar12;
          auVar12 = FUN_0590ba0c(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
          local_80 = auVar12;
          auVar12 = FUN_0590b91c(local_80,*(undefined8 *)puVar3,0);
          local_80 = auVar12;
          uVar6 = FUN_04f8e414(0);
          local_88 = param_1[4] + 1;
          uVar9 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_88);
          local_8c = param_1[4] + 3;
          uVar10 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_8c);
          puVar4 = UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo;
          uVar6 = FUN_04e8e828(uVar6,*(undefined8 *)
                                      UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo,uVar9
                               ,uVar10,0);
          auVar12 = FUN_0590c024(local_80,uVar6,0);
          local_80 = auVar12;
          auVar12 = FUN_0590bad0(local_80,*(uint *)(param_2 + 0x30) & 7,0);
          local_80 = auVar12;
          FUN_0590bc38(local_80,param_1[0xb],0);
          lVar11 = *param_4;
          uVar6 = FUN_04e83184(param_3,*(undefined8 *)
                                        Unity_VisualScripting_OptimizedReflection_<>c_TypeInfo,0);
          if (lVar11 != 0) {
            auVar12 = FUN_0590b48c(lVar11,uVar6,0);
            local_80 = auVar12;
            auVar12 = FUN_0590ba0c(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0
                                  );
            local_80 = auVar12;
            auVar12 = FUN_0590b91c(local_80,*(undefined8 *)puVar3,0);
            local_80 = auVar12;
            uVar6 = FUN_04f8e414(0);
            local_90 = param_1[4] + 3;
            uVar9 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_90);
            local_94 = param_1[4] + 5;
            uVar10 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_94);
            uVar6 = FUN_04e8e828(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
            auVar12 = FUN_0590c024(local_80,uVar6,0);
            local_80 = auVar12;
            auVar12 = FUN_0590bad0(local_80,*(uint *)(param_2 + 0x30) & 7,0);
            local_80 = auVar12;
            FUN_0590bc38(local_80,param_1[0xb],0);
            lVar11 = *param_4;
            uVar6 = FUN_04e83184(param_3,*(undefined8 *)
                                          UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo
                                 ,0);
            if (lVar11 != 0) {
              auVar12 = FUN_0590b48c(lVar11,uVar6,0);
              local_80 = auVar12;
              auVar12 = FUN_0590ba0c(local_80,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4)
                                     ,0);
              local_80 = auVar12;
              auVar12 = FUN_0590b91c(local_80,*(undefined8 *)puVar3,0);
              local_80 = auVar12;
              uVar6 = FUN_04f8e414(0);
              local_98 = param_1[4] + 5;
              uVar9 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_98);
              local_9c = param_1[4] + 7;
              uVar10 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48),&local_9c);
              uVar6 = FUN_04e8e828(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
              auVar12 = FUN_0590c024(local_80,uVar6,0);
              local_80 = auVar12;
              auVar12 = FUN_0590bad0(local_80,*(uint *)(param_2 + 0x30) & 7,0);
              local_80 = auVar12;
              FUN_0590bc38(local_80,param_1[0xb],0);
              return;
            }
          }
        }
        goto LAB_058e90f8;
      }
    }
  }
LAB_058e90fc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


