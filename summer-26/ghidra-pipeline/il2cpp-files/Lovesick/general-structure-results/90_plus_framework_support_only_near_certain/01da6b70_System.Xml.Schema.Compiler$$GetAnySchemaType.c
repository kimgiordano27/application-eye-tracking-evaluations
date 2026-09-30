/*
FUNCTION_NAME: System.Xml.Schema.Compiler$$GetAnySchemaType
ENTRY_POINT: 01da6b70
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


void System_Xml_Schema_Compiler__GetAnySchemaType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 uVar7;
  
  unaff_x19[7] = unaff_x20;
  uVar4 = FUN_01780344(*unaff_x22,0);
  lVar5 = thunk_FUN_00d62348(*unaff_x23);
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)OVROverlay_TypeInfo;
    FUN_017b46ec(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar7;
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
                    /* try { // try from 01da6bbc to 01ea6be3 has its CatchHandler @ 01da6ec8 */
    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar6 == 0) {
LAB_01da7b30:
      uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,0);
    }
    if (4 < *unaff_x24) {
      unaff_x19[8] = lVar5;
      uVar4 = FUN_01780344(*unaff_x22,0);
      lVar5 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar5 == 0) goto LAB_01da7b2c;
                    /* try { // try from 01da6bf8 to 01ea6bfb has its CatchHandler @ 01da6d74 */
      uVar7 = *(undefined8 *)StringLiteral_6145;
      FUN_017b46ec(lVar5,0);
                    /* try { // try from 01da6c0c to 01ea6c0f has its CatchHandler @ 01da6d58 */
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      *(undefined8 *)(lVar5 + 0x18) = uVar4;
                    /* try { // try from 01da6c10 to 01ea6c1f has its CatchHandler @ 01da6d70 */
      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto LAB_01da7b30;
                    /* try { // try from 01da6c24 to 01ea6c47 has its CatchHandler @ 01da6d50 */
      if (5 < *unaff_x24) {
        unaff_x19[9] = lVar5;
        uVar4 = FUN_01780344(*unaff_x22,0);
                    /* try { // try from 01da6c48 to 01ea6cc7 has its CatchHandler @ 01da65d0 */
        lVar5 = thunk_FUN_00d62348(*unaff_x23);
        if (lVar5 == 0) goto LAB_01da7b2c;
        uVar7 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_WaitOnAsyncGraphicsFence__
        ;
        FUN_017b46ec(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        *(undefined8 *)(lVar5 + 0x18) = uVar4;
        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0) goto LAB_01da7b30;
        if (6 < *unaff_x24) {
          unaff_x19[10] = lVar5;
          uVar4 = FUN_01780344(*unaff_x22,0);
          lVar5 = thunk_FUN_00d62348(*unaff_x23);
          if (lVar5 == 0) goto LAB_01da7b2c;
          uVar7 = *(undefined8 *)
                   Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_Add__
          ;
          FUN_017b46ec(lVar5,0);
          *(undefined8 *)(lVar5 + 0x10) = uVar7;
          *(undefined8 *)(lVar5 + 0x18) = uVar4;
          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar6 == 0) goto LAB_01da7b30;
          if (7 < *unaff_x24) {
            unaff_x19[0xb] = lVar5;
            uVar4 = FUN_01780344(*unaff_x22,0);
            lVar5 = thunk_FUN_00d62348(*unaff_x23);
            if (lVar5 == 0) goto LAB_01da7b2c;
            uVar7 = *(undefined8 *)PTR_DAT_033eced0;
            FUN_017b46ec(lVar5,0);
            *(undefined8 *)(lVar5 + 0x10) = uVar7;
            *(undefined8 *)(lVar5 + 0x18) = uVar4;
            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar6 == 0) goto LAB_01da7b30;
            if (8 < *unaff_x24) {
              unaff_x19[0xc] = lVar5;
              uVar4 = FUN_01780344(*unaff_x22,0);
              lVar5 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar5 == 0) goto LAB_01da7b2c;
              uVar7 = *(undefined8 *)StringLiteral_4078;
              FUN_017b46ec(lVar5,0);
              *(undefined8 *)(lVar5 + 0x10) = uVar7;
              *(undefined8 *)(lVar5 + 0x18) = uVar4;
              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar6 == 0) goto LAB_01da7b30;
              if (9 < *unaff_x24) {
                unaff_x19[0xd] = lVar5;
                uVar4 = FUN_01780344(*unaff_x22,0);
                lVar5 = thunk_FUN_00d62348(*unaff_x23);
                if (lVar5 == 0) goto LAB_01da7b2c;
                uVar7 = *(undefined8 *)System_Collections_Generic_List<BillingPlan>_TypeInfo;
                FUN_017b46ec(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar7;
                *(undefined8 *)(lVar5 + 0x18) = uVar4;
                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                puVar3 = Method_SoccerBlocker_HideCrowd__;
                if (lVar6 == 0) goto LAB_01da7b30;
                if (10 < *unaff_x24) {
                  unaff_x19[0xe] = lVar5;
                  uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                  lVar5 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar5 == 0) goto LAB_01da7b2c;
                  uVar7 = *(undefined8 *)
                           Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass80_0_<CreateShouldSerializeTest>b__0__
                  ;
                  FUN_017b46ec(lVar5,0);
                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  puVar3 = StringLiteral_6785;
                  if (lVar6 == 0) goto LAB_01da7b30;
                  if (0xb < *unaff_x24) {
                    unaff_x19[0xf] = lVar5;
                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                    if (lVar5 == 0) goto LAB_01da7b2c;
                    uVar7 = *(undefined8 *)Method_Mono_Security_X509_PKCS12_AddPrivateKey__;
                    FUN_017b46ec(lVar5,0);
                    *(undefined8 *)(lVar5 + 0x10) = uVar7;
                    *(undefined8 *)(lVar5 + 0x18) = uVar4;
                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    puVar3 = StringLiteral_11159;
                    if (lVar6 == 0) goto LAB_01da7b30;
                    if (0xc < *unaff_x24) {
                      unaff_x19[0x10] = lVar5;
                      uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                      lVar5 = thunk_FUN_00d62348(*unaff_x23);
                      if (lVar5 == 0) goto LAB_01da7b2c;
                      uVar7 = *(undefined8 *)StringLiteral_12526;
                      FUN_017b46ec(lVar5,0);
                      *(undefined8 *)(lVar5 + 0x10) = uVar7;
                      *(undefined8 *)(lVar5 + 0x18) = uVar4;
                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                      if (lVar6 == 0) goto LAB_01da7b30;
                      if (0xd < *unaff_x24) {
                        unaff_x19[0x11] = lVar5;
                        uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                        lVar5 = thunk_FUN_00d62348(*unaff_x23);
                        if (lVar5 == 0) goto LAB_01da7b2c;
                        uVar7 = *(undefined8 *)
                                 Method_System_Collections_Generic_List<ShaderTagId>_get_Item__;
                        FUN_017b46ec(lVar5,0);
                        *(undefined8 *)(lVar5 + 0x10) = uVar7;
                        *(undefined8 *)(lVar5 + 0x18) = uVar4;
                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                        puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
                        if (lVar6 == 0) goto LAB_01da7b30;
                        if (0xe < *unaff_x24) {
                          unaff_x19[0x12] = lVar5;
                          uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                          lVar5 = thunk_FUN_00d62348(*unaff_x23);
                          if (lVar5 == 0) goto LAB_01da7b2c;
                          uVar7 = *(undefined8 *)StringLiteral_4884;
                          FUN_017b46ec(lVar5,0);
                          *(undefined8 *)(lVar5 + 0x10) = uVar7;
                          *(undefined8 *)(lVar5 + 0x18) = uVar4;
                          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                          puVar2 = Method_System_Collections_Generic_List<RendererList>_Add__;
                          if (lVar6 == 0) goto LAB_01da7b30;
                          if (0xf < *unaff_x24) {
                            unaff_x19[0x13] = lVar5;
                            uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                            lVar5 = thunk_FUN_00d62348(*unaff_x23);
                            if (lVar5 == 0) goto LAB_01da7b2c;
                            uVar7 = *(undefined8 *)PTR_DAT_033f2f40;
                            FUN_017b46ec(lVar5,0);
                            *(undefined8 *)(lVar5 + 0x10) = uVar7;
                            *(undefined8 *)(lVar5 + 0x18) = uVar4;
                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar6 == 0) goto LAB_01da7b30;
                            if (0x10 < *unaff_x24) {
                              unaff_x19[0x14] = lVar5;
                              uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar5 = thunk_FUN_00d62348(*unaff_x23);
                              if (lVar5 == 0) goto LAB_01da7b2c;
                              uVar7 = *(undefined8 *)PTR_DAT_033ec6e8;
                              FUN_017b46ec(lVar5,0);
                              *(undefined8 *)(lVar5 + 0x10) = uVar7;
                              *(undefined8 *)(lVar5 + 0x18) = uVar4;
                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                              puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                              if (lVar6 == 0) goto LAB_01da7b30;
                              if (0x11 < *unaff_x24) {
                                unaff_x19[0x15] = lVar5;
                                uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                if (lVar5 == 0) goto LAB_01da7b2c;
                                uVar7 = *(undefined8 *)
                                         Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                                ;
                                FUN_017b46ec(lVar5,0);
                                *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                                if (lVar6 == 0) goto LAB_01da7b30;
                                if (0x12 < *unaff_x24) {
                                  unaff_x19[0x16] = lVar5;
                                  uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                  lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                  if (lVar5 == 0) goto LAB_01da7b2c;
                                  uVar7 = *(undefined8 *)StringLiteral_238;
                                  FUN_017b46ec(lVar5,0);
                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  puVar1 = 
                                  System_Security_Principal_WindowsImpersonationContext_TypeInfo;
                                  if (lVar6 == 0) goto LAB_01da7b30;
                                  if (0x13 < *unaff_x24) {
                                    unaff_x19[0x17] = lVar5;
                                    uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                    uVar7 = *(undefined8 *)
                                             Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<AndroidLinearAccelerationSensor>__
                                    ;
                                    FUN_017b46ec(lVar5,0);
                                    *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                    *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    puVar1 = 
                                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                    ;
                                    if (lVar6 == 0) goto LAB_01da7b30;
                                    if (0x14 < *unaff_x24) {
                                      unaff_x19[0x18] = lVar5;
                                      uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                      lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                      if (lVar5 == 0) goto LAB_01da7b2c;
                                      uVar7 = *(undefined8 *)
                                               Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                      ;
                                      FUN_017b46ec(lVar5,0);
                                      *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                      *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                      lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar6 == 0) goto LAB_01da7b30;
                                      if (0x15 < *unaff_x24) {
                                        unaff_x19[0x19] = lVar5;
                                        uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                        lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                        if (lVar5 == 0) goto LAB_01da7b2c;
                                        uVar7 = *(undefined8 *)
                                                 System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                                        ;
                                        FUN_017b46ec(lVar5,0);
                                        *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                        *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                        lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar6 == 0) goto LAB_01da7b30;
                                        if (0x16 < *unaff_x24) {
                                          unaff_x19[0x1a] = lVar5;
                                          uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                          lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                          if (lVar5 == 0) goto LAB_01da7b2c;
                                          uVar7 = *(undefined8 *)
                                                   Oculus_Platform_Models_PidList_TypeInfo;
                                          FUN_017b46ec(lVar5,0);
                                          *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                          *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                          lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          if (lVar6 == 0) goto LAB_01da7b30;
                                          if (0x17 < *unaff_x24) {
                                            unaff_x19[0x1b] = lVar5;
                                            uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                            lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                            if (lVar5 == 0) goto LAB_01da7b2c;
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  UnityEngine_UIElements_UIR_Tessellation_TypeInfo;
                                            FUN_017b46ec(lVar5,0);
                                            *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                            *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                            lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar6 == 0) goto LAB_01da7b30;
                                            if (0x18 < *unaff_x24) {
                                              unaff_x19[0x1c] = lVar5;
                                              uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                              lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                              if (lVar5 == 0) goto LAB_01da7b2c;
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_InputSystem_InputSystem_AddDevice__
                                              ;
                                              FUN_017b46ec(lVar5,0);
                                              *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                              *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                              lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              if (lVar6 == 0) goto LAB_01da7b30;
                                              if (0x19 < *unaff_x24) {
                                                unaff_x19[0x1d] = lVar5;
                                                uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                if (lVar5 == 0) goto LAB_01da7b2c;
                                                uVar7 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Data_DataView_System_Collections_IList_Insert__
                                                ;
                                                FUN_017b46ec(lVar5,0);
                                                *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar6 == 0) goto LAB_01da7b30;
                                                if (0x1a < *unaff_x24) {
                                                  unaff_x19[0x1e] = lVar5;
                                                  uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                  lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar5 == 0) goto LAB_01da7b2c;
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_IO_Enumeration_FileSystemEnumerable<FileInfo>__ctor__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1b < *unaff_x24) {
                                                    unaff_x19[0x1f] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1c < *unaff_x24) {
                                                    unaff_x19[0x20] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_<DOFillAmount>b__0__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1d < *unaff_x24) {
                                                    unaff_x19[0x21] = lVar5;
                                                    uVar4 = FUN_01780344(*unaff_x22,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List<RadioButton>_get_Item__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1e < *unaff_x24) {
                                                    unaff_x19[0x22] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x1f < *unaff_x24) {
                                                    unaff_x19[0x23] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s64__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar1 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x20 < *unaff_x24) {
                                                    unaff_x19[0x24] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_WebSockets_WebSocketHandle_TypeInfo;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x21 < *unaff_x24) {
                                                    unaff_x19[0x25] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_FullSerializer_fsMetaType_<>c__DisplayClass5_0_<CollectProperties>b__2__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x22 < *unaff_x24) {
                                                    unaff_x19[0x26] = lVar5;
                                                    uVar4 = FUN_01780344(*unaff_x22,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)StringLiteral_1905;
                                                    FUN_017b46ec(lVar5,0);
                                                    *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                    *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                    lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar6 == 0) goto LAB_01da7b30;
                                                    if (0x23 < *unaff_x24) {
                                                      unaff_x19[0x27] = lVar5;
                                                      uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                      lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar5 == 0) goto LAB_01da7b2c;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_5228;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x24 < *unaff_x24) {
                                                    unaff_x19[0x28] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x25 < *unaff_x24) {
                                                    unaff_x19[0x29] = lVar5;
                                                    uVar4 = FUN_01780344(*unaff_x22,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x26 < *unaff_x24) {
                                                    unaff_x19[0x2a] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x27 < *unaff_x24) {
                                                    unaff_x19[0x2b] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = StringLiteral_6673;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x28 < *unaff_x24) {
                                                    unaff_x19[0x2c] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_Panel>_Add__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x29 < *unaff_x24) {
                                                    unaff_x19[0x2d] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>_Free__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x2a < *unaff_x24) {
                                                    unaff_x19[0x2e] = lVar5;
                                                    uVar4 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    lVar5 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar5 == 0) goto LAB_01da7b2c;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerExitHandler>__
                                                  ;
                                                  FUN_017b46ec(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                                                  *(undefined8 *)(lVar5 + 0x18) = uVar4;
                                                  lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  puVar3 = 
                                                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                                                  ;
                                                  if (lVar6 == 0) goto LAB_01da7b30;
                                                  if (0x2b < *unaff_x24) {
                                                    unaff_x19[0x2f] = lVar5;
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


