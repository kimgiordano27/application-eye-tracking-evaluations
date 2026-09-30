/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$Dispose
ENTRY_POINT: 013e67b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__Dispose(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  ulong unaff_x23;
  int unaff_w25;
  int iVar4;
  undefined8 unaff_x26;
  int iVar5;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  puVar1 = Method_System_Collections_Generic_List<Instruction>_RemoveAt__;
  if (4 < unaff_w20) {
    if (*(int *)(*param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar1,0);
  }
  if ((unaff_x23 & 1) == 0) {
    if (0 < unaff_w25) {
      iVar3 = 0;
      do {
        if (0 < unaff_w21) {
          iVar5 = 0;
          iVar4 = unaff_w21;
          do {
            FUN_0268834c((float)(iVar3 << 9),(float)iVar5,0x44000000,0x44000000,&stack0x00000030,0);
            if (unaff_x19 == (long *)0x0) goto LAB_013e6a28;
            FUN_02672588(uStack0000000000000030,uStack0000000000000034,uStack0000000000000038,
                         uStack000000000000003c);
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 + 0x200;
          } while (iVar4 != 0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != unaff_w25);
    }
  }
  else if (0 < unaff_w25) {
    iVar3 = 0;
    do {
      if (0 < unaff_w21) {
        iVar5 = -0x200;
        iVar4 = unaff_w21;
        do {
          iVar2 = (**(code **)(*unaff_x22 + 0x1a8))();
          FUN_0268834c((float)(iVar3 << 9),(float)(iVar2 + iVar5),0x44000000,0x44000000,
                       &stack0x00000020,0);
          if (unaff_x19 == (long *)0x0) goto LAB_013e6a28;
          FUN_02672588(uStack0000000000000020,uStack0000000000000024,uStack0000000000000028,
                       uStack000000000000002c);
          iVar5 = iVar5 + -0x200;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != unaff_w25);
  }
  FUN_02675858(unaff_x26,0);
  if (unaff_x19 != (long *)0x0) {
    FUN_026723f8();
    if (((4 < unaff_w20) && (iVar3 = (**(code **)(*unaff_x19 + 0x1a8))(), iVar3 < 0x11)) &&
       (iVar3 = (**(code **)(*unaff_x19 + 0x188))(), iVar3 < 0x11)) {
      FUN_013e6a2c();
    }
    return;
  }
LAB_013e6a28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


