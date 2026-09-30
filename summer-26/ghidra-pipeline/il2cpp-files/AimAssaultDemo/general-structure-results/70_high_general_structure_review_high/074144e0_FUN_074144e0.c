/*
FUNCTION_NAME: FUN_074144e0
ENTRY_POINT: 074144e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined4
FUN_074144e0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
            undefined8 *param_5,uint param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  
  if ((DAT_082699ac & 1) == 0) {
    FUN_0373b518(Unity_Netcode_ShortSerializer_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_NonNegativeIntegerDataContract_TypeInfo);
    FUN_0373b518(OVRBone_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_StyleSheets_ShorthandApplicator_TypeInfo);
    FUN_0373b518(ShowAfterMultipleRestarts_TypeInfo);
    DAT_082699ac = 1;
  }
  plVar4 = (long *)FUN_0741408c(param_4);
  if (plVar4 == (long *)0x0) goto LAB_07414764;
  lVar6 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Unity_Netcode_ShortSerializer_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_074145b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)Unity_Netcode_ShortSerializer_TypeInfo,5);
LAB_074145b4:
  uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_07418bf0(param_4,0);
    uVar3 = uVar3 & 1;
  }
  puVar2 = ShowAfterMultipleRestarts_TypeInfo;
  puVar1 = System_Runtime_Serialization_NonNegativeIntegerDataContract_TypeInfo;
  if ((param_6 & uVar3) == 0) {
    if ((param_7 & 1) != 0) {
      lVar6 = *(long *)(param_4 + 0x2f0);
      if (lVar6 == 0) goto LAB_07414764;
      if (0 < *(int *)(lVar6 + 0x18)) {
        lVar6 = FUN_049cec24(lVar6,0,*(undefined8 *)ShowAfterMultipleRestarts_TypeInfo);
        if (lVar6 == 0) goto LAB_07414764;
        if (*(long *)(lVar6 + 0x48) != 0) {
          if (((*(long *)(param_4 + 0x2f0) == 0) ||
              (lVar6 = FUN_049cec24(*(long *)(param_4 + 0x2f0),0,*(undefined8 *)puVar2), lVar6 == 0)
              ) || (plVar4 = *(long **)(lVar6 + 0x48), plVar4 == (long *)0x0)) goto LAB_07414764;
          lVar7 = *plVar4;
          lVar6 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) goto LAB_074146ec;
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          goto 
          UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController__set_pointer
          ;
        }
      }
    }
    uVar8 = *(undefined8 *)(param_4 + 0x324);
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0x32c);
    *param_5 = uVar8;
    if (*(char *)(param_4 + 800) == '\0') {
      return 0;
    }
    if (*(char *)(param_4 + 0x330) != '\0') {
      return 4;
    }
    if (*(long *)(param_4 + 0x2e8) != 0) {
      if (uVar3 == 0 && *(int *)(*(long *)(param_4 + 0x2e8) + 0x18) < 1) {
        return 1;
      }
      return 2;
    }
    goto LAB_07414764;
  }
  plVar4 = *(long **)(param_4 + 0xb0);
  if (plVar4 == (long *)0x0) goto LAB_07414764;
  lVar7 = *plVar4;
  lVar6 = *(long *)System_Runtime_Serialization_NonNegativeIntegerDataContract_TypeInfo;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) goto LAB_074146ec;
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }

  UnityEngine_XR_OpenXR_Features_Interactions_MicrosoftMotionControllerProfile_WMRSpatialController__set_pointer
  :
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar6,7);
LAB_074146fc:
  lVar6 = (*(code *)*puVar5)(plVar4,param_4,puVar5[1]);
  if (lVar6 != 0) {
    uVar11 = FUN_075ba188(lVar6,0);
    *(undefined4 *)param_5 = uVar11;
    *(undefined4 *)((long)param_5 + 4) = param_2;
    *(undefined4 *)(param_5 + 1) = param_3;
    return 3;
  }
LAB_07414764:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_074146ec:
  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 7) * 0x10 + 0x138);
  goto LAB_074146fc;
}


