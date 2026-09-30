/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_certificate_callback_t$$Invoke
ENTRY_POINT: 0326731c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


bool Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t__Invoke
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x19;
  undefined4 unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    );
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(StringLiteral_2992);
  thunk_FUN_01ad9084(PTR_DAT_03d84c68);
  thunk_FUN_01ad9084(PTR_DAT_03d84c80);
  *(undefined1 *)(unaff_x24 + 0x951) = 1;
  puVar2 = PTR_DAT_03d84968;
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0324cebc(0);
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar13);
    lVar13 = *(long *)puVar2;
  }
  uVar9 = FUN_0305fb14(uVar8,**(undefined8 **)(lVar13 + 0xb8),0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar9 & 1) == 0) {
    return false;
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24();
  if ((uVar9 & 1) != 0) {
    puVar14 = (undefined8 *)PTR_DAT_03d84c80;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar14 = (undefined8 *)PTR_DAT_03d84c80;
    }
LAB_03267434:
    FUN_038f2e04(*puVar14,0);
    return false;
  }
  iVar4 = FUN_03266350();
  puVar3 = PTR_DAT_03d84c78;
  if (iVar4 != 0) {
    puVar14 = (undefined8 *)PTR_DAT_03d84c68;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar14 = (undefined8 *)PTR_DAT_03d84c68;
    }
    goto LAB_03267434;
  }
  in_stack_00000008 = 0;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_03d84c78 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = (long *)**(long **)(*(long *)puVar3 + 0xb8);
    if ((plVar10 == (long *)0x0) ||
       (iVar4 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
       unaff_x23 == (long *)0x0)) goto LAB_03267768;
    iVar7 = (**(code **)(*unaff_x23 + 0x178))();
    if (iVar4 != iVar7) goto LAB_03267520;
    plVar10 = (long *)**(long **)(*(long *)puVar3 + 0xb8);
    if (plVar10 == (long *)0x0) goto LAB_03267768;
    iVar4 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    iVar7 = (**(code **)(*unaff_x23 + 0x198))();
    if (iVar4 != iVar7) goto LAB_03267520;
  }
  else {
    if (unaff_x23 == (long *)0x0) goto LAB_03267768;
LAB_03267520:
    uVar5 = (**(code **)(*unaff_x23 + 0x178))();
    uVar6 = (**(code **)(*unaff_x23 + 0x198))();
    uVar8 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2992);
    FUN_03907774(uVar8,uVar5,uVar6,5,0,0);
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar8;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
  }
  uVar8 = FUN_0390acec(0);
  FUN_0390ad14();
  lVar13 = **(long **)(*(long *)puVar3 + 0xb8);
  iVar4 = (**(code **)(*unaff_x23 + 0x178))();
  iVar7 = (**(code **)(*unaff_x23 + 0x198))();
  if (lVar13 != 0) {
    FUN_03907fd4(0,0,(float)iVar4,(float)iVar7,lVar13,0,0,0);
    FUN_0390ad14(uVar8,0);
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      uVar8 = FUN_03907070(**(long **)(*(long *)puVar3 + 0xb8),0,0);
      in_stack_00000008 = FUN_02f7c218(uVar8,3,0);
      uVar8 = FUN_02f7c128(&stack0x00000008,0);
      if (unaff_x19 == 0) {
        iVar4 = 0;
        uVar11 = 0;
      }
      else {
        FUN_02f7c218();
        uVar11 = FUN_02f7c128();
        iVar4 = unaff_w22 << 2;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0324cebc(0);
      puVar1 = PTR_DAT_03d84ad0;
      lVar13 = *(long *)PTR_DAT_03d84ad0;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar13);
        lVar13 = *(long *)puVar1;
      }
      uVar9 = FUN_0305fb14(uVar12,**(undefined8 **)(lVar13 + 0xb8),0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar4 = FUN_03267054(uVar8,uVar11,iVar4,unaff_w21);
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar4 = FUN_03266f90(uVar8,uVar11,iVar4,unaff_w21);
      }
      System_RuntimeType__get_UnderlyingSystemType(&stack0x00000008,0);
      if (unaff_x19 != 0) {
        System_RuntimeType__get_UnderlyingSystemType();
      }
      return iVar4 == 0;
    }
  }
LAB_03267768:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


