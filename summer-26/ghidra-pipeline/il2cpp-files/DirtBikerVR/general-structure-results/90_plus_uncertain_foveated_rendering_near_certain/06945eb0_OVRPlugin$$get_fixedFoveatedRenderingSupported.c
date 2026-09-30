/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 06945eb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
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
  
  while (4 < in_w8) {
    *(undefined8 *)(unaff_x25 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
    thunk_FUN_03afed3c();
    uVar1 = FUN_065ce45c(unaff_x25,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar1,0);
    lVar2 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
       (lVar2 = FUN_07c98f88(*(long *)(lVar2 + 0x80),0), lVar2 == 0)) goto LAB_069460ac;
    fVar4 = (float)FUN_07cac280(lVar2,0);
    if (unaff_s8 <= fVar4) {
      lVar2 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
         (lVar2 = FUN_07c98f88(*(long *)(lVar2 + 0x80),0), lVar2 == 0)) goto LAB_069460ac;
      fVar4 = (float)FUN_07cac280(lVar2,0);
      if (unaff_s9 < fVar4) {
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar1 = FUN_04de82e0(unaff_x24,1,*unaff_x19);
        if (lVar2 == 0) goto LAB_069460ac;
        FUN_06941ffc(lVar2,uVar1);
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar3 = *unaff_x19;
        uVar1 = 0;
        goto LAB_06946054;
      }
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
    }
    else {
      if (*unaff_x23 == 0) goto LAB_069460ac;
      lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
      uVar1 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
      if (lVar2 == 0) goto LAB_069460ac;
      FUN_06941ffc(lVar2,uVar1);
      if (*unaff_x23 == 0) goto LAB_069460ac;
      lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
      uVar3 = *unaff_x19;
      uVar1 = 1;
LAB_06946054:
      uVar1 = FUN_04de82e0(unaff_x24,uVar1,uVar3);
      if (lVar2 == 0) goto LAB_069460ac;
      FUN_069426d0(lVar2,uVar1);
    }
    do {
      if (unaff_w29 == unaff_w22) {
        (**(code **)(*unaff_x28 + 0x248))();
        return;
      }
      unaff_w22 = unaff_w22 + 1;
      if (((*unaff_x21 == 0) ||
          (lVar2 = FUN_04de82e0(*unaff_x21,unaff_w22,*(undefined8 *)PTR_DAT_084b63c8), lVar2 == 0))
         || (unaff_x24 = FUN_0694d834(), unaff_x24 == 0)) goto LAB_069460ac;
    } while (*(int *)(unaff_x24 + 0x18) != 2);
    unaff_x25 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
    if (unaff_x25 == 0) {
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(unaff_x25 + 0x18) == 0) break;
    *(undefined8 *)(unaff_x25 + 0x20) = *unaff_x27;
    thunk_FUN_03afed3c();
    if ((*unaff_x23 == 0) ||
       (lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410), lVar2 == 0))
    goto LAB_069460ac;
    if ((*(uint *)(unaff_x25 + 0x18) & 0xfffffffe) == 0) break;
    *(undefined8 *)(unaff_x25 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    thunk_FUN_03afed3c((undefined8 *)(unaff_x25 + 0x28));
    if (*(uint *)(unaff_x25 + 0x18) < 3) break;
    *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
    thunk_FUN_03afed3c();
    lVar2 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
    if (lVar2 == 0) goto LAB_069460ac;
    if ((*(uint *)(unaff_x25 + 0x18) & 0xfffffffc) == 0) break;
    *(undefined8 *)(unaff_x25 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
    thunk_FUN_03afed3c((undefined8 *)(unaff_x25 + 0x38));
    in_w8 = *(uint *)(unaff_x25 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


