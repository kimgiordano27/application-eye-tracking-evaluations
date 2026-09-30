/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 051663b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


byte OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  byte bVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000030;
  
code_r0x051663b4:
  puVar1 = (undefined8 *)(param_1 + 0x138);
  while( true ) {
    uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    uVar3 = thunk_FUN_04e8bd3c(uVar2,*unaff_x23,0);
    if ((uVar3 & 1) == 0) break;
    do {
      uVar3 = FUN_04a7a4a0(&stack0x00000020,*unaff_x21);
      unaff_x19 = in_stack_00000030;
      if ((uVar3 & 1) == 0) {
        bVar6 = 0;
        iVar7 = 6;
        goto LAB_051663e8;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar4 = *in_stack_00000030;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_051662e0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x22,8);
LAB_051662e0:
      uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
      uVar3 = thunk_FUN_04e8bd3c(uVar2,*unaff_x23,0);
    } while ((uVar3 & 1) != 0);
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0516634c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x22,8);
LAB_0516634c:
    uVar2 = (*(code *)*puVar1)(unaff_x19,puVar1[1]);
    uVar3 = thunk_FUN_04e8bd3c(uVar2,*unaff_x24,0);
    if ((uVar3 & 1) == 0) break;
    param_1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          param_1 = param_1 + (long)(*piVar5 + 5) * 0x10;
          goto code_r0x051663b4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4(unaff_x19,*unaff_x22,5);
  }
  bVar6 = 1;
  iVar7 = 5;
LAB_051663e8:
  FUN_04a7a49c(&stack0x00000020,*unaff_x20);
  return bVar6 & iVar7 == 5;
}


