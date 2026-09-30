/*
FUNCTION_NAME: FUN_0568f28c
ENTRY_POINT: 0568f28c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ray_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0568f28c(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  long local_48;
  
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>_Clear__
  ;
  if ((DAT_06bc0246 & 1) == 0) {
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>_Clear__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__);
    FUN_02f08768(PTR_DAT_067cde48);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<HandExpressionName,_NativeArray<XRHandJoint>>_set_Item__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<HandExpressionName,_HandExpressionCapture>__ctor__
                );
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<HandExpressionName,_HandExpressionCapture>_TryGetValue__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_Remove__
                );
    DAT_06bc0246 = 1;
  }
  local_48 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_GetEnumerator__;
  FUN_0567f22c(param_1,param_2);
  uVar6 = FUN_05683e88(param_2,param_1 + 0x62);
  puVar2 = PTR_DAT_067c9338;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(puVar2 + 0x98));
  }
  puVar3 = PTR_DAT_067cde48;
  uVar6 = FUN_05108c84(param_2,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar4);
  }
  uVar7 = FUN_056905f4(uVar6);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  FUN_0569068c(param_1,uVar6);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_05690724();
  if (param_2 != (long *)0x0) {
    bVar5 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar6,0,*(undefined8 *)(*param_2 + 0x200));
    *(byte *)(param_1 + 0x61) = bVar5 & 1;
    FUN_05690828(param_1);
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x18);
      plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<HandExpressionName,_HandExpressionCapture>_TryGetValue__
                                         );
      FUN_05660d68(plVar8,iVar1 + 2,0);
                    /* try { // try from 0568f438 to 0578f50b has its CatchHandler @ 0568f438
                       catch() { ... } // from try @ 0568f438 with catch @ 0568f438
                       catch() { ... } // from try @ 0568f5f0 with catch @ 0568f438
                       catch() { ... } // from try @ 0568f668 with catch @ 0568f438
                       catch() { ... } // from try @ 0568f680 with catch @ 0568f438
                       catch() { ... } // from try @ 0568f6d8 with catch @ 0568f438 */
      if ((*(long *)(param_1 + 0x28) != 0) && (plVar8 != (long *)0x0)) {
        uVar6 = (**(code **)(*plVar8 + 0x188))
                          (plVar8,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                           *(undefined8 *)(*plVar8 + 400));
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar6 = (**(code **)(*plVar8 + 0x188))
                            (plVar8,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
                             *(undefined8 *)(*plVar8 + 400));
          *(undefined8 *)(param_1 + 0x38) = uVar6;
          if (*(long *)(param_1 + 0x50) != 0) {
            uVar6 = FUN_02f0880c(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TryGetValue__
                                 ,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x18));
            lVar12 = *(long *)(param_1 + 0x50);
            *(undefined8 *)(param_1 + 0x68) = uVar6;
            puVar4 = 
            Method_System_Collections_Generic_Dictionary<HandExpressionName,_HandExpressionCapture>__ctor__
            ;
            if (lVar12 != 0) {
              uVar10 = 0;
              while ((long)uVar10 < (long)*(int *)(lVar12 + 0x18)) {
                plVar13 = *(long **)(param_1 + 0x68);
                lVar12 = FUN_03abf644(lVar12,uVar10 & 0xffffffff,*(undefined8 *)puVar4);
                if (((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) ||
                   (lVar12 = (**(code **)(*plVar8 + 0x188))
                                       (plVar8,*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18),
                                        *(undefined8 *)(*plVar8 + 400)), plVar13 == (long *)0x0))
                goto LAB_0568f530;
                    /* try { // try from 0568f50c to 0578f513 has its CatchHandler @ 0568f694 */
                if ((lVar12 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)
                   ) goto LAB_0568f628;
                if (*(uint *)(plVar13 + 3) <= uVar10) goto LAB_0568f664;
                plVar13[uVar10 + 4] = lVar12;
                lVar12 = *(long *)(param_1 + 0x50);
                uVar10 = uVar10 + 1;
                if (lVar12 == 0) goto LAB_0568f530;
              }
                    /* try { // try from 0568f538 to 0578f547 has its CatchHandler @ 0568f698 */
              uVar10 = FUN_05684108(param_2,&local_48);
              lVar12 = local_48;
              if ((uVar10 & 1) == 0) {
                    /* try { // try from 0568f56c to 0578f583 has its CatchHandler @ 0568f6a0 */
                return;
              }
              if (local_48 != 0) {
                    /* try { // try from 0568f550 to 0578f557 has its CatchHandler @ 0568f688 */
                if (*(char *)(local_48 + 0x22) == '\0') {
                  return;
                }
                plVar8 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,3);
                lVar9 = FUN_0567ede0(param_2);
                if (plVar8 != (long *)0x0) {
                    /* try { // try from 0568f59c to 0578f5a3 has its CatchHandler @ 0568f69c */
                    /* try { // try from 0568f5a4 to 0578f5af has its CatchHandler @ 0568f684 */
                  if ((lVar9 == 0) ||
                     (lVar11 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar11 != 0)) {
                    if ((int)plVar8[3] != 0) {
                      plVar8[4] = lVar9;
                      local_54[0] = *(undefined1 *)(lVar12 + 0x22);
                    /* try { // try from 0568f5c0 to 0578f5ef has its CatchHandler @ 0568f6a4 */
                      lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x28),local_54);
                      if ((lVar12 != 0) &&
                         (lVar9 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_0568f628;
                    /* try { // try from 0568f5f0 to 0578f643 has its CatchHandler @ 0568f438 */
                      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                        plVar8[5] = lVar12;
                        local_58[0] = 0;
                        lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x28),local_58);
                        if ((lVar12 != 0) &&
                           (lVar9 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_0568f628;
                        puVar2 = 
                        Method_System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_Remove__
                        ;
                        if (2 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 0568f644 to 0578f667 has its CatchHandler @ 0568f690 */
                          plVar8[6] = lVar12;
                          uVar6 = FUN_056b43f0(*(undefined8 *)puVar2,plVar8,0);
                    /* WARNING: Subroutine does not return */
                          FUN_0567fcdc(uVar6,param_2);
                        }
                      }
                    }
LAB_0568f664:
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
LAB_0568f628:
                  uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar6,0);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0568f530:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


