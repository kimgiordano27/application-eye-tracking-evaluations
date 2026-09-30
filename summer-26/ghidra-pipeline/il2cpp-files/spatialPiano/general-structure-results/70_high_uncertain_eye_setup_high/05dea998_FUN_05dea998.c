/*
FUNCTION_NAME: FUN_05dea998
ENTRY_POINT: 05dea998
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dea998(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar8 = Method_System_Xml_Schema_SchemaInfo_GetAttributeXsd__;
  puVar7 = Method_System_Xml_Schema_SchemaInfo_GetAttributeXdr__;
  puVar6 = Method_System_Runtime_Serialization_SchemaExporter_InvokeSchemaProviderMethod__;
  puVar4 = Method_System_Data_DataTableCollection_BaseAdd__;
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<GravityProvider>_TypeInfo;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<EventSystem>_TypeInfo;
  if ((DAT_06bc3d6e & 1) == 0) {
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<Rotate>__);
    FUN_02f08768(PTR_DAT_067d23f0);
    FUN_02f08768(Method_System_Linq_Expressions_Scope1_GetExpression__);
    FUN_02f08768(Method_System_Xml_Schema_SchemaInfo_GetAttributeXsd__);
    FUN_02f08768(PTR_DAT_067d68f8);
    FUN_02f08768(Method_System_Xml_Schema_SchemaInfo_GetAttributeXdr__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<GravityProvider>_TypeInfo
                );
    FUN_02f08768(Method_System_Runtime_Serialization_SchemaExporter_InvokeSchemaProviderMethod__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<EventSystem>_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(PTR_DAT_067cf740);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_GetPassOrder__
                );
    FUN_02f08768(Method_System_Data_DataTableCollection_BaseAdd__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_OnCameraCleanup__
                );
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_Setup__);
    DAT_06bc3d6e = 1;
  }
  puVar10 = Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_OnCameraCleanup__
  ;
  puVar9 = Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_GetPassOrder__;
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_039f95d0(uVar14,*(undefined8 *)puVar3);
  uVar15 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  uVar14 = thunk_FUN_02f45270(uVar15);
  FUN_03a69210(uVar14,*(undefined8 *)puVar7);
  uVar15 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x120) = uVar14;
  uVar14 = thunk_FUN_02f45270(uVar15);
  FUN_04867c1c(uVar14,*(undefined8 *)Method_System_Linq_Expressions_Scope1_GetExpression__);
  uVar15 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x128) = uVar14;
  uVar14 = thunk_FUN_02f45270(uVar15);
  FUN_05c5c73c(uVar14,*(undefined8 *)
                       Method_UnityEngine_Rendering_Universal_ScreenSpaceAmbientOcclusionPass_Setup__
               ,0);
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  *(undefined8 *)(param_1 + 0x130) = uVar14;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar2 = PTR_DAT_067cb280;
  FUN_05d4c964(param_1,0);
  uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05c5c73c(uVar14,*(undefined8 *)puVar10,0);
  FUN_05d4cbd0(param_1,uVar14,0);
  uVar14 = *(undefined8 *)puVar9;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar14 = thunk_FUN_02f45270(uVar14);
  FUN_05deadb4();
  lVar16 = *(long *)puVar5;
  *(undefined8 *)(param_1 + 0xd8) = uVar14;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar11 = FUN_05dab444(0);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(byte *)(param_1 + 0xcf) = bVar11 & 1;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = Method_Unity_Properties_PropertyBag_Register<Rotate>__;
  puVar4 = PTR_DAT_067d68f8;
  puVar3 = PTR_DAT_067d23f0;
  puVar2 = PTR_DAT_067d13f0;
  iVar12 = FUN_05dd2e14(0);
  iVar1 = iVar12 + 1;
  iVar13 = iVar1;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar13 = FUN_050d65ac(iVar1,iVar12,0);
  }
  uVar14 = FUN_02f0880c(*(undefined8 *)puVar4,iVar13);
  uVar15 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0xf8) = uVar14;
  uVar14 = FUN_02f0880c(uVar15,iVar1);
  uVar15 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0xf0) = uVar14;
  uVar14 = FUN_02f0880c(uVar15,iVar1);
  uVar15 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0xe8) = uVar14;
  uVar14 = FUN_02f0880c(uVar15,iVar13);
  uVar15 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x100) = uVar14;
  uVar14 = FUN_02f0880c(uVar15,iVar13);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar16);
    lVar16 = *(long *)puVar6;
  }
  uVar19 = 0;
  *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x30) = uVar14;
  while( true ) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar16);
      lVar16 = *(long *)puVar6;
    }
    lVar17 = *(long *)(lVar16 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x30);
    if (lVar18 == 0) break;
    if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar19) {
      if (*(char *)(param_1 + 0xcf) == '\0') {
        uVar14 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cf740,iVar12);
        *(undefined8 *)(param_1 + 0x108) = uVar14;
      }
      *(undefined1 *)(param_1 + 0xca) = 1;
      return;
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar16);
      lVar17 = *(long *)(*(long *)puVar6 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x30);
      if (lVar18 == 0) break;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar18 = lVar18 + uVar19 * 0x10;
    uVar14 = *(undefined8 *)(lVar17 + 0xc);
    uVar19 = uVar19 + 1;
    *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar17 + 0x14);
    *(undefined8 *)(lVar18 + 0x20) = uVar14;
    lVar16 = *(long *)puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


