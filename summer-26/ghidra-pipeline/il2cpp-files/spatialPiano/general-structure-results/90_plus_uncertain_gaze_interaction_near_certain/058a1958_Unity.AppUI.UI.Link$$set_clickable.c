/*
FUNCTION_NAME: Unity.AppUI.UI.Link$$set_clickable
ENTRY_POINT: 058a1958
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 215
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_AppUI_UI_Link__set_clickable(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  uint *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (*(undefined8 *)(param_1 + 0x20) =
             *(undefined8 *)
              Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
       , *(int *)(param_1 + 0x18) != 1)) {
      uVar1 = *unaff_x22;
      *(undefined8 *)(param_1 + 0x28) =
           *(undefined8 *)Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_Dispose__;
      if (0x35 < uVar1) {
        *(long *)(unaff_x19 + 0x1c8) = param_1;
        lVar3 = FUN_02f0880c(*unaff_x21,2);
        if (lVar3 == 0) goto LAB_058a4398;
        if ((*(int *)(lVar3 + 0x18) != 0) &&
           (*(undefined8 *)(lVar3 + 0x20) =
                 *(undefined8 *)Method_System_Lazy<DebugManager>_get_Value__,
           *(int *)(lVar3 + 0x18) != 1)) {
          uVar1 = *unaff_x22;
          *(undefined8 *)(lVar3 + 0x28) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_KeyCollection<CompositionLayer,_CompositionLayerManager_LayerInfo>_GetEnumerator__
          ;
          if (0x36 < uVar1) {
            *(long *)(unaff_x19 + 0x1d0) = lVar3;
            lVar3 = FUN_02f0880c(*unaff_x21,2);
            if (lVar3 == 0) goto LAB_058a4398;
            if ((*(int *)(lVar3 + 0x18) != 0) &&
               (*(undefined8 *)(lVar3 + 0x20) =
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>__ctor__,
               *(int *)(lVar3 + 0x18) != 1)) {
              uVar1 = *unaff_x22;
              *(undefined8 *)(lVar3 + 0x28) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_Layout_LayoutList<LayoutHandle>_RemoveAt__;
              if (0x37 < uVar1) {
                *(long *)(unaff_x19 + 0x1d8) = lVar3;
                lVar3 = FUN_02f0880c(*unaff_x21,2);
                if (lVar3 == 0) goto LAB_058a4398;
                if ((*(int *)(lVar3 + 0x18) != 0) &&
                   (*(undefined8 *)(lVar3 + 0x20) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                   , *(int *)(lVar3 + 0x18) != 1)) {
                  uVar1 = *unaff_x22;
                  *(undefined8 *)(lVar3 + 0x28) =
                       *(undefined8 *)
                        Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Key__;
                  if (0x38 < uVar1) {
                    *(long *)(unaff_x19 + 0x1e0) = lVar3;
                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                    if (lVar3 == 0) goto LAB_058a4398;
                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                       (*(undefined8 *)(lVar3 + 0x20) =
                             *(undefined8 *)
                              Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonProperty>_Contains__
                       , *(int *)(lVar3 + 0x18) != 1)) {
                      uVar1 = *unaff_x22;
                      *(undefined8 *)(lVar3 + 0x28) =
                           *(undefined8 *)
                            Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                      ;
                      if (0x39 < uVar1) {
                        *(long *)(unaff_x19 + 0x1e8) = lVar3;
                        lVar3 = FUN_02f0880c(*unaff_x21,2);
                        if (lVar3 == 0) goto LAB_058a4398;
                        if ((*(int *)(lVar3 + 0x18) != 0) &&
                           (*(undefined8 *)(lVar3 + 0x20) =
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_KeyCollection<Collider,_IXRInteractable>_GetEnumerator__
                           , *(int *)(lVar3 + 0x18) != 1)) {
                          uVar1 = *unaff_x22;
                          *(undefined8 *)(lVar3 + 0x28) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_KeyValuePair<int,_float>_get_Key__
                          ;
                          if (0x3a < uVar1) {
                            *(long *)(unaff_x19 + 0x1f0) = lVar3;
                            lVar3 = FUN_02f0880c(*unaff_x21,2);
                            if (lVar3 == 0) goto LAB_058a4398;
                            if ((*(int *)(lVar3 + 0x18) != 0) &&
                               (*(undefined8 *)(lVar3 + 0x20) =
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                               , *(int *)(lVar3 + 0x18) != 1)) {
                              uVar1 = *unaff_x22;
                              *(undefined8 *)(lVar3 + 0x28) =
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                              ;
                              if (0x3b < uVar1) {
                                *(long *)(unaff_x19 + 0x1f8) = lVar3;
                                lVar3 = FUN_02f0880c(*unaff_x21,2);
                                if (lVar3 == 0) goto LAB_058a4398;
                                if ((*(int *)(lVar3 + 0x18) != 0) &&
                                   (*(undefined8 *)(lVar3 + 0x20) =
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Value__
                                   , *(int *)(lVar3 + 0x18) != 1)) {
                                  uVar1 = *unaff_x22;
                                  *(undefined8 *)(lVar3 + 0x28) =
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_KeyValuePair<string,_ProbeVolumeBakingSet_PerScenarioDataInfo>_get_Key__
                                  ;
                                  if (0x3c < uVar1) {
                                    *(long *)(unaff_x19 + 0x200) = lVar3;
                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                    if (lVar3 == 0) goto LAB_058a4398;
                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                       (*(undefined8 *)(lVar3 + 0x20) =
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_KeyValuePair<int,_PanelWithManipulatorsBorderAffordanceController_FadePoint>_get_Key__
                                       , *(int *)(lVar3 + 0x18) != 1)) {
                                      uVar1 = *unaff_x22;
                                      *(undefined8 *)(lVar3 + 0x28) =
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_KeyValuePair<string,_ValueTuple<ProbeVolumeBakingSet,_List<int>>>_get_Value__
                                      ;
                                      if (0x3d < uVar1) {
                                        *(long *)(unaff_x19 + 0x208) = lVar3;
                                        lVar3 = FUN_02f0880c(*unaff_x21,2);
                                        if (lVar3 == 0) goto LAB_058a4398;
                                        if ((*(int *)(lVar3 + 0x18) != 0) &&
                                           (*(undefined8 *)(lVar3 + 0x20) =
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_KeyValuePair<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_get_Value__
                                           , *(int *)(lVar3 + 0x18) != 1)) {
                                          uVar1 = *unaff_x22;
                                          *(undefined8 *)(lVar3 + 0x28) =
                                               *(undefined8 *)
                                                Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>_get_TypedOwner__
                                          ;
                                          if (0x3e < uVar1) {
                                            *(long *)(unaff_x19 + 0x210) = lVar3;
                                            lVar3 = FUN_02f0880c(*unaff_x21,2);
                                            if (lVar3 == 0) goto LAB_058a4398;
                                            if ((*(int *)(lVar3 + 0x18) != 0) &&
                                               (*(undefined8 *)(lVar3 + 0x20) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<int>>_get_Key__
                                               , *(int *)(lVar3 + 0x18) != 1)) {
                                              *(undefined8 *)(lVar3 + 0x28) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_Identifier__
                                              ;
                                              if ((*unaff_x22 & 0xffffffc0) != 0) {
                                                *(long *)(unaff_x19 + 0x218) = lVar3;
                                                lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                if (lVar3 == 0) goto LAB_058a4398;
                                                if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                   (*(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<Rigidbody,_bool>_GetEnumerator__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                  uVar1 = *unaff_x22;
                                                  *(undefined8 *)(lVar3 + 0x28) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>>_get_Next__
                                                  ;
                                                  if (0x40 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x220) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__
                                                  ;
                                                  if (0x41 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x228) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<XmlQualifiedName,_SchemaElementDecl>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<SerializableGuid,_Awaitable<XRResultStatus>>_Deconstruct__
                                                  ;
                                                  if (0x42 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x230) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<VisualElement,_float>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_get_Key__
                                                  ;
                                                  if (0x43 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x238) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_RTHandle[]>_get_Value__
                                                  ;
                                                  if (0x44 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x240) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<AxisAlignedBox_BoxSurface,_float>_GetEnumerator__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__
                                                  ;
                                                  if (0x45 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x248) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_keyCode__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_OVRGLTFInputNode>_get_Value__
                                                  ;
                                                  if (0x46 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x250) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaType>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_TMP_ResourceManager_FontAssetRef>_get_Value__
                                                  ;
                                                  if (0x47 < uVar1) {
                                                    *(long *)(unaff_x19 + 600) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Awake__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Value__
                                                  ;
                                                  if (0x48 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x260) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<InitConfigOptions,_bool>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<TrackableId,_Awaitable<Result<SerializableGuid>>>_Deconstruct__
                                                  ;
                                                  if (0x49 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x268) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_TextureHandle>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_object>_get_Key__
                                                  ;
                                                  if (0x4a < uVar1) {
                                                    *(long *)(unaff_x19 + 0x270) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<RTHandle,_int>>>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<uint,_BatchID>_get_Key__
                                                  ;
                                                  if (0x4b < uVar1) {
                                                    *(long *)(unaff_x19 + 0x278) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_shiftKey__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<VolumeManager>_get_Value__;
                                                  if (0x4c < uVar1) {
                                                    *(long *)(unaff_x19 + 0x280) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<object,_object>_get_Key__
                                                  ;
                                                  if (0x4d < uVar1) {
                                                    *(long *)(unaff_x19 + 0x288) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<VisualElement,_DataBindingManager_BindingDataCollection>_get_Value__
                                                  ;
                                                  if (0x4e < uVar1) {
                                                    *(long *)(unaff_x19 + 0x290) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_actionKey__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableSet__
                                                  ;
                                                  if (0x4f < uVar1) {
                                                    *(long *)(unaff_x19 + 0x298) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_Deconstruct__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_List<HandJointId>>_GetEnumerator__
                                                  ;
                                                  if (0x50 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2a0) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IntPtr,_ValueTuple<uint,_RenderTexture>>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_GetEnumerator__
                                                  ;
                                                  if (0x51 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2a8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_FeedbackConfig_InteractorKind>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_LinkedListNode<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_get_Next__
                                                  ;
                                                  if (0x52 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2b0) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_Serialization_KeyValue<object,_object>__ctor__
                                                  , puVar2 = 
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Start__
                                                  ;
                                                  if (0x53 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2b8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                              Method_System_Lazy<Type[]>_get_Value__
                                                       , *(int *)(lVar3 + 0x18) != 1)) {
                                                      uVar1 = *unaff_x22;
                                                      *(undefined8 *)(lVar3 + 0x28) =
                                                           *(undefined8 *)puVar2;
                                                      if (0x54 < uVar1) {
                                                        *(long *)(unaff_x19 + 0x2c0) = lVar3;
                                                        lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                        if (lVar3 == 0) goto LAB_058a4398;
                                                        if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                           (*(undefined8 *)(lVar3 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<TrackedDeviceGraphicRaycaster,_HashSet<IUIInteractor>>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_ValueTuple<RTHandle,_int>>_get_Value__
                                                  ;
                                                  if (0x55 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2c8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JToken>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_CompositionLayer>_get_Key__
                                                  ;
                                                  if (0x56 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2d0) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Key__
                                                  ;
                                                  if (0x57 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2d8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IInteractableView,_InteractionBroadcaster_Handler>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<byte[],_Encoding>_get_Value__
                                                  ;
                                                  if (0x58 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2e0) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_State__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaNode>_get_Value__
                                                  ;
                                                  if (0x59 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2e8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_bool>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>_get_character__
                                                  ;
                                                  if (0x5a < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2f0) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<OVRSkeleton_BoneId,_HumanBodyBones>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_InputControlLayout_ControlItem>_get_Key__
                                                  ;
                                                  if (0x5b < uVar1) {
                                                    *(long *)(unaff_x19 + 0x2f8) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<Dictionary<int,_bool>>__ctor__;
                                                  if (0x5c < uVar1) {
                                                    *(long *)(unaff_x19 + 0x300) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_ComputeCandidateTiebreaker__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__
                                                  ;
                                                  if (0x5d < uVar1) {
                                                    *(long *)(unaff_x19 + 0x308) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<GameObject,_MRUKAnchor>_get_Key__
                                                  ;
                                                  if (0x5e < uVar1) {
                                                    *(long *)(unaff_x19 + 0x310) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<RenderPipelineGlobalSettings>_get_Value__
                                                  ;
                                                  if (0x5f < uVar1) {
                                                    *(long *)(unaff_x19 + 0x318) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_GameObject>_get_Value__
                                                  ;
                                                  if (0x60 < uVar1) {
                                                    *(long *)(unaff_x19 + 800) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_GetEnumerator__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                                  ;
                                                  if (0x61 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x328) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_get_WhenInteractableUnset__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_add_WhenPostprocessed__
                                                  ;
                                                  if (0x62 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x330) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<TypeConverterRegistry_ConverterKey,_Delegate>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<int,_object>_get_Value__
                                                  ;
                                                  if (99 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x338) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchema>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<uint,_TMP_Character>_get_Key__
                                                  ;
                                                  if (100 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x340) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_InteractableSelected__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection<int,_ProbeReferenceVolume_CellDesc>_GetEnumerator__
                                                  ;
                                                  if (0x65 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x348) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_Transform>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_List<InstanceHandle>>_Deconstruct__
                                                  ;
                                                  if (0x66 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x350) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_XmlRootAttribute>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_ServicePointScheduler_ConnectionGroup>_get_Value__
                                                  ;
                                                  if (0x67 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x358) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_int>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_Awake__
                                                  ;
                                                  if (0x68 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x360) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                                                  ;
                                                  if (0x69 < uVar1) {
                                                    *(long *)(unaff_x19 + 0x368) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_KeyValue<int,_int>_get_Key__
                                                  ;
                                                  if (0x6a < uVar1) {
                                                    *(long *)(unaff_x19 + 0x370) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_PointerEventData>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Lazy<RenderPipelineGlobalSettings>__ctor__
                                                  ;
                                                  if (0x6b < uVar1) {
                                                    *(long *)(unaff_x19 + 0x378) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Lazy<DebugManager>__ctor__,
                                                  *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JsonSchemaModel>_get_Key__
                                                  ;
                                                  if (0x6c < uVar1) {
                                                    *(long *)(unaff_x19 + 0x380) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_ObjectModel_KeyedCollection<string,_JsonSchemaNode>_Contains__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_List<OpenXRInput_SerializedBinding>>_get_Key__
                                                  ;
                                                  if (0x6d < uVar1) {
                                                    *(long *)(unaff_x19 + 0x388) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<ulong,_Vector3>_get_Value__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<Type,_VolumeComponent>_get_Value__
                                                  ;
                                                  if (0x6e < uVar1) {
                                                    *(long *)(unaff_x19 + 0x390) = lVar3;
                                                    lVar3 = FUN_02f0880c(*unaff_x21,2);
                                                    if (lVar3 == 0) goto LAB_058a4398;
                                                    if ((*(int *)(lVar3 + 0x18) != 0) &&
                                                       (*(undefined8 *)(lVar3 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_KeyValuePair<int,_ReflectionProbeManager_CachedProbe>_Deconstruct__
                                                  , *(int *)(lVar3 + 0x18) != 1)) {
                                                    uVar1 = *unaff_x22;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_KeyValuePair<string,_JSONNode>__ctor__
                                                  ;
                                                  if (0x6f < uVar1) {
                                                    *(long *)(unaff_x19 + 0x398) = lVar3;
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_HasInteractable__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x60) =
                                                       unaff_x19;
                                                  lVar3 = FUN_02f0880c(uVar4,0x5e);
                                                  FUN_058a4490(&stack0x000005e0,0x41,0x5a,1,0x20,0);
                                                  if (lVar3 == 0) goto LAB_058a4398;
                                                  if (*(int *)(lVar3 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar3 + 0x20) = 0;
                                                    *(undefined4 *)(lVar3 + 0x28) = 0;
                                                    FUN_058a4490(&stack0x000005d0,0xc0,0xde,1,0x20,0
                                                                );
                                                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar3 + 0x2c) = 0;
                                                      *(undefined4 *)(lVar3 + 0x34) = 0;
                                                      FUN_058a4490(&stack0x000005c0,0x100,0x12e,2,0,
                                                                   0);
                                                      if (2 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x38) = 0;
                                                        *(undefined4 *)(lVar3 + 0x40) = 0;
                                                        FUN_058a4490(&stack0x000005b0,0x130,0x130,0,
                                                                     0x69,0);
                                                        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar3 + 0x44) = 0;
                                                          *(undefined4 *)(lVar3 + 0x4c) = 0;
                                                          FUN_058a4490(&stack0x000005a0,0x132,0x136,
                                                                       2,0,0);
                                                          if (4 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x50) = 0;
                                                            *(undefined4 *)(lVar3 + 0x58) = 0;
                                                            FUN_058a4490(&stack0x00000590,0x139,
                                                                         0x147,3,0,0);
                                                            if (5 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x5c) = 0;
                                                              *(undefined4 *)(lVar3 + 100) = 0;
                                                              FUN_058a4490(&stack0x00000580,0x14a,
                                                                           0x176,2,0,0);
                                                              if (6 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x68) = 0;
                                                                *(undefined4 *)(lVar3 + 0x70) = 0;
                                                                FUN_058a4490(&stack0x00000570,0x178,
                                                                             0x178,0,0xff,0);
                                                                if ((*(uint *)(lVar3 + 0x18) &
                                                                    0xfffffff8) != 0) {
                                                                  *(undefined8 *)(lVar3 + 0x74) = 0;
                                                                  *(undefined4 *)(lVar3 + 0x7c) = 0;
                                                                  FUN_058a4490(&stack0x00000560,
                                                                               0x179,0x17d,3,0,0);
                                                                  if (8 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x80) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x88) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x00000550,
                                                                                 0x181,0x181,0,0x253
                                                                                 ,0);
                                                                    if (9 < *(uint *)(lVar3 + 0x18))
                                                                    {
                                                                      *(undefined8 *)(lVar3 + 0x8c)
                                                                           = 0;
                                                                      *(undefined4 *)(lVar3 + 0x94)
                                                                           = 0;
                                                                      FUN_058a4490(&stack0x00000540,
                                                                                   0x182,0x184,2,0,0
                                                                                  );
                                                                      if (10 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x98) = 0;
                                                    *(undefined4 *)(lVar3 + 0xa0) = 0;
                                                    FUN_058a4490(&stack0x00000530,0x186,0x186,0,
                                                                 0x254,0);
                                                    if (0xb < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0xa4) = 0;
                                                      *(undefined4 *)(lVar3 + 0xac) = 0;
                                                      FUN_058a4490(&stack0x00000520,0x187,0x187,0,
                                                                   0x188,0);
                                                      if (0xc < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0xb0) = 0;
                                                        *(undefined4 *)(lVar3 + 0xb8) = 0;
                                                        FUN_058a4490(&stack0x00000510,0x189,0x18a,1,
                                                                     0xcd,0);
                                                        if (0xd < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0xbc) = 0;
                                                          *(undefined4 *)(lVar3 + 0xc4) = 0;
                                                          FUN_058a4490(&stack0x00000500,0x18b,0x18b,
                                                                       0,0x18c,0);
                                                          if (0xe < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 200) = 0;
                                                            *(undefined4 *)(lVar3 + 0xd0) = 0;
                                                            FUN_058a4490(&stack0x000004f0,0x18e,
                                                                         0x18e,0,0x1dd,0);
                                                            if ((*(uint *)(lVar3 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(undefined8 *)(lVar3 + 0xd4) = 0;
                                                              *(undefined4 *)(lVar3 + 0xdc) = 0;
                                                              FUN_058a4490(&stack0x000004e0,399,399,
                                                                           0,0x259,0);
                                                              if (0x10 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0xe0) = 0;
                                                                *(undefined4 *)(lVar3 + 0xe8) = 0;
                                                                FUN_058a4490(&stack0x000004d0,400,
                                                                             400,0,0x25b,0);
                                                                if (0x11 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0xec) = 0;
                                                                  *(undefined4 *)(lVar3 + 0xf4) = 0;
                                                                  FUN_058a4490(&stack0x000004c0,
                                                                               0x191,0x191,0,0x192,0
                                                                              );
                                                                  if (0x12 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0xf8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x100) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x000004b0,
                                                                                 0x193,0x193,0,0x260
                                                                                 ,0);
                                                                    if (0x13 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x104) = 0;
                                                    *(undefined4 *)(lVar3 + 0x10c) = 0;
                                                    FUN_058a4490(&stack0x000004a0,0x194,0x194,0,
                                                                 0x263,0);
                                                    if (0x14 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x110) = 0;
                                                      *(undefined4 *)(lVar3 + 0x118) = 0;
                                                      FUN_058a4490(&stack0x00000490,0x196,0x196,0,
                                                                   0x269,0);
                                                      if (0x15 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x11c) = 0;
                                                        *(undefined4 *)(lVar3 + 0x124) = 0;
                                                        FUN_058a4490(&stack0x00000480,0x197,0x197,0,
                                                                     0x268,0);
                                                        if (0x16 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x128) = 0;
                                                          *(undefined4 *)(lVar3 + 0x130) = 0;
                                                          FUN_058a4490(&stack0x00000470,0x198,0x198,
                                                                       0,0x199,0);
                                                          if (0x17 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x134) = 0;
                                                            *(undefined4 *)(lVar3 + 0x13c) = 0;
                                                            FUN_058a4490(&stack0x00000460,0x19c,
                                                                         0x19c,0,0x26f,0);
                                                            if (0x18 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x140) = 0;
                                                              *(undefined4 *)(lVar3 + 0x148) = 0;
                                                              FUN_058a4490(&stack0x00000450,0x19d,
                                                                           0x19d,0,0x272,0);
                                                              if (0x19 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x14c) = 0;
                                                                *(undefined4 *)(lVar3 + 0x154) = 0;
                                                                FUN_058a4490(&stack0x00000440,0x19f,
                                                                             0x19f,0,0x275,0);
                                                                if (0x1a < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x158) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x160) = 0
                                                                  ;
                                                                  FUN_058a4490(&stack0x00000430,
                                                                               0x1a0,0x1a4,2,0,0);
                                                                  if (0x1b < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x164) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x16c) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x00000420,
                                                                                 0x1a7,0x1a7,0,0x1a8
                                                                                 ,0);
                                                                    if (0x1c < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x170) = 0;
                                                    *(undefined4 *)(lVar3 + 0x178) = 0;
                                                    FUN_058a4490(&stack0x00000410,0x1a9,0x1a9,0,
                                                                 0x283,0);
                                                    if (0x1d < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x17c) = 0;
                                                      *(undefined4 *)(lVar3 + 0x184) = 0;
                                                      FUN_058a4490(&stack0x00000400,0x1ac,0x1ac,0,
                                                                   0x1ad,0);
                                                      if (0x1e < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x188) = 0;
                                                        *(undefined4 *)(lVar3 + 400) = 0;
                                                        FUN_058a4490(&stack0x000003f0,0x1ae,0x1ae,0,
                                                                     0x288,0);
                                                        if ((*(uint *)(lVar3 + 0x18) & 0xffffffe0)
                                                            != 0) {
                                                          *(undefined8 *)(lVar3 + 0x194) = 0;
                                                          *(undefined4 *)(lVar3 + 0x19c) = 0;
                                                          FUN_058a4490(&stack0x000003e0,0x1af,0x1af,
                                                                       0,0x1b0,0);
                                                          if (0x20 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x1a0) = 0;
                                                            *(undefined4 *)(lVar3 + 0x1a8) = 0;
                                                            FUN_058a4490(&stack0x000003d0,0x1b1,
                                                                         0x1b2,1,0xd9,0);
                                                            if (0x21 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x1ac) = 0;
                                                              *(undefined4 *)(lVar3 + 0x1b4) = 0;
                                                              FUN_058a4490(&stack0x000003c0,0x1b3,
                                                                           0x1b5,3,0,0);
                                                              if (0x22 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x1b8) = 0;
                                                                *(undefined4 *)(lVar3 + 0x1c0) = 0;
                                                                FUN_058a4490(&stack0x000003b0,0x1b7,
                                                                             0x1b7,0,0x292,0);
                                                                if (0x23 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x1c4) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x1cc) = 0
                                                                  ;
                                                                  FUN_058a4490(&stack0x000003a0,
                                                                               0x1b8,0x1b8,0,0x1b9,0
                                                                              );
                                                                  if (0x24 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x1d0) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x1d8) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x00000390,
                                                                                 0x1bc,0x1bc,0,0x1bd
                                                                                 ,0);
                                                                    if (0x25 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x1dc) = 0;
                                                    *(undefined4 *)(lVar3 + 0x1e4) = 0;
                                                    FUN_058a4490(&stack0x00000380,0x1c4,0x1c5,0,
                                                                 0x1c6,0);
                                                    if (0x26 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x1e8) = 0;
                                                      *(undefined4 *)(lVar3 + 0x1f0) = 0;
                                                      FUN_058a4490(&stack0x00000370,0x1c7,0x1c8,0,
                                                                   0x1c9,0);
                                                      if (0x27 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 500) = 0;
                                                        *(undefined4 *)(lVar3 + 0x1fc) = 0;
                                                        FUN_058a4490(&stack0x00000360,0x1ca,0x1cb,0,
                                                                     0x1cc,0);
                                                        if (0x28 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x200) = 0;
                                                          *(undefined4 *)(lVar3 + 0x208) = 0;
                                                          FUN_058a4490(&stack0x00000350,0x1cd,0x1db,
                                                                       3,0,0);
                                                          if (0x29 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x20c) = 0;
                                                            *(undefined4 *)(lVar3 + 0x214) = 0;
                                                            FUN_058a4490(&stack0x00000340,0x1de,
                                                                         0x1ee,2,0,0);
                                                            if (0x2a < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x218) = 0;
                                                              *(undefined4 *)(lVar3 + 0x220) = 0;
                                                              FUN_058a4490(&stack0x00000330,0x1f1,
                                                                           0x1f2,0,499,0);
                                                              if (0x2b < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x224) = 0;
                                                                *(undefined4 *)(lVar3 + 0x22c) = 0;
                                                                FUN_058a4490(&stack0x00000320,500,
                                                                             500,0,0x1f5,0);
                                                                if (0x2c < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x230) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x238) = 0
                                                                  ;
                                                                  FUN_058a4490(&stack0x00000310,
                                                                               0x1fa,0x216,2,0,0);
                                                                  if (0x2d < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x23c) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x244) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x00000300,
                                                                                 0x386,0x386,0,0x3ac
                                                                                 ,0);
                                                                    if (0x2e < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x248) = 0;
                                                    *(undefined4 *)(lVar3 + 0x250) = 0;
                                                    FUN_058a4490(&stack0x000002f0,0x388,0x38a,1,0x25
                                                                 ,0);
                                                    if (0x2f < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x254) = 0;
                                                      *(undefined4 *)(lVar3 + 0x25c) = 0;
                                                      FUN_058a4490(&stack0x000002e0,0x38c,0x38c,0,
                                                                   0x3cc,0);
                                                      if (0x30 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x260) = 0;
                                                        *(undefined4 *)(lVar3 + 0x268) = 0;
                                                        FUN_058a4490(&stack0x000002d0,0x38e,0x38f,1,
                                                                     0x3f,0);
                                                        if (0x31 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x26c) = 0;
                                                          *(undefined4 *)(lVar3 + 0x274) = 0;
                                                          FUN_058a4490(&stack0x000002c0,0x391,0x3ab,
                                                                       1,0x20,0);
                                                          if (0x32 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x278) = 0;
                                                            *(undefined4 *)(lVar3 + 0x280) = 0;
                                                            FUN_058a4490(&stack0x000002b0,0x3e2,
                                                                         0x3ee,2,0,0);
                                                            if (0x33 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x284) = 0;
                                                              *(undefined4 *)(lVar3 + 0x28c) = 0;
                                                              FUN_058a4490(&stack0x000002a0,0x401,
                                                                           0x40f,1,0x50,0);
                                                              if (0x34 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x290) = 0;
                                                                *(undefined4 *)(lVar3 + 0x298) = 0;
                                                                FUN_058a4490(&stack0x00000290,0x410,
                                                                             0x42f,1,0x20,0);
                                                                if (0x35 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x29c) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x2a4) = 0
                                                                  ;
                                                                  FUN_058a4490(&stack0x00000280,
                                                                               0x460,0x480,2,0,0);
                                                                  if (0x36 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x2a8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x2b0) =
                                                                         0;
                                                                    FUN_058a4490(&stack0x00000270,
                                                                                 0x490,0x4be,2,0,0);
                                                                    if (0x37 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x2b4) = 0;
                                                    *(undefined4 *)(lVar3 + 700) = 0;
                                                    FUN_058a4490(&stack0x00000260,0x4c1,0x4c3,3,0,0)
                                                    ;
                                                    if (0x38 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x2c0) = 0;
                                                      *(undefined4 *)(lVar3 + 0x2c8) = 0;
                                                      FUN_058a4490(&stack0x00000250,0x4c7,0x4c7,0,
                                                                   0x4c8,0);
                                                      if (0x39 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x2cc) = 0;
                                                        *(undefined4 *)(lVar3 + 0x2d4) = 0;
                                                        FUN_058a4490(&stack0x00000240,0x4cb,0x4cb,0,
                                                                     0x4cc,0);
                                                        if (0x3a < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x2d8) = 0;
                                                          *(undefined4 *)(lVar3 + 0x2e0) = 0;
                                                          FUN_058a4490(&stack0x00000230,0x4d0,0x4ea,
                                                                       2,0,0);
                                                          if (0x3b < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x2e4) = 0;
                                                            *(undefined4 *)(lVar3 + 0x2ec) = 0;
                                                            FUN_058a4490(&stack0x00000220,0x4ee,
                                                                         0x4f4,2,0,0);
                                                            if (0x3c < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x2f0) = 0;
                                                              *(undefined4 *)(lVar3 + 0x2f8) = 0;
                                                              FUN_058a4490(&stack0x00000210,0x4f8,
                                                                           0x4f8,0,0x4f9,0);
                                                              if (0x3d < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x2fc) = 0;
                                                                *(undefined4 *)(lVar3 + 0x304) = 0;
                                                                FUN_058a4490(&stack0x00000200,0x531,
                                                                             0x556,1,0x30,0);
                                                                if (0x3e < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x308) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x310) = 0
                                                                  ;
                                                                  FUN_058a4490(&stack0x000001f0,
                                                                               0x10a0,0x10c5,1,0x30,
                                                                               0);
                                                                  if ((*(uint *)(lVar3 + 0x18) &
                                                                      0xffffffc0) != 0) {
                                                                    *(undefined8 *)(lVar3 + 0x314) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x31c) =
                                                                         0;
                                                                    in_stack_000001e8 = 0;
                                                                    in_stack_000001e0 = 0;
                                                                    FUN_058a4490(&stack0x000001e0,
                                                                                 0x1e00,0x1ef8,2,0,0
                                                                                );
                                                                    if (0x40 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 800) = in_stack_000001e0
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x328) =
                                                         in_stack_000001e8;
                                                    in_stack_000001d8 = 0;
                                                    in_stack_000001d0 = 0;
                                                    FUN_058a4490(&stack0x000001d0,0x1f08,0x1f0f,1,
                                                                 0xfffffff8,0);
                                                    if (0x41 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x32c) =
                                                           in_stack_000001d0;
                                                      *(undefined4 *)(lVar3 + 0x334) =
                                                           in_stack_000001d8;
                                                      in_stack_000001c8 = 0;
                                                      in_stack_000001c0 = 0;
                                                      FUN_058a4490(&stack0x000001c0,0x1f18,0x1f1f,1,
                                                                   0xfffffff8,0);
                                                      if (0x42 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x338) =
                                                             in_stack_000001c0;
                                                        *(undefined4 *)(lVar3 + 0x340) =
                                                             in_stack_000001c8;
                                                        in_stack_000001b8 = 0;
                                                        in_stack_000001b0 = 0;
                                                        FUN_058a4490(&stack0x000001b0,0x1f28,0x1f2f,
                                                                     1,0xfffffff8,0);
                                                        if (0x43 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x344) =
                                                               in_stack_000001b0;
                                                          *(undefined4 *)(lVar3 + 0x34c) =
                                                               in_stack_000001b8;
                                                          in_stack_000001a8 = 0;
                                                          in_stack_000001a0 = 0;
                                                          FUN_058a4490(&stack0x000001a0,0x1f38,7999,
                                                                       1,0xfffffff8,0);
                                                          if (0x44 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x350) =
                                                                 in_stack_000001a0;
                                                            *(undefined4 *)(lVar3 + 0x358) =
                                                                 in_stack_000001a8;
                                                            in_stack_00000198 = 0;
                                                            in_stack_00000190 = 0;
                                                            FUN_058a4490(&stack0x00000190,0x1f48,
                                                                         0x1f4d,1,0xfffffff8,0);
                                                            if (0x45 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x35c) =
                                                                   in_stack_00000190;
                                                              *(undefined4 *)(lVar3 + 0x364) =
                                                                   in_stack_00000198;
                                                              in_stack_00000188 = 0;
                                                              in_stack_00000180 = 0;
                                                              FUN_058a4490(&stack0x00000180,0x1f59,
                                                                           0x1f59,0,0x1f51,0);
                                                              if (0x46 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x368) =
                                                                     in_stack_00000180;
                                                                *(undefined4 *)(lVar3 + 0x370) =
                                                                     in_stack_00000188;
                                                                in_stack_00000178 = 0;
                                                                in_stack_00000170 = 0;
                                                                FUN_058a4490(&stack0x00000170,0x1f5b
                                                                             ,0x1f5b,0,0x1f53,0);
                                                                if (0x47 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x374) =
                                                                       in_stack_00000170;
                                                                  *(undefined4 *)(lVar3 + 0x37c) =
                                                                       in_stack_00000178;
                                                                  in_stack_00000168 = 0;
                                                                  in_stack_00000160 = 0;
                                                                  FUN_058a4490(&stack0x00000160,
                                                                               0x1f5d,0x1f5d,0,
                                                                               0x1f55,0);
                                                                  if (0x48 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x380) =
                                                                         in_stack_00000160;
                                                                    *(undefined4 *)(lVar3 + 0x388) =
                                                                         in_stack_00000168;
                                                                    in_stack_00000158 = 0;
                                                                    in_stack_00000150 = 0;
                                                                    FUN_058a4490(&stack0x00000150,
                                                                                 0x1f5f,0x1f5f,0,
                                                                                 0x1f57,0);
                                                                    if (0x49 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x38c) =
                                                         in_stack_00000150;
                                                    *(undefined4 *)(lVar3 + 0x394) =
                                                         in_stack_00000158;
                                                    in_stack_00000148 = 0;
                                                    in_stack_00000140 = 0;
                                                    FUN_058a4490(&stack0x00000140,0x1f68,0x1f6f,1,
                                                                 0xfffffff8,0);
                                                    if (0x4a < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x398) =
                                                           in_stack_00000140;
                                                      *(undefined4 *)(lVar3 + 0x3a0) =
                                                           in_stack_00000148;
                                                      in_stack_00000138 = 0;
                                                      in_stack_00000130 = 0;
                                                      FUN_058a4490(&stack0x00000130,0x1f88,0x1f8f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4b < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x3a4) =
                                                             in_stack_00000130;
                                                        *(undefined4 *)(lVar3 + 0x3ac) =
                                                             in_stack_00000138;
                                                        in_stack_00000128 = 0;
                                                        in_stack_00000120 = 0;
                                                        FUN_058a4490(&stack0x00000120,0x1f98,0x1f9f,
                                                                     1,0xfffffff8,0);
                                                        if (0x4c < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x3b0) =
                                                               in_stack_00000120;
                                                          *(undefined4 *)(lVar3 + 0x3b8) =
                                                               in_stack_00000128;
                                                          in_stack_00000118 = 0;
                                                          in_stack_00000110 = 0;
                                                          FUN_058a4490(&stack0x00000110,0x1fa8,
                                                                       0x1faf,1,0xfffffff8,0);
                                                          if (0x4d < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x3bc) =
                                                                 in_stack_00000110;
                                                            *(undefined4 *)(lVar3 + 0x3c4) =
                                                                 in_stack_00000118;
                                                            in_stack_00000108 = 0;
                                                            in_stack_00000100 = 0;
                                                            FUN_058a4490(&stack0x00000100,0x1fb8,
                                                                         0x1fb9,1,0xfffffff8,0);
                                                            if (0x4e < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x3c8) =
                                                                   in_stack_00000100;
                                                              *(undefined4 *)(lVar3 + 0x3d0) =
                                                                   in_stack_00000108;
                                                              in_stack_000000f8 = 0;
                                                              in_stack_000000f0 = 0;
                                                              FUN_058a4490(&stack0x000000f0,0x1fba,
                                                                           0x1fbb,1,0xffffffb6,0);
                                                              if (0x4f < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x3d4) =
                                                                     in_stack_000000f0;
                                                                *(undefined4 *)(lVar3 + 0x3dc) =
                                                                     in_stack_000000f8;
                                                                in_stack_000000e8 = 0;
                                                                in_stack_000000e0 = 0;
                                                                FUN_058a4490(&stack0x000000e0,0x1fbc
                                                                             ,0x1fbc,0,0x1fb3,0);
                                                                if (0x50 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x3e0) =
                                                                       in_stack_000000e0;
                                                                  *(undefined4 *)(lVar3 + 1000) =
                                                                       in_stack_000000e8;
                                                                  in_stack_000000d8 = 0;
                                                                  in_stack_000000d0 = 0;
                                                                  FUN_058a4490(&stack0x000000d0,
                                                                               0x1fc8,0x1fcb,1,
                                                                               0xffffffaa,0);
                                                                  if (0x51 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x3ec) =
                                                                         in_stack_000000d0;
                                                                    *(undefined4 *)(lVar3 + 0x3f4) =
                                                                         in_stack_000000d8;
                                                                    in_stack_000000c8 = 0;
                                                                    in_stack_000000c0 = 0;
                                                                    FUN_058a4490(&stack0x000000c0,
                                                                                 0x1fcc,0x1fcc,0,
                                                                                 0x1fc3,0);
                                                                    if (0x52 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x3f8) =
                                                         in_stack_000000c0;
                                                    *(undefined4 *)(lVar3 + 0x400) =
                                                         in_stack_000000c8;
                                                    in_stack_000000b8 = 0;
                                                    in_stack_000000b0 = 0;
                                                    FUN_058a4490(&stack0x000000b0,0x1fd8,0x1fd9,1,
                                                                 0xfffffff8,0);
                                                    if (0x53 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x404) =
                                                           in_stack_000000b0;
                                                      *(undefined4 *)(lVar3 + 0x40c) =
                                                           in_stack_000000b8;
                                                      in_stack_000000a8 = 0;
                                                      in_stack_000000a0 = 0;
                                                      FUN_058a4490(&stack0x000000a0,0x1fda,0x1fdb,1,
                                                                   0xffffff9c,0);
                                                      if (0x54 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x410) =
                                                             in_stack_000000a0;
                                                        *(undefined4 *)(lVar3 + 0x418) =
                                                             in_stack_000000a8;
                                                        in_stack_00000098 = 0;
                                                        in_stack_00000090 = 0;
                                                        FUN_058a4490(&stack0x00000090,0x1fe8,0x1fe9,
                                                                     1,0xfffffff8,0);
                                                        if (0x55 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x41c) =
                                                               in_stack_00000090;
                                                          *(undefined4 *)(lVar3 + 0x424) =
                                                               in_stack_00000098;
                                                          in_stack_00000088 = 0;
                                                          in_stack_00000080 = 0;
                                                          FUN_058a4490(&stack0x00000080,0x1fea,
                                                                       0x1feb,1,0xffffff90,0);
                                                          if (0x56 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x428) =
                                                                 in_stack_00000080;
                                                            *(undefined4 *)(lVar3 + 0x430) =
                                                                 in_stack_00000088;
                                                            in_stack_00000078 = 0;
                                                            in_stack_00000070 = 0;
                                                            FUN_058a4490(&stack0x00000070,0x1fec,
                                                                         0x1fec,0,0x1fe5,0);
                                                            if (0x57 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x434) =
                                                                   in_stack_00000070;
                                                              *(undefined4 *)(lVar3 + 0x43c) =
                                                                   in_stack_00000078;
                                                              in_stack_00000068 = 0;
                                                              in_stack_00000060 = 0;
                                                              FUN_058a4490(&stack0x00000060,0x1ff8,
                                                                           0x1ff9,1,0xffffff80,0);
                                                              if (0x58 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x440) =
                                                                     in_stack_00000060;
                                                                *(undefined4 *)(lVar3 + 0x448) =
                                                                     in_stack_00000068;
                                                                in_stack_00000058 = 0;
                                                                in_stack_00000050 = 0;
                                                                FUN_058a4490(&stack0x00000050,0x1ffa
                                                                             ,0x1ffb,1,0xffffff82,0)
                                                                ;
                                                                if (0x59 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x44c) =
                                                                       in_stack_00000050;
                                                                  *(undefined4 *)(lVar3 + 0x454) =
                                                                       in_stack_00000058;
                                                                  in_stack_00000048 = 0;
                                                                  in_stack_00000040 = 0;
                                                                  FUN_058a4490(&stack0x00000040,
                                                                               0x1ffc,0x1ffc,0,
                                                                               0x1ff3,0);
                                                                  if (0x5a < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x458) =
                                                                         in_stack_00000040;
                                                                    *(undefined4 *)(lVar3 + 0x460) =
                                                                         in_stack_00000048;
                                                                    in_stack_00000038 = 0;
                                                                    in_stack_00000030 = 0;
                                                                    FUN_058a4490(&stack0x00000030,
                                                                                 0x2160,0x216f,1,
                                                                                 0x10,0);
                                                                    if (0x5b < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x464) =
                                                         in_stack_00000030;
                                                    *(undefined4 *)(lVar3 + 0x46c) =
                                                         in_stack_00000038;
                                                    in_stack_00000028 = 0;
                                                    in_stack_00000020 = 0;
                                                    FUN_058a4490(&stack0x00000020,0x24b6,0x24d0,1,
                                                                 0x1a,0);
                                                    if (0x5c < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x470) =
                                                           in_stack_00000020;
                                                      *(undefined4 *)(lVar3 + 0x478) =
                                                           in_stack_00000028;
                                                      in_stack_00000018 = 0;
                                                      in_stack_00000010 = 0;
                                                      FUN_058a4490(&stack0x00000010,0xff21,0xff3a,1,
                                                                   0x20,0);
                                                      if (0x5d < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x47c) =
                                                             in_stack_00000010;
                                                        *(undefined4 *)(lVar3 + 0x484) =
                                                             in_stack_00000018;
                                                        *(long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                 0x68) = lVar3;
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
    FUN_02f089d0();
  }
LAB_058a4398:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


