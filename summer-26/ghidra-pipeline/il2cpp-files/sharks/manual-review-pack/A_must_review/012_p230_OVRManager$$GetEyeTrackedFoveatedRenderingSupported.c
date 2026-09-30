/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 02c033c0
PROGRAM: sharks-libil2cpp.so
SCORE: 158
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_10;validity_or_gating_hits_11;strong_foveation_hits_5;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  byte bVar1;
  undefined *puVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar12;
  long *unaff_x26;
  
  uVar4 = FUN_02be66d0();
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar11 = PTR_DAT_0380a198;
    goto LAB_02c036f8;
  }
  if (unaff_x21 == (long *)0x0) goto LAB_02c0368c;
  uVar4 = (**(code **)(*unaff_x21 + 0x568))();
  puVar11 = PTR_DAT_0380a190;
  if ((uVar4 & 1) == 0) {
LAB_02c0372c:
    uVar8 = thunk_FUN_01851c08(puVar11);
    uVar9 = FUN_02c108dc(uVar8,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380a198);
    FUN_02b3cc64(uVar8,uVar9,uVar10,0);
    goto OVRManager__get_fixedFoveatedRenderingSupported;
  }
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar11 = PTR_DAT_037f9418;
LAB_02c036f8:
    uVar9 = thunk_FUN_01851c08(puVar11);
    FUN_02b3cbec(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar9);
  }
  if (unaff_x20 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar11 = PTR_DAT_038000a0;
    goto LAB_02c036f8;
  }
  lVar5 = *(long *)PTR_DAT_037f87b8;
  if (*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar5 + 0x130)) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = unaff_x21;
    if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)
    {
      plVar12 = (long *)0x0;
    }
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar2 = PTR_DAT_037f4790;
  puVar11 = PTR_DAT_03804850;
  if (plVar12 == (long *)0x0) goto LAB_02c0372c;
  plVar6 = (long *)thunk_FUN_0187f3ac();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar2);
  }
  plVar7 = (long *)FUN_02c01850();
  if (plVar6 == (long *)0x0) goto LAB_02c0368c;
  uVar4 = (**(code **)(*plVar6 + 0x568))(plVar6,*(undefined8 *)(*plVar6 + 0x570));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = FUN_02be74a8(plVar6,plVar7,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar8 = FUN_017fc3f4(uVar8,2);
      FUN_015d6ff8(plVar6);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,0,uVar9);
      FUN_015d6ff8(plVar7);
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,1,uVar9);
      puVar11 = PTR_DAT_0380ad60;
      goto LAB_02c038c0;
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c01850(plVar6);
    uVar4 = (**(code **)(*plVar6 + 0x888))(plVar6);
    if ((uVar4 & 1) == 0) {
      uVar8 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar8 = FUN_017fc3f4(uVar8,2);
      FUN_015d6ff8(plVar6);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,0,uVar9);
      FUN_015d6ff8();
      uVar9 = (**(code **)(*unaff_x21 + 0x168))();
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,1,uVar9);
      puVar11 = PTR_DAT_0380a1b8;
LAB_02c038c0:
      uVar9 = thunk_FUN_01851c08(puVar11);
      uVar9 = FUN_02c12818(uVar9,uVar8,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar8 = thunk_FUN_01861bbc();
      System_Threading_Tasks_Task__Finish(uVar8,uVar9,0);
      goto OVRManager__get_fixedFoveatedRenderingSupported;
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    unaff_x19 = (long *)FUN_017f82a0();
  }
  if (*(int *)(unaff_x20 + 0x10) == 1) {
    uVar3 = FUN_02a4b568();
    if (uVar3 < 100) {
      if (uVar3 < 0x47) {
        if (uVar3 == 0x44) {
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
        if (uVar3 == 0x46) {
LAB_02c0357c:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c00a74(plVar12,unaff_x19);
          return;
        }
      }
      else {
        if (uVar3 == 0x47) {
LAB_02c0365c:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c0088c(plVar12,unaff_x19);
          return;
        }
        if (uVar3 == 0x58) {
LAB_02c03608:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c003e0(unaff_x19);
          return;
        }
      }
    }
    else if (uVar3 < 0x67) {
      if (uVar3 == 100) goto LAB_02c03634;
      if (uVar3 == 0x66) goto LAB_02c0357c;
    }
    else {
      if (uVar3 == 0x67) goto LAB_02c0365c;
      if (uVar3 == 0x78) goto LAB_02c03608;
    }
  }
  uVar8 = thunk_FUN_01851c08(PTR_DAT_0380ad50);
  uVar9 = FUN_02c108dc(uVar8,0);
  thunk_FUN_01851c08(PTR_DAT_037feb28);
  uVar8 = thunk_FUN_01861bbc();
  FUN_02bb89a0(uVar8,uVar9,0);
OVRManager__get_fixedFoveatedRenderingSupported:
  uVar9 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar8,uVar9);
}


