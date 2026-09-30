/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_create_account_t_credentials_get
ENTRY_POINT: 078cc684
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_credentials_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar7;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000030;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
                    /* try { // try from 078cc6b8 to 079cc6df has its CatchHandler @ 078cc9f8 */
        puVar3 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_078cc6c0;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_03ac43c4(unaff_x21,param_3,0);
LAB_078cc6c0:
      uVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0(uVar4,uVar4);
      }
      FUN_078c5658(unaff_x23,uVar4,unaff_x22);
      uVar2 = FUN_061c1964(&stack0x00000020,*unaff_x24);
      unaff_x21 = in_stack_00000030;
      if ((uVar2 & 1) == 0) {
        FUN_061c1960(&stack0x00000020,
                     *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
        puVar1 = PTR_DAT_08488640;
        lVar5 = *(long *)(unaff_x19 + 0x18);
        uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
        FUN_066b5934();
        if (lVar5 != 0) {
          FUN_078c5044(lVar5,uVar4);
          lVar5 = *(long *)(unaff_x19 + 0x18);
          uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
          FUN_066b5934();
          if (lVar5 != 0) {
            FUN_078c517c(lVar5,uVar4);
            return *unaff_x20;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *in_stack_00000030;
      lVar7 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_078cc65c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000030,*unaff_x25,2);
LAB_078cc65c:
      unaff_x22 = (*(code *)*puVar3)(unaff_x21,lVar7,puVar3[1]);
      param_1 = *unaff_x21;
      unaff_x23 = *unaff_x20;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


