/*
FUNCTION_NAME: FUN_02c03344
ENTRY_POINT: 02c03344
PROGRAM: sharks-libil2cpp.so
SCORE: 120
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_foveation_hits_3;functionality_foveated_rendering
*/


void FUN_02c03344(long *param_1,long *param_2,long param_3)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  
  puVar12 = PTR_DAT_037f2c78;
                    /* try { // try from 02c03348 to 02d03357 has its CatchHandler @ 02c03358 */
                    /* catch() { ... } // from try @ 02c032f4 with catch @ 02c03358
                       catch() { ... } // from try @ 02c03348 with catch @ 02c03358 */
                    /* try { // try from 02c0335c to 02d0335f has its CatchHandler @ 02c03368 */
                    /* try { // try from 02c03360 to 02d0336b has its CatchHandler @ 02c031dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c0335c with catch @ 02c03368
                        */
  if ((DAT_03a25dca & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f4790);
    FUN_017fc350(PTR_DAT_037f87b8);
    FUN_017fc350(PTR_DAT_037f2c78);
    DAT_03a25dca = 1;
  }
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02be66d0(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar12 = PTR_DAT_0380a198;
    goto LAB_02c036f8;
  }
  if (param_1 == (long *)0x0) goto LAB_02c0368c;
  uVar4 = (**(code **)(*param_1 + 0x568))(param_1,*(undefined8 *)(*param_1 + 0x570));
  puVar10 = PTR_DAT_0380a190;
  if ((uVar4 & 1) == 0) {
LAB_02c0372c:
    uVar8 = thunk_FUN_01851c08(puVar10);
    uVar9 = FUN_02c108dc(uVar8,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar11 = thunk_FUN_01851c08(PTR_DAT_0380a198);
    FUN_02b3cc64(uVar8,uVar9,uVar11,0);
    goto OVRManager__get_fixedFoveatedRenderingSupported;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar12 = PTR_DAT_037f9418;
LAB_02c036f8:
    uVar9 = thunk_FUN_01851c08(puVar12);
    FUN_02b3cbec(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380ad58);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar9);
  }
  if (param_3 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    puVar12 = PTR_DAT_038000a0;
    goto LAB_02c036f8;
  }
  lVar5 = *(long *)PTR_DAT_037f87b8;
  if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar5 + 0x130)) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar13 = (long *)0x0;
    }
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar2 = PTR_DAT_037f4790;
  puVar10 = PTR_DAT_03804850;
  if (plVar13 == (long *)0x0) goto LAB_02c0372c;
  plVar6 = (long *)thunk_FUN_0187f3ac(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar2);
  }
  plVar7 = (long *)FUN_02c01850(param_1);
  if (plVar6 == (long *)0x0) goto LAB_02c0368c;
  uVar4 = (**(code **)(*plVar6 + 0x568))(plVar6,*(undefined8 *)(*plVar6 + 0x570));
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
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
      puVar12 = PTR_DAT_0380ad60;
      goto LAB_02c038c0;
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c01850(plVar6);
    uVar4 = (**(code **)(*plVar6 + 0x888))(plVar6,param_1,*(undefined8 *)(*plVar6 + 0x890));
    if ((uVar4 & 1) == 0) {
      uVar8 = thunk_FUN_01851c08(PTR_DAT_037f2f98);
      uVar8 = FUN_017fc3f4(uVar8,2);
      FUN_015d6ff8(plVar6);
      uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,0,uVar9);
      FUN_015d6ff8(param_1);
      uVar9 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      FUN_015d6ff8(uVar8);
      FUN_015d7aec(uVar8,uVar9);
      FUN_015d7b20(uVar8,1,uVar9);
      puVar12 = PTR_DAT_0380a1b8;
LAB_02c038c0:
      uVar9 = thunk_FUN_01851c08(puVar12);
      uVar9 = FUN_02c12818(uVar9,uVar8,0);
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar8 = thunk_FUN_01861bbc();
      System_Threading_Tasks_Task__Finish(uVar8,uVar9,0);
      goto OVRManager__get_fixedFoveatedRenderingSupported;
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(param_2);
    }
    param_2 = (long *)FUN_017f82a0(param_2);
  }
  if (*(int *)(param_3 + 0x10) == 1) {
    uVar3 = FUN_02a4b568(param_3,0,0);
    if (uVar3 < 100) {
      if (uVar3 < 0x47) {
        if (uVar3 == 0x44) {
LAB_02c03634:
          if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02c03658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
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
          FUN_02c00a74(plVar13,param_2);
          return;
        }
      }
      else {
        if (uVar3 == 0x47) {
LAB_02c0365c:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c0088c(plVar13,param_2);
          return;
        }
        if (uVar3 == 0x58) {
LAB_02c03608:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          FUN_02c003e0(param_2);
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


