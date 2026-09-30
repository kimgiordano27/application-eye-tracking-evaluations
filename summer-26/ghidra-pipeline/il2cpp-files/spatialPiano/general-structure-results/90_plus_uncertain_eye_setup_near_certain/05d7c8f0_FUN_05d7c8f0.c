/*
FUNCTION_NAME: FUN_05d7c8f0
ENTRY_POINT: 05d7c8f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d7c8f0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_06bc3a29 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3a29 = 1;
  }
  if (*param_7 != 0) {
    uVar4 = FUN_05d4c208(*param_7,*(undefined8 *)
                                   Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    puVar5 = (undefined8 *)FUN_05ddf250(param_7,0);
    lVar1 = *(long *)(param_5 + 0xb8);
    lVar2 = *(long *)(param_5 + 0xc0);
    uVar7 = *puVar5;
    uVar10 = FUN_05d7bf6c(uVar4);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x28) = uVar10;
      *(undefined4 *)(lVar2 + 0x2c) = param_2;
      *(undefined4 *)(lVar2 + 0x30) = param_3;
      *(undefined4 *)(lVar2 + 0x34) = param_4;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x18) = uVar10;
        *(undefined4 *)(lVar1 + 0x1c) = param_2;
        *(undefined4 *)(lVar1 + 0x20) = param_3;
        *(undefined4 *)(lVar1 + 0x24) = param_4;
        if (*(long *)(param_5 + 0xc0) != 0) {
          *(undefined8 *)(*(long *)(param_5 + 0xc0) + 0x20) = uVar4;
          plVar6 = (long *)FUN_05de1004(param_7 + 1,0);
          puVar3 = 
          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
          if (*plVar6 != 0) {
            uVar4 = FUN_05d5add8(*plVar6,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)puVar3);
            }
            FUN_05dae168(&local_68,param_7,0);
            uStack_88 = uStack_60;
            local_90 = local_68;
            uStack_78 = uStack_50;
            uStack_80 = local_58;
            local_70 = local_48;
            FUN_05c9caa8(&local_90,0);
            puVar3 = PTR_DAT_067c9e50;
            if (*(long *)(param_5 + 0xd8) != 0) {
              uVar8 = **(undefined8 **)
                        (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
              thunk_FUN_060bed68(*(long *)(param_5 + 0xd8),0,0);
              uVar9 = *(undefined8 *)(param_5 + 200);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05caf7bc(0,0,0,0,uVar7,uVar9,1,0,0xffffffff,0xffffffff,0);
              FUN_05d7cac4(param_5,uVar7,*(undefined8 *)(param_5 + 0xb8),
                           *(undefined8 *)(param_5 + 0xc0),uVar4,*(undefined8 *)(param_5 + 200),
                           uVar8);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


