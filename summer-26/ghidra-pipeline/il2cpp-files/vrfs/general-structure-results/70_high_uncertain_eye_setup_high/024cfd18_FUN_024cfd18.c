/*
FUNCTION_NAME: FUN_024cfd18
ENTRY_POINT: 024cfd18
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_024cfd18(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_0722f8e1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e35b00);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    DAT_0722f8e1 = 1;
  }
  puVar1 = PTR_DAT_06e35b00;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_024cfe58:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar3 = FUN_039e6510(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x68),0);
  uVar4 = FUN_04a4eda8(param_1,uVar3,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_06d9fd78;
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)(param_1 + 0xa0);
    *plVar5 = *(long *)(param_1 + 0x60);
    thunk_FUN_01656ef8(plVar5);
    lVar6 = *plVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar4 = FUN_051d2ac0(lVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar5 != 0) {
        uVar7 = FUN_036e1ab8(*plVar5,0);
        *(undefined4 *)(param_1 + 0xa8) = uVar7;
        if (*(long *)(param_1 + 0xa0) != 0) {
          bVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
                            (*(long *)(param_1 + 0xa0),0);
          *(byte *)(param_1 + 0xac) = bVar2 & 1;
          if (*(long *)(param_1 + 0xa0) != 0) {
            bVar2 = FUN_036e1bc0(*(long *)(param_1 + 0xa0),0);
            *(byte *)(param_1 + 0xad) = bVar2 & 1;
            if (*(long *)(param_1 + 0xa0) != 0) {
              bVar2 = FUN_036e1c40(*(long *)(param_1 + 0xa0),0);
              *(byte *)(param_1 + 0xae) = bVar2 & 1;
              goto LAB_024cfe28;
            }
          }
        }
      }
      goto LAB_024cfe58;
    }
  }
LAB_024cfe28:
  FUN_024cfe5c(param_1);
  if (*(char *)(param_1 + 0x98) != '\0') {
    return;
  }
  FUN_039f3e98(param_1,0);
  return;
}


