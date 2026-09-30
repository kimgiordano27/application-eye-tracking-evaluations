/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_generic_credentials
ENTRY_POINT: 078cc484
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_generic_credentials(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *plVar11;
  long unaff_x21;
  long *plVar12;
  long lVar13;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
                    /* try { // try from 078cc484 to 079cc5df has its CatchHandler @ 078cc484
                       catch() { ... } // from try @ 078cc484 with catch @ 078cc484
                       catch() { ... } // from try @ 078cc948 with catch @ 078cc484
                       catch() { ... } // from try @ 078cc9cc with catch @ 078cc484
                       catch() { ... } // from try @ 078cc9e0 with catch @ 078cc484
                       catch() { ... } // from try @ 078cca24 with catch @ 078cc484
                       catch() { ... } // from try @ 078ccac8 with catch @ 078cc484 */
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x5d8));
  FUN_03a8a718(OVRResult<Guid,_Int32Enum>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_TypeInfo);
  FUN_03a8a718(OVRResult<object,_Int32Enum>_TypeInfo);
  FUN_03a8a718(OVRResult<ulong,_Int32Enum>_TypeInfo);
  FUN_03a8a718(System_Nullable<UcgQosServer>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xa04) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = (long *)0x0;
  lVar3 = thunk_FUN_03ac74bc(*unaff_x19);
  FUN_0679343c(lVar3,0);
  puVar1 = System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_TypeInfo;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_078c5720();
    plVar11 = (long *)(lVar3 + 0x18);
    *plVar11 = lVar4;
    thunk_FUN_03afed3c(plVar11,lVar4);
    plVar12 = *(long **)(unaff_x21 + 0x38);
    if (plVar12 != (long *)0x0) {
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)OVRResult<OVRAnchor_SaveResult>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_078cc5a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar12,*(long *)OVRResult<OVRAnchor_SaveResult>_TypeInfo,0);
LAB_078cc5a4:
      lVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (lVar4 != 0) {
        FUN_04de90b8(&stack0x00000008,lVar4,*(undefined8 *)OVRResult<Guid,_Int32Enum>_TypeInfo);
        puVar2 = System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo;
        puVar1 = System_Collections_Generic_List<TransitionArmModel_ArmModelBlendData>_TypeInfo;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        while (uVar9 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2),
              plVar12 = in_stack_00000030, (uVar9 & 1) != 0) {
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = *in_stack_00000030;
          lVar13 = *plVar11;
          lVar4 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_078cc65c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(in_stack_00000030,lVar4,2);
LAB_078cc65c:
          uVar6 = (*(code *)*puVar5)(plVar12,lVar13,puVar5[1]);
          lVar8 = *plVar12;
          lVar13 = *plVar11;
          lVar4 = *(long *)puVar1;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_078cc6c0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,lVar4,0);
LAB_078cc6c0:
          uVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0(uVar7,uVar7);
          }
          FUN_078c5658(lVar13,uVar7,uVar6);
        }
        FUN_061c1960(&stack0x00000020,
                     *(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
      }
    }
    puVar2 = OVRResult<object,_Int32Enum>_TypeInfo;
    puVar1 = PTR_DAT_08488640;
    lVar4 = *(long *)(lVar3 + 0x18);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
    FUN_066b5934(uVar6,lVar3,*(undefined8 *)puVar2,0);
    puVar2 = OVRResult<ulong,_Int32Enum>_TypeInfo;
    if (lVar4 != 0) {
      FUN_078c5044(lVar4,uVar6);
      lVar4 = *(long *)(lVar3 + 0x18);
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_066b5934(uVar6,lVar3,*(undefined8 *)puVar2,0);
      if (lVar4 != 0) {
        FUN_078c517c(lVar4,uVar6);
        return *plVar11;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


