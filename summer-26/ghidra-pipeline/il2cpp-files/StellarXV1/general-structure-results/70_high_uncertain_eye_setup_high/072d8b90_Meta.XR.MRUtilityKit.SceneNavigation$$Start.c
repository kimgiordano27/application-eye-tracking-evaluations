/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$Start
ENTRY_POINT: 072d8b90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__Start(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *plVar7;
  byte unaff_w21;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xd68));
  FUN_04077588(PTR_DAT_09299770);
  FUN_04077588(PTR_DAT_092c3d70);
  FUN_04077588(PTR_DAT_09299778);
  FUN_04077588(PTR_DAT_09299780);
  FUN_04077588(PTR_DAT_092c3d78);
  FUN_04077588(PTR_DAT_092c3d80);
  FUN_04077588(PTR_DAT_092c3d88);
  FUN_04077588(PTR_DAT_092c3d90);
  FUN_04077588(PTR_DAT_092c3d98);
  FUN_04077588(PTR_DAT_092c3da0);
  *(undefined1 *)(unaff_x22 + 0xad0) = 1;
  plVar6 = (long *)(unaff_x19 + 200);
  lVar9 = *plVar6;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089cc398(lVar9,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_07343a90(0);
    *(undefined8 *)(unaff_x19 + 200) = uVar3;
    thunk_FUN_040ec700(plVar6,uVar3);
    *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  }
  puVar1 = PTR_DAT_092c26c0;
  if (((*plVar6 == 0) || (lVar9 = *(long *)(*plVar6 + 0x38), lVar9 == 0)) ||
     (*(byte *)(unaff_x19 + 0xd0) == (unaff_w21 & 1))) {
    return;
  }
  plVar6 = (long *)(lVar9 + 0x10);
  lVar10 = *plVar6;
  *(byte *)(unaff_x19 + 0xd0) = unaff_w21 & 1;
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_06e5992c();
  if ((unaff_w21 & 1) == 0) {
    lVar10 = FUN_076c071c(lVar10,uVar3,0);
    if (lVar10 == 0) {
      lVar4 = 0;
      *plVar6 = 0;
    }
    else {
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_040b4e00(lVar10,uVar3);
      if (lVar4 == 0) goto LAB_072d8d50;
      uVar3 = *(undefined8 *)puVar1;
      *plVar6 = lVar4;
      lVar4 = thunk_FUN_040b4e00(lVar10,uVar3);
      if (lVar4 == 0) goto LAB_072d8d50;
    }
    thunk_FUN_040ec700(plVar6,lVar4);
    lVar10 = *(long *)(lVar9 + 0x28);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299770);
    FUN_0678a5f4();
    if (lVar10 != 0) {
      FUN_0678dc80(lVar10,uVar3,*(undefined8 *)PTR_DAT_09299780);
      lVar10 = *(long *)(lVar9 + 0x30);
      uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d70);
      FUN_0678b414();
      if (lVar10 != 0) {
        FUN_06792918(lVar10,uVar3,*(undefined8 *)PTR_DAT_092c3d80);
        plVar6 = (long *)PTR_DAT_092c3d68;
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d68);
        FUN_07340fb4();
        plVar5 = (long *)FUN_076c071c(uVar8,uVar3,0);
        goto LAB_072d8f30;
      }
    }
  }
  else {
    lVar10 = FUN_076c0530();
    if (lVar10 == 0) {
      lVar4 = 0;
      *plVar6 = 0;
    }
    else {
      uVar3 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_040b4e00(lVar10,uVar3);
      if (lVar4 == 0) {
LAB_072d8d50:
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(lVar10,uVar3);
      }
      uVar3 = *(undefined8 *)puVar1;
      *plVar6 = lVar4;
      lVar4 = thunk_FUN_040b4e00(lVar10,uVar3);
      if (lVar4 == 0) goto LAB_072d8d50;
    }
    thunk_FUN_040ec700(plVar6,lVar4);
    lVar10 = *(long *)(lVar9 + 0x28);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299770);
    FUN_0678a5f4();
    if (lVar10 != 0) {
      FUN_0678dc44(lVar10,uVar3,*(undefined8 *)PTR_DAT_09299778);
      lVar10 = *(long *)(lVar9 + 0x30);
      uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d70);
      FUN_0678b414();
      if (lVar10 != 0) {
        FUN_067928dc(lVar10,uVar3,*(undefined8 *)PTR_DAT_092c3d78);
        plVar6 = (long *)PTR_DAT_092c3d68;
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d68);
        FUN_07340fb4();
        plVar5 = (long *)FUN_076c0530(uVar8,uVar3,0);
LAB_072d8f30:
        plVar7 = (long *)(lVar9 + 0x18);
        if (plVar5 == (long *)0x0) {
          *plVar7 = 0;
        }
        else {
          lVar9 = *plVar6;
          if ((*plVar5 != lVar9) || (*plVar7 = (long)plVar5, *plVar5 != lVar9)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar5);
          }
        }
        thunk_FUN_040ec700(plVar7,plVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


