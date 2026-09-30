/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_create_account_t_base__set
ENTRY_POINT: 078cc500
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_create_account_t_base__set
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x21;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  *(long *)(param_1 + 0x10) = unaff_x21;
  thunk_FUN_03afed3c();
  lVar3 = thunk_FUN_03ac74bc(*unaff_x26);
  FUN_078c5720();
  plVar10 = (long *)(unaff_x19 + 0x18);
  *plVar10 = lVar3;
  thunk_FUN_03afed3c(plVar10,lVar3);
  plVar11 = *(long **)(unaff_x21 + 0x38);
  if (plVar11 != (long *)0x0) {
    lVar3 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)OVRResult<OVRAnchor_SaveResult>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_078cc5a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0)
    ;
LAB_078cc5a4:
    lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar3 != 0) {
      FUN_04de90b8(&stack0x00000008,lVar3,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
      puVar2 = System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo;
      puVar1 = System_Collections_Generic_List<TransitionArmModel_ArmModelBlendData>_TypeInfo;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar8 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2),
            plVar11 = in_stack_00000030, (uVar8 & 1) != 0) {
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar7 = *in_stack_00000030;
        lVar12 = *plVar10;
        lVar3 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_078cc65c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000030,lVar3,2);
LAB_078cc65c:
        uVar5 = (*(code *)*puVar4)(plVar11,lVar12,puVar4[1]);
        lVar7 = *plVar11;
        lVar12 = *plVar10;
        lVar3 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_078cc6c0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03ac43c4(plVar11,lVar3,0);
LAB_078cc6c0:
        uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(uVar6,uVar6);
        }
        FUN_078c5658(lVar12,uVar6,uVar5);
      }
      FUN_061c1960(&stack0x00000020,
                   *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    }
  }
  puVar1 = PTR_DAT_08488640;
  lVar3 = *(long *)(unaff_x19 + 0x18);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
  FUN_066b5934();
  if (lVar3 != 0) {
    FUN_078c5044(lVar3,uVar5);
    lVar3 = *(long *)(unaff_x19 + 0x18);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_066b5934();
    if (lVar3 != 0) {
      FUN_078c517c(lVar3,uVar5);
      return *plVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


