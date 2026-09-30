/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_EraseSpace
ENTRY_POINT: 033f640c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f6514) */
/* WARNING: Removing unreachable block (ram,0x033f64e4) */

void OVRPlugin_OVRP_1_72_0__ovrp_EraseSpace(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *plVar5;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uVar4 = thunk_FUN_01dd295c(StringLiteral_9406);
  FUN_02396944(in_stack_00000008,uVar4);
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  thunk_FUN_01dd295c(StringLiteral_9407);
  FUN_02397098(in_stack_00000008);
  do {
    while (unaff_w28 = unaff_w28 + -1, -1 < unaff_w28) {
      lVar2 = FUN_02679e88(unaff_x27,unaff_w28,*unaff_x21);
      thunk_FUN_01da0934();
      *unaff_x22 = lVar2;
      thunk_FUN_01e10808();
      lVar2 = *unaff_x22;
      thunk_FUN_01da0934();
      if (lVar2 != 0) {
        in_stack_00000030 = unaff_x27;
        thunk_FUN_01e10808(&stack0x00000030,unaff_x27);
        plVar5 = (long *)*unaff_x22;
        iStack0000000000000038 = unaff_w28;
        thunk_FUN_01da0934();
        if ((plVar5 == (long *)0x0) || (*plVar5 != *unaff_x26)) {
          FUN_033f666c();
        }
        else {
          plVar5 = (long *)plVar5[6];
          uVar4 = thunk_FUN_01de27b8(*unaff_x25);
          FUN_033f31e8();
          in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
          in_stack_00000020 = in_stack_00000030;
          uVar3 = thunk_FUN_01de23e8(*unaff_x20,&stack0x00000020);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          (**(code **)(*plVar5 + 0x178))(plVar5,uVar4,uVar3,*(undefined8 *)(*plVar5 + 0x180));
          uVar1 = FUN_033d7044(0);
          thunk_FUN_01da0934();
          *(undefined4 *)(unaff_x19 + 0x24) = uVar1;
        }
      }
    }
    unaff_x27 = FUN_02679edc(unaff_x27,*(undefined8 *)StringLiteral_9403);
    while (unaff_x27 == 0) {
      do {
        in_stack_00000018 = in_stack_00000018 + 1;
        if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)in_stack_00000018) {
          thunk_FUN_01da0934();
          *(undefined4 *)(unaff_x19 + 0x20) = 3;
          thunk_FUN_01da0934();
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
          thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x30),0);
          FUN_034015d0(0);
          if (in_stack_00000008 != 0) {
            thunk_FUN_01dd295c(StringLiteral_5902);
            uVar4 = thunk_FUN_01de27b8();
            FUN_0328d650(uVar4,in_stack_00000008,0);
            uVar3 = thunk_FUN_01dd295c(StringLiteral_9408);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar4,uVar3);
          }
          return;
        }
        if (*(uint *)(in_stack_00000010 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar2 = *(long *)(in_stack_00000010 + in_stack_00000018 * 8 + 0x20);
        thunk_FUN_01da0934();
      } while (lVar2 == 0);
      unaff_x27 = FUN_02679fe4(lVar2,*(undefined8 *)StringLiteral_9404);
    }
    unaff_w28 = FUN_02679ec0(unaff_x27,*(undefined8 *)StringLiteral_9402);
  } while( true );
}


