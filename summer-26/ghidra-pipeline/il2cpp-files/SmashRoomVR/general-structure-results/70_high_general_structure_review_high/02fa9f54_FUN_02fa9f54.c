/*
FUNCTION_NAME: FUN_02fa9f54
ENTRY_POINT: 02fa9f54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02faa0fc) */

undefined8 FUN_02fa9f54(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  
  puVar2 = 
  Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff0f2a & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateKeyboardPose>d__98_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    DAT_03ff0f2a = 1;
  }
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  plVar5 = (long *)thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02fb537c(plVar5,param_1,3,1,1,1,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  if (0x7fffffff < (long)uVar6) {
    thunk_FUN_01ad9084(StringLiteral_5615);
    lVar10 = thunk_FUN_01afaadc();
    uVar7 = thunk_FUN_01ad9084(StringLiteral_9704);
    FUN_0304f128(lVar10,uVar7,0);
    *(undefined4 *)(lVar10 + 0x60) = 0x80131620;
    uVar7 = thunk_FUN_01ad9084(StringLiteral_9703);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(lVar10,uVar7);
  }
  if (uVar6 == 0) {
    uVar7 = FUN_02faa218(plVar5);
  }
  else {
    uVar7 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,uVar6 & 0xffffffff);
    if (0 < (int)uVar6) {
      iVar12 = 0;
      do {
        iVar4 = (**(code **)(*plVar5 + 0x318))
                          (plVar5,uVar7,iVar12,uVar6 & 0xffffffff,*(undefined8 *)(*plVar5 + 800));
        if (iVar4 == 0) {
          uVar7 = FUN_02f9dc2c();
          uVar9 = thunk_FUN_01ad9084(StringLiteral_9703);
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar7,uVar9);
        }
        uVar1 = (int)uVar6 - iVar4;
        uVar6 = (ulong)uVar1;
        iVar12 = iVar4 + iVar12;
      } while (0 < (int)uVar1);
    }
  }
  lVar10 = *plVar5;
  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02faa0b4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ae9f78(plVar5,*(long *)puVar3,0);
LAB_02faa0b4:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return uVar7;
}


