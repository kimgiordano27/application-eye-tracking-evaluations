/*
FUNCTION_NAME: FUN_030fc45c
ENTRY_POINT: 030fc45c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030fc4d8) */
/* WARNING: Removing unreachable block (ram,0x030fc5c0) */

void FUN_030fc45c(float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
                 long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff1c46 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1c46 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_6,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_5 + 0x20);
    fVar9 = 0.0;
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    if (lVar3 != 0) {
      fVar4 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                               (lVar3,0);
      param_4 = param_4 * 0.5;
      fVar9 = fVar9 + param_4;
      fVar11 = 0.0;
      fVar4 = (float)FUN_03927438(fVar4 + param_3 * 0.5,lVar3,0);
      if (param_6 != 0) {
        fVar10 = fVar9;
        fVar6 = fVar11;
        fVar5 = (float)UnityEngine_UIElements_StyleSheets_StylePropertyReader_GetCursorIdFunction___ctor
                                 (param_6,0);
        fVar10 = fVar10 + param_4 * 0.5;
        fVar12 = 0.0;
        fVar6 = (float)FUN_03927438(fVar5 + fVar6 * 0.5,param_6,0);
        fVar6 = fVar6 - fVar4;
        fVar10 = fVar10 - fVar9;
        fVar12 = fVar12 - fVar11;
        fVar4 = fVar12 * fVar12;
        fVar9 = 1.4013e-45;
        if (fVar4 + fVar6 * fVar6 + fVar10 * fVar10 <= 1.4013e-45) {
          return;
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          fVar11 = (float)FUN_03928d34(*(long *)(param_5 + 0x28),0);
          if (*(long *)(param_5 + 0x30) != 0) {
            fVar5 = fVar4;
            fVar7 = (float)FUN_038ee05c(param_1,*(long *)(param_5 + 0x30),0);
            lVar3 = *(long *)(param_5 + 0x28);
            fVar13 = fVar7;
            if (fVar7 < 0.0) {
              fVar13 = 0.0;
            }
            if (lVar3 != 0) {
              fVar8 = (float)FUN_03928d34(lVar3,0);
              if (fVar13 <= 0.0) {
                fVar13 = 0.0;
              }
              FUN_03928dd4(fVar8 + fVar13 * ((fVar11 - fVar6) - fVar8),
                           fVar7 + fVar13 * ((fVar9 - fVar10) - fVar7),
                           fVar5 + fVar13 * ((fVar4 - fVar12) - fVar5),lVar3,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


