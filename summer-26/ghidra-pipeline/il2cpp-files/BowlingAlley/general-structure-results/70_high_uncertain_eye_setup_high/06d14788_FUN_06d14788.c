/*
FUNCTION_NAME: FUN_06d14788
ENTRY_POINT: 06d14788
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_06d14788(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_30;
  long local_28;
  undefined *puVar7;
  
  if ((DAT_076e98d4 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<BulletHole>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<FixedJoint>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<DebugGizmos>__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Flow_GetValue<float>__);
    DAT_076e98d4 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) goto LAB_06d14970;
  FUN_06d13624(local_48,param_2);
  if (local_48[0] == 8) {
    FUN_06d1429c(local_48,param_2);
    if (local_48[0] == 1) {
      if (*(int *)(*(long *)Method_Unity_VisualScripting_Flow_GetValue<float>__ + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06d061bc(local_40,&local_30,0);
      if ((uVar2 & 1) == 0) {
        uVar8 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__);
        uVar6 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__);
        uVar8 = FUN_057aaeec(uVar8,local_40,uVar6,0);
        goto LAB_06d14a2c;
      }
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_06d14970:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar2 = FUN_050fa644(*(long *)(param_1 + 0x28),local_30,&local_28,
                           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<BulletHole>__);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_06d14970;
        FUN_049bdd00(*(long *)(param_1 + 0x20),5,
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<DebugGizmos>__);
        local_28 = FUN_06d127a0(param_1,local_30);
      }
      FUN_06d1429c(local_48,param_2);
      if (local_48[0] != 8) goto LAB_06d14974;
      FUN_06d1429c(local_48,param_2);
      if (local_48[0] == 0x13) {
        lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
        FUN_06d126dc(lVar3,3);
        puVar7 = Method_UnityEngine_GameObject_GetComponent<FixedJoint>__;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x24) = 5;
          plVar4 = (long *)FUN_032d5d3c(*(undefined8 *)puVar7,1);
          lVar1 = local_28;
          if (plVar4 != (long *)0x0) {
            if ((local_28 != 0) &&
               (lVar5 = thunk_FUN_032a55a4(local_28,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar8,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar1;
              thunk_FUN_0333a630(plVar4 + 4,lVar1);
              *(long *)(lVar3 + 0x28) = (long)plVar4;
              thunk_FUN_0333a630((long *)(lVar3 + 0x28),plVar4);
              return lVar3;
            }
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
        }
        goto LAB_06d14970;
      }
      uVar8 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPanel>__);
      uVar8 = thunk_FUN_032a52d0(uVar8,local_48);
      puVar7 = Method_UnityEngine_GameObject_GetComponent<OvrAvatarSocket>__;
    }
    else {
      uVar8 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPanel>__);
      uVar8 = thunk_FUN_032a52d0(uVar8,local_48);
      puVar7 = Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
    }
  }
  else {
LAB_06d14974:
    uVar8 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPanel>__);
    uVar8 = thunk_FUN_032a52d0(uVar8,local_48);
    puVar7 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
  }
  uVar6 = thunk_FUN_032e1da0(puVar7);
  uVar8 = FUN_057a25c4(uVar6,uVar8,0);
LAB_06d14a2c:
  thunk_FUN_032e1da0(PTR_DAT_0727b240);
  uVar6 = thunk_FUN_032a56a0();
  FUN_0595ad48(uVar6,uVar8,0);
  uVar8 = thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar8);
}


