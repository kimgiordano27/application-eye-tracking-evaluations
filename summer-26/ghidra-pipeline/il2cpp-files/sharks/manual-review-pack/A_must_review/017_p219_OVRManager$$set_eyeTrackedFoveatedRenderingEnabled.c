/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02c03524
PROGRAM: sharks-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long *unaff_x19;
  long *unaff_x25;
  
  if (in_w8 == 1) {
    uVar1 = FUN_02a4b568();
    if (uVar1 < 100) {
      if (uVar1 < 0x47) {
        if (uVar1 == 0x44) {
LAB_02c03634:
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
                    /* WARNING: Could not recover jumptable at 0x02c03658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x168))();
          return;
        }
        if (uVar1 == 0x46) {
LAB_02c0357c:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c00a74();
          return;
        }
      }
      else {
        if (uVar1 == 0x47) {
LAB_02c0365c:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c0088c();
          return;
        }
        if (uVar1 == 0x58) {
LAB_02c03608:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c003e0();
          return;
        }
      }
    }
    else if (uVar1 < 0x67) {
      if (uVar1 == 100) goto LAB_02c03634;
      if (uVar1 == 0x66) goto LAB_02c0357c;
    }
    else {
      if (uVar1 == 0x67) goto LAB_02c0365c;
      if (uVar1 == 0x78) goto LAB_02c03608;
    }
  }
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380ad50);
  uVar2 = FUN_02c108dc(uVar2,0);
  thunk_FUN_01851c08(PTR_DAT_037feb28);
  uVar3 = thunk_FUN_01861bbc();
  FUN_02bb89a0(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar2);
}


