/*
FUNCTION_NAME: FUN_030b78cc
ENTRY_POINT: 030b78cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_030b78cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_0412b61b & 1) == 0) {
    FUN_01ab69ac(
                System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                );
    FUN_01ab69ac(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_01ab69ac(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5c8);
    FUN_01ab69ac(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    DAT_0412b61b = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_3 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
    FUN_036cf948(lVar4,uVar8,0);
    if ((lVar4 != 0) && (lVar5 = FUN_036cf428(lVar4,0), lVar5 != 0)) {
      fVar9 = (float)param_1;
      FUN_036dbc2c(-*(float *)(param_3 + 0x18) * fVar9,*(float *)(param_3 + 0x1c) * fVar9,
                   *(float *)(param_3 + 0x20) * fVar9,lVar5,0);
      lVar5 = FUN_036cf428(lVar4,0);
      if (lVar5 != 0) {
        FUN_036dd718(lVar5,param_2,0,0);
        puVar3 = 
        System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo;
        puVar2 = System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo;
        puVar1 = System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo;
        if (*(long *)(param_3 + 0x30) != 0) {
          Animancer_FadeGroup__get_TargetWeight
                    (*(long *)(param_3 + 0x30),&local_58,
                     *(undefined8 *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
          while (uVar6 = FUN_021b51c8(&local_58,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
            FUN_01b7a454(&local_58,&local_38,*(undefined8 *)puVar2);
            uVar8 = local_38;
            uVar7 = FUN_036cf428(lVar4,0);
            FUN_030b78cc(param_1,uVar7,uVar8);
          }
          FUN_021b51c4(&local_58,*(undefined8 *)puVar3);
          FUN_036cf428(lVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


