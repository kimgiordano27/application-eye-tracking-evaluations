/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.SimpleRigLogic$$Eval
ENTRY_POINT: 06c17d38
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


void Meta_XR_Movement_FaceTracking_Samples_SimpleRigLogic__Eval(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar11;
  ulong uVar12;
  long unaff_x25;
  undefined8 uVar13;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  puVar4 = (undefined8 *)__cxa_begin_catch();
  uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
  uVar6 = thunk_FUN_03ce0d60(uVar5,*(undefined8 *)*puVar4);
  if ((uVar6 & 1) == 0) {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&PTR_PTR_088de0a8,0);
  }
  plVar11 = (long *)*puVar4;
  __cxa_end_catch();
  if (plVar11 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e87d80);
    uVar5 = FUN_06f683f8(uVar7,uVar5,0);
    bVar1 = false;
    uVar6 = unaff_x25 + 1;
    while (lVar10 = *(long *)(unaff_x23 + 0x18), uVar12 = uVar6, lVar10 != 0) {
      while ((!bVar1 || ((long)*(int *)(lVar10 + 0x18) <= (long)uVar12))) {
        if (!bVar1) {
          unaff_x23 = 0;
        }
        in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
        lVar10 = *unaff_x28;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar10 = *unaff_x28;
        }
        lVar3 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_06c18310;
        if (*(int *)(lVar3 + 0x18) <= in_stack_00000000._4_4_) {
          if (unaff_x23 == 0) {
            uVar6 = FUN_06f74e14(uVar5,0);
            uVar7 = *(undefined8 *)PTR_DAT_08e87d48;
            if ((uVar6 & 1) == 0) {
              uVar7 = uVar5;
            }
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
            FUN_085a48e4(uVar7,0);
            return;
          }
LAB_06c17e88:
          if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_06c18310;
          plVar11 = (long *)FUN_0702dc3c(*(long *)(unaff_x23 + 0x10),
                                         *(undefined8 *)(unaff_x23 + 0x20));
          plVar9 = *(long **)(unaff_x23 + 0x10);
          if (plVar9 == (long *)0x0) goto LAB_06c18310;
          uVar5 = (**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410));
          uVar7 = *(undefined8 *)PTR_DAT_08e81430;
          if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
          }
          uVar7 = FUN_0710fcf0(uVar7,0);
          uVar6 = FUN_0711a11c(uVar5,uVar7,0);
          if ((uVar6 & 1) != 0) {
            if ((plVar11 == (long *)0x0) ||
               (uVar6 = (**(code **)(*plVar11 + 0x138))(plVar11,0,*(undefined8 *)(*plVar11 + 0x140))
               , (uVar6 & 1) != 0)) {
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar5 = *(undefined8 *)PTR_DAT_08e87d78;
            }
            else {
              uVar5 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              uVar5 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar5,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
            }
            FUN_085a3c50(uVar5,0);
          }
          lVar10 = *unaff_x28;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar10 = *unaff_x28;
          }
          lVar3 = **(long **)(lVar10 + 0xb8);
          if (lVar3 != 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
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
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
          if (lVar3 == 0) goto LAB_06c18310;
        }
        unaff_x23 = FUN_05212a24(lVar3,in_stack_00000000._4_4_,*(undefined8 *)PTR_DAT_08e87b78);
        if ((unaff_x23 == 0) || (lVar10 = *(long *)(unaff_x23 + 0x18), lVar10 == 0))
        goto LAB_06c18310;
        bVar1 = true;
        uVar12 = 0;
      }
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *unaff_x28;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar6 = uVar12 + 1;
      uVar7 = FUN_05212a24(lVar10,uVar6 & 0xffffffff,*unaff_x29);
      lVar10 = *(long *)(unaff_x23 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar13 = *(undefined8 *)(lVar10 + uVar12 * 8 + 0x20);
      uVar2 = FUN_06c185e4(uVar7,uVar13,&stack0x00000008);
      lVar10 = in_stack_00000008;
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar5 = FUN_06c16d78(uVar13);
        uVar5 = FUN_06f74e30(*unaff_x22,uVar7,*unaff_x21,uVar5,0);
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
          uVar5 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar5,0);
        }
        if (*(uint *)(unaff_x19 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        unaff_x19[uVar12 + 4] = lVar10;
        thunk_FUN_03d233cc(unaff_x19 + uVar12 + 4,lVar10);
        bVar1 = true;
      }
    }
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


