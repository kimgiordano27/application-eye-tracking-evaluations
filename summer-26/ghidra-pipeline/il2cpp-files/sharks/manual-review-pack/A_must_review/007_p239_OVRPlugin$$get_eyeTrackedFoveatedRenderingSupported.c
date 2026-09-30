/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02c2238c
PROGRAM: sharks-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  long lVar1;
  int in_w8;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (in_w8 != 0) {
    return;
  }
  FUN_02c22d54();
  lVar1 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380bab0);
  FUN_02c24bfc();
  plVar4 = (long *)(unaff_x19 + 0xf8);
  *plVar4 = lVar1;
  thunk_FUN_0188fd20(plVar4,lVar1);
  lVar1 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380bab8,0x3c);
  FUN_02b00b24(lVar1,*(undefined8 *)PTR_DAT_0380bac0,0);
  if (lVar1 != 0) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar6 = 0;
      uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar6) goto LAB_02c224a4;
        FUN_02c24c80();
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    lVar1 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2c00,1);
    lVar3 = *(long *)(unaff_x19 + 0x108);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) < 3) {
LAB_02c224a4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) goto LAB_02c224a4;
        *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(lVar3 + 0x22);
        if ((lVar5 != 0) && (FUN_02c24ccc(lVar5,0x37), *plVar4 != 0)) {
          *(undefined1 *)(unaff_x19 + 0xb0) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


