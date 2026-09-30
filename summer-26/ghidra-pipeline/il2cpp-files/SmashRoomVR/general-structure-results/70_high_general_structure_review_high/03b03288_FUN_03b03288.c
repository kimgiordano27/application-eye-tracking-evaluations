/*
FUNCTION_NAME: FUN_03b03288
ENTRY_POINT: 03b03288
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_03b03288(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_03ffda16 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03db6788);
    thunk_FUN_01ad9084(PTR_DAT_03d9cdd0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d580);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d588);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9deb0);
    thunk_FUN_01ad9084(StringLiteral_2724);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db6790);
    DAT_03ffda16 = 1;
  }
  uVar3 = FUN_039261f0(0);
  if ((((uVar3 & 1) == 0) || (*(char *)(param_1 + 0x210) != '\0')) ||
     (uVar3 = FUN_03afbbdc(param_1), (uVar3 & 1) != 0)) {
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar8,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = FUN_0391c27c(param_1,0);
        if (lVar4 == 0) goto LAB_03b036d4;
        uVar8 = FUN_039230bc(lVar4,0);
        uVar8 = FUN_02edd6e8(uVar8,*(undefined8 *)PTR_DAT_03db6790,0);
        plVar5 = (long *)FUN_01b47fd0(*(undefined8 *)StringLiteral_2724,2);
        uVar9 = *(undefined8 *)PTR_DAT_03d9deb0;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                            );
        }
        lVar4 = FUN_0304eec0(uVar9,0);
        if (plVar5 == (long *)0x0) goto LAB_03b036d4;
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_03b036dc:
          uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar8,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_03b036d8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar5[4] = lVar4;
        thunk_FUN_01b4f09c(plVar5 + 4,lVar4);
        lVar4 = FUN_0304eec0(*(undefined8 *)PTR_DAT_03db6788,0);
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_03b036dc;
        if (*(uint *)(plVar5 + 3) < 2) goto LAB_03b036d8;
        plVar5[5] = lVar4;
        thunk_FUN_01b4f09c(plVar5 + 5,lVar4);
        lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
        FUN_0391ff60(lVar4,uVar8,plVar5,0);
        if (lVar4 == 0) goto LAB_03b036d4;
        FUN_03923d4c(lVar4,0x34,0);
        lVar6 = FUN_0391fab4(lVar4,0);
        if (((*(long *)(param_1 + 0x108) == 0) ||
            (lVar7 = FUN_0391c27c(*(long *)(param_1 + 0x108),0), lVar7 == 0)) ||
           (uVar8 = FUN_03928c2c(lVar7,0), lVar6 == 0)) goto LAB_03b036d4;
        FUN_03929618(lVar6,uVar8,0);
        lVar6 = FUN_0391fab4(lVar4,0);
        if (lVar6 == 0) goto LAB_03b036d4;
        FUN_0392a690(lVar6,0);
        lVar6 = FUN_0391c2b8(param_1,0);
        if (lVar6 == 0) goto LAB_03b036d4;
        uVar2 = FUN_0391faf0(lVar6,0);
        FUN_0391fb2c(lVar4,uVar2,0);
        uVar8 = FUN_01ed712c(lVar4,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                            );
        *(undefined8 *)(param_1 + 0x1a0) = uVar8;
        thunk_FUN_01b4f09c(param_1 + 0x1a0);
        uVar8 = FUN_01ed712c(lVar4,*(undefined8 *)PTR_DAT_03d9d580);
        *(undefined8 *)(param_1 + 0x1b8) = uVar8;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x1b8),uVar8);
        lVar6 = *(long *)(param_1 + 0x1b8);
        plVar5 = *(long **)(param_1 + 0x108);
        if (*(int *)(*(long *)PTR_DAT_03d9d588 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_039acb70(0);
        if (plVar5 == (long *)0x0) goto LAB_03b036d4;
        uVar8 = (**(code **)(*plVar5 + 0x4d8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x4e0));
        uVar9 = FUN_039066e4(0);
        if (lVar6 == 0) goto LAB_03b036d4;
        FUN_03af8d1c(lVar6,uVar8,uVar9,0);
        plVar5 = (long *)FUN_01ed7044(lVar4,*(undefined8 *)PTR_DAT_03d9cdd0);
        if (plVar5 == (long *)0x0) goto LAB_03b036d4;
        (**(code **)(*plVar5 + 0x2f8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x300));
        FUN_03afec98(param_1);
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar8,0,0);
    if ((uVar3 & 1) == 0) {
      uVar8 = FUN_03afba68(param_1);
      FUN_03b036f0(param_1,uVar8);
      lVar4 = *(long *)(param_1 + 0x1b8);
      uVar8 = FUN_03afba68(param_1);
      if (lVar4 != 0) {
        FUN_03af8c9c(lVar4,uVar8,0);
        return;
      }
LAB_03b036d4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


