/*
FUNCTION_NAME: FUN_053825f8
ENTRY_POINT: 053825f8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05382760) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_053825f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char local_34 [4];
  
  puVar1 = Unity_Properties_TypeConverter<Color32,_StyleColor>_TypeInfo;
  if ((DAT_06a53095 & 1) == 0) {
    FUN_02d4dc40(Unity_Properties_TypeConverter<Color32,_StyleColor>_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ProgressionModels_GetStatisticDefinitionRequest_TypeInfo);
    FUN_02d4dc40(PlayFab_ClientModels_GetPurchaseRequest_TypeInfo);
    DAT_06a53095 = 1;
  }
  lVar4 = *(long *)puVar1;
  local_34[0] = '\0';
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PlayFab_ClientModels_GetPublisherDataRequest_TypeInfo;
  local_34[0] = '\0';
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  FUN_05065dd8(uVar5,local_34,0);
  puVar3 = PlayFab_ProgressionModels_GetStatisticDefinitionRequest_TypeInfo;
  while( true ) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar4 = *(long *)puVar1;
    }
    lVar7 = **(long **)(lVar4 + 0xb8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(int *)(lVar7 + 0x20) < 1) break;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    uVar6 = FUN_03a8bc6c(lVar7,*(undefined8 *)puVar2);
    lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8(0,uVar6);
    }
    FUN_03a8badc(lVar4,uVar6,*(undefined8 *)puVar3);
  }
  if (local_34[0] != '\0') {
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar5,0);
  }
  lVar4 = *(long *)puVar1;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar4 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar7 == 0) break;
    if (*(int *)(lVar7 + 0x20) < 1) {
      return;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if ((lVar4 == 0) || (lVar4 = FUN_03a8bc6c(lVar4,*(undefined8 *)puVar2), lVar4 == 0)) break;
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    lVar4 = *(long *)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


