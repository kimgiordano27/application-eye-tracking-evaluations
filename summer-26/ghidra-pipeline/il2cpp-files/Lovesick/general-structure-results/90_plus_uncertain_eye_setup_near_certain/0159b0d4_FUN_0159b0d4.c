/*
FUNCTION_NAME: FUN_0159b0d4
ENTRY_POINT: 0159b0d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0159b0d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
                    /* try { // try from 0159b0f4 to 0169b107 has its CatchHandler @ 0159b6ec */
  if ((DAT_03777d49 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(Method_TuneTargetBasic_<Complete>b__23_0__);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
                    /* try { // try from 0159b13c to 0169b13f has its CatchHandler @ 0159b6bc */
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<char,_char>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
                    /* try { // try from 0159b158 to 0169b197 has its CatchHandler @ 0159b6e4 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_set_Item__
                      );
    DAT_03777d49 = 1;
  }
  FUN_02641664(&local_80,0);
  lVar4 = local_70;
  lVar3 = lStack_78;
  lVar2 = local_80;
  puVar1 = System_Collections_Generic_Dictionary<char,_char>_TypeInfo;
  if (local_70 == 0) goto LAB_0159b3cc;
  if (*(long *)(local_70 + 0x18) == 0) {
    local_58 = local_80;
    lStack_50 = lStack_78;
    local_48 = local_70;
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                System_Collections_Generic_Dictionary<char,_char>_TypeInfo,&local_58
                              );
    local_80 = *(long *)puVar1;
    lStack_78 = -1;
    uStack_68 = *(undefined8 *)(param_1 + 0x120);
    local_70 = *(long *)(param_1 + 0x118);
    local_60 = *(undefined8 *)(param_1 + 0x128);
    uVar6 = Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_Collections_IEnumerable_GetEnumerator
                      (&local_80,uVar5,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_0268b5e4(uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
    puVar1 = UnityEngine_Pose___TypeInfo;
    if (lVar9 == 0) goto LAB_0159b3cc;
    FUN_0268afbc(lVar9,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_set_Item__
                 ,0);
    *(long *)(param_1 + 0xe0) = lVar9;
    lVar9 = FUN_010e5800(lVar9,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_0159b3cc;
    lVar7 = FUN_010e5800(*(long *)(param_1 + 0xe0),*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
  }
  else {
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_0159b3cc;
    FUN_010e58e8(*(long *)(param_1 + 0xe0),&local_80,
                 *(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
    lVar9 = local_80;
    if ((*(long *)(param_1 + 0xe0) == 0) ||
       (FUN_010e58e8(*(long *)(param_1 + 0xe0),&local_80,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__),
       lVar7 = local_80, local_80 == 0)) goto LAB_0159b3cc;
    uVar5 = FUN_026774f4(local_80,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_0268c1d0(uVar5,0);
    FUN_02677530(lVar7,0,0);
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
  if ((lVar8 != 0) && (FUN_02669c18(lVar8,0), lVar3 != 0)) {
    FUN_02669cd4(lVar8,0xffff < *(int *)(lVar3 + 0x18),0);
    FUN_0266c424(lVar8,lVar2,0);
    FUN_0266e648(lVar8,lVar3,0,0,0);
    if (lVar9 != 0) {
      FUN_02668990(lVar9,*(undefined8 *)(param_1 + 0x18),0);
      lVar9 = FUN_02668954(lVar9,0);
      if ((lVar9 != 0) && (FUN_0267d974(0,0x3f800000,0x3f800000,0x3f800000,lVar9,0), lVar7 != 0)) {
        FUN_02677530(lVar7,lVar8,0);
        *(long *)(param_1 + 0x118) = lVar2;
        *(long *)(param_1 + 0x120) = lVar3;
        *(long *)(param_1 + 0x128) = lVar4;
        return;
      }
    }
  }
LAB_0159b3cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


