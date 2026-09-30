/*
FUNCTION_NAME: FUN_038616c4
ENTRY_POINT: 038616c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_8
*/


void FUN_038616c4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_30;
  long local_28;
  
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  if ((DAT_03ff8691 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da7928);
    thunk_FUN_01ad9084(PTR_DAT_03da7930);
    thunk_FUN_01ad9084(PTR_DAT_03da7938);
    thunk_FUN_01ad9084(PTR_DAT_03da7940);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da7948);
    thunk_FUN_01ad9084(PTR_DAT_03da7950);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2724);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_320);
    DAT_03ff8691 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_30 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = FUN_03b26f4c(0);
  lVar8 = *(long *)puVar2;
  local_28 = lVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar8);
  }
  uVar5 = FUN_03922f24(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_024cb144(&local_28,*(undefined8 *)PTR_DAT_03da7928);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)FUN_01b47fd0(*(undefined8 *)StringLiteral_2724,1);
      uVar7 = *(undefined8 *)PTR_DAT_03da7940;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                          );
      }
      lVar4 = FUN_0304eec0(uVar7,0);
      if (plVar6 == (long *)0x0) goto LAB_03861968;
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
        uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar7,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar6[4] = lVar4;
      thunk_FUN_01b4f09c(plVar6 + 4,lVar4);
      lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391ff60(lVar4,*(undefined8 *)StringLiteral_320,plVar6,0);
      if (lVar4 == 0) goto LAB_03861968;
      local_28 = FUN_01ed712c(lVar4,*(undefined8 *)PTR_DAT_03da7950);
    }
    else {
      if (local_28 == 0) goto LAB_03861968;
      uVar5 = FUN_01e8b8bc(local_28,&local_30,*(undefined8 *)PTR_DAT_03da7930);
      uVar7 = local_30;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(uVar7,0);
      }
    }
  }
  if (local_28 == 0) {
LAB_03861968:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  puVar1 = (undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_01e8b8bc(local_28,puVar1,*(undefined8 *)PTR_DAT_03da7938);
  if ((uVar5 & 1) == 0) {
    if ((local_28 == 0) || (lVar4 = FUN_0391c2b8(local_28,0), lVar4 == 0)) goto LAB_03861968;
    uVar7 = FUN_01ed7044(lVar4,*(undefined8 *)PTR_DAT_03da7948);
    *puVar1 = uVar7;
    thunk_FUN_01b4f09c(puVar1,uVar7);
  }
  return;
}


