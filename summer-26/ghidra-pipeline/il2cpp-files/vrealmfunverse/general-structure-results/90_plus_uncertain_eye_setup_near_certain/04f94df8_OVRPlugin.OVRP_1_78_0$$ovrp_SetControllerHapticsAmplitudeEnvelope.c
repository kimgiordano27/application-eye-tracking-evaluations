/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 04f94df8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  puVar5 = System_Func<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>_TypeInfo;
  puVar4 = System_Func<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_bool>_TypeInfo;
  puVar3 = 
  System_Func<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
  ;
  puVar2 = System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo;
  if ((DAT_066c9df3 & 1) == 0) {
    FUN_02b3c81c(System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    FUN_02b3c81c(System_Func<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_bool>_TypeInfo);
    FUN_02b3c81c(System_Collections_IDictionary_var);
    FUN_02b3c81c(System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo);
    FUN_02b3c81c(System_Func<StructMultiKey<string,_string>,_Type>_TypeInfo);
    FUN_02b3c81c(
                System_Func<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
                );
    FUN_02b3c81c(System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo);
    FUN_02b3c81c(System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo);
    FUN_02b3c81c(System_Data_Listeners_Func<DataViewListener,_DataViewListener,_bool>_TypeInfo);
    FUN_02b3c81c(System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo);
    FUN_02b3c81c(System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo);
    FUN_02b3c81c(System_Func<ValueTuple<EventModifiers,_KeyCode>,_EventBase>_TypeInfo);
    FUN_02b3c81c(
                System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                );
    FUN_02b3c81c(
                System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_HandFinger>_TypeInfo
                );
    FUN_02b3c81c(System_Func<ValueTuple<NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo);
    FUN_02b3c81c(System_Func<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>_TypeInfo);
    FUN_02b3c81c(System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
    FUN_02b3c81c(
                System_Func<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
                );
    DAT_066c9df3 = 1;
  }
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_037a5cd0(lVar9,*(undefined8 *)puVar3);
  uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,5);
  FUN_04cac0f0(uVar10,*(undefined8 *)puVar5,0);
  puVar2 = System_Func<StructMultiKey<string,_string>,_Type>_TypeInfo;
  if (lVar9 != 0) {
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)System_Func<StructMultiKey<string,_string>,_Type>_TypeInfo;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    puVar3 = 
    System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_HandFinger>_TypeInfo
    ;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar10;
        thunk_FUN_02bb0e9c(puVar11,uVar10);
      }
      else {
        FUN_037a6538(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,4);
      FUN_04cac0f0(uVar10,*(undefined8 *)puVar3,0);
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      puVar3 = System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = uVar10;
          thunk_FUN_02bb0e9c(puVar11,uVar10);
        }
        else {
          FUN_037a6538(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,4);
        FUN_04cac0f0(uVar10,*(undefined8 *)puVar3,0);
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar3 = System_Func<ValueTuple<EventModifiers,_char>,_EventBase>_TypeInfo;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *puVar11 = uVar10;
            thunk_FUN_02bb0e9c(puVar11,uVar10);
          }
          else {
            FUN_037a6538(lVar9,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,4);
          FUN_04cac0f0(uVar10,*(undefined8 *)puVar3,0);
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar3 = System_Func<ValueTuple<EventModifiers,_KeyCode>,_EventBase>_TypeInfo;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *puVar11 = uVar10;
              thunk_FUN_02bb0e9c(puVar11,uVar10);
            }
            else {
              FUN_037a6538(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,5);
            FUN_04cac0f0(uVar10,*(undefined8 *)puVar3,0);
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            puVar8 = 
            System_Func<ValueTuple<Vector2,_NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo
            ;
            puVar7 = 
            System_Func<ValueTuple<NavigationDeviceType,_EventModifiers>,_EventBase>_TypeInfo;
            puVar6 = 
            System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
            ;
            puVar5 = System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
            puVar3 = System_Func<KeyValuePair<string,_JSONNode>,_bool>_TypeInfo;
            puVar2 = System_Collections_IDictionary_var;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *puVar11 = uVar10;
                thunk_FUN_02bb0e9c(puVar11,uVar10);
              }
              else {
                FUN_037a6538(lVar9,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar9;
              thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar9);
              uVar10 = FUN_02b3c908(*(undefined8 *)puVar3,0x18);
              FUN_04cac0f0(uVar10,*(undefined8 *)puVar8,0);
              puVar11 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar11 = uVar10;
              thunk_FUN_02bb0e9c(puVar11,uVar10);
              uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,0x18);
              FUN_04cac0f0(uVar10,*(undefined8 *)puVar7,0);
              puVar11 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
              *puVar11 = uVar10;
              thunk_FUN_02bb0e9c(puVar11,uVar10);
              lVar9 = FUN_02b3c908(*(undefined8 *)puVar5,0x18);
              uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,6);
              FUN_04cac0f0(uVar10,*(undefined8 *)puVar6,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = uVar10;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20),uVar10);
                  uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,0);
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar10;
                    thunk_FUN_02bb0e9c();
                    lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                    if (lVar13 == 0) goto LAB_04f95ef0;
                    if (*(int *)(lVar13 + 0x18) != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      *(undefined4 *)(lVar13 + 0x20) = 3;
                      if (2 < uVar1) {
                        *(long *)(lVar9 + 0x30) = lVar13;
                        thunk_FUN_02bb0e9c();
                        lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                        if (lVar13 == 0) goto LAB_04f95ef0;
                        if (*(int *)(lVar13 + 0x18) != 0) {
                          *(undefined4 *)(lVar13 + 0x20) = 4;
                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                            *(long *)(lVar9 + 0x38) = lVar13;
                            thunk_FUN_02bb0e9c();
                            lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                            if (lVar13 == 0) goto LAB_04f95ef0;
                            if (*(int *)(lVar13 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar9 + 0x18);
                              *(undefined4 *)(lVar13 + 0x20) = 5;
                              if (4 < uVar1) {
                                *(long *)(lVar9 + 0x40) = lVar13;
                                thunk_FUN_02bb0e9c();
                                lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                if (lVar13 == 0) goto LAB_04f95ef0;
                                if (*(int *)(lVar13 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  *(undefined4 *)(lVar13 + 0x20) = 0x13;
                                  if (5 < uVar1) {
                                    *(long *)(lVar9 + 0x48) = lVar13;
                                    thunk_FUN_02bb0e9c();
                                    lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                      *(undefined4 *)(lVar13 + 0x20) = 7;
                                      if (6 < uVar1) {
                                        *(long *)(lVar9 + 0x50) = lVar13;
                                        thunk_FUN_02bb0e9c();
                                        lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                        if (lVar13 == 0) goto LAB_04f95ef0;
                                        if (*(int *)(lVar13 + 0x18) != 0) {
                                          *(undefined4 *)(lVar13 + 0x20) = 8;
                                          if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                                            *(long *)(lVar9 + 0x58) = lVar13;
                                            thunk_FUN_02bb0e9c();
                                            lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                            if (lVar13 == 0) goto LAB_04f95ef0;
                                            if (*(int *)(lVar13 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              *(undefined4 *)(lVar13 + 0x20) = 0x14;
                                              if (8 < uVar1) {
                                                *(long *)(lVar9 + 0x60) = lVar13;
                                                thunk_FUN_02bb0e9c();
                                                lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                                if (lVar13 == 0) goto LAB_04f95ef0;
                                                if (*(int *)(lVar13 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  *(undefined4 *)(lVar13 + 0x20) = 10;
                                                  if (9 < uVar1) {
                                                    *(long *)(lVar9 + 0x68) = lVar13;
                                                    thunk_FUN_02bb0e9c();
                                                    lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1);
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                    if (*(int *)(lVar13 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                      if (10 < uVar1) {
                                                        *(long *)(lVar9 + 0x70) = lVar13;
                                                        thunk_FUN_02bb0e9c();
                                                        lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,
                                                                              1);
                                                        if (lVar13 == 0) goto LAB_04f95ef0;
                                                        if (*(int *)(lVar13 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                                          *(undefined4 *)(lVar13 + 0x20) = 0x15;
                                                          if (0xb < uVar1) {
                                                            *(long *)(lVar9 + 0x78) = lVar13;
                                                            thunk_FUN_02bb0e9c();
                                                            lVar13 = FUN_02b3c908(*(undefined8 *)
                                                                                   puVar4,1);
                                                            if (lVar13 == 0) goto LAB_04f95ef0;
                                                            if (*(int *)(lVar13 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                                              *(undefined4 *)(lVar13 + 0x20) = 0xd;
                                                              if (0xc < uVar1) {
                                                                *(long *)(lVar9 + 0x80) = lVar13;
                                                                thunk_FUN_02bb0e9c();
                                                                lVar13 = FUN_02b3c908(*(undefined8 *
                                                                                       )puVar4,1);
                                                                if (lVar13 == 0) goto LAB_04f95ef0;
                                                                if (*(int *)(lVar13 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                                  *(undefined4 *)(lVar13 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < uVar1) {
                                                                    *(long *)(lVar9 + 0x88) = lVar13
                                                                    ;
                                                                    thunk_FUN_02bb0e9c();
                                                                    lVar13 = FUN_02b3c908(*(
                                                  undefined8 *)puVar4,1);
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x16;
                                                    if (0xe < uVar1) {
                                                      *(long *)(lVar9 + 0x90) = lVar13;
                                                      thunk_FUN_02bb0e9c();
                                                      lVar13 = FUN_02b3c908(*(undefined8 *)puVar4,1)
                                                      ;
                                                      if (lVar13 == 0) goto LAB_04f95ef0;
                                                      if (*(int *)(lVar13 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar13 + 0x20) = 0x10;
                                                        if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0)
                                                            != 0) {
                                                          *(long *)(lVar9 + 0x98) = lVar13;
                                                          thunk_FUN_02bb0e9c();
                                                          lVar13 = FUN_02b3c908(*(undefined8 *)
                                                                                 puVar4,1);
                                                          if (lVar13 == 0) goto LAB_04f95ef0;
                                                          if (*(int *)(lVar13 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                                            *(undefined4 *)(lVar13 + 0x20) = 0x11;
                                                            if (0x10 < uVar1) {
                                                              *(long *)(lVar9 + 0xa0) = lVar13;
                                                              thunk_FUN_02bb0e9c();
                                                              lVar13 = FUN_02b3c908(*(undefined8 *)
                                                                                     puVar4,1);
                                                              if (lVar13 == 0) goto LAB_04f95ef0;
                                                              if (*(int *)(lVar13 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                                *(undefined4 *)(lVar13 + 0x20) =
                                                                     0x12;
                                                                if (0x11 < uVar1) {
                                                                  *(long *)(lVar9 + 0xa8) = lVar13;
                                                                  thunk_FUN_02bb0e9c();
                                                                  lVar13 = FUN_02b3c908(*(undefined8
                                                                                          *)puVar4,1
                                                                                       );
                                                                  if (lVar13 == 0)
                                                                  goto LAB_04f95ef0;
                                                                  if (*(int *)(lVar13 + 0x18) != 0)
                                                                  {
                                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                                    *(undefined4 *)(lVar13 + 0x20) =
                                                                         0x17;
                                                                    if (0x12 < uVar1) {
                                                                      *(long *)(lVar9 + 0xb0) =
                                                                           lVar13;
                                                                      thunk_FUN_02bb0e9c((long *)(
                                                  lVar9 + 0xb0));
                                                  uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,0);
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) = uVar10;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0xb8),
                                                                       uVar10);
                                                    uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,0);
                                                    if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xc0) = uVar10;
                                                      thunk_FUN_02bb0e9c((undefined8 *)
                                                                         (lVar9 + 0xc0),uVar10);
                                                      uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,0)
                                                      ;
                                                      if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 200) = uVar10;
                                                        thunk_FUN_02bb0e9c((undefined8 *)
                                                                           (lVar9 + 200),uVar10);
                                                        uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,
                                                                              0);
                                                        if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xd0) = uVar10;
                                                          thunk_FUN_02bb0e9c((undefined8 *)
                                                                             (lVar9 + 0xd0),uVar10);
                                                          uVar10 = FUN_02b3c908(*(undefined8 *)
                                                                                 puVar4,0);
                                                          puVar5 = 
                                                  System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd8) = uVar10;
                                                    thunk_FUN_02bb0e9c();
                                                    plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar12 = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_037550f8(lVar9,*(undefined8 *)puVar3);
                                                    puVar3 = 
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)
                                                  System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03755988(lVar9,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 == 0) goto LAB_04f95ef0;
                                                  }
                                                  puVar3 = 
                                                  System_Func<ValueTuple<string,_Type>,_string>_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar13 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar9,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar14 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar12 = lVar9;
                                                  thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                  uVar10 = FUN_02b3c908(*(undefined8 *)puVar4,5);
                                                  FUN_04cac0f0(uVar10,*(undefined8 *)puVar3,0);
                                                  puVar11 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x28);
                                                  *puVar11 = uVar10;
                                                  thunk_FUN_02bb0e9c(puVar11,uVar10);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_04f95ef0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
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
                FUN_02b3cacc();
              }
            }
          }
        }
      }
    }
  }
LAB_04f95ef0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


