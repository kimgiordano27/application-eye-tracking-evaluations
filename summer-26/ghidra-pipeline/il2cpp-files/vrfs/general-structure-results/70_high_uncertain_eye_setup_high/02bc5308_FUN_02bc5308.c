/*
FUNCTION_NAME: FUN_02bc5308
ENTRY_POINT: 02bc5308
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02bc5308(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam00000000072358e8 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam00000000072358e8 = 1;
  }
  lVar5 = param_1[9];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar3 = FUN_051d94d4(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_1[9] != 0) {
    uVar3 = FUN_036e0e70(param_1[9],0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (param_1[9] != 0) {
      iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(param_1[9],0);
      if (iVar2 == 2) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 600);
        uVar4 = *(undefined8 *)(*param_1 + 0x260);
      }
      else {
        iVar2 = (int)param_1[3];
        if (iVar2 == 2) {
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x288);
          uVar4 = *(undefined8 *)(*param_1 + 0x290);
        }
        else if (iVar2 == 1) {
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x278);
          uVar4 = *(undefined8 *)(*param_1 + 0x280);
        }
        else {
          if (iVar2 != 0) {
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
          uVar4 = *(undefined8 *)(*param_1 + 0x270);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bc53a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


