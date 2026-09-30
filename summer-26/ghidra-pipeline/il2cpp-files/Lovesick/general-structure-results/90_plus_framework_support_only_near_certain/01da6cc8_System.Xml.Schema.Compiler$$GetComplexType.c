/*
FUNCTION_NAME: System.Xml.Schema.Compiler$$GetComplexType
ENTRY_POINT: 01da6cc8
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


void System_Xml_Schema_Compiler__GetComplexType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar7;
  
                    /* try { // try from 01da6cc8 to 01ea6ccb has its CatchHandler @ 01da6d44 */
  FUN_017b46ec();
                    /* try { // try from 01da6ccc to 01ea6ccf has its CatchHandler @ 01da6d40 */
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x25;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
                    /* try { // try from 01da6cd0 to 01ea6cd3 has its CatchHandler @ 01da6d3c */
                    /* try { // try from 01da6cd4 to 01ea6cd7 has its CatchHandler @ 01da6d38 */
                    /* try { // try from 01da6cd8 to 01ea6cdb has its CatchHandler @ 01da6d34 */
                    /* try { // try from 01da6cdc to 01ea6cdf has its CatchHandler @ 01da6d30 */
  lVar4 = thunk_FUN_00d6225c();
                    /* try { // try from 01da6ce0 to 01ea6ceb has its CatchHandler @ 01da65d0 */
  if (lVar4 != 0) {
                    /* try { // try from 01da6cec to 01ea6cef has its CatchHandler @ 01da6d2c */
    if (7 < *unaff_x24) {
                    /* try { // try from 01da6cf0 to 01ea6cf7 has its CatchHandler @ 01da65d0 */
      unaff_x19[0xb] = unaff_x20;
                    /* try { // try from 01da6cf8 to 01ea6cfb has its CatchHandler @ 01da6d28 */
                    /* try { // try from 01da6cfc to 01ea6d1f has its CatchHandler @ 01da65d0 */
      uVar5 = FUN_01780344(*unaff_x22,0);
      lVar4 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar4 == 0) {
LAB_01da7b2c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 01da6d20 to 01ea6d23 has its CatchHandler @ 01da6d24 */
                    /* catch() { ... } // from try @ 01da6d20 with catch @ 01da6d24
                       try { // try from 01da6d24 to 01ea6d93 has its CatchHandler @ 01da65d0 */
      uVar7 = *(undefined8 *)PTR_DAT_033eced0;
                    /* catch() { ... } // from try @ 01da6cf8 with catch @ 01da6d28 */
      FUN_017b46ec(lVar4,0);
                    /* catch() { ... } // from try @ 01da6cec with catch @ 01da6d2c */
      *(undefined8 *)(lVar4 + 0x10) = uVar7;
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    /* catch() { ... } // from try @ 01da6cdc with catch @ 01da6d30 */
                    /* catch() { ... } // from try @ 01da6cd8 with catch @ 01da6d34 */
                    /* catch() { ... } // from try @ 01da6cd4 with catch @ 01da6d38 */
                    /* catch() { ... } // from try @ 01da6cd0 with catch @ 01da6d3c */
      lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                    /* catch() { ... } // from try @ 01da6ccc with catch @ 01da6d40 */
      if (lVar6 == 0) goto LAB_01da7b30;
                    /* catch() { ... } // from try @ 01da6cc8 with catch @ 01da6d44 */
                    /* catch() { ... } // from try @ 01da683c with catch @ 01da6d48 */
                    /* catch() { ... } // from try @ 01da6a58 with catch @ 01da6d4c */
      if (8 < *unaff_x24) {
                    /* catch() { ... } // from try @ 01da6c24 with catch @ 01da6d50 */
        unaff_x19[0xc] = lVar4;
                    /* catch() { ... } // from try @ 01da6a34 with catch @ 01da6d54 */
                    /* catch() { ... } // from try @ 01da6c0c with catch @ 01da6d58 */
                    /* catch() { ... } // from try @ 01da6828 with catch @ 01da6d5c */
        uVar5 = FUN_01780344(*unaff_x22,0);
                    /* catch() { ... } // from try @ 01da6a48 with catch @ 01da6d60 */
                    /* catch() { ... } // from try @ 01da6a38 with catch @ 01da6d64 */
                    /* catch() { ... } // from try @ 01da6a1c with catch @ 01da6d68 */
                    /* catch() { ... } // from try @ 01da6810 with catch @ 01da6d6c */
        lVar4 = thunk_FUN_00d62348(*unaff_x23);
        if (lVar4 == 0) goto LAB_01da7b2c;
        uVar7 = *(undefined8 *)StringLiteral_4078;
        FUN_017b46ec(lVar4,0);
        *(undefined8 *)(lVar4 + 0x10) = uVar7;
        *(undefined8 *)(lVar4 + 0x18) = uVar5;
        lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0) goto LAB_01da7b30;
        if (9 < *unaff_x24) {
          unaff_x19[0xd] = lVar4;
          uVar5 = FUN_01780344(*unaff_x22,0);
          lVar4 = thunk_FUN_00d62348(*unaff_x23);
          if (lVar4 == 0) goto LAB_01da7b2c;
          uVar7 = *(undefined8 *)System_Collections_Generic_List<BillingPlan>_TypeInfo;
          FUN_017b46ec(lVar4,0);
          *(undefined8 *)(lVar4 + 0x10) = uVar7;
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
          lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
          puVar3 = Method_SoccerBlocker_HideCrowd__;
          if (lVar6 == 0) goto LAB_01da7b30;
          if (10 < *unaff_x24) {
            unaff_x19[0xe] = lVar4;
            uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
            lVar4 = thunk_FUN_00d62348(*unaff_x23);
            if (lVar4 == 0) goto LAB_01da7b2c;
            uVar7 = *(undefined8 *)
                     Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
            ;
            FUN_017b46ec(lVar4,0);
            *(undefined8 *)(lVar4 + 0x10) = uVar7;
            *(undefined8 *)(lVar4 + 0x18) = uVar5;
            lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
            puVar3 = StringLiteral_6785;
            if (lVar6 == 0) goto LAB_01da7b30;
            if (0xb < *unaff_x24) {
              unaff_x19[0xf] = lVar4;
              uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
              lVar4 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar4 == 0) goto LAB_01da7b2c;
              uVar7 = *(undefined8 *)Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
              FUN_017b46ec(lVar4,0);
              *(undefined8 *)(lVar4 + 0x10) = uVar7;
              *(undefined8 *)(lVar4 + 0x18) = uVar5;
              lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
              puVar3 = StringLiteral_11159;
              if (lVar6 == 0) goto LAB_01da7b30;
              if (0xc < *unaff_x24) {
                unaff_x19[0x10] = lVar4;
                uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                if (lVar4 == 0) goto LAB_01da7b2c;
                uVar7 = *(undefined8 *)StringLiteral_12526;
                FUN_017b46ec(lVar4,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                if (lVar6 == 0) goto LAB_01da7b30;
                if (0xd < *unaff_x24) {
                  unaff_x19[0x11] = lVar4;
                  uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar4 == 0) goto LAB_01da7b2c;
                  uVar7 = *(undefined8 *)
                           Method_System_Collections_Generic_List<ShaderTagId>_get_Item__;
                  FUN_017b46ec(lVar4,0);
                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                  puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
                  if (lVar6 == 0) goto LAB_01da7b30;
                  if (0xe < *unaff_x24) {
                    unaff_x19[0x12] = lVar4;
                    uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                    if (lVar4 == 0) goto LAB_01da7b2c;
                    uVar7 = *(undefined8 *)StringLiteral_4884;
                    FUN_017b46ec(lVar4,0);
                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                    *(undefined8 *)(lVar4 + 0x18) = uVar5;
                    lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                    puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__;
                    if (lVar6 == 0) goto LAB_01da7b30;
                    if (0xf < *unaff_x24) {
                      unaff_x19[0x13] = lVar4;
                      uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                      if (lVar4 == 0) goto LAB_01da7b2c;
                      uVar7 = *(undefined8 *)PTR_DAT_033f2f40;
                      FUN_017b46ec(lVar4,0);
                      *(undefined8 *)(lVar4 + 0x10) = uVar7;
                      *(undefined8 *)(lVar4 + 0x18) = uVar5;
                      lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar6 == 0) goto LAB_01da7b30;
                      if (0x10 < *unaff_x24) {
                        unaff_x19[0x14] = lVar4;
                        uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                        lVar4 = thunk_FUN_00d62348(*unaff_x23);
                        if (lVar4 == 0) goto LAB_01da7b2c;
                        uVar7 = *(undefined8 *)PTR_DAT_033ec6e8;
                        FUN_017b46ec(lVar4,0);
                        *(undefined8 *)(lVar4 + 0x10) = uVar7;
                        *(undefined8 *)(lVar4 + 0x18) = uVar5;
                        lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                        puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                        if (lVar6 == 0) goto LAB_01da7b30;
                        if (0x11 < *unaff_x24) {
                          unaff_x19[0x15] = lVar4;
                          uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                          lVar4 = thunk_FUN_00d62348(*unaff_x23);
                          if (lVar4 == 0) goto LAB_01da7b2c;
                          uVar7 = *(undefined8 *)
                                   Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                          ;
                          FUN_017b46ec(lVar4,0);
                          *(undefined8 *)(lVar4 + 0x10) = uVar7;
                          *(undefined8 *)(lVar4 + 0x18) = uVar5;
                          lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                          puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                          if (lVar6 == 0) goto LAB_01da7b30;
                          if (0x12 < *unaff_x24) {
                            unaff_x19[0x16] = lVar4;
                            uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                            lVar4 = thunk_FUN_00d62348(*unaff_x23);
                            if (lVar4 == 0) goto LAB_01da7b2c;
                            uVar7 = *(undefined8 *)StringLiteral_238;
                            FUN_017b46ec(lVar4,0);
                            *(undefined8 *)(lVar4 + 0x10) = uVar7;
                            *(undefined8 *)(lVar4 + 0x18) = uVar5;
                            lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                            puVar1 = System_Security_Principal_WindowsImpersonationContext_TypeInfo;
                            if (lVar6 == 0) goto LAB_01da7b30;
                            if (0x13 < *unaff_x24) {
                              unaff_x19[0x17] = lVar4;
                              uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                              lVar4 = thunk_FUN_00d62348(*unaff_x23);
                              if (lVar4 == 0) goto LAB_01da7b2c;
                              uVar7 = *(undefined8 *)
                                       Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                              ;
                              FUN_017b46ec(lVar4,0);
                              *(undefined8 *)(lVar4 + 0x10) = uVar7;
                              *(undefined8 *)(lVar4 + 0x18) = uVar5;
                              lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40));
                              puVar1 = 
                              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                              ;
                              if (lVar6 == 0) goto LAB_01da7b30;
                              if (0x14 < *unaff_x24) {
                                unaff_x19[0x18] = lVar4;
                                uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                if (lVar4 == 0) goto LAB_01da7b2c;
                                uVar7 = *(undefined8 *)
                                         Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                ;
                                FUN_017b46ec(lVar4,0);
                                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar6 == 0) goto LAB_01da7b30;
                                if (0x15 < *unaff_x24) {
                                  unaff_x19[0x19] = lVar4;
                                  uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                  if (lVar4 == 0) goto LAB_01da7b2c;
                                  uVar7 = *(undefined8 *)
                                           System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                                  ;
                                  FUN_017b46ec(lVar4,0);
                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar6 == 0) goto LAB_01da7b30;
                                  if (0x16 < *unaff_x24) {
                                    unaff_x19[0x1a] = lVar4;
                                    uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                    uVar7 = *(undefined8 *)Oculus_Platform_Models_PidList_TypeInfo;
                                    FUN_017b46ec(lVar4,0);
                                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                    *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                    lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar6 == 0) goto LAB_01da7b30;
                                    if (0x17 < *unaff_x24) {
                                      unaff_x19[0x1b] = lVar4;
                                      uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                      if (lVar4 == 0) goto LAB_01da7b2c;
                                      uVar7 = *(undefined8 *)
                                               UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
                                      FUN_017b46ec(lVar4,0);
                                      *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                      *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                      lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar6 == 0) goto LAB_01da7b30;
                                      if (0x18 < *unaff_x24) {
                                        unaff_x19[0x1c] = lVar4;
                                        uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                        lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                        if (lVar4 == 0) goto LAB_01da7b2c;
                                        uVar7 = *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_InputSystem_AddDevice__
                                        ;
                                        FUN_017b46ec(lVar4,0);
                                        *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                        *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                        lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar6 == 0) goto LAB_01da7b30;
                                        if (0x19 < *unaff_x24) {
                                          unaff_x19[0x1d] = lVar4;
                                          uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                          lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                          if (lVar4 == 0) goto LAB_01da7b2c;
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  Method_System_Data_DataView_System_Collections_IList_Insert__
                                          ;
                                          FUN_017b46ec(lVar4,0);
                                          *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                          *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                          lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          if (lVar6 == 0) goto LAB_01da7b30;
                                          if (0x1a < *unaff_x24) {
                                            unaff_x19[0x1e] = lVar4;
                                            uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                            lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                            if (lVar4 == 0) goto LAB_01da7b2c;
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                            ;
                                            FUN_017b46ec(lVar4,0);
                                            *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                            *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                            lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            puVar3 = 
                                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                            ;
                                            if (lVar6 == 0) goto LAB_01da7b30;
                                            if (0x1b < *unaff_x24) {
                                              unaff_x19[0x1f] = lVar4;
                                              uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                              lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                              if (lVar4 == 0) goto LAB_01da7b2c;
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                              ;
                                              FUN_017b46ec(lVar4,0);
                                              *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                              *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                              lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              puVar3 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                                              if (lVar6 == 0) goto LAB_01da7b30;
                                              if (0x1c < *unaff_x24) {
                                                unaff_x19[0x20] = lVar4;
                                                uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                if (lVar4 == 0) goto LAB_01da7b2c;
                                                uVar7 = *(undefined8 *)
                                                                                                                  
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                                ;
                                                FUN_017b46ec(lVar4,0);
                                                *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar6 == 0) goto LAB_01da7b30;
                                                if (0x1d < *unaff_x24) {
                                                  unaff_x19[0x21] = lVar4;
                                                  uVar5 = FUN_01780344(*unaff_x22,0);
                                                  lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar4 == 0) goto LAB_01da7b2c;
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1e < *unaff_x24) {
                                                    unaff_x19[0x22] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1f < *unaff_x24) {
                                                    unaff_x19[0x23] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar1 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x20 < *unaff_x24) {
                                                    unaff_x19[0x24] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x21 < *unaff_x24) {
                                                    unaff_x19[0x25] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x22 < *unaff_x24) {
                                                    unaff_x19[0x26] = lVar4;
                                                    uVar5 = FUN_01780344(*unaff_x22,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)StringLiteral_1905;
                                                    FUN_017b46ec(lVar4,0);
                                                    *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                    *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                    lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0) goto LAB_01da7b30;
                                                    if (0x23 < *unaff_x24) {
                                                      unaff_x19[0x27] = lVar4;
                                                      uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                      lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar4 == 0) goto LAB_01da7b2c;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_5228;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x24 < *unaff_x24) {
                                                    unaff_x19[0x28] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x25 < *unaff_x24) {
                                                    unaff_x19[0x29] = lVar4;
                                                    uVar5 = FUN_01780344(*unaff_x22,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x26 < *unaff_x24) {
                                                    unaff_x19[0x2a] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x27 < *unaff_x24) {
                                                    unaff_x19[0x2b] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_6673;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x28 < *unaff_x24) {
                                                    unaff_x19[0x2c] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_Panel>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x29 < *unaff_x24) {
                                                    unaff_x19[0x2d] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>_Free__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x2a < *unaff_x24) {
                                                    unaff_x19[0x2e] = lVar4;
                                                    uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar4 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar4 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerExitHandler>__
                                                  ;
                                                  FUN_017b46ec(lVar4,0);
                                                  *(undefined8 *)(lVar4 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar4 + 0x18) = uVar5;
                                                  lVar6 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01da7b30:
  uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,0);
}


