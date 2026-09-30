/*
FUNCTION_NAME: OVRPlugin$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06946138
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 *unaff_x22;
  undefined8 *puVar7;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x4f8));
  FUN_03a8a718(PTR_DAT_084b6500);
  FUN_03a8a718(PTR_DAT_084b6508);
  FUN_03a8a718(PTR_DAT_084b6510);
  FUN_03a8a718(PTR_DAT_084b64e0);
  *(undefined1 *)(unaff_x20 + 0xfc8) = 1;
  lVar3 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_0679343c(lVar3,0);
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = unaff_x21;
    thunk_FUN_03afed3c(puVar7);
    FUN_06937198();
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      if (*(char *)(*(long *)(unaff_x19 + 0x18) + 0x18) == '\0') {
        return;
      }
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x208))(plVar4,*puVar7,*(undefined8 *)(*plVar4 + 0x210));
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x208))(plVar4,*puVar7,*(undefined8 *)(*plVar4 + 0x210));
          puVar2 = PTR_DAT_084b6508;
          puVar1 = PTR_DAT_084b64e8;
          plVar4 = *(long **)(unaff_x19 + 0x48);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x208))
                      (plVar4,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(*plVar4 + 0x210));
            lVar6 = *(long *)(unaff_x19 + 0x38);
            uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
            FUN_05e38d24(uVar5,lVar3,*(undefined8 *)puVar2,0);
            puVar2 = PTR_DAT_084b6510;
            puVar1 = PTR_DAT_084b64f0;
            if (lVar6 != 0) {
              FUN_04de9000(lVar6,uVar5,*(undefined8 *)PTR_DAT_084b64f8);
              lVar6 = *(long *)(unaff_x19 + 0x58);
              uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              FUN_05e38d24(uVar5,lVar3,*(undefined8 *)puVar2,0);
              if (lVar6 != 0) {
                FUN_04de9000(lVar6,uVar5,*(undefined8 *)PTR_DAT_084b6500);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


