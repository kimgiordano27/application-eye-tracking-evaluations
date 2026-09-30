/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$EndInvoke
ENTRY_POINT: 072b41fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate__EndInvoke(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *in_x9;
  undefined4 *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  
  if (*(int *)(*in_x9 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture();
  if ((uVar3 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *(long *)(*(long *)(unaff_x25 + 0x18) + 0x40);
    uVar7 = *(undefined8 *)(unaff_x25 + 0x20);
    lVar8 = *(long *)PTR_DAT_092c2b68;
    lVar5 = *(long *)(lVar8 + 0x38);
    if (lVar5 == 0) {
      FUN_040b1b28(lVar8);
      lVar5 = *(long *)(lVar8 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2bc0);
    FUN_073436a0(uVar4,uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = FUN_072caf78(lVar6,uVar7,uVar4,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar5,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar3 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar5 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x38) == 0)) ||
       (lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x40), lVar5 == 0)) {
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
      uVar4 = *(undefined8 *)(unaff_x25 + 0x28);
      uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
      FUN_0678a1dc(uVar7,uVar4,*(undefined8 *)PTR_DAT_092c2ba8,0);
      FUN_0678cd88(lVar5,uVar7,*(undefined8 *)PTR_DAT_092c2a10);
    }
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(*(long *)(unaff_x25 + 0x28) + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000010 = FUN_06649f2c(lVar5,*(undefined8 *)PTR_DAT_092c2bb0);
    uVar3 = FUN_065f12f0(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b98);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04b17b08(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    uVar7 = FUN_065f1330(&stack0x00000010,*(undefined8 *)PTR_DAT_092c2b90);
  }
  puVar2 = PTR_DAT_092c2b80;
  iVar1 = *(int *)(*unaff_x24 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_067119b4(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
  return;
}


