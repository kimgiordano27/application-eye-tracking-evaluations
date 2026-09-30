/*
FUNCTION_NAME: System.Net.FileWebRequest$$Abort
ENTRY_POINT: 01f7f7f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01f8145c) */

void System_Net_FileWebRequest__Abort(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 *unaff_x22;
  long *plVar19;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  
  plVar18 = (long *)*param_1;
  uVar8 = FUN_01780344();
                    /* catch() { ... } // from try @ 01f7f734 with catch @ 01f7f7fc
                       catch() { ... } // from try @ 01f7f7cc with catch @ 01f7f7fc */
                    /* try { // try from 01f7f804 to 0207f807 has its CatchHandler @ 01f7f858 */
                    /* try { // try from 01f7f808 to 0207f81f has its CatchHandler @ 01f7f1ac */
  uVar9 = FUN_01780344(*unaff_x22,0);
  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                    /* try { // try from 01f7f820 to 0207f823 has its CatchHandler @ 01f7f83c */
                    /* try { // try from 01f7f824 to 0207f84f has its CatchHandler @ 01f7f1ac */
                    /* catch() { ... } // from try @ 01f7f820 with catch @ 01f7f83c */
  if ((lVar10 != 0) &&
     (FUN_01f7c678(lVar10,uVar9,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_Panel>_Add__,1,0
                   ,0), puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__,
     plVar18 != (long *)0x0)) {
                    /* try { // try from 01f7f850 to 0207f857 has its CatchHandler @ 01f7f858 */
                    /* catch() { ... } // from try @ 01f7f804 with catch @ 01f7f858
                       catch() { ... } // from try @ 01f7f850 with catch @ 01f7f858 */
    (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
    plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
    uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
    uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
    lVar10 = thunk_FUN_00d62348(*unaff_x27);
    if ((lVar10 != 0) &&
       (FUN_01f7c678(lVar10,uVar9,*(undefined8 *)System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                     ,1,0,0),
       puVar2 = 
       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__,
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
      plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
      uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
      uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
      lVar10 = thunk_FUN_00d62348(*unaff_x27);
      if ((lVar10 != 0) &&
         (FUN_01f7c678(lVar10,uVar9,
                       *(undefined8 *)
                        Method_Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>_Free__,1
                       ,0,0),
         puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
         , plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
        plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
        uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
        uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
        lVar10 = thunk_FUN_00d62348(*unaff_x27);
        if ((lVar10 != 0) &&
           (FUN_01f7c678(lVar10,uVar9,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                         ,1,0,0), puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_9__,
           plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
          plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
          uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
          uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
          lVar10 = thunk_FUN_00d62348(*unaff_x27);
          if ((lVar10 != 0) &&
             (FUN_01f7c678(lVar10,uVar9,*(undefined8 *)StringLiteral_238,1,0,0),
             puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__,
             plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x2a8))(plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
            plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
            uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
            uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
            lVar10 = thunk_FUN_00d62348(*unaff_x27);
            if ((lVar10 != 0) &&
               (FUN_01f7c678(lVar10,uVar9,*(undefined8 *)PTR_DAT_033ec6e8,1,0,0),
               puVar5 = Method_Sirenix_Serialization_Serializer<byte>__ctor__,
               plVar18 != (long *)0x0)) {
              (**(code **)(*plVar18 + 0x2a8))
                        (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
              plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
              uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
              uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
              lVar10 = thunk_FUN_00d62348(*unaff_x27);
              if ((lVar10 != 0) &&
                 (FUN_01f7c678(lVar10,uVar9,
                               *(undefined8 *)
                                Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                               ,1,0,0),
                 puVar5 = 
                 Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalMaterialChange__
                 , plVar18 != (long *)0x0)) {
                (**(code **)(*plVar18 + 0x2a8))
                          (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
                lVar10 = thunk_FUN_00d62348(*unaff_x27);
                if ((lVar10 != 0) &&
                   (FUN_01f7c678(lVar10,uVar9,
                                 *(undefined8 *)
                                  System_Collections_Generic_List<BillingPlan>_TypeInfo,1,0,0),
                   puVar5 = 
                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                   , plVar18 != (long *)0x0)) {
                  (**(code **)(*plVar18 + 0x2a8))
                            (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                  plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                  uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
                  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                  if ((lVar10 != 0) &&
                     (FUN_01f7c678(lVar10,uVar9,
                                   *(undefined8 *)
                                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                   ,1,0,0),
                     puVar3 = 
                     Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass21_0_<DOAnchorMin>b__1__,
                     plVar18 != (long *)0x0)) {
                    (**(code **)(*plVar18 + 0x2a8))
                              (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    puVar6 = StringLiteral_3349;
                    puVar3 = Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_Add__
                    ;
                    if (lVar10 != 0) {
                      FUN_01ebee44(lVar10,0);
                      *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)puVar3;
                      plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                      uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
                      uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
                      plVar19 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
                      if (plVar19 != (long *)0x0) {
                        plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                    (plVar19,uVar11,
                                                     *(undefined8 *)(*plVar19 + 0x310));
                        lVar12 = thunk_FUN_00d62348(*unaff_x27);
                        if (lVar12 != 0) {
                          if (plVar19 != (long *)0x0) {
                            lVar15 = *unaff_x27;
                            if ((*(byte *)(*plVar19 + 300) < *(byte *)(lVar15 + 300)) ||
                               (*(long *)(*(long *)(*plVar19 + 200) +
                                          (ulong)*(byte *)(lVar15 + 300) * 8 + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da544c(plVar19,lVar15,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__
                                          );
                            }
                          }
                          FUN_01f7c678(lVar12,uVar9,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<JsonSchemaNode>_get_Item__
                                       ,1,plVar19,lVar10);
                          puVar3 = 
                          Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
                          if (plVar18 != (long *)0x0) {
                            (**(code **)(*plVar18 + 0x2a8))
                                      (plVar18,uVar8,lVar12,*(undefined8 *)(*plVar18 + 0x2b0));
                            plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                            uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                            uVar9 = FUN_01780344(*(undefined8 *)puVar3,0);
                            lVar10 = thunk_FUN_00d62348(*unaff_x27);
                            if ((lVar10 != 0) &&
                               (FUN_01f7c678(lVar10,uVar9,
                                             *(undefined8 *)
                                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                             ,1,0,0), puVar3 = OVRPlugin_OVRP_1_50_0_TypeInfo,
                               plVar18 != (long *)0x0)) {
                              (**(code **)(*plVar18 + 0x2a8))
                                        (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                              plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                              uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                              uVar9 = FUN_01780344(*(undefined8 *)puVar3,0);
                              lVar10 = thunk_FUN_00d62348(*unaff_x27);
                              if ((lVar10 != 0) &&
                                 (FUN_01f7c678(lVar10,uVar9,*(undefined8 *)StringLiteral_4884,1,0,0)
                                 , puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__,
                                 plVar18 != (long *)0x0)) {
                                (**(code **)(*plVar18 + 0x2a8))
                                          (plVar18,uVar8,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                                plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                uVar8 = FUN_01780344(*(undefined8 *)puVar3,0);
                                uVar9 = FUN_01780344(*(undefined8 *)puVar3,0);
                                plVar19 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                uVar11 = FUN_01780344(*unaff_x29,0);
                                if (plVar19 != (long *)0x0) {
                                  plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                              (plVar19,uVar11,
                                                               *(undefined8 *)(*plVar19 + 0x310));
                                  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                  puVar3 = PTR_DAT_033f1220;
                                  if (lVar10 != 0) {
                                    if (plVar19 != (long *)0x0) {
                                      lVar12 = *unaff_x27;
                                      if ((*(byte *)(*plVar19 + 300) < *(byte *)(lVar12 + 300)) ||
                                         (*(long *)(*(long *)(*plVar19 + 200) +
                                                    (ulong)*(byte *)(lVar12 + 300) * 8 + -8) !=
                                          lVar12)) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da544c(plVar19,lVar12,
                                                     *(undefined8 *)
                                                      Method_Messenger<SetList>_RemoveListener__);
                                      }
                                    }
                                    FUN_01f7c678(lVar10,uVar9,
                                                 *(undefined8 *)
                                                  Method_Messenger<SetList>_RemoveListener__,1,
                                                 plVar19,0);
                                    puVar6 = Method_SoccerBlocker_HideCrowd__;
                                    if (plVar18 != (long *)0x0) {
                                      (**(code **)(*plVar18 + 0x2a8))
                                                (plVar18,uVar8,lVar10,
                                                 *(undefined8 *)(*plVar18 + 0x2b0));
                                      plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                      uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
                                      uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
                                      lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                      if ((lVar10 != 0) &&
                                         (FUN_01f7c678(lVar10,uVar9,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
                                                  ,0,0,0), puVar6 = StringLiteral_11159,
                                         plVar18 != (long *)0x0)) {
                                        (**(code **)(*plVar18 + 0x2a8))
                                                  (plVar18,uVar8,lVar10,
                                                   *(undefined8 *)(*plVar18 + 0x2b0));
                                        plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                        uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
                                        uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
                                        lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                        if ((lVar10 != 0) &&
                                           (FUN_01f7c678(lVar10,uVar9,
                                                         *(undefined8 *)StringLiteral_12526,1,0,0),
                                           puVar4 = StringLiteral_4052, plVar18 != (long *)0x0)) {
                                          (**(code **)(*plVar18 + 0x2a8))
                                                    (plVar18,uVar8,lVar10,
                                                     *(undefined8 *)(*plVar18 + 0x2b0));
                                          plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                          uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                                          uVar9 = FUN_01780344(*(undefined8 *)puVar4,0);
                                          lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                          if ((lVar10 != 0) &&
                                             (FUN_01f7c678(lVar10,uVar9,
                                                           *(undefined8 *)PTR_DAT_033f12a0,0,0,0),
                                             puVar4 = 
                                             System_Reflection_RuntimePropertyInfo___TypeInfo,
                                             plVar18 != (long *)0x0)) {
                                            (**(code **)(*plVar18 + 0x2a8))
                                                      (plVar18,uVar8,lVar10,
                                                       *(undefined8 *)(*plVar18 + 0x2b0));
                                            plVar18 = (long *)**(undefined8 **)(*unaff_x26 + 0xb8);
                                            uVar8 = FUN_01780344(*(undefined8 *)puVar4,0);
                                            uVar9 = FUN_01780344(*(undefined8 *)puVar4,0);
                                            lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                            if ((lVar10 != 0) &&
                                               (FUN_01f7c678(lVar10,uVar9,
                                                             *(undefined8 *)StringLiteral_3711,0,0,0
                                                            ), plVar18 != (long *)0x0)) {
                                              (**(code **)(*plVar18 + 0x2a8))
                                                        (plVar18,uVar8,lVar10,
                                                         *(undefined8 *)(*plVar18 + 0x2b0));
                                              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                              if (lVar10 != 0) {
                                                FUN_01747a0c(lVar10,0);
                                                plVar18 = (long *)**(long **)(*unaff_x26 + 0xb8);
                                                (*(long **)(*unaff_x26 + 0xb8))[1] = lVar10;
                                                if ((plVar18 != (long *)0x0) &&
                                                   (plVar18 = (long *)(**(code **)(*plVar18 + 0x398)
                                                                      )(plVar18,*(undefined8 *)
                                                                                 (*plVar18 + 0x3a0))
                                                   , plVar18 != (long *)0x0)) {
                                                  lVar10 = *plVar18;
                                                  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                                  if (uVar16 != 0) {
                                                    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar17 + -2) ==
                                                          *(long *)
                                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                                  ) {
                                                    puVar13 = (undefined8 *)
                                                              (lVar10 + (long)*piVar17 * 0x10 +
                                                              0x138);
                                                    goto LAB_01f802d8;
                                                  }
                                                  uVar16 = uVar16 - 1;
                                                  piVar17 = piVar17 + 4;
                                                  } while (uVar16 != 0);
                                                  }
                                                  puVar13 = (undefined8 *)
                                                            FUN_00d59724(plVar18,*(long *)
                                                  Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                                                  ,0);
LAB_01f802d8:
                                                  puVar7 = StringLiteral_10310;
                                                  plVar18 = (long *)(*(code *)*puVar13)(plVar18,
                                                  puVar13[1]);
                                                  puVar4 = 
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                                  ;
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  do {
                                                    lVar12 = *plVar18;
                                                    lVar10 = *(long *)puVar4;
                                                    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                                    if (uVar16 != 0) {
                                                      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar17 + -2) == lVar10) {
                                                          puVar13 = (undefined8 *)
                                                                    (lVar12 + (long)*piVar17 * 0x10
                                                                    + 0x138);
                                                          goto LAB_01f80348;
                                                        }
                                                        uVar16 = uVar16 - 1;
                                                        piVar17 = piVar17 + 4;
                                                      } while (uVar16 != 0);
                                                    }
                                                    puVar13 = (undefined8 *)
                                                              FUN_00d59724(plVar18,lVar10,0);
LAB_01f80348:
                                                    uVar16 = (*(code *)*puVar13)(plVar18,puVar13[1])
                                                    ;
                                                    if ((uVar16 & 1) == 0) {
                                                      plVar18 = (long *)thunk_FUN_00d6225c(plVar18,*
                                                  (undefined8 *)puVar7);
                                                  if (plVar18 == (long *)0x0) goto LAB_01f80480;
                                                  lVar10 = *plVar18;
                                                  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                                  if (uVar16 == 0) goto LAB_01f80458;
                                                  piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                  goto LAB_01f80440;
                                                  }
                                                  lVar12 = *plVar18;
                                                  lVar10 = *(long *)puVar4;
                                                  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                                  if (uVar16 != 0) {
                                                    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar17 + -2) == lVar10) {
                                                        puVar13 = (undefined8 *)
                                                                  (lVar12 + (long)(*piVar17 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_01f803a8;
                                                      }
                                                      uVar16 = uVar16 - 1;
                                                      piVar17 = piVar17 + 4;
                                                    } while (uVar16 != 0);
                                                  }
                                                  puVar13 = (undefined8 *)
                                                            FUN_00d59724(plVar18,lVar10,1);
LAB_01f803a8:
                                                  plVar19 = (long *)(*(code *)*puVar13)(plVar18,
                                                  puVar13[1]);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  bVar1 = *(byte *)(*unaff_x27 + 300);
                                                  if ((*(byte *)(*plVar19 + 300) < bVar1) ||
                                                     (*(long *)(*(long *)(*plVar19 + 200) +
                                                                (ulong)bVar1 * 8 + -8) != *unaff_x27
                                                     )) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c(plVar19);
                                                  }
                                                  plVar14 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 8);
                                                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  (**(code **)(*plVar14 + 0x2a8))
                                                            (plVar14,plVar19[3],plVar19,
                                                             *(undefined8 *)(*plVar14 + 0x2b0));
                                                  } while( true );
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01f81430;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01f813cc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto System_Net_WebProxy__IsLocalInProxyHash;
    }
  }
LAB_01f813e4:
  puVar13 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar7,0);
System_Net_WebProxy__IsLocalInProxyHash:
  (*(code *)*puVar13)(plVar18,puVar13[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_01f80440:
    if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01f80474;
    }
  }
LAB_01f80458:
  puVar13 = (undefined8 *)FUN_00d59724(plVar18,*(long *)puVar7,0);
LAB_01f80474:
  (*(code *)*puVar13)(plVar18,puVar13[1]);
LAB_01f80480:
  uVar8 = *(undefined8 *)puVar2;
  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_01780344(uVar8,0);
  lVar10 = thunk_FUN_00d62348(*unaff_x27);
  puVar4 = PTR_DAT_033f2f40;
  if ((lVar10 != 0) &&
     (FUN_01f7c678(lVar10,uVar8,*(undefined8 *)PTR_DAT_033f2f40,1,0,0), plVar18 != (long *)0x0)) {
    (**(code **)(*plVar18 + 0x2a8))
              (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
    uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
    lVar10 = thunk_FUN_00d62348(*unaff_x27);
    puVar4 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
    if ((lVar10 != 0) &&
       (FUN_01f7c678(lVar10,uVar8,
                     *(undefined8 *)Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo,1,0,0),
       plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x2a8))
                (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
      plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
      uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
      lVar10 = thunk_FUN_00d62348(*unaff_x27);
      puVar4 = Method_System_Xml_Schema_Datatype_List_TryParseValue__;
      if ((lVar10 != 0) &&
         (FUN_01f7c678(lVar10,uVar8,
                       *(undefined8 *)Method_System_Xml_Schema_Datatype_List_TryParseValue__,1,0,0),
         plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x2a8))
                  (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
        plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
        uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
        lVar10 = thunk_FUN_00d62348(*unaff_x27);
        puVar4 = 
        System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
        ;
        if ((lVar10 != 0) &&
           (FUN_01f7c678(lVar10,uVar8,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                         ,1,0,0), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x2a8))
                    (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
          plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
          uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
          lVar10 = thunk_FUN_00d62348(*unaff_x27);
          puVar4 = UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
          if ((lVar10 != 0) &&
             (FUN_01f7c678(lVar10,uVar8,
                           *(undefined8 *)UnityEngine_UIElements_UIR_Tessellation_TypeInfo,1,0,0),
             plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x2a8))
                      (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
            plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
            uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
            lVar10 = thunk_FUN_00d62348(*unaff_x27);
            puVar4 = Method_UnityEngine_InputSystem_InputSystem_AddDevice__;
            if ((lVar10 != 0) &&
               (FUN_01f7c678(lVar10,uVar8,
                             *(undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__,1
                             ,0,0), plVar18 != (long *)0x0)) {
              (**(code **)(*plVar18 + 0x2a8))
                        (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
              plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
              uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
              lVar10 = thunk_FUN_00d62348(*unaff_x27);
              puVar4 = Method_System_Data_DataView_System_Collections_IList_Insert__;
              if ((lVar10 != 0) &&
                 (FUN_01f7c678(lVar10,uVar8,
                               *(undefined8 *)
                                Method_System_Data_DataView_System_Collections_IList_Insert__,1,0,0)
                 , plVar18 != (long *)0x0)) {
                (**(code **)(*plVar18 + 0x2a8))
                          (plVar18,*(undefined8 *)puVar4,lVar10,*(undefined8 *)(*plVar18 + 0x2b0));
                plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                uVar8 = FUN_01780344(*(undefined8 *)puVar2,0);
                lVar10 = thunk_FUN_00d62348(*unaff_x27);
                puVar2 = 
                Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                ;
                if ((lVar10 != 0) &&
                   (FUN_01f7c678(lVar10,uVar8,
                                 *(undefined8 *)
                                  Field_<PrivateImplementationDetails>_11047585FE102FBB5CADB42446612A578D88C6EF5ED076BB7AC360C4F9E4373D
                                 ,1,0,0), plVar18 != (long *)0x0)) {
                  (**(code **)(*plVar18 + 0x2a8))
                            (plVar18,*(undefined8 *)puVar2,lVar10,*(undefined8 *)(*plVar18 + 0x2b0))
                  ;
                  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                  puVar2 = Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__;
                  if ((lVar10 != 0) &&
                     (FUN_01f7c678(lVar10,uVar8,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__
                                   ,1,0,0), plVar18 != (long *)0x0)) {
                    (**(code **)(*plVar18 + 0x2a8))
                              (plVar18,*(undefined8 *)puVar2,lVar10,
                               *(undefined8 *)(*plVar18 + 0x2b0));
                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                    puVar2 = 
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                    ;
                    if ((lVar10 != 0) &&
                       (FUN_01f7c678(lVar10,uVar8,
                                     *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
                                     ,1,0,0), plVar18 != (long *)0x0)) {
                      (**(code **)(*plVar18 + 0x2a8))
                                (plVar18,*(undefined8 *)puVar2,lVar10,
                                 *(undefined8 *)(*plVar18 + 0x2b0));
                      plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                      uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                      lVar10 = thunk_FUN_00d62348(*unaff_x27);
                      puVar2 = StringLiteral_4078;
                      if ((lVar10 != 0) &&
                         (FUN_01f7c678(lVar10,uVar8,*(undefined8 *)StringLiteral_4078,1,0,0),
                         plVar18 != (long *)0x0)) {
                        (**(code **)(*plVar18 + 0x2a8))
                                  (plVar18,*(undefined8 *)puVar2,lVar10,
                                   *(undefined8 *)(*plVar18 + 0x2b0));
                        plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                        uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                        lVar10 = thunk_FUN_00d62348(*unaff_x27);
                        puVar2 = StringLiteral_6145;
                        if ((lVar10 != 0) &&
                           (FUN_01f7c678(lVar10,uVar8,*(undefined8 *)StringLiteral_6145,1,0,0),
                           plVar18 != (long *)0x0)) {
                          (**(code **)(*plVar18 + 0x2a8))
                                    (plVar18,*(undefined8 *)puVar2,lVar10,
                                     *(undefined8 *)(*plVar18 + 0x2b0));
                          plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                          uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                          lVar10 = thunk_FUN_00d62348(*unaff_x27);
                          puVar2 = Method_System_Collections_Generic_List<RadioButton>_get_Item__;
                          if ((lVar10 != 0) &&
                             (FUN_01f7c678(lVar10,uVar8,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                           ,1,0,0), plVar18 != (long *)0x0)) {
                            (**(code **)(*plVar18 + 0x2a8))
                                      (plVar18,*(undefined8 *)puVar2,lVar10,
                                       *(undefined8 *)(*plVar18 + 0x2b0));
                            plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                            uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                            lVar10 = thunk_FUN_00d62348(*unaff_x27);
                            puVar2 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                            ;
                            if ((lVar10 != 0) &&
                               (FUN_01f7c678(lVar10,uVar8,
                                             *(undefined8 *)
                                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                             ,1,0,0), plVar18 != (long *)0x0)) {
                              (**(code **)(*plVar18 + 0x2a8))
                                        (plVar18,*(undefined8 *)puVar2,lVar10,
                                         *(undefined8 *)(*plVar18 + 0x2b0));
                              plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                              uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                              lVar10 = thunk_FUN_00d62348(*unaff_x27);
                              puVar2 = Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                              if ((lVar10 != 0) &&
                                 (FUN_01f7c678(lVar10,uVar8,
                                               *(undefined8 *)
                                                Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var,1,0,
                                               0), plVar18 != (long *)0x0)) {
                                (**(code **)(*plVar18 + 0x2a8))
                                          (plVar18,*(undefined8 *)puVar2,lVar10,
                                           *(undefined8 *)(*plVar18 + 0x2b0));
                                plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                puVar2 = 
                                Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                ;
                                if ((lVar10 != 0) &&
                                   (FUN_01f7c678(lVar10,uVar8,
                                                 *(undefined8 *)
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                 ,1,0,0), plVar18 != (long *)0x0)) {
                                  (**(code **)(*plVar18 + 0x2a8))
                                            (plVar18,*(undefined8 *)puVar2,lVar10,
                                             *(undefined8 *)(*plVar18 + 0x2b0));
                                  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__;
                                  if ((lVar10 != 0) &&
                                     (FUN_01f7c678(lVar10,uVar8,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                    (**(code **)(*plVar18 + 0x2a8))
                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                    puVar2 = System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                    if ((lVar10 != 0) &&
                                       (FUN_01f7c678(lVar10,uVar8,
                                                     *(undefined8 *)
                                                      System_Net_WebSockets_WebSocketHandle_TypeInfo
                                                     ,1,0,0), plVar18 != (long *)0x0)) {
                                      (**(code **)(*plVar18 + 0x2a8))
                                                (plVar18,*(undefined8 *)puVar2,lVar10,
                                                 *(undefined8 *)(*plVar18 + 0x2b0));
                                      plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                      uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                      lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_GetComponent<RectTransform>__;
                                      if ((lVar10 != 0) &&
                                         (FUN_01f7c678(lVar10,uVar8,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                        (**(code **)(*plVar18 + 0x2a8))
                                                  (plVar18,*(undefined8 *)puVar2,lVar10,
                                                   *(undefined8 *)(*plVar18 + 0x2b0));
                                        plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                        uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                        lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                        puVar2 = 
                                        Method_System_Configuration_IgnoreSection_ResetModified__;
                                        if ((lVar10 != 0) &&
                                           (FUN_01f7c678(lVar10,uVar8,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Configuration_IgnoreSection_ResetModified__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                          (**(code **)(*plVar18 + 0x2a8))
                                                    (plVar18,*(undefined8 *)puVar2,lVar10,
                                                     *(undefined8 *)(*plVar18 + 0x2b0));
                                          plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                          uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
                                          lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                          puVar2 = 
                                          Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                          ;
                                          if ((lVar10 != 0) &&
                                             (FUN_01f7c678(lVar10,uVar8,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                            (**(code **)(*plVar18 + 0x2a8))
                                                      (plVar18,*(undefined8 *)puVar2,lVar10,
                                                       *(undefined8 *)(*plVar18 + 0x2b0));
                                            plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8);
                                            uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                            lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                            puVar2 = StringLiteral_4952;
                                            if ((lVar10 != 0) &&
                                               (FUN_01f7c678(lVar10,uVar8,
                                                             *(undefined8 *)StringLiteral_4952,1,0,0
                                                            ), plVar18 != (long *)0x0)) {
                                              (**(code **)(*plVar18 + 0x2a8))
                                                        (plVar18,*(undefined8 *)puVar2,lVar10,
                                                         *(undefined8 *)(*plVar18 + 0x2b0));
                                              plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) + 8)
                                              ;
                                              uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                              lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                              puVar2 = Method_OVRSpaceQuery_Options_ToQueryInfo__;
                                              if ((lVar10 != 0) &&
                                                 (FUN_01f7c678(lVar10,uVar8,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_OVRSpaceQuery_Options_ToQueryInfo__,1,0,0),
                                                 plVar18 != (long *)0x0)) {
                                                (**(code **)(*plVar18 + 0x2a8))
                                                          (plVar18,*(undefined8 *)puVar2,lVar10,
                                                           *(undefined8 *)(*plVar18 + 0x2b0));
                                                plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8) +
                                                                    8);
                                                uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                puVar2 = OVROverlay_TypeInfo;
                                                if ((lVar10 != 0) &&
                                                   (FUN_01f7c678(lVar10,uVar8,
                                                                 *(undefined8 *)OVROverlay_TypeInfo,
                                                                 1,0,0), plVar18 != (long *)0x0)) {
                                                  (**(code **)(*plVar18 + 0x2a8))
                                                            (plVar18,*(undefined8 *)puVar2,lVar10,
                                                             *(undefined8 *)(*plVar18 + 0x2b0));
                                                  plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 8);
                                                  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                  puVar2 = PTR_DAT_033eced0;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_01f7c678(lVar10,uVar8,
                                                                   *(undefined8 *)PTR_DAT_033eced0,1
                                                                   ,0,0), plVar18 != (long *)0x0)) {
                                                    (**(code **)(*plVar18 + 0x2a8))
                                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_01f7c678(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<VisualElementAsset>_get_Current__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                                    (**(code **)(*plVar18 + 0x2a8))
                                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = StringLiteral_1905;
                                                    if ((lVar10 != 0) &&
                                                       (FUN_01f7c678(lVar10,uVar8,
                                                                     *(undefined8 *)
                                                                      StringLiteral_1905,1,0,0),
                                                       plVar18 != (long *)0x0)) {
                                                      (**(code **)(*plVar18 + 0x2a8))
                                                                (plVar18,*(undefined8 *)puVar2,
                                                                 lVar10,*(undefined8 *)
                                                                         (*plVar18 + 0x2b0));
                                                      plVar18 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                      lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                      puVar2 = 
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_01f7c678(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_Mono_Security_X509_PKCS12_AddPrivateKey__,1
                                                  ,0,0), plVar18 != (long *)0x0)) {
                                                    (**(code **)(*plVar18 + 0x2a8))
                                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = 
                                                  UnityEngine_UIElements_TreeView_TypeInfo;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_01f7c678(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_TreeView_TypeInfo,1,0,0),
                                                  plVar18 != (long *)0x0)) {
                                                    (**(code **)(*plVar18 + 0x2a8))
                                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                                    plVar18 = *(long **)(*(long *)(*unaff_x26 + 0xb8
                                                                                  ) + 8);
                                                    uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    lVar10 = thunk_FUN_00d62348(*unaff_x27);
                                                    puVar2 = 
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ;
                                                  if ((lVar10 != 0) &&
                                                     (FUN_01f7c678(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                                  ,1,0,0), plVar18 != (long *)0x0)) {
                                                    (**(code **)(*plVar18 + 0x2a8))
                                                              (plVar18,*(undefined8 *)puVar2,lVar10,
                                                               *(undefined8 *)(*plVar18 + 0x2b0));
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar10 != 0) {
                                                      FUN_01747a0c(lVar10,0);
                                                      uVar8 = FUN_0174945c(lVar10,0);
                                                      plVar18 = *(long **)(*(long *)(*unaff_x26 +
                                                                                    0xb8) + 8);
                                                      *(undefined8 *)
                                                       (*(long *)(*unaff_x26 + 0xb8) + 0x18) = uVar8
                                                      ;
                                                      if (plVar18 != (long *)0x0) {
                                                        plVar18 = (long *)(**(code **)(*plVar18 +
                                                                                      0x328))(
                                                  plVar18,*(undefined8 *)(*plVar18 + 0x330));
                                                  puVar5 = 
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                                  ;
                                                  puVar2 = 
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                                                  ;
                                                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  do {
                                                    lVar12 = *plVar18;
                                                    lVar10 = *(long *)puVar5;
                                                    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                                    if (uVar16 != 0) {
                                                      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar17 + -2) == lVar10) {
                                                          puVar13 = (undefined8 *)
                                                                    (lVar12 + (long)*piVar17 * 0x10
                                                                    + 0x138);
                                                          goto LAB_01f81274;
                                                        }
                                                        uVar16 = uVar16 - 1;
                                                        piVar17 = piVar17 + 4;
                                                      } while (uVar16 != 0);
                                                    }
                                                    puVar13 = (undefined8 *)
                                                              FUN_00d59724(plVar18,lVar10,0);
LAB_01f81274:
                                                    uVar16 = (*(code *)*puVar13)(plVar18,puVar13[1])
                                                    ;
                                                    if ((uVar16 & 1) == 0) {
                                                      plVar18 = (long *)thunk_FUN_00d6225c(plVar18,*
                                                  (undefined8 *)puVar7);
                                                  if (plVar18 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar10 = *plVar18;
                                                  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12a);
                                                  if (uVar16 == 0) goto LAB_01f813e4;
                                                  piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                                  goto LAB_01f813cc;
                                                  }
                                                  lVar12 = *plVar18;
                                                  lVar10 = *(long *)puVar5;
                                                  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                                                  if (uVar16 != 0) {
                                                    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar17 + -2) == lVar10) {
                                                        puVar13 = (undefined8 *)
                                                                  (lVar12 + (long)(*piVar17 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_01f812d4;
                                                      }
                                                      uVar16 = uVar16 - 1;
                                                      piVar17 = piVar17 + 4;
                                                    } while (uVar16 != 0);
                                                  }
                                                  puVar13 = (undefined8 *)
                                                            FUN_00d59724(plVar18,lVar10,1);
LAB_01f812d4:
                                                  plVar19 = (long *)(*(code *)*puVar13)(plVar18,
                                                  puVar13[1]);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  if (*(long *)(*plVar19 + 0x40) !=
                                                      *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  puVar13 = (undefined8 *)thunk_FUN_00d624a0();
                                                  plVar19 = (long *)puVar13[1];
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  lVar10 = *unaff_x27;
                                                  if ((*(byte *)(*plVar19 + 300) <
                                                       *(byte *)(lVar10 + 300)) ||
                                                     (*(long *)(*(long *)(*plVar19 + 200) +
                                                                (ulong)*(byte *)(lVar10 + 300) * 8 +
                                                               -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da544c();
                                                  }
                                                  uVar8 = *puVar13;
                                                  lVar12 = plVar19[2];
                                                  lVar15 = plVar19[3];
                                                  lVar10 = thunk_FUN_00d62348(lVar10);
                                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  FUN_01f7c678(lVar10,lVar12,lVar15,1,0,0);
                                                  *(undefined1 *)(lVar10 + 0x61) = 1;
                                                  plVar19 = *(long **)(*(long *)(*unaff_x26 + 0xb8)
                                                                      + 0x18);
                                                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da518c();
                                                  }
                                                  (**(code **)(*plVar19 + 0x2a8))
                                                            (plVar19,uVar8,lVar10,
                                                             *(undefined8 *)(*plVar19 + 0x2b0));
                                                  } while( true );
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01f81430:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


