/*
FUNCTION_NAME: FUN_024699e0
ENTRY_POINT: 024699e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_024699e0(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar4 = Method_System_DateTimeFormat_ParseQuoteString__;
                    /* try { // try from 024699e0 to 02569a07 has its CatchHandler @ 0246a000 */
  local_68 = param_4;
  if ((DAT_0378251e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_DateTimeFormat_ParseQuoteString__);
    thunk_FUN_00d48444(Sirenix_Serialization_Vector3IntFormatter_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_CVRCompositor_TypeInfo);
                    /* try { // try from 02469a44 to 02569a6b has its CatchHandler @ 02469ffc */
    thunk_FUN_00d48444(StringLiteral_10232);
    thunk_FUN_00d48444(RCG_Events_MessageListener_var);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Pose>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f1b38);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRReferencePointSubsystem,_XRReferencePointSubsystemDescriptor,_XRReferencePointSubsystem_Provider,_XRReferencePoint,_ARReferencePoint>_get_sessionOrigin__
                      );
                    /* try { // try from 02469a7c to 02569a93 has its CatchHandler @ 0246a014 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    thunk_FUN_00d48444(PTR_DAT_033f6fa0);
    thunk_FUN_00d48444(Method_System_Xml_XmlSubtreeReader_GetAttribute__);
                    /* try { // try from 02469aa0 to 02569abf has its CatchHandler @ 0246a018 */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_n_u32__);
    thunk_FUN_00d48444(Method_System_Globalization_GregorianCalendar_GetDaysInMonth__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_5579);
                    /* try { // try from 02469ad0 to 02569aef has its CatchHandler @ 0246a010 */
    thunk_FUN_00d48444(UnityEngine_Rendering_CompareFunction_TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                      );
    thunk_FUN_00d48444(StringLiteral_13953);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerable<KeyValuePair<string,_Variant>>_TypeInfo
                      );
                    /* try { // try from 02469b00 to 02569b1b has its CatchHandler @ 0246a00c */
    thunk_FUN_00d48444(StringLiteral_4433);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Face,_List<WingedEdge>>__ctor__)
    ;
    thunk_FUN_00d48444(Method_System_Xml_XmlConvert_ToBoolean__);
                    /* try { // try from 02469b2c to 02569b4b has its CatchHandler @ 0246a008 */
    thunk_FUN_00d48444(PTR_DAT_033f1370);
    thunk_FUN_00d48444(StringLiteral_307);
    thunk_FUN_00d48444(StringLiteral_10422);
    thunk_FUN_00d48444(StringLiteral_2435);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Users_InputUser_set_listenForUnpairedDeviceActivity__
                      );
    DAT_0378251e = 1;
  }
  puVar5 = StringLiteral_10232;
                    /* try { // try from 02469b68 to 02569b6b has its CatchHandler @ 02469ff8 */
  local_70[0] = 0;
  iVar10 = *(int *)(param_5 + 0x17c);
  bVar2 = *(byte *)(param_5 + 0x1a8);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar11 = FUN_023a0ea8(0);
  lVar12 = *(long *)puVar5;
                    /* try { // try from 02469ba0 to 02569baf has its CatchHandler @ 0246a02c */
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar12);
    lVar12 = *(long *)puVar5;
  }
  FUN_023ae3ac(local_70,0,**(undefined8 **)(lVar12 + 0xb8),0);
  cVar3 = *(char *)(param_3 + 0x51);
  if (cVar3 != '\0') {
    FUN_0265e038(param_3 + 0x70,0);
    lVar14 = *(long *)(param_3 + 0xa0);
    lVar12 = *(long *)Method_System_Xml_XmlSubtreeReader_GetAttribute__;
    plVar13 = *(long **)(lVar12 + 0x38);
    if (plVar13 == (long *)0x0) {
      FUN_00d59478(lVar12);
      plVar13 = *(long **)(lVar12 + 0x38);
    }
    lVar12 = *plVar13;
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    if (*(int *)(lVar12 + 0x28) < 0) {
      iVar9 = thunk_FUN_00d42afc();
                    /* try { // try from 02469c24 to 02569c33 has its CatchHandler @ 0246a028 */
      iVar9 = iVar9 + -0x10;
    }
    else {
      iVar9 = 8;
    }
    auVar17 = FUN_0109f35c(param_3 + 0x80,iVar9,
                           *(undefined8 *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRReferencePointSubsystem,_XRReferencePointSubsystemDescriptor,_XRReferencePointSubsystem_Provider,_XRReferencePoint,_ARReferencePoint>_get_sessionOrigin__
                          );
    puVar4 = Sirenix_Serialization_Vector3IntFormatter_TypeInfo;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(param_3 + 0x88);
                    /* try { // try from 02469c5c to 02569c83 has its CatchHandler @ 0246a030 */
    iVar9 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    FUN_010c462c(lVar14,auVar17._0_8_,auVar17._8_8_,0,0,iVar9 >> 2,
                 *(undefined8 *)Sirenix_Serialization_Vector3IntFormatter_TypeInfo);
    lVar14 = *(long *)(param_3 + 0xa8);
    lVar12 = *(long *)PTR_DAT_033f6fa0;
    plVar13 = *(long **)(lVar12 + 0x38);
    if (plVar13 == (long *)0x0) {
      FUN_00d59478(lVar12);
      plVar13 = *(long **)(lVar12 + 0x38);
    }
    lVar12 = *plVar13;
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                    /* try { // try from 02469cb4 to 02569cc3 has its CatchHandler @ 0246a020 */
      lVar12 = FUN_00d5941c();
    }
    if (*(int *)(lVar12 + 0x28) < 0) {
      iVar9 = thunk_FUN_00d42afc();
      iVar9 = iVar9 + -0x10;
    }
    else {
      iVar9 = 8;
    }
                    /* try { // try from 02469cd4 to 02569cdb has its CatchHandler @ 0246a024 */
    auVar17 = FUN_0109f35c(param_3 + 0x90,iVar9,*(undefined8 *)PTR_DAT_033f1b38);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(param_3 + 0x98);
    iVar9 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    FUN_010c462c(lVar14,auVar17._0_8_,auVar17._8_8_,0,0,iVar9 >> 2,*(undefined8 *)puVar4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_026ac988(lVar11,*(undefined8 *)StringLiteral_2435,*(undefined4 *)(param_3 + 0x54),0);
    FUN_026ac988(lVar11,*(undefined8 *)
                         Method_System_Globalization_GregorianCalendar_GetDaysInMonth__,
                 *(undefined4 *)(param_3 + 0x6c),0);
    FUN_026ac928(*(undefined4 *)(param_3 + 0x68),lVar11,*(undefined8 *)StringLiteral_307,0);
    fVar16 = (float)FUN_026884e4(param_5 + 0xdc,0);
    FUN_026ac9e8(fVar16 / (float)*(int *)(param_3 + 0x58),param_2 / (float)*(int *)(param_3 + 0x58),
                 0,0,lVar11,*(undefined8 *)Method_System_Xml_XmlConvert_ToBoolean__,0);
    FUN_026ac988(lVar11,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Users_InputUser_set_listenForUnpairedDeviceActivity__
                 ,*(undefined4 *)(param_3 + 0x5c),0);
    FUN_026acc28(lVar11,*(undefined8 *)(param_3 + 0xa0),
                 *(undefined8 *)UnityEngine_Rendering_CompareFunction_TypeInfo,0,
                 *(int *)(param_3 + 0x88) << 2,0);
    FUN_026acc28(lVar11,*(undefined8 *)(param_3 + 0xa8),
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<IXRInteractable,_IXRPokeFilter>_TypeInfo,0,
                 *(int *)(param_3 + 0x98) << 2,0);
    FUN_01342a94(param_3 + 0x80,*(undefined8 *)Method_System_Collections_Generic_List<Pose>_Add__);
    FUN_01342a94(param_3 + 0x90,*(undefined8 *)RCG_Events_MessageListener_var);
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  FUN_0246a430(param_3,lVar11,param_5 + 0x178);
  FUN_0246a550(param_3,lVar11,param_5);
  puVar4 = OVR_OpenVR_CVRCompositor_TypeInfo;
  if (*(long *)(param_5 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(char *)(*(long *)(param_5 + 0x160) + 0x188) == '\0') ||
     (*(char *)(param_5 + 0x1ad) == '\0')) {
    bVar6 = 0 < iVar10;
  }
  else {
    bVar6 = true;
  }
  uVar15 = *(undefined8 *)StringLiteral_5579;
  if (*(int *)(*(long *)OVR_OpenVR_CVRCompositor_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023ca264(lVar11,uVar15,cVar3 != '\x01' && (bVar6 & bVar2) != 0,0);
  uVar15 = *(undefined8 *)StringLiteral_13953;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023ca264(lVar11,uVar15,(bVar2 == 0 && cVar3 != '\x01') && bVar6 != false,0);
  FUN_023ca264(lVar11,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<Face,_List<WingedEdge>>__ctor__,
               cVar3 != '\0',0);
  if (*(char *)(param_5 + 0x1a9) == '\0') {
    bVar7 = false;
    bVar6 = false;
    bVar8 = false;
  }
  else {
    bVar6 = *(int *)(param_3 + 0x18) == 1;
    if (bVar6) {
      iVar10 = FUN_0267a484(0);
      bVar7 = iVar10 == 0;
      if (*(char *)(param_5 + 0x1a9) == '\0') {
        bVar8 = false;
        bVar6 = true;
        goto LAB_02469fb0;
      }
    }
    else {
      bVar7 = false;
    }
    bVar8 = *(int *)(param_3 + 0x18) == 2;
  }
LAB_02469fb0:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023ca264(lVar11,*(undefined8 *)StringLiteral_4433,bVar8 | bVar7,0);
  FUN_023ca264(lVar11,*(undefined8 *)
                       System_Collections_Generic_IEnumerable<KeyValuePair<string,_Variant>>_TypeInfo
               ,bVar6,0);
  FUN_0247d720(
              Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
              );
  return;
}


