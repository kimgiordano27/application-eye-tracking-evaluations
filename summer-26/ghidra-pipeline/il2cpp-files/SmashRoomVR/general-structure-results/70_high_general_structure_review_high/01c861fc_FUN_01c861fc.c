/*
FUNCTION_NAME: FUN_01c861fc
ENTRY_POINT: 01c861fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


ulong FUN_01c861fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_34;
  
  if ((DAT_03fed802 & 1) == 0) {
                    /* try { // try from 01c8621c to 01d8621f has its CatchHandler @ 01c8641c */
                    /* try { // try from 01c86220 to 01d86233 has its CatchHandler @ 01c86480 */
    thunk_FUN_01ad9084(StringLiteral_437);
    thunk_FUN_01ad9084(StringLiteral_377);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_430);
    thunk_FUN_01ad9084(StringLiteral_438);
    thunk_FUN_01ad9084(StringLiteral_431);
    thunk_FUN_01ad9084(StringLiteral_439);
                    /* try { // try from 01c86274 to 01d86277 has its CatchHandler @ 01c86408 */
    DAT_03fed802 = 1;
  }
                    /* try { // try from 01c86278 to 01d8628f has its CatchHandler @ 01c86480 */
  local_34 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = 0;
  if (iVar3 == 2) {
    uVar4 = 0xffffffff;
    goto LAB_01c86684;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (iVar3 == 1) {
    local_34 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = local_34 + 1;
    *(int *)(param_1 + 0x28) = iVar3;
    if (1000000 < iVar3) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
      uVar1 = 1;
      uVar4 = 2;
      goto LAB_01c86684;
    }
    if (lVar7 == 0) goto LAB_01c8669c;
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_01c8669c;
    if (*(int *)(lVar7 + 0x20) == 1) {
      lVar2 = FUN_0391c2b8(lVar7,0);
      uVar1 = 0;
      if (lVar2 == 0) goto LAB_01c8669c;
      lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_377);
      plVar8 = (long *)(lVar7 + 0x48);
      *plVar8 = lVar2;
      thunk_FUN_01b4f09c(plVar8,lVar2);
      uVar9 = *(undefined8 *)(lVar7 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = FUN_0391f968(uVar9,0,0);
      if ((uVar1 & 1) != 0) {
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_01c8669c;
        FUN_03b1bbc8(*plVar8,*(undefined8 *)(lVar7 + 0x38),0);
      }
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_01c8669c;
      FUN_03b1c094(*plVar8,0x30,0);
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_01c8669c;
      FUN_03b1bfc0(*plVar8,4,0);
    }
    else {
                    /* try { // try from 01c862b4 to 01d862bb has its CatchHandler @ 01c86400 */
      if (*(int *)(lVar7 + 0x20) == 0) {
        lVar2 = FUN_0391c2b8(lVar7,0);
        uVar1 = 0;
        if (lVar2 == 0) goto LAB_01c8669c;
                    /* try { // try from 01c862d4 to 01d862e7 has its CatchHandler @ 01c86480 */
        lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_437);
        plVar8 = (long *)(lVar7 + 0x40);
        *plVar8 = lVar2;
        thunk_FUN_01b4f09c(plVar8,lVar2);
        uVar9 = *(undefined8 *)(lVar7 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
                    /* try { // try from 01c8630c to 01d86313 has its CatchHandler @ 01c863f8 */
        uVar1 = FUN_0391f968(uVar9,0,0);
        if ((uVar1 & 1) != 0) {
          uVar1 = 0;
          if (*plVar8 == 0) goto LAB_01c8669c;
          FUN_036de28c(*plVar8,*(undefined8 *)(lVar7 + 0x30),0);
        }
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_01c8669c;
        FUN_036dedf8(0x42400000,*plVar8,0);
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_01c8669c;
        FUN_036df1ec(*plVar8,0x202,0);
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_01c8669c;
        uVar1 = FUN_036df900(*plVar8,1,0);
        if ((*plVar8 == 0) || (lVar2 = *(long *)(*plVar8 + 0xf8), lVar2 == 0)) goto LAB_01c8669c;
        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar2 + 0x20);
        thunk_FUN_01b4f09c();
        uVar9 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_438,*(undefined8 *)StringLiteral_430);
        *(undefined8 *)(lVar7 + 0x58) = uVar9;
        thunk_FUN_01b4f09c();
      }
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(lVar7 + 0x20) == 1) {
    plVar8 = *(long **)(lVar7 + 0x48);
    local_34 = iVar3 % 1000;
    uVar9 = FUN_0303de64(&local_34,0);
    uVar1 = FUN_02edd6e8(*(undefined8 *)StringLiteral_431,uVar9,0);
    if (plVar8 == (long *)0x0) goto LAB_01c8669c;
    pcVar6 = *(code **)(*plVar8 + 0x5e8);
    uVar9 = *(undefined8 *)(*plVar8 + 0x5f0);
LAB_01c86668:
    (*pcVar6)(plVar8,uVar1,uVar9);
  }
  else if (*(int *)(lVar7 + 0x20) == 0) {
    plVar8 = *(long **)(lVar7 + 0x40);
    local_34 = iVar3 % 1000;
    uVar9 = FUN_0303de64(&local_34,0);
    uVar1 = FUN_02edd6e8(*(undefined8 *)StringLiteral_439,uVar9,0);
    if (plVar8 == (long *)0x0) {
LAB_01c8669c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar1);
    }
    uVar1 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x560));
    if (*(int *)(param_1 + 0x28) % 1000 == 999) {
      plVar8 = *(long **)(lVar7 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_01c8669c;
      uVar9 = (**(code **)(*plVar8 + 0x568))(plVar8,*(undefined8 *)(*plVar8 + 0x570));
      uVar10 = *(undefined8 *)(lVar7 + 0x50);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_03922f24(uVar9,uVar10,0);
      plVar5 = *(long **)(lVar7 + 0x40);
      if ((uVar1 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_01c8669c;
        lVar2 = *plVar5;
        uVar1 = *(ulong *)(lVar7 + 0x50);
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_01c8669c;
        lVar2 = *plVar5;
        uVar1 = *(ulong *)(lVar7 + 0x58);
      }
      (**(code **)(lVar2 + 0x578))(plVar5,uVar1,*(undefined8 *)(lVar2 + 0x580));
      pcVar6 = *(code **)(*plVar8 + 0x578);
      uVar9 = *(undefined8 *)(*plVar8 + 0x580);
      goto LAB_01c86668;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
  uVar4 = 1;
  uVar1 = 1;
LAB_01c86684:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar1;
}


