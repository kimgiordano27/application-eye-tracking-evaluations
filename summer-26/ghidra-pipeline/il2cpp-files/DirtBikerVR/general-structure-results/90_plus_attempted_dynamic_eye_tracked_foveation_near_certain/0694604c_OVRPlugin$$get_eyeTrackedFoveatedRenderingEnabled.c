/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0694604c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  
code_r0x0694604c:
  uVar3 = 0;
  while (uVar3 = FUN_04de82e0(unaff_x24,uVar3,param_3), unaff_x25 != 0) {
    FUN_069426d0(unaff_x25,uVar3);
LAB_06946098:
    do {
      if (unaff_w29 == unaff_w22) {
        (**(code **)(*unaff_x28 + 0x248))();
        return;
      }
      unaff_w22 = unaff_w22 + 1;
      if (((*unaff_x21 == 0) ||
          (lVar1 = FUN_04de82e0(*unaff_x21,unaff_w22,*(undefined8 *)PTR_DAT_084b63c8), lVar1 == 0))
         || (unaff_x24 = FUN_0694d834(), unaff_x24 == 0)) goto LAB_069460ac;
    } while (*(int *)(unaff_x24 + 0x18) != 2);
    lVar1 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(undefined8 *)(lVar1 + 0x20) = *unaff_x27;
    thunk_FUN_03afed3c();
    if ((*unaff_x23 == 0) ||
       (lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410), lVar2 == 0))
    break;
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x28));
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_069460ec;
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
    thunk_FUN_03afed3c();
    lVar2 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
    if (lVar2 == 0) break;
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x38));
    if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_069460ec;
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
    thunk_FUN_03afed3c();
    uVar3 = FUN_065ce45c(lVar1,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar3,0);
    lVar1 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
    if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) ||
       (lVar1 = FUN_07c98f88(*(long *)(lVar1 + 0x80),0), lVar1 == 0)) break;
    fVar4 = (float)FUN_07cac280(lVar1,0);
    if (unaff_s8 <= fVar4) {
      lVar1 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
      if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) ||
         (lVar1 = FUN_07c98f88(*(long *)(lVar1 + 0x80),0), lVar1 == 0)) break;
      fVar4 = (float)FUN_07cac280(lVar1,0);
      if (unaff_s9 < fVar4) {
        if (*unaff_x23 == 0) break;
        lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar3 = FUN_04de82e0(unaff_x24,1,*unaff_x19);
        if (lVar1 == 0) break;
        FUN_06941ffc(lVar1,uVar3);
        if (*unaff_x23 == 0) break;
        unaff_x25 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        param_3 = *unaff_x19;
        goto code_r0x0694604c;
      }
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
      goto LAB_06946098;
    }
    if (*unaff_x23 == 0) break;
    lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
    uVar3 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
    if (lVar1 == 0) break;
    FUN_06941ffc(lVar1,uVar3);
    if (*unaff_x23 == 0) break;
    unaff_x25 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
    param_3 = *unaff_x19;
    uVar3 = 1;
  }
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


