/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 05166010
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *in_stack_00000030;
  
  do {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05166064;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x22,1);
LAB_05166064:
    uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_051660c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_051660c4:
    uVar3 = (*(code *)*puVar1)();
    uVar5 = FUN_04e8c024(uVar2,uVar3,0);
    if ((uVar5 & 1) != 0) {
      iVar7 = 4;
      goto OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth;
    }
    uVar5 = FUN_04a7a4a0(&stack0x00000020,*unaff_x23);
    unaff_x20 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      iVar7 = 5;
OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth:
      FUN_04a7a49c(&stack0x00000020,*unaff_x21);
      return iVar7 != 4;
    }
  } while( true );
}


