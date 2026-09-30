/*
FUNCTION_NAME: FUN_0348af60
ENTRY_POINT: 0348af60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0348af60(long param_1,int param_2,ulong param_3,int param_4,int param_5,long param_6)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int local_6c;
  int local_68;
  int local_64;
  
  puVar6 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
  puVar5 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
  if ((DAT_03ff69ac & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2250);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(PTR_DAT_03d93628);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01ad9084(PTR_DAT_03d93630);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff69ac = 1;
  }
  puVar4 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
  lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar6);
  FUN_02b591b0(lVar8,*(undefined8 *)puVar5);
  if ((param_3 >> 0x30 & 0xff) != 0) {
    uVar15 = param_3 >> 0x20 & 0xffff;
    uVar16 = (ulong)((ushort)(param_3 >> 0x30) & 0xff);
    do {
      lVar13 = *(long *)(param_1 + 0x168);
      if (lVar13 == 0) goto LAB_0348b3a8;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_0348b3ac;
      lVar14 = *(long *)(param_1 + 0x150);
      if (lVar14 == 0) goto LAB_0348b3a8;
      uVar1 = *(ushort *)(lVar13 + uVar15 * 2 + 0x20);
      if (*(uint *)(lVar14 + 0x18) <= (uint)uVar1) goto LAB_0348b3ac;
      if ((*(long *)(lVar14 + (ulong)uVar1 * 8 + 0x20) == 0) || (uVar9 = FUN_03480e10(), lVar8 == 0)
         ) goto LAB_0348b3a8;
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar14 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_0348b3a8;
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
        thunk_FUN_01b4f09c();
      }
      else {
        FUN_02b599e4(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar16 = uVar16 - 1;
      uVar15 = uVar15 + 1;
    } while (uVar16 != 0);
  }
  puVar6 = Method_System_Collections_SortedList_SortedListEnumerator_get_Current__;
  puVar5 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  lVar8 = FUN_02ee7624(*(undefined8 *)
                        Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__,lVar8,0
                      );
  puVar7 = PTR_DAT_03d93628;
  if ((uint)param_3 >> 0x10 == 0xffff) {
    lVar13 = *(long *)Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
  }
  else {
    sVar3 = (short)(param_3 >> 0x10);
    local_68 = CONCAT22(local_68._2_2_,sVar3);
    uVar9 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2250,&local_68);
    local_64 = sVar3 + 1;
    uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar5,&local_64);
    lVar13 = FUN_02ee7120(*(undefined8 *)puVar7,uVar9,uVar10,0);
  }
  plVar11 = (long *)FUN_01b47fd0(*(undefined8 *)puVar6,5);
  local_64 = param_2;
  lVar14 = thunk_FUN_01afa70c(*(undefined8 *)puVar5,&local_64);
  if (plVar11 == (long *)0x0) {
LAB_0348b3a8:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((lVar14 != 0) &&
     (lVar12 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_0348b3b0:
    uVar9 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar9,0);
  }
  puVar5 = StringLiteral_2494;
  if ((int)plVar11[3] != 0) {
    plVar11[4] = lVar14;
    thunk_FUN_01b4f09c(plVar11 + 4,lVar14);
    local_68 = param_4;
    lVar14 = thunk_FUN_01afa70c(*(undefined8 *)puVar5,&local_68);
    if ((lVar14 != 0) &&
       (lVar12 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_0348b3b0;
    if (1 < *(uint *)(plVar11 + 3)) {
      plVar11[5] = lVar14;
      thunk_FUN_01b4f09c(plVar11 + 5,lVar14);
      local_6c = param_5 + param_4;
                    /* try { // try from 0348b270 to 0358b6f3 has its CatchHandler @ 0348b270
                       catch() { ... } // from try @ 0348b270 with catch @ 0348b270
                       catch() { ... } // from try @ 0348b708 with catch @ 0348b270
                       catch() { ... } // from try @ 0348bee4 with catch @ 0348b270
                       catch() { ... } // from try @ 0348bf18 with catch @ 0348b270 */
      lVar14 = thunk_FUN_01afa70c(*(undefined8 *)puVar5,&local_6c);
      if ((lVar14 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_0348b3b0;
      if (2 < *(uint *)(plVar11 + 3)) {
        plVar11[6] = lVar14;
        thunk_FUN_01b4f09c(plVar11 + 6,lVar14);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_01afa9e0(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_0348b3b0;
        if (3 < *(uint *)(plVar11 + 3)) {
          plVar11[7] = lVar13;
          thunk_FUN_01b4f09c(plVar11 + 7,lVar13);
          if ((lVar8 != 0) &&
             (lVar13 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
          goto LAB_0348b3b0;
          puVar5 = PTR_DAT_03d93630;
          if (4 < *(uint *)(plVar11 + 3)) {
            plVar11[8] = lVar8;
            thunk_FUN_01b4f09c(plVar11 + 8,lVar8);
            uVar9 = FUN_02ee71a8(*(undefined8 *)puVar5,plVar11,0);
            if (param_6 != 0) {
              lVar8 = *(long *)(param_6 + 0x10);
              lVar13 = *(long *)puVar4;
              *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar2 = *(uint *)(param_6 + 0x18);
                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(param_6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                  thunk_FUN_01b4f09c();
                }
                else {
                  FUN_02b599e4(param_6,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                return;
              }
            }
            goto LAB_0348b3a8;
          }
        }
      }
    }
  }
LAB_0348b3ac:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


