/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces2
ENTRY_POINT: 01d91fe4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__QuerySpaces2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x01d91fe4:
  if (unaff_w29 == 0) goto LAB_01d91fb8;
LAB_01d91fe8:
  if (unaff_x26 == 0) {
LAB_01d92128:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(char *)(unaff_x26 + 0x15) == '\0') goto LAB_01d92078;
  do {
    if (((*(char *)(unaff_x26 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
       (*(int *)(in_stack_00000008 + 0x18) == unaff_w29)) {
      if (unaff_x22 == 0) goto LAB_01d92128;
      lVar7 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_01d92128;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = unaff_x25;
        thunk_FUN_0106e12c(plVar5,unaff_x25);
      }
      else {
        FUN_017d3030();
      }
    }
LAB_01d92078:
    if (in_stack_00000008 == 0) {
      lVar7 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
      *(long *)(lVar7 + 0x10) = unaff_x26;
      thunk_FUN_0106e12c((long *)(lVar7 + 0x10),unaff_x26);
      *(int *)(lVar7 + 0x18) = unaff_w29;
      FUN_01468fe8();
    }
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      unaff_w27 = unaff_w27 + 1;
      if ((int)uVar1 <= (int)unaff_w27) {
        do {
          puVar2 = PTR_DAT_02354070;
          if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          in_stack_00000000 = FUN_01d92590(in_stack_00000000);
          if (in_stack_00000000 == 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar4 = FUN_01d603ec();
            if ((uVar4 & 1) == 0) {
              if (unaff_x19 == (long *)0x0) goto LAB_01d92128;
              uVar4 = FUN_01d6237c();
              if ((uVar4 & 1) == 0) {
                if (unaff_x22 != 0) {
                  uVar3 = FUN_01d6df4c();
                  uVar3 = thunk_FUN_0103ffe0(uVar3,*(undefined8 *)PTR_DAT_0234bd08);
                  goto LAB_01d923f8;
                }
                goto LAB_01d92128;
              }
            }
            if (unaff_x22 != 0) {
              uVar3 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,*(undefined4 *)(unaff_x22 + 0x18)
                                  );
LAB_01d923f8:
              FUN_017d35e0();
              return uVar3;
            }
            goto LAB_01d92128;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          unaff_w29 = unaff_w29 + 1;
          unaff_x20 = FUN_01d91a18(in_stack_00000000);
          if (unaff_x20 == 0) goto LAB_01d92128;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
        } while ((int)uVar1 < 1);
        unaff_w27 = 0;
      }
      if (uVar1 <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      unaff_x25 = *(long *)(unaff_x20 + (long)(int)unaff_w27 * 8 + 0x20);
      if (unaff_x25 == 0) {
        thunk_FUN_010303a8(PTR_DAT_02359920);
        uVar3 = thunk_FUN_010400dc();
        uVar6 = thunk_FUN_010303a8(PTR_DAT_02359928);
        FUN_01cc6734(uVar3,uVar6,0);
        uVar6 = thunk_FUN_010303a8(PTR_DAT_02359930);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar3,uVar6);
      }
      uVar3 = FUN_0105d828(unaff_x25);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x21);
      }
      uVar4 = FUN_01d611c4();
      if ((uVar4 & 1) == 0) break;
      if (unaff_x19 == (long *)0x0) goto LAB_01d92128;
      uVar4 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar4 & 1) == 0);
    if (unaff_x23 == 0) goto LAB_01d92128;
    uVar4 = FUN_0146ab1c();
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      unaff_x26 = FUN_01d92954(uVar3);
      goto code_r0x01d91fe4;
    }
    if (in_stack_00000008 == 0) goto LAB_01d92128;
    unaff_x26 = *(long *)(in_stack_00000008 + 0x10);
    if (unaff_w29 != 0) goto LAB_01d91fe8;
LAB_01d91fb8:
    if (unaff_x26 == 0) goto LAB_01d92128;
  } while( true );
}


