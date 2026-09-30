/*
FUNCTION_NAME: FUN_05d7fdd4
ENTRY_POINT: 05d7fdd4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05d7fdd4(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar4 = Method_OVRTaskBuilder<bool>_Start<OVRSceneManager_<FetchAnchorsAsync>d__37>__;
  puVar3 = Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<FetchAnchorsAsync>d__56>__;
  puVar2 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  if ((DAT_06b82d2f & 1) == 0) {
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRSceneRoom_<LoadRoom>d__19>__);
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRSceneManager_<FetchAnchorsAsync>d__37>__);
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<FetchAnchorsAsync>d__56>__);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_06763640);
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenCreatedAsync>d__19>__);
    FUN_02d6084c(Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__);
    FUN_02d6084c(PTR_DAT_067693b8);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06b82d2f = 1;
  }
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_03b5894c(lVar5,*(undefined8 *)puVar4);
  *param_3 = lVar5;
  thunk_FUN_02dd37b4(param_3,lVar5);
  local_50 = param_2[2];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  lVar5 = *param_3;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uStack_98 = uStack_58;
  local_a0 = local_60;
  local_90 = local_50;
  uVar6 = FUN_05d86768(lVar5,param_1,&local_a0);
  if ((uVar6 & 1) == 0) {
    lVar5 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e238,5);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)
              Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenCreatedAsync>d__19>__;
        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = param_1;
          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),param_1);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) =
                 *(undefined8 *)
                  Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__;
            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30));
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = param_2[1];
              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38));
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_06763640;
                thunk_FUN_02dd37b4();
                uVar7 = FUN_04e8e3a4(lVar5,0);
                if (*(int *)(*(long *)PTR_DAT_067693b8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067693b8);
                }
                uVar7 = FUN_05d68c54(uVar7,0);
                return uVar7;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
  else {
    lVar5 = *param_3;
    uVar7 = param_2[2];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)Method_OVRTaskBuilder<bool>_Start<OVRSceneRoom_<LoadRoom>d__19>__;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      local_80 = uVar10;
      uStack_78 = uVar11;
      local_70 = uVar7;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
          *(undefined8 *)(lVar8 + 0x30) = uVar7;
          *(undefined8 *)(lVar8 + 0x28) = uVar11;
          *(undefined8 *)(lVar8 + 0x20) = uVar10;
          thunk_FUN_02dd37b4(lVar8 + 0x20,0);
        }
        else {
          local_60 = uVar10;
          uStack_58 = uVar11;
          local_50 = uVar7;
          FUN_03b5926c(lVar5,&local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        puVar2 = PTR_DAT_067693b8;
        lVar5 = *(long *)PTR_DAT_067693b8;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        return *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


