/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationKeyByIndex$$EndInvoke
ENTRY_POINT: 02d86a84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


void OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex__EndInvoke(ulong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 *pHVar3;
  long unaff_x29;
  ulong *in_stack_00000008;
  byte bStack000000000000002e;
  byte bStack000000000000003e;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_pelotaCapturable_<dejarOtraVezTocar>d__7_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_retrasarInicioLluvia_<retraso>d__1_System_Collections_IEnumerator_Reset__);
    OVRManager_InitPermissionRequest_m119AB6ECF8AC0DF7B5165493E5F285A734ABCEB5::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  uVar2 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_retrasarInicioLluvia_<retraso>d__1_System_Collections_IEnumerator_Reset__
                    );
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  HashSet_1__ctor_mBF244C9F5A32AFAC08C7E26F547F642E66B3A293
            (*(HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 **)(unaff_x29 + -0x20),
             *(MethodInfo **)
              Method_pelotaCapturable_<dejarOtraVezTocar>d__7_System_Collections_IEnumerator_Reset__
            );
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x20);
  *(byte *)(unaff_x29 + -0x21) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x102) & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0x30));
    bVar1 = HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA
                      (*(HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 **)(unaff_x29 + -0x30),
                       1,(MethodInfo *)*in_stack_00000008);
    *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
  }
  *(byte *)(unaff_x29 + -0x32) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x103) & 1;
  if ((*(byte *)(unaff_x29 + -0x32) & 1) != 0) {
    pHVar3 = *(HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 **)(unaff_x29 + -0x18);
    NullCheck(pHVar3);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA
              (pHVar3,0,(MethodInfo *)*in_stack_00000008);
  }
  bStack000000000000003e = *(byte *)(*(long *)(unaff_x29 + -8) + 0x104) & 1;
  if (bStack000000000000003e != 0) {
    pHVar3 = *(HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 **)(unaff_x29 + -0x18);
    NullCheck(pHVar3);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA
              (pHVar3,2,(MethodInfo *)*in_stack_00000008);
  }
  bStack000000000000002e = *(byte *)(*(long *)(unaff_x29 + -8) + 0x105) & 1;
  if (bStack000000000000002e != 0) {
    pHVar3 = *(HashSet_1_t8CCE4B1A7C21C55C1F50A4850C846D17B4943076 **)(unaff_x29 + -0x18);
    NullCheck(pHVar3);
    HashSet_1_Add_m4DBD371950A207F1A5A02780C893698D95AE38CA
              (pHVar3,3,(MethodInfo *)*in_stack_00000008);
  }
  OVRPermissionsRequester_Request_mE24346F59325F8846898FF68A44ABE4295695906
            (*(undefined8 *)(unaff_x29 + -0x18),0);
  return;
}


