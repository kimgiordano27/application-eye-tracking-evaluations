/*
FUNCTION_NAME: System.Xml.Schema.Compiler$$CannonicalizePointlessRoot
ENTRY_POINT: 01da6d70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_Schema_Compiler__CannonicalizePointlessRoot(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  
                    /* catch() { ... } // from try @ 01da6c10 with catch @ 01da6d70 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 01da6bf8 with catch @ 01da6d74 */
                    /* catch() { ... } // from try @ 01da67d4 with catch @ 01da6d78 */
                    /* catch() { ... } // from try @ 01da6778 with catch @ 01da6d7c */
    uVar6 = *(undefined8 *)StringLiteral_4078;
    FUN_017b46ec(param_1,0);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 0x18) = unaff_x21;
                    /* try { // try from 01da6d94 to 01ea6d97 has its CatchHandler @ 01da6e14 */
    lVar4 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar4 == 0) {
LAB_01da7b30:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    if (9 < *unaff_x24) {
      unaff_x19[0xd] = param_1;
      uVar6 = FUN_01780344(*unaff_x22,0);
      lVar4 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar4 == 0) goto LAB_01da7b2c;
                    /* try { // try from 01da6de0 to 01ea6e13 has its CatchHandler @ 01da6f6c */
      uVar7 = *(undefined8 *)System_Collections_Generic_List<BillingPlan>_TypeInfo;
      FUN_017b46ec(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar7;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
      puVar3 = Method_SoccerBlocker_HideCrowd__;
      if (lVar5 == 0) goto LAB_01da7b30;
      if (10 < *unaff_x24) {
                    /* catch() { ... } // from try @ 01da6d94 with catch @ 01da6e14
                       try { // try from 01da6e14 to 01ea6e3b has its CatchHandler @ 01da65d0 */
        unaff_x19[0xe] = lVar4;
                    /* catch() { ... } // from try @ 01da69e0 with catch @ 01da6e20 */
                    /* catch() { ... } // from try @ 01da6984 with catch @ 01da6e24 */
        uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
        lVar4 = thunk_FUN_00d62348(*unaff_x23);
        if (lVar4 == 0) goto LAB_01da7b2c;
                    /* try { // try from 01da6e3c to 01ea6e3f has its CatchHandler @ 01da6ebc */
        uVar7 = *(undefined8 *)
                 Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
        ;
        FUN_017b46ec(lVar4,0);
        *(undefined8 *)(lVar4 + 0x10) = uVar7;
        *(undefined8 *)(lVar4 + 0x18) = uVar6;
        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
        puVar3 = StringLiteral_6785;
        if (lVar5 == 0) goto LAB_01da7b30;
        if (0xb < *unaff_x24) {
          unaff_x19[0xf] = lVar4;
                    /* try { // try from 01da6e88 to 01ea6ebb has its CatchHandler @ 01da6f6c */
          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
          lVar4 = thunk_FUN_00d62348(*unaff_x23);
          if (lVar4 == 0) goto LAB_01da7b2c;
          uVar7 = *(undefined8 *)Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
          FUN_017b46ec(lVar4,0);
                    /* catch() { ... } // from try @ 01da6e3c with catch @ 01da6ebc
                       try { // try from 01da6ebc to 01ea6ee3 has its CatchHandler @ 01da65d0 */
          *(undefined8 *)(lVar4 + 0x10) = uVar7;
          *(undefined8 *)(lVar4 + 0x18) = uVar6;
                    /* catch() { ... } // from try @ 01da6bbc with catch @ 01da6ec8 */
                    /* catch() { ... } // from try @ 01da6b60 with catch @ 01da6ecc */
          lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
          puVar3 = StringLiteral_11159;
          if (lVar5 == 0) goto LAB_01da7b30;
          if (0xc < *unaff_x24) {
                    /* try { // try from 01da6ee4 to 01ea6ee7 has its CatchHandler @ 01da6f60 */
            unaff_x19[0x10] = lVar4;
            uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
            lVar4 = thunk_FUN_00d62348(*unaff_x23);
            if (lVar4 == 0) goto LAB_01da7b2c;
            uVar7 = *(undefined8 *)StringLiteral_12526;
            FUN_017b46ec(lVar4,0);
                    /* try { // try from 01da6f24 to 01ea6f4b has its CatchHandler @ 01da6f6c */
            *(undefined8 *)(lVar4 + 0x10) = uVar7;
            *(undefined8 *)(lVar4 + 0x18) = uVar6;
            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
            puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
            if (lVar5 == 0) goto LAB_01da7b30;
            if (0xd < *unaff_x24) {
                    /* try { // try from 01da6f4c to 01ea6f57 has its CatchHandler @ 01da65d0 */
              unaff_x19[0x11] = lVar4;
                    /* try { // try from 01da6f58 to 01ea6f5f has its CatchHandler @ 01da6f6c */
              uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 01da6ee4 with catch @ 01da6f60 */
                    /* catch() { ... } // from try @ 01da6de0 with catch @ 01da6f6c
                       catch() { ... } // from try @ 01da6e88 with catch @ 01da6f6c
                       catch() { ... } // from try @ 01da6f24 with catch @ 01da6f6c
                       catch() { ... } // from try @ 01da6f58 with catch @ 01da6f6c */
              lVar4 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar4 == 0) goto LAB_01da7b2c;
              uVar7 = *(undefined8 *)Method_System_Collections_Generic_List<ShaderTagId>_get_Item__;
              FUN_017b46ec(lVar4,0);
              *(undefined8 *)(lVar4 + 0x10) = uVar7;
              *(undefined8 *)(lVar4 + 0x18) = uVar6;
              lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
              puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
              if (lVar5 == 0) goto LAB_01da7b30;
              if (0xe < *unaff_x24) {
                unaff_x19[0x12] = lVar4;
                uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                if (lVar4 == 0) goto LAB_01da7b2c;
                uVar7 = *(undefined8 *)StringLiteral_4884;
                FUN_017b46ec(lVar4,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                *(undefined8 *)(lVar4 + 0x18) = uVar6;
                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__;
                if (lVar5 == 0) goto LAB_01da7b30;
                if (0xf < *unaff_x24) {
                  unaff_x19[0x13] = lVar4;
                  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar4 == 0) goto LAB_01da7b2c;
                  uVar7 = *(undefined8 *)PTR_DAT_033f2f40;
                  FUN_017b46ec(lVar4,0);
                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar5 == 0) goto LAB_01da7b30;
                  if (0x10 < *unaff_x24) {
                    unaff_x19[0x14] = lVar4;
                    uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                    if (lVar4 == 0) goto LAB_01da7b2c;
                    uVar7 = *(undefined8 *)PTR_DAT_033ec6e8;
                    FUN_017b46ec(lVar4,0);
                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                    *(undefined8 *)(lVar4 + 0x18) = uVar6;
                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                    puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                    if (lVar5 == 0) goto LAB_01da7b30;
                    if (0x11 < *unaff_x24) {
                      unaff_x19[0x15] = lVar4;
                      uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                      if (lVar4 == 0) goto LAB_01da7b2c;
                      uVar7 = *(undefined8 *)
                               Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                      ;
                      FUN_017b46ec(lVar4,0);
                      *(undefined8 *)(lVar4 + 0x10) = uVar7;
                      *(undefined8 *)(lVar4 + 0x18) = uVar6;
                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                      puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                      if (lVar5 == 0) goto LAB_01da7b30;
                      if (0x12 < *unaff_x24) {
                        unaff_x19[0x16] = lVar4;
                        uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                        lVar4 = thunk_FUN_00d62348(*unaff_x23);
                        if (lVar4 == 0) goto LAB_01da7b2c;
                        uVar7 = *(undefined8 *)StringLiteral_238;
                        FUN_017b46ec(lVar4,0);
                        *(undefined8 *)(lVar4 + 0x10) = uVar7;
                        *(undefined8 *)(lVar4 + 0x18) = uVar6;
                        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                        puVar1 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
                        if (lVar5 == 0) goto LAB_01da7b30;
                        if (0x13 < *unaff_x24) {
                          unaff_x19[0x17] = lVar4;
                          uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                          lVar4 = thunk_FUN_00d62348(*unaff_x23);
                          if (lVar4 == 0) goto LAB_01da7b2c;
                          uVar7 = *(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                          ;
                          FUN_017b46ec(lVar4,0);
                          *(undefined8 *)(lVar4 + 0x10) = uVar7;
                          *(undefined8 *)(lVar4 + 0x18) = uVar6;
                          lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                          puVar1 = 
                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                          ;
                          if (lVar5 == 0) goto LAB_01da7b30;
                          if (0x14 < *unaff_x24) {
                            unaff_x19[0x18] = lVar4;
                            uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                            lVar4 = thunk_FUN_00d62348(*unaff_x23);
                            if (lVar4 == 0) goto LAB_01da7b2c;
                            uVar7 = *(undefined8 *)
                                     Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                            ;
                            FUN_017b46ec(lVar4,0);
                            *(undefined8 *)(lVar4 + 0x10) = uVar7;
                            *(undefined8 *)(lVar4 + 0x18) = uVar6;
                            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar5 == 0) goto LAB_01da7b30;
                            if (0x15 < *unaff_x24) {
                              unaff_x19[0x19] = lVar4;
                              uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar4 = thunk_FUN_00d62348(*unaff_x23);
                              if (lVar4 == 0) goto LAB_01da7b2c;
                              uVar7 = *(undefined8 *)
                                       System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                              ;
                              FUN_017b46ec(lVar4,0);
                              *(undefined8 *)(lVar4 + 0x10) = uVar7;
                              *(undefined8 *)(lVar4 + 0x18) = uVar6;
                              lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar5 == 0) goto LAB_01da7b30;
                              if (0x16 < *unaff_x24) {
                                unaff_x19[0x1a] = lVar4;
                                uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                if (lVar4 == 0) goto LAB_01da7b2c;
                                uVar7 = *(undefined8 *)Oculus_Platform_Models_PidList_TypeInfo;
                                FUN_017b46ec(lVar4,0);
                                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar5 == 0) goto LAB_01da7b30;
                                if (0x17 < *unaff_x24) {
                                  unaff_x19[0x1b] = lVar4;
                                  uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                  if (lVar4 == 0) goto LAB_01da7b2c;
                                  uVar7 = *(undefined8 *)
                                           UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
                                  FUN_017b46ec(lVar4,0);
                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar5 == 0) goto LAB_01da7b30;
                                  if (0x18 < *unaff_x24) {
                                    unaff_x19[0x1c] = lVar4;
                                    uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                    uVar7 = *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputSystem_AddDevice__;
                                    FUN_017b46ec(lVar4,0);
                                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                    *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar5 == 0) goto LAB_01da7b30;
                                    if (0x19 < *unaff_x24) {
                                      unaff_x19[0x1d] = lVar4;
                                      uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                      if (lVar4 == 0) goto LAB_01da7b2c;
                                      uVar7 = *(undefined8 *)
                                               Method_System_Data_DataView_System_Collections_IList_Insert__
                                      ;
                                      FUN_017b46ec(lVar4,0);
                                      *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                      *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                      lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar5 == 0) goto LAB_01da7b30;
                                      if (0x1a < *unaff_x24) {
                                        unaff_x19[0x1e] = lVar4;
                                        uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                        lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                        if (lVar4 == 0) goto LAB_01da7b2c;
                                        uVar7 = *(undefined8 *)
                                                 Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                        ;
                                        FUN_017b46ec(lVar4,0);
                                        *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                        *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                        lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        puVar3 = 
                                        Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                        ;
                                        if (lVar5 == 0) goto LAB_01da7b30;
                                        if (0x1b < *unaff_x24) {
                                          unaff_x19[0x1f] = lVar4;
                                          uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                          lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                          if (lVar4 == 0) goto LAB_01da7b2c;
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                          ;
                                          FUN_017b46ec(lVar4,0);
                                          *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                          *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                          lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          puVar3 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                                          if (lVar5 == 0) goto LAB_01da7b30;
                                          if (0x1c < *unaff_x24) {
                                            unaff_x19[0x20] = lVar4;
                                            uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                            lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                            if (lVar4 == 0) goto LAB_01da7b2c;
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                            ;
                                            FUN_017b46ec(lVar4,0);
                                            *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                            *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                            lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar5 == 0) goto LAB_01da7b30;
                                            if (0x1d < *unaff_x24) {
                                              unaff_x19[0x21] = lVar4;
                                              uVar6 = FUN_01780344(*unaff_x22,0);
                                              lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                              if (lVar4 == 0) goto LAB_01da7b2c;
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                              ;
                                              FUN_017b46ec(lVar4,0);
                                              *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                              *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                              lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              if (lVar5 == 0) goto LAB_01da7b30;
                                              if (0x1e < *unaff_x24) {
                                                unaff_x19[0x22] = lVar4;
                                                uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                if (lVar4 == 0) goto LAB_01da7b2c;
                                                uVar7 = *(undefined8 *)
                                                                                                                  
                                                  System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                                                ;
                                                FUN_017b46ec(lVar4,0);
                                                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar5 == 0) goto LAB_01da7b30;
                                                if (0x1f < *unaff_x24) {
                                                  unaff_x19[0x23] = lVar4;
                                                  uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar4 == 0) goto LAB_01da7b2c;
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar1 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x20 < *unaff_x24) {
                                                    unaff_x19[0x24] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x21 < *unaff_x24) {
                                                    unaff_x19[0x25] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x22 < *unaff_x24) {
                                                    unaff_x19[0x26] = lVar4;
                                                    uVar6 = FUN_01780344(*unaff_x22,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)StringLiteral_1905;
                                                    FUN_017b46ec(lVar4,0);
                                                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                    *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                    lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar5 == 0) goto LAB_01da7b30;
                                                    if (0x23 < *unaff_x24) {
                                                      unaff_x19[0x27] = lVar4;
                                                      uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar4 == 0) goto LAB_01da7b2c;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_5228;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x24 < *unaff_x24) {
                                                    unaff_x19[0x28] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x25 < *unaff_x24) {
                                                    unaff_x19[0x29] = lVar4;
                                                    uVar6 = FUN_01780344(*unaff_x22,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x26 < *unaff_x24) {
                                                    unaff_x19[0x2a] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x27 < *unaff_x24) {
                                                    unaff_x19[0x2b] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_6673;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x28 < *unaff_x24) {
                                                    unaff_x19[0x2c] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_Panel>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x29 < *unaff_x24) {
                                                    unaff_x19[0x2d] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>_Free__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x2a < *unaff_x24) {
                                                    unaff_x19[0x2e] = lVar4;
                                                    uVar6 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerExitHandler>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar6;
                                                  lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                                                  ;
                                                  if (lVar5 == 0) goto LAB_01da7b30;
                                                  if (0x2b < *unaff_x24) {
                                                    unaff_x19[0x2f] = lVar4;
                                                    **(undefined8 **)(*(long *)puVar3 + 0xb8) =
                                                         unaff_x19;
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
    FUN_00da5194();
  }
LAB_01da7b2c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


