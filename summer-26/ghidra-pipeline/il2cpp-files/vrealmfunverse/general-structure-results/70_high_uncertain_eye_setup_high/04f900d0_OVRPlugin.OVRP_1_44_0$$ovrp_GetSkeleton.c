/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetSkeleton
ENTRY_POINT: 04f900d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetSkeleton
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar5;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
code_r0x04f900d0:
  FUN_05d1d6c0(uStack0000000000000014,uStack0000000000000018,param_3,param_4,param_5,0);
  if (unaff_x21 == 0) {
LAB_04f90168:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = FUN_05c8cbec(unaff_x21,0);
  if ((uVar2 & 1) == 0) {
    FUN_05c8cb28(unaff_x21,1,0);
    if (in_stack_00000028 == 0) goto LAB_04f90168;
    FUN_05d1d8fc(in_stack_00000028,0);
  }
LAB_04f90148:
  do {
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x1a) {
      return;
    }
    uVar2 = FUN_04f8f978();
  } while ((uVar2 & 1) == 0);
  if (in_stack_00000028 == 0) goto LAB_04f90168;
  unaff_x21 = FUN_05c89410(in_stack_00000028,0);
  if (*(char *)(unaff_x19 + 0x80) != '\0') {
    plVar5 = *(long **)(unaff_x19 + 0x38);
    if (plVar5 == (long *)0x0) goto LAB_04f90168;
    lVar3 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_04f90094;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*unaff_x23,9);
LAB_04f90094:
    uVar2 = (*(code *)*puVar1)(plVar5,unaff_w20,&stack0x00000008,puVar1[1]);
    if ((uVar2 & 1) != 0) goto code_r0x04f900ac;
  }
  if (unaff_x21 == 0) goto LAB_04f90168;
  uVar2 = FUN_05c8cbec(unaff_x21,0);
  if ((uVar2 & 1) != 0) {
    if (in_stack_00000028 == 0) goto LAB_04f90168;
    FUN_05d1d794(in_stack_00000028,0);
    FUN_05c8cb28(unaff_x21,0,0);
  }
  goto LAB_04f90148;
code_r0x04f900ac:
  if ((in_stack_00000028 == 0) ||
     (FUN_05d1d5ec(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                   in_stack_00000028,0), param_5 = in_stack_00000028,
     param_3 = uStack000000000000001c, param_4 = in_stack_00000020, in_stack_00000028 == 0))
  goto LAB_04f90168;
  goto code_r0x04f900d0;
}


