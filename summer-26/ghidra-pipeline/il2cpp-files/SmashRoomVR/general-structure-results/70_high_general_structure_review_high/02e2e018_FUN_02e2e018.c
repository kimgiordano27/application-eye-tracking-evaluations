/*
FUNCTION_NAME: FUN_02e2e018
ENTRY_POINT: 02e2e018
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_02e2e018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x19 + 0xcc) = param_1;
  puVar3 = StringLiteral_4729;
  uVar4 = DAT_00b92ba0;
  *(undefined8 *)(unaff_x19 + 0xf4) = param_2;
  *(undefined1 *)(unaff_x19 + 0xc9) = 1;
  *unaff_x21 = uVar4;
  uVar4 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(unaff_x19 + 0x114) = 0x41200000;
  *(undefined4 *)(unaff_x19 + 0x170) = 1;
  unaff_x21[0x16] = uVar4;
  *(undefined4 *)(unaff_x19 + 0x1c4) = 5;
  *(undefined4 *)(unaff_x19 + 0x1d0) = 3;
  puVar2 = StringLiteral_4728;
  puVar1 = 
  Field_<PrivateImplementationDetails>_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
  ;
  uVar4 = thunk_FUN_01afaadc(*unaff_x20);
  FUN_02de64b8(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x1e0,uVar4);
  uVar4 = thunk_FUN_01afaadc(*unaff_x25);
  FUN_025bbcf4(uVar4,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x260) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x260,uVar4);
  uVar4 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_0246abf4(uVar4,10,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x2e0) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x2e0,uVar4);
  uVar4 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_0246abf4(uVar4,10,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x2e8) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x2e8,uVar4);
  *(undefined1 *)(unaff_x19 + 0x2f1) = 1;
  uVar4 = FUN_01b47fd0(*(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                       ,1000);
  *(undefined8 *)(unaff_x19 + 0x300) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x300);
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar4 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  unaff_x21[0x41] =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  unaff_x21[0x40] = uVar4;
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
  FUN_025b2d04(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x420) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x420,uVar4);
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_02b59220(uVar4,0x14,*(undefined8 *)StringLiteral_4730);
  *(undefined8 *)(unaff_x19 + 0x428) = uVar4;
  thunk_FUN_01b4f09c(unaff_x19 + 0x428,uVar4);
  FUN_02e1c814();
  return;
}


