/*
FUNCTION_NAME: FUN_010f88e0
ENTRY_POINT: 010f88e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_010f88e0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_2f0 [8];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  ulong local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  ulong local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined1 local_288 [520];
  long local_80;
  
                    /* try { // try from 010f88e0 to 011f88ff has its CatchHandler @ 010f8828 */
                    /* try { // try from 010f8900 to 011f8903 has its CatchHandler @ 010f8908 */
                    /* try { // try from 010f8904 to 011f8927 has its CatchHandler @ 010f8828 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8900 with catch @ 010f8908
                        */
  lVar1 = tpidr_el0;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f88bc with catch @ 010f890c
                        */
  local_80 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f88cc with catch @ 010f8910
                        */
  lVar8 = *(long *)(param_4 + 0x38);
                    /* try { // try from 010f8928 to 011f892b has its CatchHandler @ 010f8954 */
  if (lVar8 == 0) {
                    /* try { // try from 010f892c to 011f8963 has its CatchHandler @ 010f8828 */
    thunk_FUN_00d48444(StringLiteral_4367);
    thunk_FUN_00d48444(OVR_OpenVR_CVRSpatialAnchors_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BarCustomer>_Dispose__);
                    /* catch() { ... } // from try @ 010f8928 with catch @ 010f8954 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
                    /* try { // try from 010f8964 to 011f896b has its CatchHandler @ 010f8980 */
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonObjectContract_GetUninitializedObject__
                      );
    lVar8 = *(long *)(param_4 + 0x38);
                    /* try { // try from 010f896c to 011f8977 has its CatchHandler @ 010f8828 */
    if (lVar8 == 0) {
      FUN_00d59478(param_4);
                    /* try { // try from 010f8978 to 011f897f has its CatchHandler @ 010f8980 */
      lVar8 = *(long *)(param_4 + 0x38);
    }
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f8964 with catch @ 010f8980
                       catch(type#2 @ 00000000) { ... } // from try @ 010f8978 with catch @ 010f8980
                        */
                    /* try { // try from 010f8984 to 011f8a17 has its CatchHandler @ 010f8984
                       catch() { ... } // from try @ 010f8984 with catch @ 010f8984
                       catch() { ... } // from try @ 010f8a40 with catch @ 010f8984
                       catch() { ... } // from try @ 010f8a64 with catch @ 010f8984
                       catch() { ... } // from try @ 010f8a8c with catch @ 010f8984
                       catch() { ... } // from try @ 010f8acc with catch @ 010f8984 */
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
  if (*(int *)(lVar8 + 0x28) < 0) {
    uVar9 = thunk_FUN_00d42afc();
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    uVar9 = 0x18;
  }
  memset(&local_2a0,0,0x218);
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  if (param_2 == 0) {
                    /* try { // try from 010f8c20 to 011f8c27 has its CatchHandler @ 010f8c3c */
                    /* try { // try from 010f8c28 to 011f8c33 has its CatchHandler @ 010f8ae4 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
                    /* try { // try from 010f8c34 to 011f8c3b has its CatchHandler @ 010f8c3c */
    FUN_00ac2be8();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f8c20 with catch @ 010f8c3c
                       catch(type#2 @ 00000000) { ... } // from try @ 010f8c34 with catch @ 010f8c3c
                        */
    uVar5 = thunk_FUN_00d48444(
                              Field_<PrivateImplementationDetails>_B6E5AC1B0927F4259775820D36453E7BD957F110874896C133234263D312D88E
                              );
    FUN_016ec5b8(uVar14,uVar5,0);
    uVar5 = thunk_FUN_00d48444(Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,uVar5);
  }
  if (*(int *)(param_2 + 0xe8) == -1) {
    uVar14 = thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_fsData>_Add__);
    uVar14 = FUN_015f6780(uVar14,param_2,0);
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar5,uVar14,0);
LAB_010f8d6c:
    uVar14 = thunk_FUN_00d48444(Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar14);
  }
  puVar7 = (undefined8 *)**(undefined8 **)(param_4 + 0x38);
  (*(code *)puVar7[2])(*puVar7,puVar7,0,0,&local_2d8);
  uVar3 = (uint)local_2d8;
  uVar15 = local_2d8 & 0xffffffff;
  if (0x200 < (uint)local_2d8) {
    uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    FUN_00acb0a4();
    plVar10 = (long *)FUN_01780344(uVar14,0);
    FUN_00ac2be8();
    uVar14 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    local_2d8 = CONCAT44(local_2d8._4_4_,0x200);
    uVar5 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                              );
    uVar5 = thunk_FUN_00d61fa0(uVar5,&local_2d8);
    uVar6 = thunk_FUN_00d48444(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    uVar14 = FUN_01600b5c(uVar6,uVar14,uVar5,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar6 = thunk_FUN_00d48444(PTR_DAT_033eac10);
    FUN_016ec624(uVar5,uVar14,uVar6,0);
    goto LAB_010f8d6c;
  }
  lVar8 = *(long *)Method_Newtonsoft_Json_Serialization_JsonObjectContract_GetUninitializedObject__;
                    /* try { // try from 010f8a18 to 011f8a1f has its CatchHandler @ 010f8a6c */
  plVar10 = *(long **)(lVar8 + 0x38);
  if (plVar10 == (long *)0x0) {
    FUN_00d59478(lVar8);
                    /* try { // try from 010f8a28 to 011f8a3f has its CatchHandler @ 010f8a70 */
    plVar10 = *(long **)(lVar8 + 0x38);
  }
  lVar8 = *plVar10;
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
  }
                    /* try { // try from 010f8a40 to 011f8a5f has its CatchHandler @ 010f8984 */
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar4 = thunk_FUN_00d42afc();
    iVar4 = iVar4 + -0x10;
  }
  else {
    iVar4 = 8;
  }
                    /* try { // try from 010f8a60 to 011f8a63 has its CatchHandler @ 010f8a68 */
                    /* try { // try from 010f8a64 to 011f8a87 has its CatchHandler @ 010f8984 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8a60 with catch @ 010f8a68
                        */
  if (0.0 <= param_1) {
    param_1 = (double)(*(undefined8 **)
                        (*(long *)
                          Method_System_Collections_Generic_List_Enumerator<BarCustomer>_Dispose__ +
                        0xb8))[1] + param_1;
                    /* try { // try from 010f8ac4 to 011f8acb has its CatchHandler @ 010f8ae0 */
  }
  else {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8a18 with catch @ 010f8a6c
                        */
    plVar10 = (long *)**(undefined8 **)
                        (*(long *)
                          Method_System_Collections_Generic_List_Enumerator<BarCustomer>_Dispose__ +
                        0xb8);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8a28 with catch @ 010f8a70
                        */
    if (plVar10 == (long *)0x0) goto LAB_010f8c1c;
    lVar8 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    /* try { // try from 010f8a88 to 011f8a8b has its CatchHandler @ 010f8ab4 */
    if (uVar12 != 0) {
                    /* try { // try from 010f8a8c to 011f8ac3 has its CatchHandler @ 010f8984 */
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_4367) {
                    /* try { // try from 010f8acc to 011f8ad7 has its CatchHandler @ 010f8984 */
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
          goto LAB_010f8ad8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* catch() { ... } // from try @ 010f8a88 with catch @ 010f8ab4 */
    puVar7 = (undefined8 *)FUN_00d59724(plVar10,*(long *)StringLiteral_4367,0x13);
LAB_010f8ad8:
                    /* try { // try from 010f8ad8 to 011f8adf has its CatchHandler @ 010f8ae0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 010f8ac4 with catch @ 010f8ae0
                       catch(type#2 @ 00000000) { ... } // from try @ 010f8ad8 with catch @ 010f8ae0
                        */
    param_1 = (double)(*(code *)*puVar7)(plVar10,puVar7[1]);
  }
                    /* try { // try from 010f8ae4 to 011f8b77 has its CatchHandler @ 010f8ae4
                       catch() { ... } // from try @ 010f8ae4 with catch @ 010f8ae4
                       catch() { ... } // from try @ 010f8b9c with catch @ 010f8ae4
                       catch() { ... } // from try @ 010f8bc0 with catch @ 010f8ae4
                       catch() { ... } // from try @ 010f8be8 with catch @ 010f8ae4
                       catch() { ... } // from try @ 010f8c28 with catch @ 010f8ae4 */
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  FUN_021d5884(param_1,&local_2d8,0x53544154,uVar3 + iVar4 + -1,*(undefined4 *)(param_2 + 0xe0),0);
  local_2b0 = local_2c8;
  uStack_2b8 = uStack_2d0;
  local_2c0 = local_2d8;
  lVar11 = *(long *)(param_4 + 0x38);
  lVar8 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_00d5941c();
    lVar11 = *(long *)(param_4 + 0x38);
  }
  FUN_00da59dc(lVar8,*(undefined8 *)(lVar11 + 0x18),auStack_2f0 + -(uVar9 + 0xf & 0x1fffffff0),
               param_3,0,&local_2e0);
  local_288[0] = 0;
  uStack_298 = uStack_2b8;
  local_2a0 = local_2c0;
  local_290 = local_2b0;
  uStack_28c = local_2e0;
                    /* try { // try from 010f8b78 to 011f8b7f has its CatchHandler @ 010f8bc8 */
  puVar7 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x20);
                    /* try { // try from 010f8b88 to 011f8b9b has its CatchHandler @ 010f8bcc */
  local_2e8 = param_3;
  (*(code *)puVar7[2])(*puVar7,puVar7,0,&local_2e8,&local_2e0);
                    /* try { // try from 010f8b9c to 011f8bbb has its CatchHandler @ 010f8ae4 */
  FUN_0265efec(local_288,CONCAT44(uStack_2dc,local_2e0),uVar15,0);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  lVar8 = *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
                    /* try { // try from 010f8bbc to 011f8bbf has its CatchHandler @ 010f8bc4 */
  if (*(int *)(lVar8 + 0xe0) == 0) {
                    /* try { // try from 010f8bc0 to 011f8be3 has its CatchHandler @ 010f8ae4 */
    thunk_FUN_00d32864();
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8bbc with catch @ 010f8bc4
                        */
    lVar8 = *(long *)puVar2;
  }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8b78 with catch @ 010f8bc8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 010f8b88 with catch @ 010f8bcc
                        */
  if (**(long **)(lVar8 + 0xb8) != 0) {
                    /* try { // try from 010f8be4 to 011f8be7 has its CatchHandler @ 010f8c10 */
    FUN_010f6d48(**(long **)(lVar8 + 0xb8),&local_2a0,
                 *(undefined8 *)OVR_OpenVR_CVRSpatialAnchors_TypeInfo);
                    /* try { // try from 010f8be8 to 011f8c1f has its CatchHandler @ 010f8ae4 */
    if (*(long *)(lVar1 + 0x28) == local_80) {
                    /* catch() { ... } // from try @ 010f8be4 with catch @ 010f8c10 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_010f8c1c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


