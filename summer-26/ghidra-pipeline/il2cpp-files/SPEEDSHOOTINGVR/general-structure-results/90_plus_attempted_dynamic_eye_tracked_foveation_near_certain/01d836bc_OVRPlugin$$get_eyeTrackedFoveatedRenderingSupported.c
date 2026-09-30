/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 01d836bc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
                    /* catch() { ... } // from try @ 01d83680 with catch @ 01d836bc */
  if ((param_1 & 1) == 0) {
    lVar8 = *unaff_x22;
LAB_01d83730:
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar8);
      lVar8 = *unaff_x22;
    }
    puVar7 = PTR_DAT_0234bcc8;
                    /* try { // try from 01d83748 to 01e837c3 has its CatchHandler @ 01d838f8 */
    if (*(long **)(*(long *)(lVar8 + 0xb8) + 0x18) == unaff_x21) {
      if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01d7aea0();
      uVar2 = FUN_0120568c();
LAB_01d83828:
      return ~uVar2 >> 0x1f;
    }
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01d603f8(unaff_x21,0);
    if ((uVar3 & 1) == 0) {
      lVar8 = thunk_FUN_010303a8(PTR_DAT_023587c0);
      if (**(char **)(lVar8 + 0xb8) == '\0') {
        uVar5 = thunk_FUN_010303a8(PTR_DAT_02358368);
        thunk_FUN_010303a8(PTR_DAT_0234c170);
        uVar6 = thunk_FUN_010400dc();
        FUN_01d4a564(uVar6,uVar5,0);
        goto LAB_01d83aec;
      }
      uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
      uVar5 = FUN_00fdc388(uVar5,2);
      FUN_00e5db80(unaff_x21);
      uVar6 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      FUN_00e5db80(uVar5);
      FUN_00e5e2a8(uVar5,uVar6);
      FUN_00e5e2dc(uVar5,0,uVar6);
      uVar6 = (**(code **)(*unaff_x19 + 0x848))();
      FUN_00e5db80(uVar5);
      FUN_00e5e2a8(uVar5,uVar6);
      FUN_00e5e2dc(uVar5,1,uVar6);
      puVar7 = PTR_DAT_02358378;
      goto LAB_01d83abc;
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    plVar4 = (long *)FUN_00fd8604();
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x22);
    }
    puVar1 = PTR_DAT_02358388;
    if (plVar4 == unaff_x21) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar5 = FUN_01d7ad74();
      uVar6 = FUN_01d79950();
      uVar2 = FUN_01110908(uVar5,uVar6,*(undefined8 *)puVar1);
      goto LAB_01d83828;
    }
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
    uVar5 = FUN_00fdc388(uVar5,2);
    FUN_00e5db80(unaff_x21);
    uVar6 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
    FUN_00e5db80(uVar5);
    FUN_00e5e2a8(uVar5,uVar6);
    FUN_00e5e2dc(uVar5,0,uVar6);
    FUN_00e5db80(plVar4);
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    FUN_00e5db80(uVar5);
    FUN_00e5e2a8(uVar5,uVar6);
    FUN_00e5e2dc(uVar5,1,uVar6);
    uVar6 = thunk_FUN_010303a8(PTR_DAT_02358378);
  }
  else {
                    /* catch() { ... } // from try @ 01d83198 with catch @ 01d836c0 */
                    /* catch() { ... } // from try @ 01d83678 with catch @ 01d836c4 */
                    /* catch() { ... } // from try @ 01d83390 with catch @ 01d836c8 */
                    /* catch() { ... } // from try @ 01d83160 with catch @ 01d836cc */
    uVar3 = (**(code **)(*unaff_x21 + 0x838))();
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 01d83570 with catch @ 01d836dc
                       catch() { ... } // from try @ 01d83698 with catch @ 01d836dc */
                    /* catch() { ... } // from try @ 01d832f8 with catch @ 01d836e0
                       catch() { ... } // from try @ 01d83688 with catch @ 01d836e0 */
      unaff_x21 = (long *)(**(code **)(*unaff_x21 + 0x848))();
                    /* catch() { ... } // from try @ 01d834d0 with catch @ 01d836f0 */
      lVar8 = *unaff_x22;
                    /* catch() { ... } // from try @ 01d832b4 with catch @ 01d836f4 */
                    /* catch() { ... } // from try @ 01d83660 with catch @ 01d836f8 */
      if (unaff_x21 != (long *)0x0) {
                    /* catch() { ... } // from try @ 01d834d4 with catch @ 01d836fc */
                    /* catch() { ... } // from try @ 01d832b8 with catch @ 01d83700 */
                    /* catch() { ... } // from try @ 01d83650 with catch @ 01d83704 */
                    /* catch() { ... } // from try @ 01d83414 with catch @ 01d83708 */
                    /* catch() { ... } // from try @ 01d83470 with catch @ 01d8370c */
        if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
           (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) !=
            lVar8)) {
                    /* try { // try from 01d83724 to 01e83727 has its CatchHandler @ 01d837c4 */
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(unaff_x21);
        }
      }
      goto LAB_01d83730;
    }
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bd08);
    uVar5 = FUN_00fdc388(uVar5,2);
    FUN_00e5db80();
    uVar6 = (**(code **)(*unaff_x21 + 0x168))();
    FUN_00e5db80(uVar5);
    FUN_00e5e2a8(uVar5,uVar6);
    FUN_00e5e2dc(uVar5,0,uVar6);
    uVar6 = (**(code **)(*unaff_x19 + 0x168))();
    FUN_00e5db80(uVar5);
    FUN_00e5e2a8(uVar5,uVar6);
    FUN_00e5e2dc(uVar5,1,uVar6);
    puVar7 = PTR_DAT_02358380;
LAB_01d83abc:
    uVar6 = thunk_FUN_010303a8(puVar7);
  }
  uVar5 = FUN_01d7c4d8(uVar6,uVar5);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar6 = thunk_FUN_010400dc();
  FUN_01c65ad0(uVar6,uVar5,0);
LAB_01d83aec:
  uVar5 = thunk_FUN_010303a8(PTR_DAT_023591d8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar6,uVar5);
}


