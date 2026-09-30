/*
FUNCTION_NAME: System.Xml.Schema.SymbolsDictionary$$Exists
ENTRY_POINT: 01eb1e18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void System_Xml_Schema_SymbolsDictionary__Exists(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar13 = *(undefined8 **)(unaff_x25 + 0x178);
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20) = param_2;
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterEvent>_Init__;
  plVar7 = (long *)FUN_00da4fb8(*puVar13,2);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar2 = Mono_ISystemDependencyProvider_TypeInfo;
  if (lVar8 != 0) {
    FUN_01eb35f0(lVar8,0,*(undefined8 *)StringLiteral_12377);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 != 0) {
      FUN_017b46ec(lVar9,0);
      *(undefined4 *)(lVar9 + 0x10) = 1;
      uVar10 = FUN_01eaff34(0);
      *(undefined4 *)(lVar9 + 0x14) = 0;
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
      *(long *)(lVar9 + 0x20) = lVar8;
      if (plVar7 != (long *)0x0) {
        lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_01eb35e4:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
        plVar7[4] = lVar9;
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_GetSpanCount__
                      );
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar9 != 0) {
            FUN_017b46ec(lVar9,0);
            *(undefined4 *)(lVar9 + 0x10) = 0x16;
            uVar10 = FUN_01eaff34(10);
            *(undefined4 *)(lVar9 + 0x14) = 0;
            *(undefined8 *)(lVar9 + 0x18) = uVar10;
            *(long *)(lVar9 + 0x20) = lVar8;
            lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar8 == 0) goto LAB_01eb35e4;
            if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
            plVar7[5] = lVar9;
            *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x28) = plVar7;
            plVar7 = (long *)FUN_00da4fb8(*puVar13,8);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            if (lVar8 != 0) {
              FUN_01eb35f0(lVar8,0,*(undefined8 *)StringLiteral_9741);
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar9 != 0) {
                FUN_017b46ec(lVar9,0);
                *(undefined4 *)(lVar9 + 0x10) = 1;
                uVar10 = FUN_01eaff34(10);
                *(undefined4 *)(lVar9 + 0x14) = 0x100;
                *(undefined8 *)(lVar9 + 0x18) = uVar10;
                *(long *)(lVar9 + 0x20) = lVar8;
                if (plVar7 != (long *)0x0) {
                  lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar8 == 0) goto LAB_01eb35e4;
                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                  plVar7[4] = lVar9;
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  if (lVar8 != 0) {
                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                          Method_OVRSceneAnchor_GetSceneAnchorsOfType<object>__);
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar9 != 0) {
                      FUN_017b46ec(lVar9,0);
                      *(undefined4 *)(lVar9 + 0x10) = 9;
                      uVar10 = FUN_01eaff34(10);
                      *(undefined4 *)(lVar9 + 0x14) = 0;
                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                      *(long *)(lVar9 + 0x20) = lVar8;
                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
                      if (lVar8 == 0) goto LAB_01eb35e4;
                      if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
                      plVar7[5] = lVar9;
                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                      if (lVar8 != 0) {
                        FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_TerrainMaterial>_MoveNext__
                                    );
                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        if (lVar9 != 0) {
                          FUN_017b46ec(lVar9,0);
                          *(undefined4 *)(lVar9 + 0x10) = 6;
                          uVar10 = FUN_01eaff34(10);
                          *(undefined4 *)(lVar9 + 0x14) = 0;
                          *(undefined8 *)(lVar9 + 0x18) = uVar10;
                          *(long *)(lVar9 + 0x20) = lVar8;
                          lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
                          if (lVar8 == 0) goto LAB_01eb35e4;
                          if (*(uint *)(plVar7 + 3) < 3) goto LAB_01eb35e0;
                          plVar7[6] = lVar9;
                          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                          if (lVar8 != 0) {
                            FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                  RCG_Lovesick_InteractiveObjects_PlacePoint_<>c_TypeInfo
                                        );
                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            if (lVar9 != 0) {
                              FUN_017b46ec(lVar9,0);
                              *(undefined4 *)(lVar9 + 0x10) = 0xe;
                              uVar10 = FUN_01eaff34(10);
                              *(undefined4 *)(lVar9 + 0x14) = 0;
                              *(undefined8 *)(lVar9 + 0x18) = uVar10;
                              *(long *)(lVar9 + 0x20) = lVar8;
                              lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
                              if (lVar8 == 0) goto LAB_01eb35e4;
                              if (*(uint *)(plVar7 + 3) < 4) goto LAB_01eb35e0;
                              plVar7[7] = lVar9;
                              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                              puVar6 = 
                              Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__;
                              if (lVar8 != 0) {
                                FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                            
                                                  Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__
                                            );
                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                if (lVar9 != 0) {
                                  FUN_017b46ec(lVar9,0);
                                  *(undefined4 *)(lVar9 + 0x10) = 0x29;
                                  uVar10 = FUN_01eaff34(0);
                                  *(undefined4 *)(lVar9 + 0x14) = 0;
                                  *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                  *(long *)(lVar9 + 0x20) = lVar8;
                                  lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar7 + 0x40));
                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                  if (*(uint *)(plVar7 + 3) < 5) goto LAB_01eb35e0;
                                  plVar7[8] = lVar9;
                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                  if (lVar8 != 0) {
                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                                );
                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    if (lVar9 != 0) {
                                      FUN_017b46ec(lVar9,0);
                                      *(undefined4 *)(lVar9 + 0x10) = 0x2a;
                                      uVar10 = FUN_01eaff34(7);
                                      *(undefined4 *)(lVar9 + 0x14) = 0;
                                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                      *(long *)(lVar9 + 0x20) = lVar8;
                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                        (*plVar7 + 0x40));
                                      if (lVar8 == 0) goto LAB_01eb35e4;
                                      if (*(uint *)(plVar7 + 3) < 6) goto LAB_01eb35e0;
                                      plVar7[9] = lVar9;
                                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                      if (lVar8 != 0) {
                                        FUN_01eb35f0(lVar8,0,*(undefined8 *)StringLiteral_6747);
                                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                        if (lVar9 != 0) {
                                          FUN_017b46ec(lVar9,0);
                                          *(undefined4 *)(lVar9 + 0x10) = 0x2b;
                                          uVar10 = FUN_01eaff34(0);
                                          *(undefined4 *)(lVar9 + 0x14) = 0;
                                          *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                          *(long *)(lVar9 + 0x20) = lVar8;
                                          lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                            (*plVar7 + 0x40));
                                          if (lVar8 == 0) goto LAB_01eb35e4;
                                          if (*(uint *)(plVar7 + 3) < 7) goto LAB_01eb35e0;
                                          plVar7[10] = lVar9;
                                          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                          if (lVar8 != 0) {
                                            FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                    
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                            if (lVar9 != 0) {
                                              FUN_017b46ec(lVar9,0);
                                              *(undefined4 *)(lVar9 + 0x10) = 0x2c;
                                              uVar10 = FUN_01eaff34(0);
                                              *(undefined4 *)(lVar9 + 0x14) = 0;
                                              *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                              *(long *)(lVar9 + 0x20) = lVar8;
                                              lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                (*plVar7 + 0x40));
                                              if (lVar8 == 0) goto LAB_01eb35e4;
                                              if (*(uint *)(plVar7 + 3) < 8) goto LAB_01eb35e0;
                                              plVar7[0xb] = lVar9;
                                              *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x30) =
                                                   plVar7;
                                              plVar7 = (long *)FUN_00da4fb8(*puVar13,7);
                                              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                              if (lVar8 != 0) {
                                                FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                            
                                                  System_Collections_Generic_List<NavMeshSurface>_TypeInfo
                                                  );
                                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                if (lVar9 != 0) {
                                                  FUN_017b46ec(lVar9,0);
                                                  *(undefined4 *)(lVar9 + 0x10) = 1;
                                                  uVar10 = FUN_01eaff34(10);
                                                  *(undefined4 *)(lVar9 + 0x14) = 0;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                    plVar7[4] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                            StringLiteral_4010);
                                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar9 != 0) {
                                                        FUN_017b46ec(lVar9,0);
                                                        *(undefined4 *)(lVar9 + 0x10) = 0x12;
                                                        uVar10 = FUN_01eaff34(10);
                                                        *(undefined4 *)(lVar9 + 0x14) = 0;
                                                        *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                        *(long *)(lVar9 + 0x20) = lVar8;
                                                        lVar8 = thunk_FUN_00d6225c(lVar9,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar7[5] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_lane_f32__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x1e;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar7[6] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    puVar1 = 
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x29;
                                                    uVar10 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar7[7] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                            PTR_DAT_033f1ad8);
                                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar9 != 0) {
                                                        FUN_017b46ec(lVar9,0);
                                                        *(undefined4 *)(lVar9 + 0x10) = 0x2a;
                                                        uVar10 = FUN_01eaff34(7);
                                                        *(undefined4 *)(lVar9 + 0x14) = 0;
                                                        *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                        *(long *)(lVar9 + 0x20) = lVar8;
                                                        lVar8 = thunk_FUN_00d6225c(lVar9,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 5) goto LAB_01eb35e0;
                                                  plVar7[8] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x2b;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar7[9] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    puVar4 = 
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x2c;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 7)
                                                    goto LAB_01eb35e0;
                                                    plVar7[10] = lVar9;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x38)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*puVar13,3);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqsubq_s8__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 2;
                                                    uVar10 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0x100;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 4;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar7[5] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_96>__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 3;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar7[6] = lVar9;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x40)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*puVar13,3);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  System_Runtime_CompilerServices_ITuple_TypeInfo);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 2;
                                                    uVar10 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                          StringLiteral_5392);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_017b46ec(lVar9,0);
                                                      *(undefined4 *)(lVar9 + 0x10) = 0x12;
                                                      uVar10 = FUN_01eaff34(10);
                                                      *(undefined4 *)(lVar9 + 0x14) = 0;
                                                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                      *(long *)(lVar9 + 0x20) = lVar8;
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar7[5] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Net_Configuration_SocketElement__ctor__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x1e;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar7[6] = lVar9;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x48)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*puVar13,3);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_GetPool__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0xe;
                                                    uVar10 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_BindableElement_UxmlFactory_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 4;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar7[5] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks<int4>__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 3;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar7[6] = lVar9;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x50)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*puVar13,4);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)puVar6);
                                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar9 != 0) {
                                                        FUN_017b46ec(lVar9,0);
                                                        *(undefined4 *)(lVar9 + 0x10) = 0x29;
                                                        uVar10 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar9 + 0x14) = 0;
                                                        *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                        *(long *)(lVar9 + 0x20) = lVar8;
                                                        if (plVar7 != (long *)0x0) {
                                                          lVar8 = thunk_FUN_00d6225c(lVar9,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x2a;
                                                    uVar10 = FUN_01eaff34(7);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar7[5] = lVar9;
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                            StringLiteral_6747);
                                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar9 != 0) {
                                                        FUN_017b46ec(lVar9,0);
                                                        *(undefined4 *)(lVar9 + 0x10) = 0x2b;
                                                        uVar10 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar9 + 0x14) = 0;
                                                        *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                        *(long *)(lVar9 + 0x20) = lVar8;
                                                        lVar8 = thunk_FUN_00d6225c(lVar9,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar7[6] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0x2c;
                                                    uVar10 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar9 + 0x14) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                    *(long *)(lVar9 + 0x20) = lVar8;
                                                    lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                                      (*plVar7 +
                                                                                      0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar7[7] = lVar9;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x58)
                                                         = plVar7;
                                                    plVar7 = (long *)FUN_00da4fb8(*puVar13,4);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb35f0(lVar8,0,*(undefined8 *)puVar1);
                                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar9 != 0) {
                                                        FUN_017b46ec(lVar9,0);
                                                        *(undefined4 *)(lVar9 + 0x10) = 0x29;
                                                        uVar10 = FUN_01eaff34(10);
                                                        *(undefined4 *)(lVar9 + 0x14) = 0;
                                                        *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                        *(long *)(lVar9 + 0x20) = lVar8;
                                                        if (plVar7 != (long *)0x0) {
                                                          lVar8 = thunk_FUN_00d6225c(lVar9,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)
                                                                          PTR_DAT_033f1ad8);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_017b46ec(lVar9,0);
                                                      *(undefined4 *)(lVar9 + 0x10) = 0x2a;
                                                      uVar10 = FUN_01eaff34(7);
                                                      *(undefined4 *)(lVar9 + 0x14) = 0;
                                                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                      *(long *)(lVar9 + 0x20) = lVar8;
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar7[5] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)puVar5);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_017b46ec(lVar9,0);
                                                      *(undefined4 *)(lVar9 + 0x10) = 0x2b;
                                                      uVar10 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar9 + 0x14) = 0;
                                                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                      *(long *)(lVar9 + 0x20) = lVar8;
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar7[6] = lVar9;
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb35f0(lVar8,0,*(undefined8 *)puVar4);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_017b46ec(lVar9,0);
                                                      *(undefined4 *)(lVar9 + 0x10) = 0x2c;
                                                      uVar10 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar9 + 0x14) = 0;
                                                      *(undefined8 *)(lVar9 + 0x18) = uVar10;
                                                      *(long *)(lVar9 + 0x20) = lVar8;
                                                      lVar8 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 4) goto LAB_01eb35e0;
                                                  plVar7[7] = lVar9;
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
                                                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       plVar7;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,_object>_get_Current__
                                                  ;
                                                  plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                 puVar3,9);
                                                  uVar10 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar10;
                                                    *(undefined8 *)(lVar8 + 0x28) = 0;
                                                    *(undefined8 *)(lVar8 + 0x20) = 0;
                                                    *(undefined8 *)(lVar8 + 0x38) = 0;
                                                    *(undefined8 *)(lVar8 + 0x30) = 0;
                                                    *(undefined1 *)(lVar8 + 0x40) = 0;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar9 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar7 
                                                  + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar7[3] == 0) goto LAB_01eb35e0;
                                                  plVar7[4] = lVar8;
                                                  puVar3 = 
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 8);
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 0x28);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo);
                                                  puVar6 = StringLiteral_8081;
                                                  if (lVar8 != 0) {
                                                    FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_FunctionNode_TypeInfo);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                                  puVar1 = 
                                                  System_Collections_Generic_List<ITimelineEvaluateCallback>_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_01eb389c(lVar9,0,*(undefined8 *)
                                                                          OVRPlugin_Media_TypeInfo);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar1);
                                                    if (lVar11 != 0) {
                                                      FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                             StringLiteral_2469);
                                                      lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar12 != 0) {
                                                        FUN_017b46ec(lVar12,0);
                                                        *(undefined8 *)(lVar12 + 0x18) = uVar14;
                                                        *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                        *(long *)(lVar12 + 0x28) = lVar8;
                                                        *(long *)(lVar12 + 0x30) = lVar9;
                                                        *(long *)(lVar12 + 0x38) = lVar11;
                                                        *(undefined4 *)(lVar12 + 0x10) = 0x1f;
                                                        *(undefined1 *)(lVar12 + 0x40) = 0;
                                                        lVar8 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar7 + 0x40));
                                                  puVar5 = StringLiteral_3853;
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar7 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar7[5] = lVar12;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x10);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Field_<PrivateImplementationDetails>_C9DC39A22CBFC4F5FF834B1596E09F71781B66A23D4CE41A687AEDFD7F6A83B9
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb389c(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c_<DeleteFaces>b__3_0__
                                                  );
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_017b46ec(lVar12,0);
                                                    *(undefined8 *)(lVar12 + 0x18) = uVar10;
                                                    *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                    *(long *)(lVar12 + 0x28) = lVar8;
                                                    *(long *)(lVar12 + 0x30) = lVar9;
                                                    *(long *)(lVar12 + 0x38) = lVar11;
                                                    *(undefined4 *)(lVar12 + 0x10) = 0x20;
                                                    *(undefined1 *)(lVar12 + 0x40) = 0;
                                                    lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    puVar5 = StringLiteral_3853;
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar7[6] = lVar12;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x18);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x38);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_LowLevel_InputRuntime_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb389c(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshl_s32__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                           PTR_DAT_033f0228);
                                                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar12 != 0) {
                                                      FUN_017b46ec(lVar12,0);
                                                      *(undefined8 *)(lVar12 + 0x18) = uVar10;
                                                      *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                      *(long *)(lVar12 + 0x28) = lVar8;
                                                      *(long *)(lVar12 + 0x30) = lVar9;
                                                      *(long *)(lVar12 + 0x38) = lVar11;
                                                      *(undefined4 *)(lVar12 + 0x10) = 0x23;
                                                      *(undefined1 *)(lVar12 + 0x40) = 0;
                                                      lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8
                                                                                          *)(*plVar7
                                                                                            + 0x40))
                                                      ;
                                                      puVar5 = StringLiteral_3853;
                                                      if (lVar8 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar7 + 3) < 4)
                                                      goto LAB_01eb35e0;
                                                      plVar7[7] = lVar12;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar5 + 0xb8) +
                                                                0x40);
                                                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar8 != 0) {
                                                        FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                              StringLiteral_13781);
                                                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar1);
                                                        if (lVar9 != 0) {
                                                          FUN_01eb3970(lVar9,0,*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined8 *)(lVar11 + 0x18) = 0;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    *(long *)(lVar11 + 0x28) = lVar8;
                                                    *(undefined8 *)(lVar11 + 0x30) = 0;
                                                    *(long *)(lVar11 + 0x38) = lVar9;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x21;
                                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                                    lVar8 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 5)
                                                    goto LAB_01eb35e0;
                                                    plVar7[8] = lVar11;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x48);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Meta_Voice_NLayer_Decoder_MpegFrame_TypeInfo);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb389c(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_Mesh_SetSizedArrayForChannel__)
                                                  ;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine__AndroidJNIHelper_GetFieldID__)
                                                  ;
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_017b46ec(lVar12,0);
                                                    *(undefined8 *)(lVar12 + 0x18) = 0;
                                                    *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                    *(long *)(lVar12 + 0x28) = lVar8;
                                                    *(long *)(lVar12 + 0x30) = lVar9;
                                                    *(long *)(lVar12 + 0x38) = lVar11;
                                                    *(undefined4 *)(lVar12 + 0x10) = 0x24;
                                                    *(undefined1 *)(lVar12 + 0x40) = 0;
                                                    lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    puVar6 = StringLiteral_3853;
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar7 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar7[9] = lVar12;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x20);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x50);
                                                    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar8 != 0) {
                                                      FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_OVRExtensions_ToNonAlloc<string>__);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb3970(lVar9,0,*(undefined8 *)
                                                                          StringLiteral_9569);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                                      *(long *)(lVar11 + 0x28) = lVar8;
                                                      *(undefined8 *)(lVar11 + 0x30) = 0;
                                                      *(long *)(lVar11 + 0x38) = lVar9;
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x22;
                                                      *(undefined1 *)(lVar11 + 0x40) = 0;
                                                      lVar8 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*plVar7
                                                                                            + 0x40))
                                                      ;
                                                      puVar6 = StringLiteral_3853;
                                                      if (lVar8 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar7 + 3) < 7)
                                                      goto LAB_01eb35e0;
                                                      plVar7[10] = lVar11;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar6 + 0xb8) +
                                                                0x58);
                                                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar8 != 0) {
                                                        FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                            
                                                  Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_TypeInfo
                                                  );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb3970(lVar9,0,*(undefined8 *)
                                                                          StringLiteral_5056);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined8 *)(lVar11 + 0x18) = 0;
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                      *(long *)(lVar11 + 0x28) = lVar8;
                                                      *(undefined8 *)(lVar11 + 0x30) = 0;
                                                      *(long *)(lVar11 + 0x38) = lVar9;
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x25;
                                                      *(undefined1 *)(lVar11 + 0x40) = 1;
                                                      lVar8 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*plVar7
                                                                                            + 0x40))
                                                      ;
                                                      if (lVar8 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar7 + 3) < 8) {
LAB_01eb35e0:
                    /* WARNING: Subroutine does not return */
                                                        FUN_00da5194();
                                                      }
                                                      plVar7[0xb] = lVar11;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*(long *)puVar6 + 0xb8) +
                                                                0x60);
                                                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar3);
                                                      if (lVar8 != 0) {
                                                        FUN_01eb37c4(lVar8,0,*(undefined8 *)
                                                                                                                                                            
                                                  Method_HingedCipherWheel_OnRelease__);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb3970(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_InternalTreeView_GetItemId__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined8 *)(lVar11 + 0x18) = 0;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                                                    *(long *)(lVar11 + 0x28) = lVar8;
                                                    *(undefined8 *)(lVar11 + 0x30) = 0;
                                                    *(long *)(lVar11 + 0x38) = lVar9;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x25;
                                                    *(undefined1 *)(lVar11 + 0x40) = 1;
                                                    lVar8 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar7 +
                                                                                        0x40));
                                                    if (lVar8 == 0) goto LAB_01eb35e4;
                                                    if (8 < *(uint *)(plVar7 + 3)) {
                                                      plVar7[0xc] = lVar11;
                                                      *(long **)(*(long *)(*(long *)puVar6 + 0xb8) +
                                                                0x68) = plVar7;
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


