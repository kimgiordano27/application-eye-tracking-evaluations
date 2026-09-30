/*
FUNCTION_NAME: FUN_01f80b1c
ENTRY_POINT: 01f80b1c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_7;strong_foveation_hits_3;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_01f80b1c(long *param_1,long *param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0293de27 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3620);
    DAT_0293de27 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)PTR_DAT_027b3620)) {
    thunk_FUN_01279b34(PTR_DAT_027bcad8);
    uVar5 = thunk_FUN_0124bba8();
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027bcae0);
    FUN_01ee4da8(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1288);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar6);
  }
  lVar3 = FUN_01e6ba9c(param_2,0);
  if (param_1 != (long *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (iVar2 == 0x80) {
      if (lVar4 == 0) goto OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled;
      iVar2 = FUN_01e6c788(lVar4,0x2b,0);
      lVar4 = FUN_01e6b644(lVar4,iVar2 + 1,0);
    }
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x10)) {
        sVar1 = FUN_01e60d24(lVar3,*(int *)(lVar3 + 0x10) + -1,0);
        if (sVar1 == 0x2a) {
          uVar5 = FUN_01e69ff4(lVar3,0,*(int *)(lVar3 + 0x10) + -1,0);
          if (lVar4 != 0) {
            FUN_01e68768(lVar4,uVar5,4,0);
            return;
          }
          goto OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled;
        }
      }
      if (lVar4 != 0) {
        FUN_01e68100(lVar4,lVar3,0);
        return;
      }
    }
  }
OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


