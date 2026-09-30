/*
FUNCTION_NAME: OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821
ENTRY_POINT: 02d868c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_11
*/


void OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27 *pOVar3;
  OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *pOVar4;
  OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *pOVar5;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_museoTrofeo_<ActivarDetectorDeCercania>d__39_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_museoTrofeo_<ActivarSonidosCopa>d__38_System_Collections_IEnumerator_Reset__);
    OVRManager_Initialize_m339CEB2C05C31DCDA1C4390EE2635DC90D538821::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  if (lVar2 == 0) {
    pOVar3 = (OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_museoTrofeo_<ActivarDetectorDeCercania>d__39_System_Collections_IEnumerator_Reset__
                       );
    OVRDisplay__ctor_mA1BC0C77506E1D916592E8566C868F7D0E937A67(pOVar3);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRManager_set_display_mAD68A004132C01084A443254AC164FD31BCDFE6B_inline
              (pOVar3,(MethodInfo *)0x0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline((MethodInfo *)0x0)
  ;
  if (lVar2 == 0) {
    pOVar4 = (OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_museoTrofeo_<ActivarSonidosCopa>d__38_System_Collections_IEnumerator_Reset__
                       );
    OVRTracker__ctor_m283EF4D30717FA44ECFD8C6D31C15E31DBA3D2CD(pOVar4);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRManager_set_tracker_m50D4C4C76BA97D4775D75620D4CC033398E72433_inline
              (pOVar4,(MethodInfo *)0x0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = OVRManager_get_boundary_m7495B93002198ABB5346F3F696712133AF7EA943_inline
                    ((MethodInfo *)0x0);
  if (lVar2 == 0) {
    pOVar5 = (OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_1__);
    OVRBoundary__ctor_m31595FDCF7D3AC48703766DB883781D480F6092D(pOVar5);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRManager_set_boundary_mCEFC4DA00ED1094A5758AC15FF744BDC4B6091E4_inline
              (pOVar5,(MethodInfo *)0x0);
  }
  OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F(param_1,0);
  return;
}


