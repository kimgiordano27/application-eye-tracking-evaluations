/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsObjectDefinition
ENTRY_POINT: 06466578
PROGRAM: Untangled-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_7;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsObjectDefinition(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint in_w9;
  long in_x10;
  long *unaff_x19;
  long *unaff_x22;
  undefined4 uStack000000000000000c;
  
  puVar3 = System_Collections_Generic_HashSet<StunServers_StunServer>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  if (in_ZR) {
    uStack000000000000000c = *(undefined4 *)(in_x10 + 0xc0);
                    /* try { // try from 0646665c to 0656665f has its CatchHandler @ 064667e4 */
    uVar4 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,&stack0x0000000c);
                    /* try { // try from 06466670 to 0656667b has its CatchHandler @ 06466800 */
    FUN_0546531c(*(undefined8 *)Photon_Voice_IAudioOut<float>_TypeInfo,uVar4,*unaff_x22,0);
                    /* try { // try from 0646668c to 06566697 has its CatchHandler @ 064667fc */
    return;
  }
  bVar1 = *(byte *)(*(long *)
                     System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                   + 0x130);
                    /* try { // try from 0646658c to 06566603 has its CatchHandler @ 06466a54 */
  if ((in_w9 < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo)) {
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_HashSet<int4>_TypeInfo + 0x130);
    if ((in_w9 < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_HashSet<int4>_TypeInfo)) {
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo +
                       0x130);
      if ((in_w9 < bVar1) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo)) {
        uVar4 = (**(code **)(*unaff_x19 + 0x4a8))();
        FUN_05465414(*(undefined8 *)puVar3,uVar4,*unaff_x22,0);
        return;
      }
      plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
      plVar7 = (long *)
               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
      ;
    }
    else {
      plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
      plVar7 = (long *)
               System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
      ;
    }
    if (plVar5 == (long *)0x0) goto LAB_064668e8;
    if (*plVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_02ef170c(*plVar7,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_064668dc;
      lVar6 = *plVar7;
    }
    if ((int)plVar5[3] == 0) goto LAB_064668d8;
    plVar5[4] = lVar6;
    thunk_FUN_02f411dc();
    if (unaff_x19[10] == 0) goto LAB_064668e8;
    lVar6 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,5);
    puVar3 = Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo;
    if (plVar5 == (long *)0x0) {
LAB_064668e8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_02ef170c(*(long *)
                                  Gley_UrbanSystem_Internal_Heap<PathFindingWaypoint>_TypeInfo,
                                 *(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_064668dc;
      lVar6 = *(long *)puVar3;
    }
    if ((int)plVar5[3] == 0) goto LAB_064668d8;
    plVar5[4] = lVar6;
    thunk_FUN_02f411dc();
    plVar7 = (long *)unaff_x19[10];
    if (plVar7 == (long *)0x0) goto LAB_064668e8;
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    lVar6 = plVar7[0x14];
  }
  if ((lVar6 != 0) &&
     (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_064668dc:
    uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar4,0);
  }
  if (1 < *(uint *)(plVar5 + 3)) {
    plVar5[5] = lVar6;
    thunk_FUN_02f411dc(plVar5 + 5,lVar6);
    puVar2 = Newtonsoft_Json_IArrayPool<char>_TypeInfo;
    if (*(long *)Newtonsoft_Json_IArrayPool<char>_TypeInfo == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_02ef170c(*(long *)Newtonsoft_Json_IArrayPool<char>_TypeInfo,
                                 *(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_064668dc;
      lVar6 = *(long *)puVar2;
    }
    if (2 < *(uint *)(plVar5 + 3)) {
      plVar5[6] = lVar6;
      thunk_FUN_02f411dc();
      lVar6 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02ef170c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_064668dc;
      if (3 < *(uint *)(plVar5 + 3)) {
        plVar5[7] = lVar6;
        thunk_FUN_02f411dc(plVar5 + 7,lVar6);
        if (*unaff_x22 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = thunk_FUN_02ef170c(*unaff_x22,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar6 == 0) goto LAB_064668dc;
          lVar6 = *unaff_x22;
        }
        if (4 < *(uint *)(plVar5 + 3)) {
          plVar5[8] = lVar6;
          thunk_FUN_02f411dc();
          FUN_054654d4(plVar5,0);
          return;
        }
      }
    }
  }
LAB_064668d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


