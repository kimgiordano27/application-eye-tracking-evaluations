/*
FUNCTION_NAME: FUN_07d600d0
ENTRY_POINT: 07d600d0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_07d600d0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint local_34;
  
  if ((DAT_08999af2 & 1) == 0) {
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_EngineComponent_<RevLimiterCoroutine>d__74_TypeInfo)
    ;
    FUN_03a8a718(PTR_DAT_084b2248);
    FUN_03a8a718(Unity_Services_Friends_Internal_Generated_Http_HttpClientResponse_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848c8b0);
    DAT_08999af2 = 1;
  }
  local_34 = 0;
  if ((param_1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160)),
     param_4 != 0)) {
    uVar3 = FUN_05ec87f8(param_4,uVar2,&local_34,*(undefined8 *)PTR_DAT_084b2248);
    if ((uVar3 & 1) != 0) {
      return local_34;
    }
    local_34 = FUN_05ec6b28(param_4,*(undefined8 *)
                                     Unity_Services_Friends_Internal_Generated_Http_HttpClientResponse_TypeInfo
                           );
    FUN_05ec6e78(param_4,uVar2,local_34,*(undefined8 *)PTR_DAT_0848c8b0);
    lVar6 = *param_3;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= (int)local_34) {
        uVar1 = local_34 | (int)local_34 >> 0x10;
        uVar1 = uVar1 | (int)uVar1 >> 8;
        uVar1 = uVar1 | (int)uVar1 >> 4;
        uVar1 = uVar1 | (int)uVar1 >> 2;
        FUN_04358280(param_3,(uVar1 | (int)uVar1 >> 1) + 1,
                     *(undefined8 *)
                      NWH_VehiclePhysics2_Powertrain_EngineComponent_<RevLimiterCoroutine>d__74_TypeInfo
                    );
        lVar6 = *param_3;
        if (lVar6 == 0) goto LAB_07d602cc;
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (local_34 < uVar1) {
        *(uint *)(lVar6 + 0x20 + (long)(int)local_34 * 0x38) = local_34;
        if (local_34 < uVar1) {
          *(undefined8 *)(lVar6 + 0x20 + (long)(int)local_34 * 0x38 + 8) =
               *(undefined8 *)(lVar6 + 0x28);
          thunk_FUN_03afed3c();
          lVar6 = *param_3;
          if (lVar6 == 0) goto LAB_07d602cc;
          if (local_34 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)local_34 * 0x38 + 0x30);
            *puVar4 = param_2;
            thunk_FUN_03afed3c(puVar4,param_2);
            lVar6 = *param_3;
            if (lVar6 == 0) goto LAB_07d602cc;
            if (local_34 < *(uint *)(lVar6 + 0x18)) {
              plVar5 = (long *)(lVar6 + (long)(int)local_34 * 0x38 + 0x38);
              *plVar5 = (long)param_1;
              thunk_FUN_03afed3c(plVar5,param_1);
              lVar6 = *param_3;
              if (lVar6 == 0) goto LAB_07d602cc;
              if (local_34 < *(uint *)(lVar6 + 0x18)) {
                *(undefined4 *)(lVar6 + (long)(int)local_34 * 0x38 + 0x54) = 0;
                return local_34;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
  }
LAB_07d602cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


