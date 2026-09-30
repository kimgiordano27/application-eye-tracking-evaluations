/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$Raycast_Internal_Injected
ENTRY_POINT: 03852f70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene2D__Raycast_Internal_Injected
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  uint in_stack_00000010;
  
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)unaff_x21 = unaff_s10;
  *(undefined4 *)((long)unaff_x21 + 4) = unaff_s9;
  *(undefined4 *)(unaff_x21 + 1) = unaff_s8;
  if ((*(long *)(unaff_x23 + 0x1d0) == 0) ||
     (lVar3 = *(long *)(*(long *)(unaff_x23 + 0x1d0) + 0x30), lVar3 == 0)) goto LAB_0385315c;
  if (3 < *(uint *)(unaff_x23 + 0x1d8)) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x30);
  switch(*(uint *)(unaff_x23 + 0x1d8)) {
  case 0:
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    uVar4 = *(undefined4 *)
             (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x20);
    *unaff_x21 = *(undefined8 *)
                  (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) +
                  0x18);
    *(undefined4 *)(unaff_x21 + 1) = uVar4;
    break;
  case 1:
    lVar2 = FUN_0391c27c();
    if (lVar2 == 0) goto LAB_0385315c;
    uVar4 = FUN_03929130(lVar2,0);
    *(undefined4 *)unaff_x21 = uVar4;
    *(undefined4 *)((long)unaff_x21 + 4) = param_2;
    *(undefined4 *)(unaff_x21 + 1) = param_3;
    break;
  case 2:
    lVar3 = FUN_0391c27c();
    if (lVar3 == 0) goto LAB_0385315c;
    uVar4 = FUN_03929130(lVar3,0);
    *(undefined4 *)unaff_x21 = uVar4;
    *(undefined4 *)((long)unaff_x21 + 4) = param_2;
    *(undefined4 *)(unaff_x21 + 1) = param_3;
    goto LAB_03853108;
  case 3:
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(lVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) ||
       (lVar2 = FUN_0391fab4(*(long *)(lVar3 + 0x38),0), lVar2 == 0)) goto LAB_0385315c;
    uVar4 = FUN_03929130(lVar2,0);
    *(undefined4 *)unaff_x21 = uVar4;
    *(undefined4 *)((long)unaff_x21 + 4) = param_2;
    *(undefined4 *)(unaff_x21 + 1) = param_3;
    goto LAB_03853100;
  }
  if (*(char *)(unaff_x23 + 0x1dc) != '\0') {
    if (*(long *)(unaff_x23 + 0x200) == 0) goto LAB_0385315c;
    uVar1 = FUN_025cf828();
    if ((uVar1 & 1) != 0) {
      uVar1 = (ulong)in_stack_00000010;
      goto LAB_0385311c;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (lVar3 != 0) {
LAB_03853100:
    if (*(long *)(lVar3 + 0x20) != 0) {
LAB_03853108:
      lVar3 = FUN_0391c27c();
      if (lVar3 != 0) {
        uVar1 = FUN_039291ac(lVar3,0);
LAB_0385311c:
        FUN_02d0b20c(uVar1);
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
        return;
      }
    }
  }
LAB_0385315c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


