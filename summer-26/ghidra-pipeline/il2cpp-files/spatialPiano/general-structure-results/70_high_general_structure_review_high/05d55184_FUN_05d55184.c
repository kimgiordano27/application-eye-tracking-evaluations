/*
FUNCTION_NAME: FUN_05d55184
ENTRY_POINT: 05d55184
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void FUN_05d55184(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
                    /* catch() { ... } // from try @ 05d55168 with catch @ 05d5518c */
                    /* try { // try from 05d55190 to 05e55197 has its CatchHandler @ 05d551a0 */
                    /* try { // try from 05d55198 to 05e551a3 has its CatchHandler @ 05d55058 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d55190 with catch @ 05d551a0
                        */
                    /* try { // try from 05d551a4 to 05e552e3 has its CatchHandler @ 05d551a4
                       catch() { ... } // from try @ 05d551a4 with catch @ 05d551a4
                       catch() { ... } // from try @ 05d553c0 with catch @ 05d551a4
                       catch() { ... } // from try @ 05d55464 with catch @ 05d551a4
                       catch() { ... } // from try @ 05d554c4 with catch @ 05d551a4 */
  if ((DAT_06bc3906 & 1) == 0) {
    FUN_02f08768(Method_OVRPassthroughLayer_SetColorMap__);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    FUN_02f08768(PTR_DAT_067cb9c0);
    FUN_02f08768(Meta_XR_ImmersiveDebugger_UserInterface_Console_<>c__DisplayClass47_0_TypeInfo);
    FUN_02f08768(Method_OVRBounded3D_IOVRAnchorComponent<OVRBounded3D>_SetEnabledAsync__);
    FUN_02f08768(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_02f08768(Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__);
    FUN_02f08768(PTR_DAT_067d16a8);
    FUN_02f08768(Method_OVRPlatformMenu_RetreatOneLevel__);
    FUN_02f08768(
                Method_Newtonsoft_Json_Converters_KeyValuePairConverter_InitializeReflectionObject__
                );
    FUN_02f08768(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                );
    DAT_06bc3906 = 1;
  }
  puVar10 = Method_OVRPlatformMenu_RetreatOneLevel__;
  puVar9 = Method_OVRPermissionsRequester_IsPermissionSupportedByPlatform__;
  puVar8 = Method_OVRPermissionsRequester_GetPermissionId__;
  puVar7 = Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
  puVar6 = Method_OVRBounded3D_IOVRAnchorComponent<OVRBounded3D>_SetEnabledAsync__;
  puVar5 = Method_Newtonsoft_Json_Converters_KeyValuePairConverter_InitializeReflectionObject__;
  puVar4 = Meta_XR_ImmersiveDebugger_UserInterface_Console_<>c__DisplayClass47_0_TypeInfo;
  puVar3 = PTR_DAT_067d16a8;
  puVar2 = PTR_DAT_067cc4c8;
  puVar1 = PTR_DAT_067cb9c0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_03da30a4(param_1 + 0x48,
                 *(undefined8 *)
                  Method_OVRBounded3D_IOVRAnchorComponent<OVRBounded3D>_SetEnabledAsync__);
    FUN_03da30a4(param_1 + 0x58,*(undefined8 *)puVar6);
    FUN_03da30a4(param_1 + 0x68,*(undefined8 *)puVar6);
    FUN_03d9facc(param_1 + 0x78,*(undefined8 *)puVar8);
    FUN_03d9facc(param_1 + 0x88,*(undefined8 *)puVar8);
    FUN_03da1f68(param_1 + 0x98,*(undefined8 *)puVar5);
                    /* try { // try from 05d552e4 to 05e5530b has its CatchHandler @ 05d5548c */
    FUN_03d18804(param_1 + 0xa8,*(undefined8 *)puVar2);
    FUN_03d552f8(param_1 + 0xb8,*(undefined8 *)puVar1);
    FUN_03d49484(param_1 + 200,*(undefined8 *)puVar3);
    FUN_03cedcf0(param_1 + 0xd8,*(undefined8 *)puVar7);
    FUN_03d198f4(param_1 + 0xe8,*(undefined8 *)puVar9);
    FUN_03d54208(param_1 + 0xf8,*(undefined8 *)puVar4);
    FUN_03da0bdc(param_1 + 0x108,*(undefined8 *)puVar10);
                    /* try { // try from 05d55348 to 05e5536f has its CatchHandler @ 05d55488 */
    FUN_03da41fc(param_1 + 0x118,*(undefined8 *)Method_OVRPassthroughLayer_SetColorMap__);
    FUN_03da0bdc(param_1 + 0x128,*(undefined8 *)puVar10);
    FUN_03ceba5c(param_1 + 0x138,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateISerializable__
                );
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* try { // try from 05d5537c to 05e55387 has its CatchHandler @ 05d55478 */
  return;
}


