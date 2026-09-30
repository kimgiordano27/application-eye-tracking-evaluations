/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorInvalidCaptureDeviceForRequestedOperation_get
ENTRY_POINT: 0810c6b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorInvalidCaptureDeviceForRequestedOperation_get
               (ulong param_1,long param_2,ulong param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  uint uVar6;
  int unaff_w23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack000000000000005c;
  
  param_3 = param_3 & 0xffffffff;
                    /* try { // try from 0810c6c4 to 0820c6db has its CatchHandler @ 0810d1ec */
  uStack000000000000005c = param_5;
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e82bb8);
    FUN_03c8f898(PTR_DAT_08e82bc0);
    FUN_03c8f898(PTR_DAT_08e82bc8);
                    /* try { // try from 0810c6f8 to 0820c6ff has its CatchHandler @ 0810cf10 */
    FUN_03c8f898(PTR_DAT_08e82bd0);
    FUN_03c8f898(PTR_DAT_08e82bd8);
    *(undefined1 *)(unaff_x24 + 0xbf5) = 1;
  }
                    /* try { // try from 0810c710 to 0820c717 has its CatchHandler @ 0810cf0c */
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((param_4 == 0) || (unaff_w23 == 0)) {
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
  }
  else {
    FUN_085ca8bc(param_4,unaff_w23,&stack0x00000040,0);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_0691e4f4(*(long *)(param_2 + 0x20),in_stack_00000040,in_stack_00000048,param_3,
                 *(undefined8 *)PTR_DAT_08e82bb8);
    puVar3 = PTR_DAT_08e82bc8;
    puVar2 = PTR_DAT_08e82bc0;
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_05213710(&stack0x00000008,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_08e82bd8);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar4 = FUN_049dc4d0(&stack0x00000020,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorInvalidEventType_get:
          FUN_049dc4cc(&stack0x00000020,*(undefined8 *)puVar2);
          return;
        }
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar6 = (uint)param_3;
        if (uVar6 < *(uint *)(in_stack_00000030 + 0x10)) {
          lVar5 = *(long *)(in_stack_00000030 + 0x18);
          if (lVar5 == 0) {
            lVar1 = 0;
          }
          else {
            lVar1 = 0;
            if (*(int *)(lVar5 + 0x18) != 0) {
              lVar1 = lVar5 + 0x20;
            }
          }
          if ((unaff_x19 & 1) != 0) {
            FUN_0859b52c(lVar1 + (int)(uVar6 - 4),&stack0x0000005c,4,0);
          }
          FUN_0859b52c(lVar1 + param_3,param_4,uStack000000000000005c,0);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorInvalidEventType_get;
        }
        param_3 = (ulong)(uVar6 - *(uint *)(in_stack_00000030 + 0x10));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


