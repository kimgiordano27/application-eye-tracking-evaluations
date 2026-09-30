/*
FUNCTION_NAME: FUN_02fb244c
ENTRY_POINT: 02fb244c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_02fb244c(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint local_54;
  
  if ((DAT_03ff0f81 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    DAT_03ff0f81 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_02fb270c(param_1);
    if ((int)uVar2 < 0) {
      uVar6 = thunk_FUN_01ad9084(
                                Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                );
      uVar6 = FUN_01b47fd0(uVar6,1);
      local_54 = uVar2;
      uVar8 = thunk_FUN_01ad9084(
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                );
      uVar8 = thunk_FUN_01afa70c(uVar8,&local_54);
      FUN_01852fbc(uVar6);
      FUN_01855950(uVar6,uVar8);
      FUN_01855748(uVar6,0,uVar8);
      uVar8 = thunk_FUN_01ad9084(StringLiteral_9805);
      uVar6 = FUN_030838c8(uVar8,uVar6,0);
      thunk_FUN_01ad9084(StringLiteral_5615);
      uVar8 = thunk_FUN_01afaadc();
      FUN_02f9dadc(uVar8,uVar6,0);
      uVar6 = thunk_FUN_01ad9084(StringLiteral_9806);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar8,uVar6);
    }
    if (uVar2 == 0) {
      return **(undefined8 **)
               (*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ + 0xb8);
    }
    plVar9 = (long *)(param_1 + 0x28);
    if (*plVar9 == 0) {
      lVar5 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,0x80);
      *plVar9 = lVar5;
      thunk_FUN_01b4f09c(plVar9,lVar5);
    }
    plVar10 = (long *)(param_1 + 0x38);
    if (*plVar10 == 0) {
      uVar6 = FUN_01b47fd0(*(undefined8 *)
                            Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                           ,*(undefined4 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      thunk_FUN_01b4f09c(plVar10,uVar6);
    }
    lVar5 = 0;
    iVar11 = 0;
    while( true ) {
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_02fb2654;
      iVar1 = uVar2 - iVar11;
      if (0x7f < iVar1) {
        iVar1 = 0x80;
      }
      uVar3 = (**(code **)(*plVar7 + 0x318))(plVar7,*plVar9,0,iVar1,*(undefined8 *)(*plVar7 + 800));
      if (uVar3 == 0) break;
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) {
LAB_02fb2654:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar4 = (**(code **)(*plVar7 + 0x1b8))
                        (plVar7,*plVar9,0,uVar3,*plVar10,0,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((iVar11 == 0) && (uVar3 == uVar2)) {
        uVar6 = FUN_02eeda98(0,*plVar10,0,uVar4,0);
        return uVar6;
      }
      if ((lVar5 == 0) && (lVar5 = FUN_02ef2bc8(uVar2,0), lVar5 == 0)) goto LAB_02fb2654;
      FUN_02ef0298(lVar5,*plVar10,0,uVar4,0);
      iVar11 = uVar3 + iVar11;
      if ((int)uVar2 <= iVar11) {
        uVar6 = FUN_02ef2d24(lVar5,0);
        return uVar6;
      }
    }
    FUN_02fb0de4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fb0e3c();
}


