/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.<>c$$<get_Drivers>b__2_0
ENTRY_POINT: 06c17b80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_<>c__<get_Drivers>b__2_0
               (long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x24;
  undefined8 uVar10;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  do {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_1 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
      if (param_1 == 0) goto LAB_06c18310;
    }
    lVar2 = FUN_05212a24(param_1,unaff_w20,*(undefined8 *)PTR_DAT_08e87b78);
    if ((lVar2 == 0) || (lVar9 = *(long *)(lVar2 + 0x18), lVar9 == 0)) goto LAB_06c18310;
    bVar1 = true;
    uVar7 = 0;
    while ((bVar1 && ((long)uVar7 < (long)*(int *)(lVar9 + 0x18)))) {
      lVar9 = *unaff_x28;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar9 = *unaff_x28;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar3 = FUN_05212a24(lVar9,uVar7 + 1 & 0xffffffff,*unaff_x29);
      lVar9 = *(long *)(lVar2 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar10 = *(undefined8 *)(lVar9 + uVar7 * 8 + 0x20);
      uVar4 = FUN_06c185e4(uVar3,uVar10,&stack0x00000008);
      lVar9 = in_stack_00000008;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar10 = FUN_06c16d78(uVar10);
        unaff_x24 = FUN_06f74e30(*unaff_x22,uVar3,*unaff_x21,uVar10,0);
        bVar1 = false;
      }
      else {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((in_stack_00000008 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
           lVar5 == 0)) {
          uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar3,0);
        }
        if (*(uint *)(unaff_x19 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        unaff_x19[uVar7 + 4] = lVar9;
        thunk_FUN_03d233cc(unaff_x19 + uVar7 + 4,lVar9);
        bVar1 = true;
      }
      lVar9 = *(long *)(lVar2 + 0x18);
      uVar7 = uVar7 + 1;
      if (lVar9 == 0) goto LAB_06c18310;
    }
    if (!bVar1) {
      lVar2 = 0;
    }
    unaff_w20 = unaff_w20 + 1;
    param_2 = *unaff_x28;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_2 = *unaff_x28;
    }
    param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
    if (param_1 == 0) goto LAB_06c18310;
    if (*(int *)(param_1 + 0x18) <= unaff_w20) {
      if (lVar2 == 0) {
        uVar7 = FUN_06f74e14(unaff_x24,0);
        uVar3 = *(undefined8 *)PTR_DAT_08e87d48;
        if ((uVar7 & 1) == 0) {
          uVar3 = unaff_x24;
        }
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a48e4(uVar3,0);
        return;
      }
      break;
    }
  } while (lVar2 == 0);
  if (*(long *)(lVar2 + 0x10) != 0) {
    plVar6 = (long *)FUN_0702dc3c(*(long *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x20));
    plVar8 = *(long **)(lVar2 + 0x10);
    if (plVar8 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar8 + 0x408))(plVar8,*(undefined8 *)(*plVar8 + 0x410));
      uVar10 = *(undefined8 *)PTR_DAT_08e81430;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      uVar10 = FUN_0710fcf0(uVar10,0);
      uVar7 = FUN_0711a11c(uVar3,uVar10,0);
      if ((uVar7 & 1) != 0) {
        if ((plVar6 == (long *)0x0) ||
           (uVar7 = (**(code **)(*plVar6 + 0x138))(plVar6,0,*(undefined8 *)(*plVar6 + 0x140)),
           (uVar7 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar3 = *(undefined8 *)PTR_DAT_08e87d78;
        }
        else {
          uVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          uVar3 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar3,0);
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
        }
        FUN_085a3c50(uVar3,0);
      }
      lVar9 = *unaff_x28;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar9 = *unaff_x28;
      }
      lVar5 = **(long **)(lVar9 + 0xb8);
      if (lVar5 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar5 = **(long **)(*unaff_x28 + 0xb8);
          if (lVar5 == 0) goto LAB_06c18310;
        }
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
      return;
    }
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


