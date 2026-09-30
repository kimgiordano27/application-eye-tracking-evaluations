/*
FUNCTION_NAME: System.Data.DataView$$GetRow
ENTRY_POINT: 01c69124
PROGRAM: Lovesick-libil2cpp.so
SCORE: 228
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Data_DataView__GetRow(long param_1)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar15;
  undefined8 *unaff_x29;
  
  puVar2 = Method_System_DateTime_AddYears__;
  puVar15 = *(undefined8 **)(unaff_x22 + 0xf78);
  if (param_1 != 0) {
    FUN_01298da0(param_1,*(undefined8 *)
                          Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__3__
                );
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0xa0) = param_1;
    plVar10 = (long *)FUN_01780344(*(undefined8 *)puVar2,0);
    puVar2 = Method_System_Collections_Generic_List<Texture>_get_Item__;
    if (plVar10 != (long *)0x0) {
      uVar11 = (**(code **)(*plVar10 + 0x938))(plVar10,*(undefined8 *)(*plVar10 + 0x940));
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xa8) = uVar11;
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
      if (lVar12 != 0) {
        FUN_01298da0(lVar12,*(undefined8 *)PTR_DAT_033f0e10);
        uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
        lVar13 = thunk_FUN_00d62348(*unaff_x29);
        puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
        puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        puVar6 = Method_SpaceShipShieldModule_DialUpdate__;
        puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
        puVar3 = Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__;
        puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
        if (lVar13 != 0) {
          FUN_012dd38c(lVar13,*puVar15);
          uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
          uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
          uVar14 = FUN_01780344(*(undefined8 *)puVar1,0);
          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
          FUN_0129a054(lVar12,uVar11,lVar13,*(undefined8 *)puVar6);
          uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
          lVar13 = thunk_FUN_00d62348(*unaff_x29);
          puVar1 = StringLiteral_5228;
          if (lVar13 != 0) {
            FUN_012dd38c(lVar13,*puVar15);
            puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
            uVar14 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
            uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
            uVar14 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
            uVar14 = FUN_01780344(*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
            FUN_0129a054(lVar12,uVar11,lVar13,
                         *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
            uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
            lVar13 = thunk_FUN_00d62348(*unaff_x29);
            puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
            if (lVar13 != 0) {
              FUN_012dd38c(lVar13,*puVar15);
              puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
              uVar14 = FUN_01780344(*(undefined8 *)
                                     Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                    ,0);
              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
              uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
              uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
              puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
              uVar14 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
              uVar14 = FUN_01780344(*(undefined8 *)
                                     Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
              FUN_0129a054(lVar12,uVar11,lVar13,
                           *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
              uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
              lVar13 = thunk_FUN_00d62348(*unaff_x29);
              puVar1 = 
              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
              ;
              if (lVar13 != 0) {
                FUN_012dd38c(lVar13,*puVar15);
                uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                uVar14 = FUN_01780344(*(undefined8 *)
                                       Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                FUN_0129a054(lVar12,uVar11,lVar13,
                             *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                lVar13 = thunk_FUN_00d62348(*unaff_x29);
                puVar1 = StringLiteral_6673;
                if (lVar13 != 0) {
                  FUN_012dd38c(lVar13,*puVar15);
                  uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                  uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                  uVar14 = FUN_01780344(*(undefined8 *)
                                         Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                  FUN_0129a054(lVar12,uVar11,lVar13,
                               *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                  lVar13 = thunk_FUN_00d62348(*unaff_x29);
                  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                  if (lVar13 != 0) {
                    FUN_012dd38c(lVar13,*puVar15);
                    puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                    uVar14 = FUN_01780344(*(undefined8 *)
                                           Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                    uVar14 = FUN_01780344(*(undefined8 *)
                                           Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                          ,0);
                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                    uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                    uVar14 = FUN_01780344(*(undefined8 *)
                                           Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                    FUN_0129a054(lVar12,uVar11,lVar13,
                                 *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                    lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                               );
                    puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
                    if (lVar13 != 0) {
                      FUN_012dd38c(lVar13,*puVar15);
                      puVar7 = 
                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                            ,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      puVar4 = StringLiteral_6673;
                      uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                            ,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                            ,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      uVar14 = FUN_01780344(*(undefined8 *)
                                             Method_Sirenix_Serialization_Serializer<byte>__ctor__,0
                                           );
                      FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                      FUN_0129a054(lVar12,uVar11,lVar13,
                                   *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                      uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                 );
                      if (lVar13 != 0) {
                        FUN_012dd38c(lVar13,*puVar15);
                        uVar14 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)puVar1,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        puVar9 = 
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ;
                        uVar14 = FUN_01780344(*(undefined8 *)
                                               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                              ,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        puVar2 = 
                        System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ;
                        uVar14 = FUN_01780344(*(undefined8 *)
                                               System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                              ,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)
                                               Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        uVar14 = FUN_01780344(*(undefined8 *)
                                               Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                              ,0);
                        FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                        FUN_0129a054(lVar12,uVar11,lVar13,
                                     *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                        uVar11 = FUN_01780344(*(undefined8 *)
                                               Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0)
                        ;
                        puVar5 = 
                        Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                        ;
                        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                  );
                        puVar8 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                        if (lVar13 != 0) {
                          FUN_012dd38c(lVar13,*(undefined8 *)PTR_DAT_033ecf78);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar1,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar9,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          puVar6 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                          uVar14 = FUN_01780344(*(undefined8 *)
                                                 Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          uVar14 = FUN_01780344(*(undefined8 *)
                                                 Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                ,0);
                          FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                          FUN_0129a054(lVar12,uVar11,lVar13,
                                       *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                          uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
                          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                          puVar1 = PTR_DAT_033ecf78;
                          if (lVar13 != 0) {
                            FUN_012dd38c(lVar13,*(undefined8 *)PTR_DAT_033ecf78);
                            FUN_0129a054(lVar12,uVar11,lVar13,
                                         *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__);
                            uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                      
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                            if (lVar13 != 0) {
                              FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                              FUN_0129a054(lVar12,uVar11,lVar13,
                                           *(undefined8 *)Method_SpaceShipShieldModule_DialUpdate__)
                              ;
                              uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                              if (lVar13 != 0) {
                                FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                                uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar3);
                                FUN_0129a054(lVar12,uVar11,lVar13,
                                             *(undefined8 *)
                                              Method_SpaceShipShieldModule_DialUpdate__);
                                uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                                lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                puVar2 = Method_System_Nullable<float>_GetValueOrDefault__;
                                if (lVar13 != 0) {
                                  FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                                  FUN_0129a054(lVar12,uVar11,lVar13,
                                               *(undefined8 *)
                                                Method_SpaceShipShieldModule_DialUpdate__);
                                  uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                  puVar7 = StringLiteral_10024;
                                  if (lVar13 != 0) {
                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                                    FUN_0129a054(lVar12,uVar11,lVar13,
                                                 *(undefined8 *)
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                                    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                    if (lVar13 != 0) {
                                      FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                                      FUN_0129a054(lVar12,uVar11,lVar13,
                                                   *(undefined8 *)
                                                    Method_SpaceShipShieldModule_DialUpdate__);
                                      puVar4 = 
                                      Method_System_Collections_Generic_List<Collider>_Clear__;
                                      uVar11 = *(undefined8 *)
                                                (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xb8) + 0xa8);
                                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                      if (lVar13 != 0) {
                                        FUN_012dd38c(lVar13,*(undefined8 *)puVar1);
                                        FUN_0129a054(lVar12,uVar11,lVar13,
                                                     *(undefined8 *)
                                                      Method_SpaceShipShieldModule_DialUpdate__);
                                        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0) = lVar12
                                        ;
                                        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                        if (lVar12 != 0) {
                                          FUN_012dd38c(lVar12,*(undefined8 *)puVar1);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0)
                                          ;
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                 OVRPlugin_OVRP_1_50_0_TypeInfo,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0)
                                          ;
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,
                                                  0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                                  
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                                          FUN_012df150(lVar12,uVar11,*(undefined8 *)puVar3);
                                          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8) =
                                               lVar12;
                                          return;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


