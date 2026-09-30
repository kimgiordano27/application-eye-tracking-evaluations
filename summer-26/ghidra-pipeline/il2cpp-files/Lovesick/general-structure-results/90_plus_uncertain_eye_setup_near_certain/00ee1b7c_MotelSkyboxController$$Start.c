/*
FUNCTION_NAME: MotelSkyboxController$$Start
ENTRY_POINT: 00ee1b7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void MotelSkyboxController__Start(void)

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
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_635);
                    /* try { // try from 00ee1b90 to 00fe1b9b has its CatchHandler @ 00ee1b9c */
  thunk_FUN_00d48444(Method_System_Linq_Enumerable_Select<Edge,_EdgeLookup>__);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1b90 with catch @ 00ee1b9c
                       try { // try from 00ee1b9c to 00fe1bf7 has its CatchHandler @ 00ee1a28 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1a78 with catch @ 00ee1ba0
                        */
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_InitializeThresholds__
                    );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1ae0 with catch @ 00ee1ba8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1b1c with catch @ 00ee1bac
                        */
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1a9c with catch @ 00ee1bb4
                        */
  *(undefined1 *)(unaff_x19 + 0x32f) = 1;
  puVar9 = StringLiteral_1415;
  puVar8 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar7 = 
  Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_InitializeThresholds__
  ;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
  ;
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar4 = 
  UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRCameraSubsystem,_XRCameraSubsystemDescriptor,_XRCameraSubsystem_Provider>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
  puVar2 = PTR_DAT_033f1c28;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = 0;
  if (*(long *)(unaff_x20 + 0x98) != 0) {
                    /* try { // try from 00ee1bf8 to 00fe1bfb has its CatchHandler @ 00ee1bfc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1bf8 with catch @ 00ee1bfc
                        */
                    /* try { // try from 00ee1c00 to 00fe1c03 has its CatchHandler @ 00ee1c0c */
                    /* try { // try from 00ee1c04 to 00fe1c0f has its CatchHandler @ 00ee1a28 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1c00 with catch @ 00ee1c0c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1d1c with catch @ 00ee1c10
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1d8c with catch @ 00ee1c10
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1df4 with catch @ 00ee1c10
                        */
    FUN_01323390(*(long *)(unaff_x20 + 0x98),&stack0x00000018,*(undefined8 *)StringLiteral_635);
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    while (uVar10 = FUN_012b894c(&stack0x00000050,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      uVar11 = FUN_00ac2bf8(&stack0x00000050,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* try { // try from 00ee1c64 to 00fe1c67 has its CatchHandler @ 00ee1d90 */
      FUN_0268c114(uVar11,0);
    }
    FUN_012b8948(&stack0x00000050,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                );
                    /* try { // try from 00ee1c88 to 00fe1c97 has its CatchHandler @ 00ee1da4 */
    lVar14 = *(long *)(unaff_x20 + 0x98);
    if (lVar14 != 0) {
      lVar13 = *(long *)StringLiteral_4997;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar1) {
                    /* try { // try from 00ee1ccc to 00fe1ceb has its CatchHandler @ 00ee1d98 */
          FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        }
      }
      *(long *)(unaff_x20 + 0x78) = unaff_x22;
      if (unaff_x22 != 0) {
        FUN_01323390();
                    /* try { // try from 00ee1d08 to 00fe1d1b has its CatchHandler @ 00ee1d9c */
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
                    /* try { // try from 00ee1d1c to 00fe1d7f has its CatchHandler @ 00ee1c10 */
        while (uVar10 = FUN_012b894c(&stack0x00000030,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
          uVar11 = FUN_00ac91e8(&stack0x00000030,*(undefined8 *)puVar8);
          if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
          uVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (*(long *)(unaff_x20 + 0x60),0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_0112fe80(uVar15,uVar12,*(undefined8 *)puVar7);
          if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
                    /* try { // try from 00ee1d80 to 00fe1d8b has its CatchHandler @ 00ee1d8c */
          FUN_00ac8520(*(long *)(unaff_x20 + 0x98),lVar14,*(undefined8 *)puVar9);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1d80 with catch @ 00ee1d8c
                       try { // try from 00ee1d8c to 00fe1de7 has its CatchHandler @ 00ee1c10 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1c64 with catch @ 00ee1d90
                        */
          FUN_010e5b20(lVar14,&stack0x00000068,*(undefined8 *)puVar3);
          lVar14 = in_stack_00000068;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1ccc with catch @ 00ee1d98
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1d08 with catch @ 00ee1d9c
                        */
          if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined8 *)(in_stack_00000068 + 0x100) = uVar11;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1c88 with catch @ 00ee1da4
                        */
          FUN_02689f9c(in_stack_00000068,0,0);
          FUN_02689f9c(lVar14,1,0);
        }
        FUN_012b8948(&stack0x00000030,
                     *(undefined8 *)
                      System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo);
        if ((in_stack_00000010 & 0x100000000) != 0) {
                    /* try { // try from 00ee1de8 to 00fe1deb has its CatchHandler @ 00ee1dec */
          if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_00ee1f08;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1de8 with catch @ 00ee1dec
                        */
          uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
                    /* try { // try from 00ee1df0 to 00fe1df3 has its CatchHandler @ 00ee1dfc */
                    /* try { // try from 00ee1df4 to 00fe1dff has its CatchHandler @ 00ee1c10 */
          uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (*(long *)(unaff_x20 + 0x60),0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1df0 with catch @ 00ee1dfc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1f50 with catch @ 00ee1e00
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1fcc with catch @ 00ee1e00
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee2010 with catch @ 00ee1e00
                        */
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          lVar14 = FUN_0112fe80(uVar12,uVar11,*(undefined8 *)puVar7);
          if ((*(long *)(unaff_x20 + 0x98) == 0) ||
             (FUN_00ac8520(*(long *)(unaff_x20 + 0x98),lVar14,*(undefined8 *)puVar9), lVar14 == 0))
          goto LAB_00ee1f08;
                    /* try { // try from 00ee1e50 to 00fe1e53 has its CatchHandler @ 00ee1fd0 */
          FUN_010e5b20(lVar14,&stack0x00000018,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                      );
          *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000018;
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                                     );
          if (lVar14 == 0) goto LAB_00ee1f08;
          FUN_017b46ec(lVar14,0);
          lVar13 = *(long *)(unaff_x20 + 0xb8);
          if (lVar13 == 0) goto LAB_00ee1f08;
          *(long *)(lVar13 + 0x100) = lVar14;
                    /* try { // try from 00ee1e98 to 00fe1f2b has its CatchHandler @ 00ee2018 */
          FUN_02689f9c(lVar13,0,0);
          FUN_02689f9c(lVar13,1,0);
          if (*(long *)(unaff_x20 + 0xb8) == 0) goto LAB_00ee1f08;
          *(undefined8 *)(*(long *)(unaff_x20 + 0xb8) + 0x110) = in_stack_00000008;
        }
        if ((*(long *)(unaff_x20 + 0x88) != 0) &&
           (lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                               (*(long *)(unaff_x20 + 0x88),0), lVar14 != 0)) {
          FUN_026a10b4(lVar14,0);
          return;
        }
      }
    }
  }
LAB_00ee1f08:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


