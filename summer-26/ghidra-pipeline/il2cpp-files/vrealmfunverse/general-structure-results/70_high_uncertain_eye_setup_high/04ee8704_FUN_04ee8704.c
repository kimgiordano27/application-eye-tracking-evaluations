/*
FUNCTION_NAME: FUN_04ee8704
ENTRY_POINT: 04ee8704
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04ee8704(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5
                 ,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 local_64;
  
  if ((DAT_066c9631 & 1) == 0) {
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var);
    DAT_066c9631 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x1a0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_04ee88dc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        return;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        lVar3 = FUN_02b3c908(*(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var
                             ,*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18));
        puVar2 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
        lVar5 = *(long *)(lVar4 + 0x18);
        if (lVar5 != 0) {
          uVar6 = 0;
          lVar7 = 0x20;
          while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_04ee88dc;
            if ((*(long *)(param_4 + 0x1b8) == 0) ||
               (FUN_04f91cec(&local_7c,*(long *)(param_4 + 0x1b8),
                             *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20),0), lVar3 == 0))
            goto LAB_04ee8834;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04ee88dc;
            puVar1 = (undefined8 *)(lVar3 + lVar7);
            lVar7 = lVar7 + 0x1c;
            uVar6 = uVar6 + 1;
            *(undefined4 *)(puVar1 + 3) = local_64;
            puVar1[2] = local_6c;
            puVar1[1] = uStack_74;
            *puVar1 = local_7c;
            lVar5 = *(long *)(lVar4 + 0x18);
            if (lVar5 == 0) goto LAB_04ee8834;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          fVar8 = (float)FUN_04f1e218(lVar3,0);
          if (fVar8 < *(float *)(lVar4 + 0x28) - *(float *)(param_4 + 0x15c)) {
            if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_04ee8834;
            uVar6 = FUN_04ee88e0(param_1,param_2,param_3,*(long *)(param_4 + 0x1a8),param_5,
                                 *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8),
                                 param_6);
            if ((uVar6 & 1) != 0) {
              fVar8 = *(float *)(lVar4 + 0x2c) + *(float *)(param_4 + 0x1d0);
              fVar9 = *(float *)(param_4 + 0x160);
              *(float *)(lVar4 + 0x2c) = fVar8;
              if (fVar8 < fVar9) {
                return;
              }
              *(undefined2 *)(lVar4 + 0x10) = 0;
              return;
            }
          }
          *(undefined4 *)(lVar4 + 0x2c) = 0;
          return;
        }
      }
    }
  }
LAB_04ee8834:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


