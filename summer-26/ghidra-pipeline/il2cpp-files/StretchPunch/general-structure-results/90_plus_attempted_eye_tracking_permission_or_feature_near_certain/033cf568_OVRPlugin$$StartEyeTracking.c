/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 033cf568
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin__StartEyeTracking(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  do {
    plVar4 = (long *)0x0;
    while( true ) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      if (plVar4 == (long *)0x0) {
        if (unaff_x22 == (long *)0x0) goto LAB_033cf798;
        uVar3 = (**(code **)(*unaff_x22 + 0x608))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x610));
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar2 = FUN_033ad404();
          return uVar2;
        }
        plVar4 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,
                                      *(undefined4 *)(unaff_x20 + 0x18));
        if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_033cf73c;
        uVar3 = 0;
        uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
        plVar8 = plVar4 + 4;
        goto LAB_033cf6e0;
      }
      if (unaff_x21 == (long *)0x0) goto LAB_033cf798;
      lVar1 = thunk_FUN_01de26bc(plVar4,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar1 == 0) goto LAB_033cf79c;
      if (*(uint *)(unaff_x21 + 3) <= unaff_x26) goto LAB_033cf794;
      *(undefined8 *)((long)unaff_x21 + unaff_x27) = plVar4;
      thunk_FUN_01e10808((undefined8 *)((long)unaff_x21 + unaff_x27),plVar4);
      unaff_x26 = unaff_x26 + 1;
      unaff_x27 = unaff_x27 + 8;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
        FUN_033cf324();
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*unaff_x24);
        }
        FUN_033ca2c8();
        uVar2 = FUN_01d6ee30();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*unaff_x25);
        }
        uVar3 = FUN_033aa3b4(uVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return uVar2;
        }
        thunk_FUN_01dd295c(StringLiteral_5743);
        uVar2 = thunk_FUN_01de27b8();
        FUN_033cf92c();
        goto LAB_033cf7c4;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) goto LAB_033cf794;
      unaff_x22 = *(long **)(unaff_x20 + unaff_x27);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar3 = FUN_033aa3b4(unaff_x22,0,0);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_01dd295c(StringLiteral_1111);
        uVar2 = thunk_FUN_01de27b8();
        FUN_0328ec88(uVar2,0);
        goto LAB_033cf7c4;
      }
      param_1 = *unaff_x24;
      if (unaff_x22 == (long *)0x0) break;
      if (*(byte *)(*unaff_x22 + 0x130) < *(byte *)(param_1 + 0x130)) break;
      plVar4 = unaff_x22;
      if (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) !=
          param_1) {
        plVar4 = (long *)0x0;
      }
    }
  } while( true );
LAB_033cf6e0:
  do {
    if (uVar7 <= uVar3) {
LAB_033cf794:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (plVar4 == (long *)0x0) goto LAB_033cf798;
    lVar1 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_01de26bc(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_033cf79c:
      uVar2 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar3) goto LAB_033cf794;
    *plVar8 = lVar1;
    thunk_FUN_01e10808(plVar8,lVar1);
    uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
    plVar8 = plVar8 + 1;
  } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_033cf73c:
  uVar3 = FUN_032fcd14(0);
  if ((uVar3 & 1) == 0) {
    thunk_FUN_01dd295c(StringLiteral_2940);
    uVar2 = thunk_FUN_01de27b8();
    FUN_033a33d0(uVar2,0);
LAB_033cf7c4:
    uVar6 = thunk_FUN_01dd295c(StringLiteral_8945);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar2,uVar6);
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar1 = *unaff_x24;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033cf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return uVar2;
  }
LAB_033cf798:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


