/*
FUNCTION_NAME: FUN_055130e0
ENTRY_POINT: 055130e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_055130e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  if ((DAT_06bbf5d9 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_88_0_TypeInfo);
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo);
    DAT_06bbf5d9 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = FUN_037835ec(*(long *)(param_1 + 0x10),param_2,
                            *(undefined8 *)OVRPlugin_OVRP_1_88_0_TypeInfo), lVar3 != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    lVar7 = *(long *)(lVar3 + 0x18);
    lVar4 = FUN_037835ec(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)puVar1);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      iVar6 = *(int *)(lVar3 + 0x10);
      iVar5 = *(int *)(lVar3 + 0x14);
      *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 1;
      puVar1 = UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeList_TypeInfo;
      if (iVar6 < iVar5) {
        if (param_3 == 0) goto LAB_05513230;
        iVar5 = 0;
        do {
          iVar2 = FUN_054f6fe4(param_3,0);
          if (iVar2 <= iVar6) {
            return;
          }
          if (*(long *)(lVar3 + 0x28) == 0) {
LAB_055131f4:
            if (lVar7 == 0) goto LAB_05513230;
            FUN_054f7ae4(param_3,*(undefined4 *)(lVar7 + 0x10),iVar6,0);
          }
          else {
            lVar4 = FUN_03abf644(*(long *)(lVar3 + 0x28),iVar5,*(undefined8 *)puVar1);
            if (lVar4 == 0) goto LAB_05513230;
            if (*(int *)(lVar4 + 0x10) != iVar6) goto LAB_055131f4;
            if ((*(long *)(lVar3 + 0x28) == 0) ||
               (lVar4 = FUN_03abf644(*(long *)(lVar3 + 0x28),iVar5,*(undefined8 *)puVar1),
               lVar4 == 0)) goto LAB_05513230;
            iVar6 = *(int *)(lVar4 + 0x14);
            iVar5 = iVar5 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0x14));
      }
      return;
    }
  }
LAB_05513230:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


