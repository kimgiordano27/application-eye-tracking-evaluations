/*
FUNCTION_NAME: FUN_03558224
ENTRY_POINT: 03558224
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_03558224(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  
  if ((DAT_0412df2a & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03ccbc00);
    FUN_01ab69ac(PTR_DAT_03ceb270);
    FUN_01ab69ac(PTR_DAT_03cc3518);
    DAT_0412df2a = 1;
  }
  local_3c = 0;
  if ((param_1 != 0) && (uVar2 = FUN_036d3364(param_1,0), param_4 != 0)) {
    local_34 = uVar2;
    uVar3 = FUN_0219f8b8(param_4,&local_34,&local_3c,*(undefined8 *)PTR_DAT_03ccbc00);
    if ((uVar3 & 1) != 0) {
      return local_3c;
    }
    local_3c = FUN_0219b384(param_4,*(undefined8 *)PTR_DAT_03ceb270);
    uStack_38 = local_3c;
    local_34 = uVar2;
    FUN_0219b83c(param_4,&local_34,&uStack_38,*(undefined8 *)PTR_DAT_03cc3518);
    lVar6 = *param_3;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= (int)local_3c) {
        uVar2 = FUN_036c1d60(local_3c + 1,0);
        FUN_01f25968(param_3,uVar2,*(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
        lVar6 = *param_3;
        if (lVar6 == 0) goto LAB_0355841c;
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (local_3c < uVar1) {
        *(uint *)(lVar6 + (long)(int)local_3c * 0x38 + 0x20) = local_3c;
        if (local_3c < uVar1) {
          *(undefined8 *)(lVar6 + (long)(int)local_3c * 0x38 + 0x28) = *(undefined8 *)(lVar6 + 0x28)
          ;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar6 = *param_3;
          if (lVar6 == 0) goto LAB_0355841c;
          if (local_3c < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)local_3c * 0x38 + 0x30);
            *puVar4 = param_2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,param_2);
            lVar6 = *param_3;
            if (lVar6 == 0) goto LAB_0355841c;
            if (local_3c < *(uint *)(lVar6 + 0x18)) {
              plVar5 = (long *)(lVar6 + (long)(int)local_3c * 0x38 + 0x38);
              *plVar5 = param_1;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,param_1);
              lVar6 = *param_3;
              if (lVar6 == 0) goto LAB_0355841c;
              if (local_3c < *(uint *)(lVar6 + 0x18)) {
                lVar6 = lVar6 + (long)(int)local_3c * 0x38;
                *(undefined1 *)(lVar6 + 0x40) = 1;
                *(undefined4 *)(lVar6 + 0x54) = 0;
                return local_3c;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0355841c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


