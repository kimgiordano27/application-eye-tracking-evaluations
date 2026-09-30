/*
FUNCTION_NAME: FUN_02a18a74
ENTRY_POINT: 02a18a74
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02a18a74(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam00000000072350bf & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam00000000072350bf = 1;
  }
  puVar1 = PTR_DAT_06d9fd78;
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar2 = FUN_036e1620(*(long *)(param_4 + 0x20),0);
    uVar3 = FUN_051d85c4(0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar6);
    }
    uVar4 = FUN_051d2ac0(uVar2,uVar3,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_4 + 0x20);
    uVar2 = FUN_051d85c4(0);
    if (lVar6 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (lVar6,uVar2,0);
      uVar2 = FUN_051d85c4(0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar6);
      }
      uVar4 = FUN_051d2ac0(uVar2,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar6 = FUN_051d85c4(0);
      if ((lVar6 != 0) && (lVar6 = FUN_051e5130(lVar6,0), lVar6 != 0)) {
        fVar7 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
        fVar9 = param_2;
        fVar10 = param_3;
        lVar6 = FUN_051d85c4(0);
        if ((lVar6 != 0) && (lVar6 = FUN_051e5130(lVar6,0), lVar6 != 0)) {
          fVar8 = (float)FUN_04f1b1c0(lVar6,0);
          lVar6 = FUN_051e516c(param_4,0);
          if ((lVar6 != 0) && (lVar6 = FUN_051df7a8(lVar6,0), lVar6 != 0)) {
            FUN_04f1aa00(fVar7 + fVar8 * DAT_0534c360,param_2 + fVar9 * DAT_0534c360,
                         param_3 + fVar10 * DAT_0534c360,lVar6,0);
            lVar6 = FUN_051e516c(param_4,0);
            if (lVar6 != 0) {
              lVar6 = FUN_051df7a8(lVar6,0);
              lVar5 = FUN_051d85c4(0);
              if (((lVar5 != 0) && (lVar5 = FUN_051e5130(lVar5,0), lVar5 != 0)) &&
                 (FUN_04f1adf8(lVar5,0), lVar6 != 0)) {
                FUN_04f1ae7c(lVar6,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


