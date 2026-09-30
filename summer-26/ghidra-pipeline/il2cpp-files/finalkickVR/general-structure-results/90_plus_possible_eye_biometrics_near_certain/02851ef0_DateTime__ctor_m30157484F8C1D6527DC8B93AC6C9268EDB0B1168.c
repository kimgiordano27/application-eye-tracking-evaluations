/*
FUNCTION_NAME: DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168
ENTRY_POINT: 02851ef0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168
               (ulong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
               undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Il2CppClass *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Exception_t *pEVar9;
  MethodInfo *pMVar10;
  long lVar11;
  long lVar12;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  int local_60;
  int local_5c;
  ulong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulong *local_28;
  
  puVar2 = Method_OVRManager_OnPermissionGranted__;
                    /* try { // try from 02851ef4 to 02951ef7 has its CatchHandler @ 0285207c */
                    /* try { // try from 02851efc to 02951f4f has its CatchHandler @ 02851ee4 */
  local_48 = param_9;
  local_50 = param_10;
  local_44 = param_8;
  local_40 = param_7;
  local_3c = param_6;
  local_38 = param_5;
  local_34 = param_4;
  local_30 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168::s_Il2CppMethodInitialized & 1) == 0
     ) {
                    /* try { // try from 02851f50 to 02951f6f has its CatchHandler @ 028519e8 */
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168::s_Il2CppMethodInitialized = 1;
  }
  uVar5 = local_2c;
  uVar4 = local_30;
  uVar3 = local_34;
  puVar1 = Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__;
  local_58 = 0;
                    /* try { // try from 02851f70 to 02951f7f has its CatchHandler @ 02851ee4 */
  local_5c = local_44;
                    /* try { // try from 02851f80 to 0295207f has its CatchHandler @ 028519e8 */
  if ((-1 < local_44) && (local_60 = local_44, local_44 < 1000)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02851ef4 with catch @ 0285207c
                        */
                    /* try { // try from 02852080 to 0295222b has its CatchHandler @ 02852080
                       catch(type#1 @ 0474a728) { ... } // from try @ 02852080 with catch @ 02852080
                       catch(type#1 @ 0474a728) { ... } // from try @ 02852288 with catch @ 02852080
                       catch(type#1 @ 0474a728) { ... } // from try @ 028524ec with catch @ 02852080
                       catch(type#1 @ 0474a728) { ... } // from try @ 0285251c with catch @ 02852080
                        */
    if ((-1 < local_48) && (local_48 < 3)) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
      lVar11 = DateTime_DateToTicks_m2ADC6FF6BB38418819671A51620FBD0CAE0A208C(uVar5,uVar4,uVar3);
      lVar12 = DateTime_TimeToTicks_mFE9BA5F0AE03AB8E462BD15D006049ACF842B1F9
                         (local_38,local_3c,local_40,0);
      lVar11 = il2cpp_codegen_add<long,long>(lVar11,lVar12);
      local_58 = lVar11;
      lVar12 = il2cpp_codegen_multiply<long,long>((long)local_44,10000);
      local_58 = il2cpp_codegen_add<long,long>(lVar11,lVar12);
      if ((-1 < (long)local_58) && ((long)local_58 < 0x2bca2875f4374000)) {
                    /* try { // try from 02852288 to 029522c7 has its CatchHandler @ 02852080 */
        *local_28 = local_58 | (long)local_48 << 0x3e;
        return;
      }
      pIVar6 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)
                          Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                         );
      pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar6);
                    /* try { // try from 0285222c to 02952287 has its CatchHandler @ 028522a4 */
      uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_OVRLipSyncMicInput_StartMicrophone__);
      ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(pEVar9,uVar7,0);
      pMVar10 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar9,pMVar10);
    }
    pIVar6 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<AxisAlignedBox_BoxSurface,_float>_Add__
                       );
    pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar6);
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRFaceExpressions_get_Item__);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRGLTFAnimatinonNode_CopyData<float>__);
    ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(pEVar9,uVar7,uVar8,0);
    pMVar10 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar9,pMVar10);
  }
  local_64 = 0;
  pIVar6 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                     );
  local_70 = Box(pIVar6,&local_64);
  local_74 = 999;
  pIVar6 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
  uVar7 = Box(pIVar6,&local_74);
  uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_UnityEngine_Component_TryGetComponent<IHandVisual>__);
  uVar7 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(uVar8,local_70,uVar7);
  pIVar6 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                     );
  pEVar9 = (Exception_t *)il2cpp_codegen_object_new(pIVar6);
  uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_UnityEngine_InputSystem_Users_InputUser_TryFindControlScheme__)
  ;
  ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(pEVar9,uVar8,uVar7,0);
  pMVar10 = (MethodInfo *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar2);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar9,pMVar10);
}


