/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.<>c__DisplayClass18_2$$<.ctor>b__2
ENTRY_POINT: 06c17c90
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_<>c__DisplayClass18_2__<_ctor>b__2(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  ulong uVar9;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
code_r0x06c17c90:
  thunk_FUN_03cd7500();
LAB_06c17c94:
  uVar4 = FUN_06c16d78(unaff_x27);
  uVar4 = FUN_06f74e30(*unaff_x22,unaff_x26,*unaff_x21,uVar4,0);
  bVar1 = false;
  do {
    lVar7 = *(long *)(unaff_x23 + 0x18);
    uVar9 = unaff_x20;
    if (lVar7 == 0) {
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    while ((!bVar1 || ((long)*(int *)(lVar7 + 0x18) <= (long)uVar9))) {
      if (!bVar1) {
        unaff_x23 = 0;
      }
      in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x28;
      }
      lVar3 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_06c18310;
      if (*(int *)(lVar3 + 0x18) <= in_stack_00000000._4_4_) {
        if (unaff_x23 == 0) {
          uVar9 = FUN_06f74e14(uVar4,0);
          uVar8 = *(undefined8 *)PTR_DAT_08e87d48;
          if ((uVar9 & 1) == 0) {
            uVar8 = uVar4;
          }
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
          FUN_085a48e4(uVar8,0);
          return;
        }
LAB_06c17e88:
        if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_06c18310;
        plVar5 = (long *)FUN_0702dc3c(*(long *)(unaff_x23 + 0x10),*(undefined8 *)(unaff_x23 + 0x20))
        ;
        plVar6 = *(long **)(unaff_x23 + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_06c18310;
        uVar4 = (**(code **)(*plVar6 + 0x408))(plVar6,*(undefined8 *)(*plVar6 + 0x410));
        uVar8 = *(undefined8 *)PTR_DAT_08e81430;
        if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
        }
        uVar8 = FUN_0710fcf0(uVar8,0);
        uVar9 = FUN_0711a11c(uVar4,uVar8,0);
        if ((uVar9 & 1) != 0) {
          if ((plVar5 == (long *)0x0) ||
             (uVar9 = (**(code **)(*plVar5 + 0x138))(plVar5,0,*(undefined8 *)(*plVar5 + 0x140)),
             (uVar9 & 1) != 0)) {
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar4 = *(undefined8 *)PTR_DAT_08e87d78;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            uVar4 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar4,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
          }
          FUN_085a3c50(uVar4,0);
        }
        lVar7 = *unaff_x28;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar7 = *unaff_x28;
        }
        lVar3 = **(long **)(lVar7 + 0xb8);
        if (lVar3 != 0) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
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
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_06c18310;
      }
      unaff_x23 = FUN_05212a24(lVar3,in_stack_00000000._4_4_,*(undefined8 *)PTR_DAT_08e87b78);
      if ((unaff_x23 == 0) || (lVar7 = *(long *)(unaff_x23 + 0x18), lVar7 == 0)) goto LAB_06c18310;
      bVar1 = true;
      uVar9 = 0;
    }
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar7 = *unaff_x28;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x20 = uVar9 + 1;
    unaff_x26 = FUN_05212a24(lVar7,unaff_x20 & 0xffffffff,*unaff_x29);
    lVar7 = *(long *)(unaff_x23 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x27 = *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
    uVar2 = FUN_06c185e4(unaff_x26,unaff_x27,&stack0x00000008);
    lVar7 = in_stack_00000008;
    if ((uVar2 & 1) == 0) break;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((in_stack_00000008 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0
       )) {
      uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,0);
    }
    if (*(uint *)(unaff_x19 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x19[uVar9 + 4] = lVar7;
    thunk_FUN_03d233cc(unaff_x19 + uVar9 + 4,lVar7);
    bVar1 = true;
  } while( true );
  if (*(int *)(*unaff_x28 + 0xe0) == 0) goto code_r0x06c17c90;
  goto LAB_06c17c94;
}


