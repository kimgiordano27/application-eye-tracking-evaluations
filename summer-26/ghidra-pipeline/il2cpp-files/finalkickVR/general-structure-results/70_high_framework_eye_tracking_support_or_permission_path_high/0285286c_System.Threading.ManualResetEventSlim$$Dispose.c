/*
FUNCTION_NAME: System.Threading.ManualResetEventSlim$$Dispose
ENTRY_POINT: 0285286c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void System_Threading_ManualResetEventSlim__Dispose(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  Exception_t *pEVar5;
  MethodInfo *pMVar6;
  void *pvVar7;
  long unaff_x29;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong *in_stack_00000060;
  byte bStack00000000000000ae;
  void *pvStack00000000000000d0;
  
  do {
    pvStack00000000000000d0 = *(void **)(unaff_x29 + -0x48);
    NullCheck(pvStack00000000000000d0);
    uVar2 = SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9
                      (pvStack00000000000000d0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    uVar3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
    uVar2 = Convert_ToUInt64_mA2BE4A2841686E8B79607BA469368B4FB4D40F34(uVar2,uVar3,0);
    *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
    *(undefined1 *)(unaff_x29 + -0x2a) = 1;
    do {
      while( true ) {
        pvVar7 = *(void **)(unaff_x29 + -0x48);
        NullCheck(pvVar7);
        bVar1 = System_Convert__ToSByte(pvVar7,0);
        if ((bVar1 & 1) == 0) {
          bStack00000000000000ae = *(byte *)(unaff_x29 + -0x2a) & 1;
          if (bStack00000000000000ae == 0) {
            if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
              pIVar4 = (Il2CppClass *)
                       il2cpp_codegen_initialize_runtime_metadata_inline
                                 ((ulong *)Method_System_Collections_Generic_List<Cookie>_get_Item__
                                 );
              pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
              uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                                ((ulong *)Method_OVRObjectPool_List<OVRSpaceUser>__);
              SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar5,uVar2,0)
              ;
              pMVar6 = (MethodInfo *)
                       il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000060);
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar5,pMVar6);
            }
            **(undefined8 **)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
          }
          else {
            **(undefined8 **)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x40);
          }
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
          uVar2 = DateTime_get_InternalTicks_m80645EA2AFA7D75594415703E0396FFA2E2D950D
                            (*(undefined8 *)(unaff_x29 + -0x18),0);
          *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
          if ((-1 < *(long *)(unaff_x29 + -0x50)) &&
             (*(long *)(unaff_x29 + -0x50) < 0x2bca2875f4374000)) {
            return;
          }
          pIVar4 = (Il2CppClass *)
                   il2cpp_codegen_initialize_runtime_metadata_inline
                             ((ulong *)Method_System_Collections_Generic_List<Cookie>_get_Item__);
          pEVar5 = (Exception_t *)il2cpp_codegen_object_new(pIVar4);
          uVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)Method_OVRObjectPool_List<OVRSpatialAnchor>__);
          SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(pEVar5,uVar2,0);
          pMVar6 = (MethodInfo *)
                   il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000060);
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar5,pMVar6);
        }
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x48);
        NullCheck(*(void **)(unaff_x29 + -0x80));
        uVar2 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734
                          (*(undefined8 *)(unaff_x29 + -0x80));
        *(undefined8 *)(unaff_x29 + -0x88) = uVar2;
        *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x88);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x58);
        bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                          (*(undefined8 *)(unaff_x29 + -0x90),
                           *(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__,0);
        *(byte *)(unaff_x29 + -0x91) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0x91) & 1) == 0) break;
        *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x48);
        NullCheck(*(void **)(unaff_x29 + -0xb0));
        uVar2 = SerializationInfoEnumerator_get_Value_mBB22843FD639AD42D9A819A9745C21191C3B1DD9
                          (*(undefined8 *)(unaff_x29 + -0xb0));
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
        uVar2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(0);
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        uVar2 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31
                          (*(undefined8 *)(unaff_x29 + -0xb8),*(undefined8 *)(unaff_x29 + -0xc0),0);
        *(undefined8 *)(unaff_x29 + -200) = uVar2;
        *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -200);
        *(undefined1 *)(unaff_x29 + -0x29) = 1;
      }
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x58);
      bVar1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                        (*(undefined8 *)(unaff_x29 + -0xa0),
                         *(undefined8 *)Method_OVRObjectPool_List<OVRAnchor>__,0);
      *(byte *)(unaff_x29 + -0xa1) = bVar1 & 1;
    } while ((*(byte *)(unaff_x29 + -0xa1) & 1) == 0);
  } while( true );
}


