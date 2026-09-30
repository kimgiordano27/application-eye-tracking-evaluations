/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05d1aec4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported
               (undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar3 = PTR_DAT_06fb5bf8;
  if ((DAT_073988b8 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5bf8);
    DAT_073988b8 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_5) {
LAB_05d1aff8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)param_5 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) goto LAB_05d1aff8;
          if (param_2 == 0) goto LAB_05d1affc;
          uVar2 = *(uint *)(lVar4 + (long)(int)uVar5 * 4 + 0x20);
          if (*(uint *)(param_2 + 0x18) <= uVar2) goto LAB_05d1aff8;
          if (param_3 == 0) goto LAB_05d1affc;
          if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_05d1aff8;
          lVar1 = param_2 + (long)(int)uVar2 * 0x10;
          uVar7 = *(undefined4 *)(lVar1 + 0x24);
          uVar8 = *(undefined4 *)(lVar1 + 0x28);
          uVar9 = *(undefined4 *)(lVar1 + 0x2c);
          uVar6 = FUN_068eca84(*(undefined4 *)(lVar1 + 0x20),0);
          if (param_4 == 0) goto LAB_05d1affc;
          if (*(uint *)(param_4 + 0x18) <= uVar2) goto LAB_05d1aff8;
          lVar1 = param_4 + (long)(int)uVar2 * 0x10;
          *(undefined4 *)(lVar1 + 0x20) = uVar6;
          *(undefined4 *)(lVar1 + 0x24) = uVar7;
          *(undefined4 *)(lVar1 + 0x28) = uVar8;
          *(undefined4 *)(lVar1 + 0x2c) = uVar9;
          uVar2 = *(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar2);
      }
      return;
    }
  }
LAB_05d1affc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


