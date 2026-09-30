/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
ENTRY_POINT: 0855fee0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
               (long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined1 auVar7 [12];
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000058;
  long in_stack_00000078;
  
  do {
    FUN_089ae0dc(&stack0x00000010,param_1,0);
    uStack0000000000000008 = uStack0000000000000014;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,0);
    }
    if ((*(uint *)(unaff_x23 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x23[7] = lVar3;
    thunk_FUN_040ec700(unaff_x23 + 7,lVar3);
    if (*(long *)(unaff_x24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_089ae0dc(&stack0x00000010,*(long *)(unaff_x24 + 0x18),0);
    uStack0000000000000010 = in_stack_00000018._4_4_;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000010);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x23[8] = lVar3;
    thunk_FUN_040ec700(unaff_x23 + 8,lVar3);
    FUN_074f7940();
    FUN_074f6548();
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(unaff_x20 + 0x20) <= unaff_w22) {
      do {
        uVar1 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
        unaff_x20 = in_stack_00000078;
        if ((uVar1 & 1) == 0) {
          FUN_05365194(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab0);
          if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_0897e2a8();
          return;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
        unaff_x21 = (long *)FUN_065196dc(unaff_x20,*(undefined8 *)PTR_DAT_0932e928);
      } while (*(int *)(unaff_x20 + 0x20) < 1);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      unaff_w22 = 0;
    }
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0932e910) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0855fdcc;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x21,*(long *)PTR_DAT_0932e910,0);
LAB_0855fdcc:
    auVar7 = (*(code *)*puVar2)(unaff_x21,unaff_w22,puVar2[1]);
    unaff_x24 = auVar7._0_8_;
    unaff_x23 = (long *)FUN_04077674(*unaff_x27,5);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(unaff_x24 + 0x58);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,0);
    }
    if ((int)unaff_x23[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x23[4] = lVar3;
    thunk_FUN_040ec700(unaff_x23 + 4,lVar3);
    in_stack_00000058._4_4_ = auVar7._8_4_;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000058 + 4);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,0);
    }
    if ((*(uint *)(unaff_x23 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x23[5] = lVar3;
    thunk_FUN_040ec700(unaff_x23 + 5,lVar3);
    if (*(long *)(unaff_x24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_089ae0dc(&stack0x00000010,*(long *)(unaff_x24 + 0x18),0);
    uStack000000000000000c = uStack0000000000000010;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000008 + 4);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,0);
    }
    if (*(uint *)(unaff_x23 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x23[6] = lVar3;
    thunk_FUN_040ec700(unaff_x23 + 6,lVar3);
    param_1 = *(long *)(unaff_x24 + 0x18);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


