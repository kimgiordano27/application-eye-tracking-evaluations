/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelPaths
ENTRY_POINT: 02c33640
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c33794) */
/* WARNING: Removing unreachable block (ram,0x02c33764) */

void OVRPlugin__GetRenderModelPaths(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar7;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  ulong in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uVar3 = thunk_FUN_01851c08(PTR_DAT_037f4600);
  uVar4 = thunk_FUN_0184d740(uVar3,*(undefined8 *)*param_1);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *param_1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_StringLiteral_14485_0361ba68,0);
  }
  uVar3 = *param_1;
  __cxa_end_catch();
  if ((in_stack_00000000 & 0x100000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0(uVar3);
  }
  if (in_stack_00000008 == 0) {
    thunk_FUN_01851c08(PTR_DAT_0380bf68);
    in_stack_00000008 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bf70);
    FUN_02825fb4(in_stack_00000008,uVar5);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bf78);
  FUN_02826708(in_stack_00000008,uVar3,uVar5);
  do {
    while (unaff_w28 = unaff_w28 + -1, -1 < unaff_w28) {
      lVar2 = FUN_01dbe0dc(unaff_x27,unaff_w28,*unaff_x21);
      thunk_FUN_0181f594();
      *unaff_x22 = lVar2;
      thunk_FUN_0188fd20();
      lVar2 = *unaff_x22;
      thunk_FUN_0181f594();
      if (lVar2 != 0) {
        in_stack_00000030 = unaff_x27;
        thunk_FUN_0188fd20(&stack0x00000030,unaff_x27);
        plVar7 = (long *)*unaff_x22;
        iStack0000000000000038 = unaff_w28;
        thunk_FUN_0181f594();
        if ((plVar7 == (long *)0x0) || (*plVar7 != *unaff_x26)) {
          FUN_02c338ec();
        }
        else {
          plVar7 = (long *)plVar7[6];
          uVar3 = thunk_FUN_01861bbc(*unaff_x25);
          FUN_02c30000();
          in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
          in_stack_00000020 = in_stack_00000030;
          uVar5 = thunk_FUN_018617ec(*unaff_x20,&stack0x00000020);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,uVar5,*(undefined8 *)(*plVar7 + 0x180));
          uVar1 = FUN_02c145a0(0);
          thunk_FUN_0181f594();
          *(undefined4 *)(unaff_x19 + 0x24) = uVar1;
        }
      }
    }
    unaff_x27 = FUN_01dbe130(unaff_x27,*(undefined8 *)PTR_DAT_0380bf58);
    while (unaff_x27 == 0) {
      do {
        in_stack_00000018 = in_stack_00000018 + 1;
        if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)in_stack_00000018) {
          thunk_FUN_0181f594();
          *(undefined4 *)(unaff_x19 + 0x20) = 3;
          thunk_FUN_0181f594();
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
          thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x30),0);
          FUN_02c3ea9c(0);
          if (in_stack_00000008 != 0) {
            thunk_FUN_01851c08(PTR_DAT_03804068);
            uVar3 = thunk_FUN_01861bbc();
            FUN_02b432f4(uVar3,in_stack_00000008,0);
            uVar5 = thunk_FUN_01851c08(PTR_DAT_0380bf80);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar3,uVar5);
          }
          return;
        }
        if (*(uint *)(in_stack_00000010 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        lVar2 = *(long *)(in_stack_00000010 + in_stack_00000018 * 8 + 0x20);
        thunk_FUN_0181f594();
      } while (lVar2 == 0);
      unaff_x27 = FUN_01dbe238(lVar2,*(undefined8 *)PTR_DAT_0380bf60);
    }
    unaff_w28 = FUN_01dbe114(unaff_x27,*(undefined8 *)PTR_DAT_0380bf50);
  } while( true );
}


