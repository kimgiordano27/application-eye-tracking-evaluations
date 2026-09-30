/*
FUNCTION_NAME: FUN_01c85b5c
ENTRY_POINT: 01c85b5c
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


long * FUN_01c85b5c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_34;
  
                    /* try { // try from 01c85b60 to 01d85b67 has its CatchHandler @ 01c85bc0 */
                    /* try { // try from 01c85b68 to 01d85bd7 has its CatchHandler @ 01c85aac */
  if ((DAT_03fed800 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(StringLiteral_375);
    thunk_FUN_01ad9084(StringLiteral_376);
    thunk_FUN_01ad9084(StringLiteral_428);
    thunk_FUN_01ad9084(StringLiteral_429);
                    /* catch() { ... } // from try @ 01c85b60 with catch @ 01c85bc0 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_430);
                    /* catch() { ... } // from try @ 01c85c90 with catch @ 01c85bd8 */
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_431);
    thunk_FUN_01ad9084(StringLiteral_432);
    thunk_FUN_01ad9084(StringLiteral_433);
    thunk_FUN_01ad9084(StringLiteral_434);
    DAT_03fed800 = 1;
  }
  local_34 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  plVar1 = (long *)0x0;
  if (iVar5 == 2) {
    uVar6 = 0xffffffff;
  }
  else {
                    /* try { // try from 01c85c28 to 01d85c87 has its CatchHandler @ 01c85cac */
    lVar7 = *(long *)(param_1 + 0x20);
    if (iVar5 == 1) {
      local_34 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar5 = local_34 + 1;
      *(int *)(param_1 + 0x28) = iVar5;
      if (1000000 < iVar5) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
        plVar1 = (long *)0x1;
        uVar6 = 2;
        goto LAB_01c860f8;
      }
      if (lVar7 == 0) goto LAB_01c86110;
    }
    else {
      if (iVar5 != 0) {
        return (long *)0x0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 == 0) goto LAB_01c86110;
      if (*(int *)(lVar7 + 0x20) == 1) {
        lVar2 = FUN_0391c2b8(lVar7,0);
        plVar1 = (long *)0x0;
        if (lVar2 == 0) goto LAB_01c86110;
        lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_429);
        plVar3 = (long *)(lVar7 + 0x48);
        *plVar3 = lVar2;
        thunk_FUN_01b4f09c(plVar3,lVar2);
        uVar9 = *(undefined8 *)(lVar7 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        plVar1 = (long *)FUN_0391f968(uVar9,0,0);
        lVar2 = *plVar3;
        if (((ulong)plVar1 & 1) == 0) {
          uVar9 = *(undefined8 *)StringLiteral_375;
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar9 = FUN_0304eec0(uVar9,0);
          plVar1 = (long *)FUN_0391a670(*(undefined8 *)StringLiteral_432,uVar9,0);
          if (lVar2 == 0) goto LAB_01c86110;
          if (plVar1 == (long *)0x0) {
            plVar1 = (long *)0x0;
          }
          else if (*plVar1 != *(long *)StringLiteral_376) {
            plVar1 = (long *)0x0;
          }
          FUN_039a11a0(lVar2,plVar1,0);
          lVar2 = *plVar3;
          plVar1 = (long *)0x0;
          if (lVar2 == 0) goto LAB_01c86110;
        }
        else {
          if (lVar2 == 0) goto LAB_01c86110;
          FUN_039a11a0(lVar2,*(undefined8 *)(lVar7 + 0x30),0);
          lVar2 = *(long *)(lVar7 + 0x48);
          if (lVar2 == 0) {
            plVar1 = (long *)0x0;
            goto LAB_01c86110;
          }
        }
        plVar8 = (long *)FUN_01e8a9f8(lVar2,*(undefined8 *)
                                             Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__
                                     );
        plVar1 = plVar8;
        if (*plVar3 == 0) goto LAB_01c86110;
        lVar2 = FUN_039a1164(*plVar3,0);
        plVar1 = (long *)0x0;
        if ((lVar2 == 0) || (plVar1 = (long *)FUN_039a16a4(lVar2,0), plVar8 == (long *)0x0))
        goto LAB_01c86110;
        FUN_038fe8bc(plVar8,plVar1,0);
        plVar1 = (long *)0x0;
        if (*plVar3 == 0) goto LAB_01c86110;
        FUN_039a11e4(*plVar3,0x30,0);
        plVar1 = (long *)0x0;
        if (*plVar3 == 0) goto LAB_01c86110;
        FUN_039a1228(*plVar3,4,0);
      }
      else if (*(int *)(lVar7 + 0x20) == 0) {
        lVar2 = FUN_0391c2b8(lVar7,0);
        plVar1 = (long *)0x0;
        if (lVar2 == 0) goto LAB_01c86110;
        lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_428);
        plVar8 = (long *)(lVar7 + 0x38);
        *plVar8 = lVar2;
        thunk_FUN_01b4f09c(plVar8,lVar2);
                    /* try { // try from 01c85c88 to 01d85c8f has its CatchHandler @ 01c85c94 */
        plVar3 = (long *)*plVar8;
        plVar1 = (long *)0x0;
        if (plVar3 == (long *)0x0) goto LAB_01c86110;
                    /* try { // try from 01c85c90 to 01d85cbf has its CatchHandler @ 01c85bd8 */
                    /* catch() { ... } // from try @ 01c85c88 with catch @ 01c85c94 */
        (**(code **)(*plVar3 + 0x5f8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x600));
                    /* catch() { ... } // from try @ 01c85c28 with catch @ 01c85cac */
        uVar9 = *(undefined8 *)(lVar7 + 0x28);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_0391f968(uVar9,0,0);
        if ((uVar4 & 1) != 0) {
          plVar1 = (long *)0x0;
          if (*plVar8 == 0) goto LAB_01c86110;
          FUN_036de28c(*plVar8,*(undefined8 *)(lVar7 + 0x28),0);
        }
        plVar1 = (long *)0x0;
        if (*plVar8 == 0) goto LAB_01c86110;
        FUN_036dedf8(0x42400000,*plVar8,0);
        plVar1 = (long *)0x0;
        if (*plVar8 == 0) goto LAB_01c86110;
        FUN_036df1ec(*plVar8,0x202,0);
        plVar1 = (long *)0x0;
        if (*plVar8 == 0) goto LAB_01c86110;
        FUN_036df900(*plVar8,1,0);
        plVar1 = (long *)0x0;
        if (*plVar8 == 0) goto LAB_01c86110;
        plVar1 = (long *)FUN_036df448(*plVar8,0,0);
        if ((*plVar8 == 0) || (lVar2 = *(long *)(*plVar8 + 0xf8), lVar2 == 0)) goto LAB_01c86110;
        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar2 + 0x20);
        thunk_FUN_01b4f09c();
        uVar9 = FUN_01f2f4f0(*(undefined8 *)StringLiteral_434,*(undefined8 *)StringLiteral_430);
        *(undefined8 *)(lVar7 + 0x58) = uVar9;
        thunk_FUN_01b4f09c();
      }
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(lVar7 + 0x20) == 1) {
      lVar7 = *(long *)(lVar7 + 0x48);
      local_34 = iVar5 % 1000;
      uVar9 = FUN_0303de64(&local_34,0);
      plVar1 = (long *)FUN_02edd6e8(*(undefined8 *)StringLiteral_431,uVar9,0);
      if (lVar7 == 0) goto LAB_01c86110;
      FUN_039a1120(lVar7,plVar1,0);
    }
    else if (*(int *)(lVar7 + 0x20) == 0) {
      plVar1 = (long *)0x0;
      if (*(long *)(lVar7 + 0x38) == 0) {
LAB_01c86110:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178(plVar1);
      }
      plVar1 = (long *)FUN_036e34e8((float)(iVar5 % 1000),*(long *)(lVar7 + 0x38),
                                    *(undefined8 *)StringLiteral_433,0);
      if (*(int *)(param_1 + 0x28) % 1000 == 999) {
        plVar3 = *(long **)(lVar7 + 0x38);
        if (plVar3 == (long *)0x0) goto LAB_01c86110;
        uVar9 = (**(code **)(*plVar3 + 0x568))(plVar3,*(undefined8 *)(*plVar3 + 0x570));
        uVar10 = *(undefined8 *)(lVar7 + 0x50);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        plVar1 = (long *)FUN_03922f24(uVar9,uVar10,0);
        plVar8 = *(long **)(lVar7 + 0x38);
        if (((ulong)plVar1 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_01c86110;
          lVar2 = *plVar8;
          uVar9 = *(undefined8 *)(lVar7 + 0x50);
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_01c86110;
          lVar2 = *plVar8;
          uVar9 = *(undefined8 *)(lVar7 + 0x58);
        }
        (**(code **)(lVar2 + 0x578))(plVar8,uVar9,*(undefined8 *)(lVar2 + 0x580));
        (**(code **)(*plVar3 + 0x578))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0x580));
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
    uVar6 = 1;
    plVar1 = (long *)0x1;
  }
LAB_01c860f8:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return plVar1;
}


