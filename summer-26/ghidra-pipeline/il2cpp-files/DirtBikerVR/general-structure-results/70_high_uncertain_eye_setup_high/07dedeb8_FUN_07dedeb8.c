/*
FUNCTION_NAME: FUN_07dedeb8
ENTRY_POINT: 07dedeb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_07dedeb8(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  
  if ((DAT_0899a1df & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Result_TypeInfo);
    FUN_03a8a718(OVRPlugin_Size3f_TypeInfo);
    FUN_03a8a718(OVRPlugin_Sizef_TypeInfo);
    FUN_03a8a718(OVRPlugin_Sizei_TypeInfo);
    FUN_03a8a718(OVRPlugin_SkeletonType_TypeInfo);
    FUN_03a8a718(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_03a8a718(OVRPlugin_SystemHeadset_TypeInfo);
    DAT_0899a1df = 1;
  }
  plVar9 = (long *)(param_1 + 0x18);
  lVar5 = *plVar9;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
    FUN_04e9ca3c(lVar5,*(undefined8 *)OVRPlugin_Sizef_TypeInfo);
    *plVar9 = lVar5;
    thunk_FUN_03afed3c(plVar9,lVar5);
    lVar5 = *plVar9;
    if (lVar5 == 0) goto LAB_07dedfc0;
  }
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  puVar2 = OVRPlugin_Result_TypeInfo;
  iVar10 = 0;
  do {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 <= iVar10) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x28);
          *puVar6 = param_3;
          *(ulong *)(lVar7 + 0x20) = param_2;
          thunk_FUN_03afed3c(puVar6,0);
          return;
        }
        FUN_04e9d2f4(lVar5,param_2,param_3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        return;
      }
      break;
    }
    iVar4 = FUN_04e9cfd4(lVar5,iVar10,*(undefined8 *)puVar3);
    if (iVar4 == (int)param_2) {
      lVar5 = *plVar9;
      if (param_2 >> 0x20 == 1) {
        if (lVar5 != 0) {
          FUN_04e9eb1c(lVar5,iVar10,*(undefined8 *)OVRPlugin_Size3f_TypeInfo);
          return;
        }
      }
      else if (lVar5 != 0) {
        FUN_04e9d028(lVar5,iVar10,param_2,param_3,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo
                    );
        return;
      }
      break;
    }
    lVar5 = *plVar9;
    iVar10 = iVar10 + 1;
  } while (lVar5 != 0);
LAB_07dedfc0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


