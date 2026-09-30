/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$Cancel
ENTRY_POINT: 013e66ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__Cancel(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  int iVar9;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  uStack0000000000000020 = 0;
  _uStack0000000000000028 = 0;
  uVar8 = FUN_02675830();
  FUN_02675858();
  if (unaff_x22 != (long *)0x0) {
    iVar5 = (**(code **)(*unaff_x22 + 0x188))();
    if (DAT_03775e60 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775e60 = '\x01';
    }
    puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar7 = -0x80000000;
    if ((float)(int)((float)iVar5 * 0.001953125) != INFINITY) {
      iVar7 = (int)((float)iVar5 * 0.001953125);
    }
    iVar5 = (**(code **)(*unaff_x22 + 0x1a8))();
    if (DAT_03775e60 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775e60 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar4 = StringLiteral_164;
    puVar3 = Method_System_Collections_Generic_List<Instruction>_RemoveAt__;
    iVar1 = -0x80000000;
    if ((float)(int)((float)iVar5 * 0.001953125) != INFINITY) {
      iVar1 = (int)((float)iVar5 * 0.001953125);
    }
    if ((iVar7 == 0) || (iVar1 == 0)) {
      if (4 < unaff_w20) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar4,0);
      }
      iVar5 = (**(code **)(*unaff_x22 + 0x188))();
      iVar7 = (**(code **)(*unaff_x22 + 0x1a8))();
      in_stack_00000010 = 0;
      _uStack0000000000000018 = 0;
      FUN_0268834c(0,0,(float)iVar5,(float)iVar7,&stack0x00000010,0);
      if (unaff_x19 != (long *)0x0) {
        FUN_02672588(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,uStack0000000000000018,
                     uStack000000000000001c);
        FUN_02675858(uVar8,0);
        goto LAB_013e69b8;
      }
    }
    else {
      if (4 < unaff_w20) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar3,0);
      }
      if ((unaff_x23 & 1) == 0) {
        if (0 < iVar7) {
          iVar5 = 0;
          do {
            if (0 < iVar1) {
              iVar9 = 0;
              iVar2 = iVar1;
              do {
                FUN_0268834c((float)(iVar5 << 9),(float)iVar9,0x44000000,0x44000000,&stack0x00000030
                             ,0);
                if (unaff_x19 == (long *)0x0) goto LAB_013e6a28;
                FUN_02672588(uStack0000000000000030,uStack0000000000000034,uStack0000000000000038,
                             uStack000000000000003c);
                iVar2 = iVar2 + -1;
                iVar9 = iVar9 + 0x200;
              } while (iVar2 != 0);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar7);
        }
      }
      else if (0 < iVar7) {
        iVar5 = 0;
        do {
          if (0 < iVar1) {
            iVar9 = -0x200;
            iVar2 = iVar1;
            do {
              iVar6 = (**(code **)(*unaff_x22 + 0x1a8))();
              FUN_0268834c((float)(iVar5 << 9),(float)(iVar6 + iVar9),0x44000000,0x44000000,
                           &stack0x00000020,0);
              if (unaff_x19 == (long *)0x0) goto LAB_013e6a28;
              FUN_02672588(uStack0000000000000020 & 0xffffffff,uStack0000000000000020._4_4_,
                           uStack0000000000000028,uStack000000000000002c);
              iVar9 = iVar9 + -0x200;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar7);
      }
      FUN_02675858(uVar8,0);
      if (unaff_x19 != (long *)0x0) {
LAB_013e69b8:
        FUN_026723f8();
        if (((4 < unaff_w20) && (iVar5 = (**(code **)(*unaff_x19 + 0x1a8))(), iVar5 < 0x11)) &&
           (iVar5 = (**(code **)(*unaff_x19 + 0x188))(), iVar5 < 0x11)) {
          FUN_013e6a2c();
        }
        return;
      }
    }
  }
LAB_013e6a28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


