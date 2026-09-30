/*
FUNCTION_NAME: FUN_073535a8
ENTRY_POINT: 073535a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_073535a8(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_38;
  
  if ((DAT_07ef30d8 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                );
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<Camera,_Camera>_get_Value__);
    FUN_03642964(Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>__ctor__)
    ;
    DAT_07ef30d8 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
  ;
  local_38 = 0;
  if (param_2 != 0) {
    FUN_074821c8(param_2,&local_38,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar2;
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (lVar3 = FUN_037623e0(**(long **)(lVar3 + 0xb8),
                             *(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<CameraEvent,_CommandBuffer>__ctor__
                            ), lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0x10) = param_3;
      thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x10),param_3);
      *(undefined8 *)(lVar3 + 0x18) = local_38;
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)Method_System_Collections_Generic_KeyValuePair<Camera,_Camera>_get_Value__;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar3;
            thunk_FUN_036b7ad0(plVar7,lVar3);
          }
          else {
            FUN_0459f03c(lVar4,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (*(char *)(param_1 + 0x20) == '\0') {
            *(undefined1 *)(param_1 + 0x20) = 1;
            uVar5 = FUN_05d345a4(*(undefined8 *)(param_1 + 0x18),0);
            lVar3 = *(long *)puVar2;
            *(undefined8 *)(param_1 + 0x10) = uVar5;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar3 = *(long *)puVar2;
            }
            FUN_074822c0(param_2,*(undefined8 *)(param_1 + 0x28),0,
                         (ulong)(*(char *)(*(long *)(lVar3 + 0xb8) + 0x18) == '\0') << 1,0,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


