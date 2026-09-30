/*
FUNCTION_NAME: FUN_05d86768
ENTRY_POINT: 05d86768
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05d86768(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_06b82d30 & 1) == 0) {
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRSceneRoom_<LoadRoom>d__19>__);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06b82d30 = 1;
  }
  puVar5 = Method_OVRTaskBuilder<bool>_Start<OVRSceneRoom_<LoadRoom>d__19>__;
  puVar4 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) {
        return 0;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar7 = lVar7 + lVar8;
      uVar1 = *(undefined8 *)(lVar7 + 0x20);
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      uVar10 = *(undefined8 *)(lVar7 + 0x30);
      uVar6 = thunk_FUN_04e8bd3c(uVar2,param_2,0);
      if ((uVar6 & 1) != 0) {
LAB_05d86850:
        if (param_1 != 0) {
          lVar7 = *(long *)(param_1 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar3 = *(uint *)(param_1 + 0x18);
            if (uVar3 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar3 * 0x18;
              *(uint *)(param_1 + 0x18) = uVar3 + 1;
              *(undefined8 *)(lVar7 + 0x20) = uVar1;
              *(undefined8 *)(lVar7 + 0x28) = uVar2;
              *(undefined8 *)(lVar7 + 0x30) = uVar10;
              thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20),0);
            }
            else {
              local_78 = uVar1;
              uStack_70 = uVar2;
              local_68 = uVar10;
              FUN_03b5926c(param_1,&local_78,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            return 1;
          }
        }
        break;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      local_90 = uVar1;
      uStack_88 = uVar2;
      local_80 = uVar10;
      uVar6 = FUN_05d86768(param_1,param_2,&local_90);
      if ((uVar6 & 1) != 0) goto LAB_05d86850;
      lVar7 = *param_3;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


