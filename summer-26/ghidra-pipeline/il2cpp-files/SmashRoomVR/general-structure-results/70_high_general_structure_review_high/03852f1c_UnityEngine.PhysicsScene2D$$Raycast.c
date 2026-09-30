/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$Raycast
ENTRY_POINT: 03852f1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene2D__Raycast
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uVar5 = param_3;
  uVar6 = param_4;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da72c8);
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x20 + 0x614) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  *param_8 = 0;
  param_8[1] = 0;
  *(undefined4 *)param_7 = param_2;
  *(undefined4 *)((long)param_7 + 4) = param_3;
  *(undefined4 *)(param_7 + 1) = param_4;
  if ((*(long *)(param_5 + 0x1d0) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_5 + 0x1d0) + 0x30), lVar3 == 0)) goto LAB_0385315c;
  if (3 < *(uint *)(param_5 + 0x1d8)) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x30);
  switch(*(uint *)(param_5 + 0x1d8)) {
  case 0:
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    uVar5 = *(undefined4 *)
             (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x20);
    *param_7 = *(undefined8 *)
                (*(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 0x18)
    ;
    *(undefined4 *)(param_7 + 1) = uVar5;
    break;
  case 1:
    lVar2 = FUN_0391c27c(param_5,0);
    if (lVar2 == 0) goto LAB_0385315c;
    uVar4 = FUN_03929130(lVar2,0);
    *(undefined4 *)param_7 = uVar4;
    *(undefined4 *)((long)param_7 + 4) = uVar5;
    *(undefined4 *)(param_7 + 1) = uVar6;
    break;
  case 2:
    lVar3 = FUN_0391c27c(param_5,0);
    if (lVar3 == 0) goto LAB_0385315c;
    uVar4 = FUN_03929130(lVar3,0);
    *(undefined4 *)param_7 = uVar4;
    *(undefined4 *)((long)param_7 + 4) = uVar5;
    *(undefined4 *)(param_7 + 1) = uVar6;
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
    *(undefined4 *)param_7 = uVar4;
    *(undefined4 *)((long)param_7 + 4) = uVar5;
    *(undefined4 *)(param_7 + 1) = uVar6;
    goto LAB_03853100;
  }
  if (*(char *)(param_5 + 0x1dc) != '\0') {
    if (*(long *)(param_5 + 0x200) == 0) goto LAB_0385315c;
    uVar1 = FUN_025cf828(*(long *)(param_5 + 0x200),param_6,&stack0x00000010,
                         *(undefined8 *)PTR_DAT_03da72c8);
    if ((uVar1 & 1) != 0) {
      uVar1 = in_stack_00000010 & 0xffffffff;
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
    param_5 = *(long *)(lVar3 + 0x20);
    if (param_5 != 0) {
LAB_03853108:
      lVar3 = FUN_0391c27c(param_5,0);
      if (lVar3 != 0) {
        uVar1 = FUN_039291ac(lVar3,0);
LAB_0385311c:
        FUN_02d0b20c(uVar1);
        param_8[1] = 0;
        *param_8 = 0;
        return;
      }
    }
  }
LAB_0385315c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


