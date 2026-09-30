/*
FUNCTION_NAME: UniGLTF.BlendShapeExporter.<>c$$<Export>b__0_7
ENTRY_POINT: 02f8aebc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02f8adbc) */
/* WARNING: Removing unreachable block (ram,0x02f8ac4c) */
/* WARNING: Removing unreachable block (ram,0x02f8adc8) */
/* WARNING: Removing unreachable block (ram,0x02f8add4) */
/* WARNING: Removing unreachable block (ram,0x02f8b0e8) */

void UniGLTF_BlendShapeExporter_<>c__<Export>b__0_7(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long unaff_x26;
  int in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar6;
    __cxa_end_catch();
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar10);
    }
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_02f8b1bc();
    plVar6 = *(long **)(unaff_x26 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(uVar3,(long)&stack0x00000018 + 4,0);
    plVar6 = *(long **)(unaff_x26 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x3c8))
                               (plVar6,*(undefined8 *)(unaff_x21 + 0x48),
                                *(undefined8 *)(*plVar6 + 0x3d0));
    lVar10 = *(long *)PTR_DAT_03d256f0;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)thunk_FUN_01a89e68(lVar10);
      FUN_02f89568();
      FUN_02f8b650();
    }
    else if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
            (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
             lVar10)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar6);
    }
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    uVar4 = FUN_02f864e4();
    if ((uVar4 & 1) == 0) {
      if (((iVar1 < *(int *)(unaff_x20 + 0x20)) || (uVar4 = FUN_02f8b74c(), (uVar4 & 1) != 0)) &&
         ((*(int *)(unaff_x20 + 0x24) < *(int *)(unaff_x20 + 0x1c) ||
          (uVar4 = FUN_02f8b74c(), (uVar4 & 1) != 0)))) {
        in_stack_00000018._4_1_ = '\0';
        FUN_027e0bd8(plVar6,(long)&stack0x00000018 + 4,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar1 = *(int *)(unaff_x20 + 0x24);
        iVar2 = FUN_02f89ff4(plVar6);
        *(int *)(unaff_x20 + 0x24) = iVar2 + iVar1;
        if (in_stack_00000018._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(plVar6,0);
        }
      }
    }
    else {
      in_stack_00000018._4_1_ = '\0';
      FUN_027e0bd8(plVar6,(long)&stack0x00000018 + 4,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = FUN_02f897c4(plVar6);
      if (iVar1 != -1) {
        plVar5 = (long *)plVar6[3];
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar5 + 0x3d8))(plVar5,iVar1,*(undefined8 *)(*plVar5 + 0x3e0));
        *(int *)(unaff_x20 + 0x24) = *(int *)(unaff_x20 + 0x24) + -1;
      }
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar6,0);
      }
    }
  }
  else {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    puVar7 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar4 = thunk_FUN_01a6848c(uVar3,*(undefined8 *)*puVar7);
    if ((uVar4 & 1) == 0) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_03abd138,0);
    }
    plVar6 = (long *)*puVar7;
    *(long **)(&stack0x00000008 + (long)in_stack_00000010 * 8) = plVar6;
    __cxa_end_catch();
    lVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cdaa78);
    if (plVar6 == (long *)0x0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cf3bd0);
      thunk_FUN_01a6ca08(PTR_DAT_03ccb048);
    }
    else {
      if ((*plVar6 == lVar10) || (lVar10 = thunk_FUN_01a6ca08(PTR_DAT_03cf3bd0), *plVar6 == lVar10))
      {
LAB_02f8b054:
                    /* WARNING: Subroutine does not return */
        FUN_01a28d1c(plVar6);
      }
      lVar10 = thunk_FUN_01a6ca08(PTR_DAT_03ccb048);
      if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) == lVar10)
         ) goto LAB_02f8b054;
    }
    if ((unaff_x19 & 1) != 0) {
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25710);
      uVar3 = FUN_0259f040(uVar3,0);
      thunk_FUN_01a6ca08(PTR_DAT_03d25618);
      uVar8 = thunk_FUN_01a89e68();
      FUN_02f8cc90(uVar8,uVar3,plVar6);
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25708);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,uVar3);
    }
  }
  return;
}


