/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType$$Migrate
ENTRY_POINT: 064664c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_6;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4;functionality_possible_biometrics_hits_4
*/


void Unity_VisualScripting_FullSerializer_Internal_fsVersionedType__Migrate(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 064664c8 to 065664f3 has its CatchHandler @ 0646513c */
  FUN_02f07e70(PTR_DAT_06d02bd0);
  FUN_02f07e70(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo);
  FUN_02f07e70(Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo);
                    /* try { // try from 064664f4 to 065664fb has its CatchHandler @ 064669dc */
  FUN_02f07e70(
              System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
              );
                    /* try { // try from 06466500 to 06566517 has its CatchHandler @ 064669d4 */
  FUN_02f07e70(
              System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
              );
  FUN_02f07e70(Newtonsoft_Json_IArrayPool<char>_TypeInfo);
  FUN_02f07e70(Photon_Voice_IAudioOut<float>_TypeInfo);
                    /* try { // try from 06466528 to 06566533 has its CatchHandler @ 064669d8 */
  FUN_02f07e70(PTR_DAT_06d0e118);
  *(undefined1 *)(unaff_x20 + 0xac0) = 1;
  puVar5 = System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo;
  puVar4 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar3 = PTR_DAT_06d0e118;
                    /* try { // try from 0646653c to 06566553 has its CatchHandler @ 064669d0 */
  plVar10 = (long *)unaff_x19[10];
  if (plVar10 == (long *)0x0) {
LAB_06466600:
    uVar6 = (**(code **)(*unaff_x19 + 0x4a8))();
    FUN_05465414(*(undefined8 *)puVar5,uVar6,*(undefined8 *)puVar3,0);
    return;
  }
  lVar9 = *plVar10;
  bVar1 = *(byte *)(lVar9 + 0x130);
  bVar2 = *(byte *)(*(long *)
                     System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                   + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo)) {
    uStack000000000000000c = (undefined4)plVar10[0x18];
    uVar6 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&stack0x0000000c);
    FUN_0546531c(*(undefined8 *)Photon_Voice_IAudioOut<float>_TypeInfo,uVar6,*(undefined8 *)puVar3,0
                );
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                   + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<int4>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<int4>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo +
                       0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo))
      goto LAB_06466600;
      plVar10 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
      plVar7 = (long *)
               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
      ;
    }
    else {
      plVar10 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
      plVar7 = (long *)
               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
      ;
    }
    if (plVar10 == (long *)0x0) goto LAB_064668e8;
    if (*plVar7 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_02ef170c(*plVar7,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_064668dc;
      lVar9 = *plVar7;
    }
    if ((int)plVar10[3] == 0) goto LAB_064668d8;
    plVar10[4] = lVar9;
    thunk_FUN_02f411dc();
    if (unaff_x19[10] == 0) goto LAB_064668e8;
    lVar9 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar10 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
    puVar5 = Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo;
    if (plVar10 == (long *)0x0) {
LAB_064668e8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_02ef170c(*(long *)
                                  Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo,
                                 *(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_064668dc;
      lVar9 = *(long *)puVar5;
    }
    if ((int)plVar10[3] == 0) goto LAB_064668d8;
    plVar10[4] = lVar9;
    thunk_FUN_02f411dc();
    plVar7 = (long *)unaff_x19[10];
    if (plVar7 == (long *)0x0) goto LAB_064668e8;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    lVar9 = plVar7[0x14];
  }
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
LAB_064668dc:
    uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar6,0);
  }
  if (1 < *(uint *)(plVar10 + 3)) {
    plVar10[5] = lVar9;
    thunk_FUN_02f411dc(plVar10 + 5,lVar9);
    puVar4 = Newtonsoft_Json_IArrayPool<char>_TypeInfo;
    if (*(long *)Newtonsoft_Json_IArrayPool<char>_TypeInfo == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_02ef170c(*(long *)Newtonsoft_Json_IArrayPool<char>_TypeInfo,
                                 *(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_064668dc;
      lVar9 = *(long *)puVar4;
    }
    if (2 < *(uint *)(plVar10 + 3)) {
      plVar10[6] = lVar9;
      thunk_FUN_02f411dc();
      lVar9 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto LAB_064668dc;
      if (3 < *(uint *)(plVar10 + 3)) {
        plVar10[7] = lVar9;
        thunk_FUN_02f411dc(plVar10 + 7,lVar9);
        if (*(long *)puVar3 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = thunk_FUN_02ef170c(*(long *)puVar3,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar9 == 0) goto LAB_064668dc;
          lVar9 = *(long *)puVar3;
        }
        if (4 < *(uint *)(plVar10 + 3)) {
          plVar10[8] = lVar9;
          thunk_FUN_02f411dc();
          FUN_054654d4(plVar10,0);
          return;
        }
      }
    }
  }
LAB_064668d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


