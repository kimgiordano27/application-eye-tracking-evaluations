/*
FUNCTION_NAME: FUN_03b16a70
ENTRY_POINT: 03b16a70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_03b16a70(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_03ffdad3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdad3 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0xfe) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      FUN_03927ab0(param_1 + 0x120,param_1,*(undefined8 *)(param_1 + 0x110),0x1502,0);
      lVar4 = *(long *)(param_1 + 0x110);
      if (lVar4 == 0) goto LAB_03b16cc0;
      FUN_03927cc4(lVar4,0);
      FUN_03927d54(0,lVar4,0);
      lVar4 = *(long *)(param_1 + 0x110);
      if (lVar4 == 0) goto LAB_03b16cc0;
      FUN_03927de0(lVar4,0);
      UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector(0x3f800000,lVar4,0);
      lVar4 = *(long *)(param_1 + 0x110);
      if (lVar4 == 0) goto LAB_03b16cc0;
      FUN_03927efc(lVar4,0);
      FUN_03927f8c(0,lVar4,0);
      uVar2 = FUN_03b16318(param_1);
      lVar4 = *(long *)(param_1 + 0x110);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) goto LAB_03b16cc0;
        FUN_03928018(lVar4,0);
        fVar6 = 0.0;
      }
      else {
        if (lVar4 == 0) goto LAB_03b16cc0;
        fVar6 = *(float *)(param_1 + 100);
        fVar7 = *(float *)(param_1 + 0x104);
        FUN_03928018(lVar4,0);
        fVar6 = -(fVar6 + fVar7);
      }
      FUN_039280a8(fVar6,lVar4,0);
    }
  }
  if (*(char *)(param_1 + 0xfd) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      FUN_03927ab0(param_1 + 0x120,param_1,*(undefined8 *)(param_1 + 0x118),0x2a04,0);
      lVar4 = *(long *)(param_1 + 0x118);
      if (lVar4 != 0) {
        uVar5 = FUN_03927cc4(lVar4,0);
        FUN_03927d54(uVar5,0,lVar4,0);
        lVar4 = *(long *)(param_1 + 0x118);
        if (lVar4 != 0) {
          uVar5 = FUN_03927de0(lVar4,0);
          UnityEngine_UIElements_StyleSheets_StyleSelectorHelper__MatchesSelector
                    (uVar5,0x3f800000,lVar4,0);
          lVar4 = *(long *)(param_1 + 0x118);
          if (lVar4 != 0) {
            uVar5 = FUN_03927efc(lVar4,0);
            FUN_03927f8c(uVar5,0,lVar4,0);
            uVar2 = FUN_03b16290(param_1);
            lVar4 = *(long *)(param_1 + 0x118);
            if (lVar4 != 0) {
              uVar5 = FUN_03928018(lVar4,0);
              if ((uVar2 & 1) == 0) {
                fVar6 = 0.0;
              }
              else {
                fVar6 = -(*(float *)(param_1 + 0x100) + *(float *)(param_1 + 0x60));
              }
              FUN_039280a8(uVar5,fVar6,lVar4,0);
              return;
            }
          }
        }
      }
LAB_03b16cc0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


