/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_create_account_t_base__get
ENTRY_POINT: 078cc584
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_base__get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  do {
    if ((bool)in_ZR) {
      puVar4 = (undefined8 *)FUN_03ac43c4();
LAB_078cc5a4:
      lVar5 = (*(code *)*puVar4)();
      if (lVar5 != 0) {
        FUN_04de90b8(&stack0x00000008,lVar5,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
        puVar2 = System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo;
        puVar1 = System_Collections_Generic_List<TransitionArmModel_ArmModelBlendData>_TypeInfo;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
                    /* try { // try from 078cc5e0 to 079cc607 has its CatchHandler @ 078cca00 */
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        while (uVar6 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2),
              plVar3 = in_stack_00000030, (uVar6 & 1) != 0) {
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar9 = *in_stack_00000030;
          lVar11 = *unaff_x20;
          lVar5 = *(long *)puVar1;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_078cc65c;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000030,lVar5,2);
LAB_078cc65c:
          uVar7 = (*(code *)*puVar4)(plVar3,lVar11,puVar4[1]);
          lVar9 = *plVar3;
          lVar11 = *unaff_x20;
          lVar5 = *(long *)puVar1;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_078cc6c0;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,lVar5,0);
LAB_078cc6c0:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0(uVar8,uVar8);
          }
          FUN_078c5658(lVar11,uVar8,uVar7);
        }
        FUN_061c1960(&stack0x00000020,
                     *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
      }
      puVar1 = PTR_DAT_08488640;
      lVar5 = *(long *)(unaff_x19 + 0x18);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
      FUN_066b5934();
      if (lVar5 != 0) {
        FUN_078c5044(lVar5,uVar7);
        lVar5 = *(long *)(unaff_x19 + 0x18);
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_066b5934();
        if (lVar5 != 0) {
          FUN_078c517c(lVar5,uVar7);
          return *unaff_x20;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_078cc5a4;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


