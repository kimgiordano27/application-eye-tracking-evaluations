/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.<>c$$.ctor
ENTRY_POINT: 06c17b78
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_<>c___ctor(long param_1,long param_2)

{
  bool bVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar9;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  while (in_NG != in_OV) {
    if (unaff_x23 != 0) goto LAB_06c17e88;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_1 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
      if (param_1 == 0) goto LAB_06c18310;
    }
    unaff_x23 = FUN_05212a24(param_1,unaff_w20,*(undefined8 *)PTR_DAT_08e87b78);
    if ((unaff_x23 == 0) || (lVar8 = *(long *)(unaff_x23 + 0x18), lVar8 == 0)) goto LAB_06c18310;
    bVar1 = true;
    uVar6 = 0;
    while ((bVar1 && ((long)uVar6 < (long)*(int *)(lVar8 + 0x18)))) {
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *unaff_x28;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = FUN_05212a24(lVar8,uVar6 + 1 & 0xffffffff,*unaff_x29);
      lVar8 = *(long *)(unaff_x23 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar9 = *(undefined8 *)(lVar8 + uVar6 * 8 + 0x20);
      uVar3 = FUN_06c185e4(uVar2,uVar9,&stack0x00000008);
      lVar8 = in_stack_00000008;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar9 = FUN_06c16d78(uVar9);
        unaff_x24 = FUN_06f74e30(*unaff_x22,uVar2,*unaff_x21,uVar9,0);
        bVar1 = false;
      }
      else {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((in_stack_00000008 != 0) &&
           (lVar4 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
           lVar4 == 0)) {
          uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar2,0);
        }
        if (*(uint *)(unaff_x19 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        unaff_x19[uVar6 + 4] = lVar8;
        thunk_FUN_03d233cc(unaff_x19 + uVar6 + 4,lVar8);
        bVar1 = true;
      }
      lVar8 = *(long *)(unaff_x23 + 0x18);
      uVar6 = uVar6 + 1;
      if (lVar8 == 0) goto LAB_06c18310;
    }
    if (!bVar1) {
      unaff_x23 = 0;
    }
    unaff_w20 = unaff_w20 + 1;
    param_2 = *unaff_x28;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_2 = *unaff_x28;
    }
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
    if (param_1 == 0) goto LAB_06c18310;
    in_OV = SBORROW4(unaff_w20,*(int *)(param_1 + 0x18));
    in_NG = unaff_w20 - *(int *)(param_1 + 0x18) < 0;
  }
  if (unaff_x23 == 0) {
    uVar6 = FUN_06f74e14(unaff_x24,0);
    uVar2 = *(undefined8 *)PTR_DAT_08e87d48;
    if ((uVar6 & 1) == 0) {
      uVar2 = unaff_x24;
    }
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar2,0);
    return;
  }
LAB_06c17e88:
  if (*(long *)(unaff_x23 + 0x10) != 0) {
    plVar5 = (long *)FUN_0702dc3c(*(long *)(unaff_x23 + 0x10),*(undefined8 *)(unaff_x23 + 0x20));
    plVar7 = *(long **)(unaff_x23 + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar7 + 0x408))(plVar7,*(undefined8 *)(*plVar7 + 0x410));
      uVar9 = *(undefined8 *)PTR_DAT_08e81430;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      uVar9 = FUN_0710fcf0(uVar9,0);
      uVar6 = FUN_0711a11c(uVar2,uVar9,0);
      if ((uVar6 & 1) != 0) {
        if ((plVar5 == (long *)0x0) ||
           (uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,0,*(undefined8 *)(*plVar5 + 0x140)),
           (uVar6 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar2 = *(undefined8 *)PTR_DAT_08e87d78;
        }
        else {
          uVar2 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          uVar2 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar2,0);
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
        }
        FUN_085a3c50(uVar2,0);
      }
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar8 = *unaff_x28;
      }
      lVar4 = **(long **)(lVar8 + 0xb8);
      if (lVar4 == 0) {
        return;
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar4 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar4 == 0) goto LAB_06c18310;
      }
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x23 + 0x28));
      return;
    }
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


