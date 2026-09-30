/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.<>c__DisplayClass18_0$$<.ctor>b__0
ENTRY_POINT: 06c17c20
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_<>c__DisplayClass18_0__<_ctor>b__0
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 uVar8;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar8 = *(undefined8 *)(param_1 + unaff_x25 * 8 + 0x20);
    uVar2 = FUN_06c185e4(param_2,uVar8,&stack0x00000008);
    lVar6 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar8 = FUN_06c16d78(uVar8);
      unaff_x24 = FUN_06f74e30(*unaff_x22,param_2,*unaff_x21,uVar8,0);
      bVar1 = false;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((in_stack_00000008 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)),
         lVar3 == 0)) {
        uVar8 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar8,0);
      }
      if (*(uint *)(unaff_x19 + 3) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_x19[unaff_x25 + 4] = lVar6;
      thunk_FUN_03d233cc(unaff_x19 + unaff_x25 + 4,lVar6);
      bVar1 = true;
    }
    lVar6 = *(long *)(unaff_x23 + 0x18);
    unaff_x25 = unaff_x20;
    if (lVar6 == 0) {
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    while ((!bVar1 || ((long)*(int *)(lVar6 + 0x18) <= (long)unaff_x25))) {
      if (!bVar1) {
        unaff_x23 = 0;
      }
      in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
      lVar6 = *unaff_x28;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar6 = *unaff_x28;
      }
      lVar3 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_06c18310;
      if (*(int *)(lVar3 + 0x18) <= in_stack_00000000._4_4_) {
        if (unaff_x23 == 0) {
          uVar2 = FUN_06f74e14(unaff_x24,0);
          uVar8 = *(undefined8 *)PTR_DAT_08e87d48;
          if ((uVar2 & 1) == 0) {
            uVar8 = unaff_x24;
          }
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
          FUN_085a48e4(uVar8,0);
          return;
        }
LAB_06c17e88:
        if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_06c18310;
        plVar4 = (long *)FUN_0702dc3c(*(long *)(unaff_x23 + 0x10),*(undefined8 *)(unaff_x23 + 0x20))
        ;
        plVar5 = *(long **)(unaff_x23 + 0x10);
        if (plVar5 == (long *)0x0) goto LAB_06c18310;
        uVar8 = (**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410));
        uVar7 = *(undefined8 *)PTR_DAT_08e81430;
        if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
        }
        uVar7 = FUN_0710fcf0(uVar7,0);
        uVar2 = FUN_0711a11c(uVar8,uVar7,0);
        if ((uVar2 & 1) != 0) {
          if ((plVar4 == (long *)0x0) ||
             (uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,0,*(undefined8 *)(*plVar4 + 0x140)),
             (uVar2 & 1) != 0)) {
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar8 = *(undefined8 *)PTR_DAT_08e87d78;
          }
          else {
            uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            uVar8 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
          }
          FUN_085a3c50(uVar8,0);
        }
        lVar6 = *unaff_x28;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x28;
        }
        lVar3 = **(long **)(lVar6 + 0xb8);
        if (lVar3 != 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar3 = **(long **)(*unaff_x28 + 0xb8);
            if (lVar3 == 0) goto LAB_06c18310;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(unaff_x23 + 0x28));
        }
        return;
      }
      if (unaff_x23 != 0) goto LAB_06c17e88;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_06c18310;
      }
      unaff_x23 = FUN_05212a24(lVar3,in_stack_00000000._4_4_,*(undefined8 *)PTR_DAT_08e87b78);
      if ((unaff_x23 == 0) || (lVar6 = *(long *)(unaff_x23 + 0x18), lVar6 == 0)) goto LAB_06c18310;
      bVar1 = true;
      unaff_x25 = 0;
    }
    lVar6 = *unaff_x28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar6 = *unaff_x28;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x20 = unaff_x25 + 1;
    param_2 = FUN_05212a24(lVar6,unaff_x20 & 0xffffffff,*unaff_x29);
    param_1 = *(long *)(unaff_x23 + 0x18);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x25;
  } while( true );
}


