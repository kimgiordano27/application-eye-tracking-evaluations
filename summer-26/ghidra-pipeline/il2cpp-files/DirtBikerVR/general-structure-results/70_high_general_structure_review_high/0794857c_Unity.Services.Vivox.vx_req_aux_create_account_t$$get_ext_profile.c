/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_aux_create_account_t$$get_ext_profile
ENTRY_POINT: 0794857c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_vx_req_aux_create_account_t__get_ext_profile(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_03ae8be4();
  puVar9 = *(undefined8 **)(*unaff_x25 + 0xb8);
  if (puVar9[5] == 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar9 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar11 = *puVar9;
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Mathematics_AffineTransform_TypeInfo);
    FUN_0495d15c(uVar5,uVar11,*(undefined8 *)Unity_Services_Analytics_AnalyticsContainer_TypeInfo,0)
    ;
    puVar9 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
    *puVar9 = uVar5;
    thunk_FUN_03afed3c(puVar9,uVar5);
  }
  uVar5 = FUN_044cfef4();
  FUN_044e168c(uVar5,*(undefined8 *)
                      NWH_VehiclePhysics2_Modules_Aerodynamics_AerodynamicsModule_TypeInfo);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_ActionHook_TypeInfo);
  FUN_04e1537c(uVar5,*(undefined8 *)Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon_TypeInfo
              );
  *(undefined8 *)(unaff_x19 + 0xc) = uVar5;
  thunk_FUN_03afed3c(unaff_x19 + 0xc,uVar5);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = FUN_07946280();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000030 =
       FUN_058b71ec(lVar6,*(undefined8 *)Mono_Security_Interface_AlertDescription_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000030,*(undefined8 *)Mono_Security_Interface_Alert_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000030;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fd4f68(unaff_x19 + 2,&stack0x00000030);
  }
  else {
    plVar8 = (long *)FUN_0587c704(&stack0x00000030,*(undefined8 *)RootMotion_FinalIK_AimIK_TypeInfo)
    ;
    iVar3 = FUN_044c1b5c(*(undefined8 *)(unaff_x19 + 8),
                         *(undefined8 *)
                          UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_TypeInfo
                        );
    puVar1 = System_AggregateException_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_AggregateException_TypeInfo) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07948760;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)System_AggregateException_TypeInfo,2);
LAB_07948760:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar2 = System_Data_AggregateType_TypeInfo;
    uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)System_Data_AggregateType_TypeInfo);
    iVar4 = FUN_044c142c(uVar5,*(undefined8 *)System_ComponentModel_AddingNewEventHandler_TypeInfo);
    if (iVar3 == iVar4) {
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_07948838;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar1,2);
LAB_07948838:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)puVar2);
      uVar5 = FUN_07946dc0(uVar5,*(undefined8 *)(unaff_x19 + 8));
      *(undefined8 *)(unaff_x19 + 0xc) = uVar5;
      thunk_FUN_03afed3c();
    }
    lVar6 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_079488c0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar1,1);
LAB_079488c0:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar6 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_0794891c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar1,2);
LAB_0794891c:
    _in_stack_00000020 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    FUN_051123d4(&stack0x00000020,*(undefined8 *)System_Data_AggregateNode_TypeInfo);
    puVar1 = Unity_Services_Wire_Internal_AlreadyUnsubscribedException_TypeInfo;
    *unaff_x19 = 0xfffffffe;
    puVar9 = (undefined8 *)(unaff_x19 + 0xc);
    uVar5 = *puVar9;
    *puVar9 = 0;
    thunk_FUN_03afed3c(puVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  }
  return;
}


