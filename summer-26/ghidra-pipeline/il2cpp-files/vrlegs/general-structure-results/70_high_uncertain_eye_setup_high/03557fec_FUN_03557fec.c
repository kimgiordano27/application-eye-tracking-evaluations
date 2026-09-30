/*
FUNCTION_NAME: FUN_03557fec
ENTRY_POINT: 03557fec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_03557fec(long param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint local_3c;
  uint uStack_38;
  int local_34;
  
  if ((DAT_0412df29 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccbc00);
    FUN_01ab69ac(PTR_DAT_03ceb270);
    FUN_01ab69ac(PTR_DAT_03cc3518);
    DAT_0412df29 = 1;
  }
  local_3c = 0;
  if ((param_1 != 0) && (iVar2 = FUN_036d3364(param_1,0), param_4 != 0)) {
    local_34 = iVar2;
    uVar5 = FUN_0219f8b8(param_4,&local_34,&local_3c,*(undefined8 *)PTR_DAT_03ccbc00);
    if ((uVar5 & 1) != 0) {
      return local_3c;
    }
    local_3c = FUN_0219b384(param_4,*(undefined8 *)PTR_DAT_03ceb270);
    uStack_38 = local_3c;
    local_34 = iVar2;
    FUN_0219b83c(param_4,&local_34,&uStack_38,*(undefined8 *)PTR_DAT_03cc3518);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) <= (int)local_3c) {
        uVar3 = FUN_036c1d60(local_3c + 1,0);
        FUN_01f25968(param_3,uVar3,*(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
        lVar8 = *param_3;
        if (lVar8 == 0) goto LAB_0355821c;
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (local_3c < uVar1) {
        *(uint *)(lVar8 + (long)(int)local_3c * 0x38 + 0x20) = local_3c;
        if (local_3c < uVar1) {
          plVar6 = (long *)(lVar8 + (long)(int)local_3c * 0x38 + 0x28);
          *plVar6 = param_2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,param_2);
          lVar8 = *param_3;
          if (lVar8 == 0) goto LAB_0355821c;
          if (local_3c < *(uint *)(lVar8 + 0x18)) {
            puVar7 = (undefined8 *)(lVar8 + (long)(int)local_3c * 0x38 + 0x30);
            *puVar7 = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
            lVar8 = *param_3;
            if (lVar8 == 0) goto LAB_0355821c;
            if (local_3c < *(uint *)(lVar8 + 0x18)) {
              plVar6 = (long *)(lVar8 + (long)(int)local_3c * 0x38 + 0x38);
              *plVar6 = param_1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,param_1);
              uVar1 = local_3c;
              lVar8 = *param_3;
              if (((lVar8 == 0) || (param_2 == 0)) || (*(long *)(param_2 + 0x20) == 0))
              goto LAB_0355821c;
              lVar9 = (long)(int)local_3c;
              iVar4 = FUN_036d3364(*(long *)(param_2 + 0x20),0);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(bool *)(lVar8 + lVar9 * 0x38 + 0x40) = iVar2 == iVar4;
                lVar8 = *param_3;
                if (lVar8 == 0) goto LAB_0355821c;
                if (local_3c < *(uint *)(lVar8 + 0x18)) {
                  *(undefined4 *)(lVar8 + (long)(int)local_3c * 0x38 + 0x54) = 0;
                  return local_3c;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0355821c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


