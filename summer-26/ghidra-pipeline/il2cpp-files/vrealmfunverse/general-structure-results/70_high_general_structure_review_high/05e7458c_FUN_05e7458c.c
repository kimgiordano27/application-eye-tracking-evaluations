/*
FUNCTION_NAME: FUN_05e7458c
ENTRY_POINT: 05e7458c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_05e7458c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_066dc6e6 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_HDROutputSettings___TypeInfo);
    FUN_02b3c81c(Autohand_Hand___TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_HandFinger___TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_4__);
    FUN_02b3c81c(Oculus_Interaction_Input_Compatibility_OVR_HandFinger___TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_5__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0__);
    DAT_066dc6e6 = 1;
  }
  puVar3 = Oculus_Interaction_Input_Compatibility_OVR_HandFinger___TypeInfo;
  puVar2 = Autohand_Hand___TypeInfo;
  puVar1 = UnityEngine_HDROutputSettings___TypeInfo;
  lVar4 = *(long *)(param_1 + 0x18);
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (lVar4 != 0) {
    uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      uVar6 = 0;
      do {
        if ((uint)uVar5 <= uVar6) {
LAB_05e7476c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_05e74768;
        FUN_0375b4e4(&local_78,lVar4,*(undefined8 *)puVar3);
        local_60 = local_78;
        local_78 = 0;
        puStack_58 = puStack_70;
        local_50 = local_68;
        puStack_70 = &local_60;
        while (uVar5 = FUN_047221f8(&local_60,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          FUN_05c390fc(local_50,3,0);
        }
        FUN_047221f4(&local_60,*(undefined8 *)puVar1);
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) goto LAB_05e74768;
        uVar5 = *(ulong *)(lVar4 + 0x18);
        if ((uint)uVar5 <= uVar6) goto LAB_05e7476c;
        lVar7 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_05e74768;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      } while ((int)uVar6 < (int)(uint)uVar5);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_03f46d84(*(long *)(param_1 + 0x20),
                   *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_5__
                  );
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_03f466a8(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0__)
        ;
        return;
      }
    }
  }
LAB_05e74768:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


