/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 02c0344c
PROGRAM: sharks-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_10;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x25);
  }
  plVar3 = (long *)FUN_02c01850();
  if (param_1 == (long *)0x0) goto LAB_02c0368c;
  uVar4 = (**(code **)(*param_1 + 0x568))(param_1,*(undefined8 *)(*param_1 + 0x570));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = FUN_02be74a8(param_1,plVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar5 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar5 = FUN_017fc3f4(uVar5,2);
      FUN_015d6ff8(param_1);
      uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      FUN_015d6ff8(uVar5);
      FUN_015d7aec(uVar5,uVar6);
      FUN_015d7b20(uVar5,0,uVar6);
      FUN_015d6ff8(plVar3);
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      FUN_015d6ff8(uVar5);
      FUN_015d7aec(uVar5,uVar6);
      FUN_015d7b20(uVar5,1,uVar6);
      puVar7 = PTR_DAT_0380ad60;
      goto LAB_02c038c0;
    }
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c01850(param_1);
    uVar4 = (**(code **)(*param_1 + 0x888))(param_1);
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar5 = FUN_017fc3f4(uVar5,2);
      FUN_015d6ff8(param_1);
      uVar6 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      FUN_015d6ff8(uVar5);
      FUN_015d7aec(uVar5,uVar6);
      FUN_015d7b20(uVar5,0,uVar6);
      FUN_015d6ff8();
      uVar6 = (**(code **)(*unaff_x21 + 0x168))();
      FUN_015d6ff8(uVar5);
      FUN_015d7aec(uVar5,uVar6);
      FUN_015d7b20(uVar5,1,uVar6);
      puVar7 = PTR_DAT_0380a1b8;
LAB_02c038c0:
      uVar6 = thunk_FUN_01851c08(puVar7);
      uVar6 = FUN_02c12818(uVar6,uVar5,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar5 = thunk_FUN_01861bbc();
      System_Threading_Tasks_Task__Finish(uVar5,uVar6,0);
      goto OVRManager__get_fixedFoveatedRenderingSupported;
    }
    bVar1 = *(byte *)(*unaff_x25 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    unaff_x19 = (long *)FUN_017f82a0();
  }
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    uVar2 = FUN_02a4b568();
    if (uVar2 < 100) {
      if (uVar2 < 0x47) {
        if (uVar2 == 0x44) {
LAB_02c03634:
          if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02c03658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170));
            return;
          }
LAB_02c0368c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (uVar2 == 0x46) {
LAB_02c0357c:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c00a74();
          return;
        }
      }
      else {
        if (uVar2 == 0x47) {
LAB_02c0365c:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c0088c();
          return;
        }
        if (uVar2 == 0x58) {
LAB_02c03608:
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c003e0(unaff_x19);
          return;
        }
      }
    }
    else if (uVar2 < 0x67) {
      if (uVar2 == 100) goto LAB_02c03634;
      if (uVar2 == 0x66) goto LAB_02c0357c;
    }
    else {
      if (uVar2 == 0x67) goto LAB_02c0365c;
      if (uVar2 == 0x78) goto LAB_02c03608;
    }
  }
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380ad50);
  uVar6 = FUN_02c108dc(uVar5,0);
  thunk_FUN_01851c08(PTR_DAT_037feb28);
  uVar5 = thunk_FUN_01861bbc();
  FUN_02bb89a0(uVar5,uVar6,0);
OVRManager__get_fixedFoveatedRenderingSupported:
  uVar6 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar5,uVar6);
}


