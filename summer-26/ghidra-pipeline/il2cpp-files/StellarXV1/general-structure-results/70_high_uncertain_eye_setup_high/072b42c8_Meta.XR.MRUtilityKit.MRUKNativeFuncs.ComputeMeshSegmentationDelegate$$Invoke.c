/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$Invoke
ENTRY_POINT: 072b42c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__Invoke
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  
  in_stack_00000010 = FUN_06649f2c(param_1,*(undefined8 *)PTR_DAT_092c2bb0);
  uVar3 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    lVar4 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x40), lVar4 == 0)) {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    else {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar6 = *(undefined8 *)(unaff_x25 + 0x28);
      uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
      FUN_0678a1dc(uVar5,uVar6,*(undefined8 *)PTR_DAT_092c2ba8,0);
      FUN_0678cd88(lVar4,uVar5,*(undefined8 *)PTR_DAT_092c2a10);
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(*(long *)(unaff_x25 + 0x28) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar3 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
    }
    else {
      uVar5 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
      puVar2 = PTR_DAT_092c2b80;
      iVar1 = *(int *)(*unaff_x24 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_067119b4(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
  }
  return;
}


