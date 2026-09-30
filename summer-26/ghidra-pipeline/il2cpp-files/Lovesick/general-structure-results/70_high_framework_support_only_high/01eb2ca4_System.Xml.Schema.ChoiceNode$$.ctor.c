/*
FUNCTION_NAME: System.Xml.Schema.ChoiceNode$$.ctor
ENTRY_POINT: 01eb2ca4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Xml_Schema_ChoiceNode___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar12;
  
  lVar6 = thunk_FUN_00d62348();
  if (lVar6 != 0) {
    FUN_01eb35f0(lVar6,0,*(undefined8 *)System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo);
    lVar7 = thunk_FUN_00d62348(*unaff_x23);
    if (lVar7 != 0) {
      FUN_017b46ec(lVar7,0);
      *(undefined4 *)(lVar7 + 0x10) = 0x2c;
      uVar8 = FUN_01eaff34(0);
      *(undefined4 *)(lVar7 + 0x14) = 0;
      *(undefined8 *)(lVar7 + 0x18) = uVar8;
      *(long *)(lVar7 + 0x20) = lVar6;
      lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto LAB_01eb35e4;
      if (*(uint *)(unaff_x19 + 3) < 4) goto LAB_01eb35e0;
      unaff_x19[7] = lVar7;
      *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x58) = unaff_x19;
      plVar9 = (long *)FUN_00da4fb8(*unaff_x25,4);
      lVar6 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar6 != 0) {
        FUN_01eb35f0(lVar6,0,*unaff_x28);
        lVar7 = thunk_FUN_00d62348(*unaff_x23);
        if (lVar7 != 0) {
          FUN_017b46ec(lVar7,0);
          *(undefined4 *)(lVar7 + 0x10) = 0x29;
          uVar8 = FUN_01eaff34(10);
          *(undefined4 *)(lVar7 + 0x14) = 0;
          *(undefined8 *)(lVar7 + 0x18) = uVar8;
          *(long *)(lVar7 + 0x20) = lVar6;
          if (plVar9 != (long *)0x0) {
            lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar6 == 0) {
LAB_01eb35e4:
              uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar8,0);
            }
            if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
            plVar9[4] = lVar7;
            lVar6 = thunk_FUN_00d62348(*unaff_x22);
            if (lVar6 != 0) {
              FUN_01eb35f0(lVar6,0,*(undefined8 *)PTR_DAT_033f1ad8);
              lVar7 = thunk_FUN_00d62348(*unaff_x23);
              if (lVar7 != 0) {
                FUN_017b46ec(lVar7,0);
                *(undefined4 *)(lVar7 + 0x10) = 0x2a;
                uVar8 = FUN_01eaff34(7);
                *(undefined4 *)(lVar7 + 0x14) = 0;
                *(undefined8 *)(lVar7 + 0x18) = uVar8;
                *(long *)(lVar7 + 0x20) = lVar6;
                lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar6 == 0) goto LAB_01eb35e4;
                if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                plVar9[5] = lVar7;
                lVar6 = thunk_FUN_00d62348(*unaff_x22);
                if (lVar6 != 0) {
                  FUN_01eb35f0(lVar6,0,*unaff_x27);
                  lVar7 = thunk_FUN_00d62348(*unaff_x23);
                  if (lVar7 != 0) {
                    FUN_017b46ec(lVar7,0);
                    *(undefined4 *)(lVar7 + 0x10) = 0x2b;
                    uVar8 = FUN_01eaff34(0);
                    *(undefined4 *)(lVar7 + 0x14) = 0;
                    *(undefined8 *)(lVar7 + 0x18) = uVar8;
                    *(long *)(lVar7 + 0x20) = lVar6;
                    lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar6 == 0) goto LAB_01eb35e4;
                    if (*(uint *)(plVar9 + 3) < 3) goto LAB_01eb35e0;
                    plVar9[6] = lVar7;
                    lVar6 = thunk_FUN_00d62348(*unaff_x22);
                    if (lVar6 != 0) {
                      FUN_01eb35f0(lVar6,0,*unaff_x29);
                      lVar7 = thunk_FUN_00d62348(*unaff_x23);
                      if (lVar7 != 0) {
                        FUN_017b46ec(lVar7,0);
                        *(undefined4 *)(lVar7 + 0x10) = 0x2c;
                        uVar8 = FUN_01eaff34(0);
                        *(undefined4 *)(lVar7 + 0x14) = 0;
                        *(undefined8 *)(lVar7 + 0x18) = uVar8;
                        *(long *)(lVar7 + 0x20) = lVar6;
                        lVar6 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                        if (lVar6 == 0) goto LAB_01eb35e4;
                        if (*(uint *)(plVar9 + 3) < 4) goto LAB_01eb35e0;
                        plVar9[7] = lVar7;
                        puVar2 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
                        *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) = plVar9;
                        puVar3 = 
                        Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,_object>_get_Current__
                        ;
                        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,9);
                        uVar8 = **(undefined8 **)(*unaff_x24 + 0xb8);
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                        if (lVar6 != 0) {
                          FUN_017b46ec(lVar6,0);
                          *(undefined4 *)(lVar6 + 0x10) = 0;
                          *(undefined8 *)(lVar6 + 0x18) = uVar8;
                          *(undefined8 *)(lVar6 + 0x28) = 0;
                          *(undefined8 *)(lVar6 + 0x20) = 0;
                          *(undefined8 *)(lVar6 + 0x38) = 0;
                          *(undefined8 *)(lVar6 + 0x30) = 0;
                          *(undefined1 *)(lVar6 + 0x40) = 0;
                          if (plVar9 != (long *)0x0) {
                            lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar9 + 0x40));
                            if (lVar7 == 0) goto LAB_01eb35e4;
                            if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                            plVar9[4] = lVar6;
                            puVar2 = RCG_Lovesick_RhythmGame_SongManager_TypeInfo;
                            uVar12 = *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
                            uVar8 = *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x28);
                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                        RCG_Lovesick_RhythmGame_SongManager_TypeInfo
                                                      );
                            puVar5 = StringLiteral_8081;
                            if (lVar6 != 0) {
                              FUN_01eb37c4(lVar6,0,*(undefined8 *)System_Data_FunctionNode_TypeInfo)
                              ;
                              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                              puVar1 = 
                              System_Collections_Generic_List<ITimelineEvaluateCallback>_TypeInfo;
                              if (lVar7 != 0) {
                                FUN_01eb389c(lVar7,0,*(undefined8 *)OVRPlugin_Media_TypeInfo);
                                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar10 != 0) {
                                  FUN_01eb3970(lVar10,0,*(undefined8 *)StringLiteral_2469);
                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                  if (lVar11 != 0) {
                                    FUN_017b46ec(lVar11,0);
                                    *(undefined8 *)(lVar11 + 0x18) = uVar12;
                                    *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                    *(long *)(lVar11 + 0x28) = lVar6;
                                    *(long *)(lVar11 + 0x30) = lVar7;
                                    *(long *)(lVar11 + 0x38) = lVar10;
                                    *(undefined4 *)(lVar11 + 0x10) = 0x1f;
                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                    lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                       (*plVar9 + 0x40));
                                    puVar4 = StringLiteral_3853;
                                    if (lVar6 == 0) goto LAB_01eb35e4;
                                    if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                                    plVar9[5] = lVar11;
                                    uVar8 = *(undefined8 *)
                                             (*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                                    uVar12 = *(undefined8 *)
                                              (*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    if (lVar6 != 0) {
                                      FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                        
                                                  Field_<PrivateImplementationDetails>_C9DC39A22CBFC4F5FF834B1596E09F71781B66A23D4CE41A687AEDFD7F6A83B9
                                                  );
                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                      if (lVar7 != 0) {
                                        FUN_01eb389c(lVar7,0,*(undefined8 *)
                                                                                                                            
                                                  RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_TypeInfo
                                                  );
                                        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        if (lVar10 != 0) {
                                          FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c_<DeleteFaces>b__3_0__
                                                  );
                                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                          if (lVar11 != 0) {
                                            FUN_017b46ec(lVar11,0);
                                            *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                            *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                            *(long *)(lVar11 + 0x28) = lVar6;
                                            *(long *)(lVar11 + 0x30) = lVar7;
                                            *(long *)(lVar11 + 0x38) = lVar10;
                                            *(undefined4 *)(lVar11 + 0x10) = 0x20;
                                            *(undefined1 *)(lVar11 + 0x40) = 0;
                                            lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                               (*plVar9 + 0x40));
                                            puVar4 = StringLiteral_3853;
                                            if (lVar6 == 0) goto LAB_01eb35e4;
                                            if (*(uint *)(plVar9 + 3) < 3) goto LAB_01eb35e0;
                                            plVar9[6] = lVar11;
                                            uVar8 = *(undefined8 *)
                                                     (*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
                                            uVar12 = *(undefined8 *)
                                                      (*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                            if (lVar6 != 0) {
                                              FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_InputSystem_LowLevel_InputRuntime_TypeInfo
                                                  );
                                              lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                              if (lVar7 != 0) {
                                                FUN_01eb389c(lVar7,0,*(undefined8 *)
                                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshl_s32__
                                                  );
                                                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                if (lVar10 != 0) {
                                                  FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                         PTR_DAT_033f0228);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                    *(long *)(lVar11 + 0x28) = lVar6;
                                                    *(long *)(lVar11 + 0x30) = lVar7;
                                                    *(long *)(lVar11 + 0x38) = lVar10;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x23;
                                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                                    lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    puVar4 = StringLiteral_3853;
                                                    if (lVar6 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar9[7] = lVar11;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x40);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar6 != 0) {
                                                      FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                            StringLiteral_13781);
                                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar1);
                                                      if (lVar7 != 0) {
                                                        FUN_01eb3970(lVar7,0,*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_017b46ec(lVar10,0);
                                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar8;
                                                    *(long *)(lVar10 + 0x28) = lVar6;
                                                    *(undefined8 *)(lVar10 + 0x30) = 0;
                                                    *(long *)(lVar10 + 0x38) = lVar7;
                                                    *(undefined4 *)(lVar10 + 0x10) = 0x21;
                                                    *(undefined1 *)(lVar10 + 0x40) = 0;
                                                    lVar6 = thunk_FUN_00d6225c(lVar10,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 5)
                                                    goto LAB_01eb35e0;
                                                    plVar9[8] = lVar10;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x48);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar6 != 0) {
                                                      FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                                                        
                                                  Meta_Voice_NLayer_Decoder_MpegFrame_TypeInfo);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb389c(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_Mesh_SetSizedArrayForChannel__)
                                                  ;
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine__AndroidJNIHelper_GetFieldID__)
                                                  ;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined8 *)(lVar11 + 0x18) = 0;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar8;
                                                    *(long *)(lVar11 + 0x28) = lVar6;
                                                    *(long *)(lVar11 + 0x30) = lVar7;
                                                    *(long *)(lVar11 + 0x38) = lVar10;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x24;
                                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                                    lVar6 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    puVar5 = StringLiteral_3853;
                                                    if (lVar6 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar9[9] = lVar11;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar5 + 0xb8) +
                                                             0x20);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x50);
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar6 != 0) {
                                                      FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_OVRExtensions_ToNonAlloc<string>__);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb3970(lVar7,0,*(undefined8 *)
                                                                          StringLiteral_9569);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar10 != 0) {
                                                      FUN_017b46ec(lVar10,0);
                                                      *(undefined8 *)(lVar10 + 0x18) = uVar8;
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar12;
                                                      *(long *)(lVar10 + 0x28) = lVar6;
                                                      *(undefined8 *)(lVar10 + 0x30) = 0;
                                                      *(long *)(lVar10 + 0x38) = lVar7;
                                                      *(undefined4 *)(lVar10 + 0x10) = 0x22;
                                                      *(undefined1 *)(lVar10 + 0x40) = 0;
                                                      lVar6 = thunk_FUN_00d6225c(lVar10,*(undefined8
                                                                                          *)(*plVar9
                                                                                            + 0x40))
                                                      ;
                                                      puVar5 = StringLiteral_3853;
                                                      if (lVar6 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar9 + 3) < 7)
                                                      goto LAB_01eb35e0;
                                                      plVar9[10] = lVar10;
                                                      uVar8 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar5 + 0xb8) +
                                                               0x58);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar6 != 0) {
                                                        FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                                                            
                                                  Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb3970(lVar7,0,*(undefined8 *)
                                                                          StringLiteral_5056);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar10 != 0) {
                                                      FUN_017b46ec(lVar10,0);
                                                      *(undefined8 *)(lVar10 + 0x18) = 0;
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar8;
                                                      *(long *)(lVar10 + 0x28) = lVar6;
                                                      *(undefined8 *)(lVar10 + 0x30) = 0;
                                                      *(long *)(lVar10 + 0x38) = lVar7;
                                                      *(undefined4 *)(lVar10 + 0x10) = 0x25;
                                                      *(undefined1 *)(lVar10 + 0x40) = 1;
                                                      lVar6 = thunk_FUN_00d6225c(lVar10,*(undefined8
                                                                                          *)(*plVar9
                                                                                            + 0x40))
                                                      ;
                                                      if (lVar6 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar9 + 3) < 8) {
LAB_01eb35e0:
                    /* WARNING: Subroutine does not return */
                                                        FUN_00da5194();
                                                      }
                                                      plVar9[0xb] = lVar10;
                                                      uVar8 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar5 + 0xb8) +
                                                               0x60);
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar6 != 0) {
                                                        FUN_01eb37c4(lVar6,0,*(undefined8 *)
                                                                                                                                                            
                                                  Method_HingedCipherWheel_OnRelease__);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb3970(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_InternalTreeView_GetItemId__
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_017b46ec(lVar10,0);
                                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar8;
                                                    *(long *)(lVar10 + 0x28) = lVar6;
                                                    *(undefined8 *)(lVar10 + 0x30) = 0;
                                                    *(long *)(lVar10 + 0x38) = lVar7;
                                                    *(undefined4 *)(lVar10 + 0x10) = 0x25;
                                                    *(undefined1 *)(lVar10 + 0x40) = 1;
                                                    lVar6 = thunk_FUN_00d6225c(lVar10,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    if (lVar6 == 0) goto LAB_01eb35e4;
                                                    if (8 < *(uint *)(plVar9 + 3)) {
                                                      plVar9[0xc] = lVar10;
                                                      *(long **)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                                0x68) = plVar9;
                                                      return;
                                                    }
                                                    goto LAB_01eb35e0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


