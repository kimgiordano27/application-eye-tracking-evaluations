/*
FUNCTION_NAME: FUN_01c739d8
ENTRY_POINT: 01c739d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


void FUN_01c739d8(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 01c739e8 to 01d73a03 has its CatchHandler @ 01c73a4c */
  if ((DAT_03fed747 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_40);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 01c73a0c to 01d73a13 has its CatchHandler @ 01c73a48 */
    DAT_03fed747 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 01c73a14 to 01d73a53 has its CatchHandler @ 01c73964 */
  if (*(char *)((long)param_1 + 0xc1) == '\0') {
    return;
  }
  plVar3 = param_1 + 7;
  lVar4 = *plVar3;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c73a0c with catch @ 01c73a48
                        */
  uVar2 = FUN_03922f24(lVar4,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c739e8 with catch @ 01c73a4c
                        */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 01c73a54 to 01d73a5b has its CatchHandler @ 01c73a64 */
    if (*plVar3 == 0) goto LAB_01c73ca0;
                    /* try { // try from 01c73a5c to 01d73a67 has its CatchHandler @ 01c73964 */
    uVar2 = FUN_0391b7d0(*plVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_01c73a64;
  }
  else {
LAB_01c73a64:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c73a54 with catch @ 01c73a64
                        */
    lVar4 = FUN_01e8ac5c(param_1,*(undefined8 *)StringLiteral_40);
    param_1[7] = lVar4;
    thunk_FUN_01b4f09c(plVar3,lVar4);
  }
  lVar4 = param_1[0xd];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = param_1[0xc];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar4 = *plVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (param_1[0xc] == 0) goto LAB_01c73ca0;
    uVar5 = *(undefined8 *)(param_1[0xc] + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03922f24(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((param_1[0xc] == 0) || (lVar4 = *(long *)(param_1[0xc] + 0x80), lVar4 == 0))
    goto LAB_01c73ca0;
    if (*(int *)(lVar4 + 0x80) != 1) {
      return;
    }
  }
  lVar4 = param_1[9];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = param_1[9];
    if (lVar4 == 0) goto LAB_01c73ca0;
    if (*(char *)(lVar4 + 0x20) != '\0') {
      *(undefined1 *)(lVar4 + 0x20) = 0;
    }
  }
  lVar4 = param_1[0xd];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar4,0);
  if ((uVar2 & 1) == 0) {
    if (*plVar3 != 0) {
      uVar5 = *(undefined8 *)(*plVar3 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03922f24(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        if (((*plVar3 == 0) || (param_1[0xc] == 0)) ||
           (lVar4 = *(long *)(param_1[0xc] + 0x80), lVar4 == 0)) goto LAB_01c73ca0;
        uVar5 = *(undefined8 *)(*plVar3 + 0x38);
        uVar6 = *(undefined8 *)(lVar4 + 0x88);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar2 = FUN_0391f968(uVar5,uVar6,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01c73c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
    if (param_1[7] != 0) {
      uVar5 = *(undefined8 *)(param_1[7] + 0x38);
      lVar4 = param_1[0xd];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_0391f968(uVar5,lVar4,0);
      return;
    }
  }
LAB_01c73ca0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


