/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_create_account_t_credentials_set
ENTRY_POINT: 078cc600
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_credentials_set
               (void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000030;
  
  do {
    plVar2 = in_stack_00000030;
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *in_stack_00000030;
    lVar9 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
                    /* try { // try from 078cc64c to 079cc673 has its CatchHandler @ 078cc9fc */
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_078cc65c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000030,*unaff_x25,2);
LAB_078cc65c:
    uVar4 = (*(code *)*puVar3)(plVar2,lVar9,puVar3[1]);
    lVar6 = *plVar2;
    lVar9 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078cc6c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*unaff_x25,0);
LAB_078cc6c0:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(uVar5,uVar5);
    }
    FUN_078c5658(lVar9,uVar5,uVar4);
    uVar7 = FUN_061c1964(&stack0x00000020,*unaff_x24);
    if ((uVar7 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,
                   *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
      puVar1 = PTR_DAT_08488640;
      lVar6 = *(long *)(unaff_x19 + 0x18);
      uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
      FUN_066b5934();
      if (lVar6 != 0) {
        FUN_078c5044(lVar6,uVar4);
        lVar6 = *(long *)(unaff_x19 + 0x18);
        uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_066b5934();
        if (lVar6 != 0) {
          FUN_078c517c(lVar6,uVar4);
          return *unaff_x20;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while( true );
}


