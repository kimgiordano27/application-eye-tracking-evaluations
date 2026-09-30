/*
FUNCTION_NAME: System.Xml.Schema.SymbolsDictionary$$get_Item
ENTRY_POINT: 01eb1d60
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


void System_Xml_Schema_SymbolsDictionary__get_Item(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int in_w8;
  undefined8 *unaff_x20;
  long *unaff_x24;
  undefined8 uVar14;
  
  *(undefined4 *)(param_1 + 0x20) = 2;
                    /* try { // try from 01eb1d6c to 01fb1d93 has its CatchHandler @ 01eb20d4 */
  if (in_w8 != 1) {
    *(undefined4 *)(param_1 + 0x24) = 3;
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = param_1;
    puVar2 = StringLiteral_11872;
    uVar8 = FUN_00da4fb8(*unaff_x20,5);
    FUN_016a34e8(uVar8,*(undefined8 *)puVar2,0);
    *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar8;
    lVar9 = FUN_00da4fb8(*unaff_x20,1);
    if (lVar9 != 0) {
                    /* try { // try from 01eb1dc8 to 01fb1df3 has its CatchHandler @ 01eb20d0 */
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01eb35e0;
      *(undefined4 *)(lVar9 + 0x20) = 8;
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18) = lVar9;
      lVar9 = FUN_00da4fb8(*unaff_x20,2);
      if (lVar9 != 0) {
        if ((*(int *)(lVar9 + 0x18) == 0) ||
           (*(undefined4 *)(lVar9 + 0x20) = 4, *(int *)(lVar9 + 0x18) == 1)) goto LAB_01eb35e0;
        *(undefined4 *)(lVar9 + 0x24) = 6;
        puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_9__;
        *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20) = lVar9;
        puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterEvent>_Init__;
        plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,2);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = Mono_ISystemDependencyProvider_TypeInfo;
        if (lVar9 != 0) {
          FUN_01eb35f0(lVar9,0,*(undefined8 *)StringLiteral_12377);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar11 != 0) {
            FUN_017b46ec(lVar11,0);
            *(undefined4 *)(lVar11 + 0x10) = 1;
            uVar8 = FUN_01eaff34(0);
            *(undefined4 *)(lVar11 + 0x14) = 0;
            *(undefined8 *)(lVar11 + 0x18) = uVar8;
            *(long *)(lVar11 + 0x20) = lVar9;
            if (plVar10 != (long *)0x0) {
              lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar9 == 0) {
LAB_01eb35e4:
                uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar8,0);
              }
              if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
              plVar10[4] = lVar11;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if (lVar9 != 0) {
                FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                      Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_GetSpanCount__
                            );
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar11 != 0) {
                  FUN_017b46ec(lVar11,0);
                  *(undefined4 *)(lVar11 + 0x10) = 0x16;
                  uVar8 = FUN_01eaff34(10);
                  *(undefined4 *)(lVar11 + 0x14) = 0;
                  *(undefined8 *)(lVar11 + 0x18) = uVar8;
                  *(long *)(lVar11 + 0x20) = lVar9;
                  lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                  if (lVar9 == 0) goto LAB_01eb35e4;
                  if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                  plVar10[5] = lVar11;
                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x28) = plVar10;
                  plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,8);
                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  if (lVar9 != 0) {
                    FUN_01eb35f0(lVar9,0,*(undefined8 *)StringLiteral_9741);
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar11 != 0) {
                      FUN_017b46ec(lVar11,0);
                      *(undefined4 *)(lVar11 + 0x10) = 1;
                      uVar8 = FUN_01eaff34(10);
                      *(undefined4 *)(lVar11 + 0x14) = 0x100;
                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                      *(long *)(lVar11 + 0x20) = lVar9;
                      if (plVar10 != (long *)0x0) {
                        lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                        if (lVar9 == 0) goto LAB_01eb35e4;
                        if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                        plVar10[4] = lVar11;
                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                        if (lVar9 != 0) {
                          FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                Method_OVRSceneAnchor_GetSceneAnchorsOfType<object>__
                                      );
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          if (lVar11 != 0) {
                            FUN_017b46ec(lVar11,0);
                            *(undefined4 *)(lVar11 + 0x10) = 9;
                            uVar8 = FUN_01eaff34(10);
                            *(undefined4 *)(lVar11 + 0x14) = 0;
                            *(undefined8 *)(lVar11 + 0x18) = uVar8;
                            *(long *)(lVar11 + 0x20) = lVar9;
                            lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                            if (lVar9 == 0) goto LAB_01eb35e4;
                            if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                            plVar10[5] = lVar11;
                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                            if (lVar9 != 0) {
                              FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_TerrainMaterial>_MoveNext__
                                          );
                              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              if (lVar11 != 0) {
                                FUN_017b46ec(lVar11,0);
                                *(undefined4 *)(lVar11 + 0x10) = 6;
                                uVar8 = FUN_01eaff34(10);
                                *(undefined4 *)(lVar11 + 0x14) = 0;
                                *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                *(long *)(lVar11 + 0x20) = lVar9;
                                lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40));
                                if (lVar9 == 0) goto LAB_01eb35e4;
                                if (*(uint *)(plVar10 + 3) < 3) goto LAB_01eb35e0;
                                plVar10[6] = lVar11;
                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                if (lVar9 != 0) {
                                  FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                
                                                  RCG_Lovesick_InteractiveObjects_PlacePoint_<>c_TypeInfo
                                              );
                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                  if (lVar11 != 0) {
                                    FUN_017b46ec(lVar11,0);
                                    *(undefined4 *)(lVar11 + 0x10) = 0xe;
                                    uVar8 = FUN_01eaff34(10);
                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                    *(long *)(lVar11 + 0x20) = lVar9;
                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                       (*plVar10 + 0x40));
                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                    if (*(uint *)(plVar10 + 3) < 4) goto LAB_01eb35e0;
                                    plVar10[7] = lVar11;
                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                    puVar1 = 
                                    Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__;
                                    if (lVar9 != 0) {
                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                        
                                                  Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__
                                                  );
                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                      if (lVar11 != 0) {
                                        FUN_017b46ec(lVar11,0);
                                        *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                        uVar8 = FUN_01eaff34(0);
                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                        *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                        *(long *)(lVar11 + 0x20) = lVar9;
                                        lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                           (*plVar10 + 0x40));
                                        if (lVar9 == 0) goto LAB_01eb35e4;
                                        if (*(uint *)(plVar10 + 3) < 5) goto LAB_01eb35e0;
                                        plVar10[8] = lVar11;
                                        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                        if (lVar9 != 0) {
                                          FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                                  );
                                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                          if (lVar11 != 0) {
                                            FUN_017b46ec(lVar11,0);
                                            *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                            uVar8 = FUN_01eaff34(7);
                                            *(undefined4 *)(lVar11 + 0x14) = 0;
                                            *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                            *(long *)(lVar11 + 0x20) = lVar9;
                                            lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                               (*plVar10 + 0x40));
                                            if (lVar9 == 0) goto LAB_01eb35e4;
                                            if (*(uint *)(plVar10 + 3) < 6) goto LAB_01eb35e0;
                                            plVar10[9] = lVar11;
                                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                            if (lVar9 != 0) {
                                              FUN_01eb35f0(lVar9,0,*(undefined8 *)StringLiteral_6747
                                                          );
                                              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              if (lVar11 != 0) {
                                                FUN_017b46ec(lVar11,0);
                                                *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                uVar8 = FUN_01eaff34(0);
                                                *(undefined4 *)(lVar11 + 0x14) = 0;
                                                *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                *(long *)(lVar11 + 0x20) = lVar9;
                                                lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                   (*plVar10 + 0x40)
                                                                          );
                                                if (lVar9 == 0) goto LAB_01eb35e4;
                                                if (*(uint *)(plVar10 + 3) < 7) goto LAB_01eb35e0;
                                                plVar10[10] = lVar11;
                                                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                if (lVar9 != 0) {
                                                  FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 8)
                                                    goto LAB_01eb35e0;
                                                    plVar10[0xb] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x30)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,7);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  System_Collections_Generic_List<NavMeshSurface>_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 1;
                                                    uVar8 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    if (plVar10 != (long *)0x0) {
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                          StringLiteral_4010);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x12;
                                                      uVar8 = FUN_01eaff34(10);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                      *(long *)(lVar11 + 0x20) = lVar9;
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar10[5] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_lane_f32__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x1e;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar10[6] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                                    uVar8 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar10[7] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                            PTR_DAT_033f1ad8);
                                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar11 != 0) {
                                                        FUN_017b46ec(lVar11,0);
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                                        uVar8 = FUN_01eaff34(7);
                                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                        *(long *)(lVar11 + 0x20) = lVar9;
                                                        lVar9 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 5) goto LAB_01eb35e0;
                                                  plVar10[8] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar10[9] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    puVar4 = 
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 7)
                                                    goto LAB_01eb35e0;
                                                    plVar10[10] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x38)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,3);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqsubq_s8__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 2;
                                                    uVar8 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0x100;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    if (plVar10 != (long *)0x0) {
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 4;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar10[5] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_96>__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 3;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar10[6] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x40)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,3);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  System_Runtime_CompilerServices_ITuple_TypeInfo);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 2;
                                                    uVar8 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    if (plVar10 != (long *)0x0) {
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                          StringLiteral_5392);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x12;
                                                      uVar8 = FUN_01eaff34(10);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                      *(long *)(lVar11 + 0x20) = lVar9;
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar10[5] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Net_Configuration_SocketElement__ctor__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x1e;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar10[6] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x48)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,3);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_GetPool__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0xe;
                                                    uVar8 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    if (plVar10 != (long *)0x0) {
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_BindableElement_UxmlFactory_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 4;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar10[5] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks<int4>__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 3;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar10[6] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x50)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,4);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)puVar1);
                                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar11 != 0) {
                                                        FUN_017b46ec(lVar11,0);
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                                        uVar8 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                        *(long *)(lVar11 + 0x20) = lVar9;
                                                        if (plVar10 != (long *)0x0) {
                                                          lVar9 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                                    uVar8 = FUN_01eaff34(7);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar10[5] = lVar11;
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                            StringLiteral_6747);
                                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar11 != 0) {
                                                        FUN_017b46ec(lVar11,0);
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                        uVar8 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                        *(long *)(lVar11 + 0x20) = lVar9;
                                                        lVar9 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar10[6] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                    uVar8 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                    *(long *)(lVar11 + 0x20) = lVar9;
                                                    lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar10[7] = lVar11;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x58)
                                                         = plVar10;
                                                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                    puVar7,4);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb35f0(lVar9,0,*(undefined8 *)puVar6);
                                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar11 != 0) {
                                                        FUN_017b46ec(lVar11,0);
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                                        uVar8 = FUN_01eaff34(10);
                                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                        *(long *)(lVar11 + 0x20) = lVar9;
                                                        if (plVar10 != (long *)0x0) {
                                                          lVar9 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)
                                                                          PTR_DAT_033f1ad8);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                                      uVar8 = FUN_01eaff34(7);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                      *(long *)(lVar11 + 0x20) = lVar9;
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar10[5] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)puVar5);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                      uVar8 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                      *(long *)(lVar11 + 0x20) = lVar9;
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar10[6] = lVar11;
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb35f0(lVar9,0,*(undefined8 *)puVar4);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                      uVar8 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar8;
                                                      *(long *)(lVar11 + 0x20) = lVar9;
                                                      lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 4) goto LAB_01eb35e0;
                                                  plVar10[7] = lVar11;
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
                                                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       plVar10;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,_object>_get_Current__
                                                  ;
                                                  plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                  puVar3,9);
                                                  uVar8 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar9 != 0) {
                                                    FUN_017b46ec(lVar9,0);
                                                    *(undefined4 *)(lVar9 + 0x10) = 0;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                    *(undefined8 *)(lVar9 + 0x28) = 0;
                                                    *(undefined8 *)(lVar9 + 0x20) = 0;
                                                    *(undefined8 *)(lVar9 + 0x38) = 0;
                                                    *(undefined8 *)(lVar9 + 0x30) = 0;
                                                    *(undefined1 *)(lVar9 + 0x40) = 0;
                                                    if (plVar10 != (long *)0x0) {
                                                      lVar11 = thunk_FUN_00d6225c(lVar9,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar11 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar10[3] == 0) goto LAB_01eb35e0;
                                                  plVar10[4] = lVar9;
                                                  puVar3 = 
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 8);
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*unaff_x24 + 0xb8) + 0x28);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo);
                                                  puVar7 = StringLiteral_8081;
                                                  if (lVar9 != 0) {
                                                    FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_FunctionNode_TypeInfo);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7)
                                                  ;
                                                  puVar1 = 
                                                  System_Collections_Generic_List<ITimelineEvaluateCallback>_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb389c(lVar11,0,*(undefined8 *)
                                                                           OVRPlugin_Media_TypeInfo)
                                                    ;
                                                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar1);
                                                    if (lVar12 != 0) {
                                                      FUN_01eb3970(lVar12,0,*(undefined8 *)
                                                                             StringLiteral_2469);
                                                      lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar2);
                                                      if (lVar13 != 0) {
                                                        FUN_017b46ec(lVar13,0);
                                                        *(undefined8 *)(lVar13 + 0x18) = uVar14;
                                                        *(undefined8 *)(lVar13 + 0x20) = uVar8;
                                                        *(long *)(lVar13 + 0x28) = lVar9;
                                                        *(long *)(lVar13 + 0x30) = lVar11;
                                                        *(long *)(lVar13 + 0x38) = lVar12;
                                                        *(undefined4 *)(lVar13 + 0x10) = 0x1f;
                                                        *(undefined1 *)(lVar13 + 0x40) = 0;
                                                        lVar9 = thunk_FUN_00d6225c(lVar13,*(
                                                  undefined8 *)(*plVar10 + 0x40));
                                                  puVar6 = StringLiteral_3853;
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar10[5] = lVar13;
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar6 + 0xb8) + 0x10
                                                           );
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar6 + 0xb8) +
                                                            0x30);
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Field_<PrivateImplementationDetails>_C9DC39A22CBFC4F5FF834B1596E09F71781B66A23D4CE41A687AEDFD7F6A83B9
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb389c(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_TypeInfo
                                                  );
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_01eb3970(lVar12,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c_<DeleteFaces>b__3_0__
                                                  );
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_017b46ec(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                    *(long *)(lVar13 + 0x28) = lVar9;
                                                    *(long *)(lVar13 + 0x30) = lVar11;
                                                    *(long *)(lVar13 + 0x38) = lVar12;
                                                    *(undefined4 *)(lVar13 + 0x10) = 0x20;
                                                    *(undefined1 *)(lVar13 + 0x40) = 0;
                                                    lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    puVar6 = StringLiteral_3853;
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar10[6] = lVar13;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar6 + 0xb8) +
                                                             0x18);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0x38);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_LowLevel_InputRuntime_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb389c(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshl_s32__
                                                  );
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_01eb3970(lVar12,0,*(undefined8 *)
                                                                           PTR_DAT_033f0228);
                                                    lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar13 != 0) {
                                                      FUN_017b46ec(lVar13,0);
                                                      *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                      *(undefined8 *)(lVar13 + 0x20) = uVar14;
                                                      *(long *)(lVar13 + 0x28) = lVar9;
                                                      *(long *)(lVar13 + 0x30) = lVar11;
                                                      *(long *)(lVar13 + 0x38) = lVar12;
                                                      *(undefined4 *)(lVar13 + 0x10) = 0x23;
                                                      *(undefined1 *)(lVar13 + 0x40) = 0;
                                                      lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  puVar6 = StringLiteral_3853;
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 4) goto LAB_01eb35e0;
                                                  plVar10[7] = lVar13;
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar6 + 0xb8) + 0x40
                                                           );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                          StringLiteral_13781);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar1);
                                                    if (lVar11 != 0) {
                                                      FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                                                                                                          
                                                  System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo
                                                  );
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_017b46ec(lVar12,0);
                                                    *(undefined8 *)(lVar12 + 0x18) = 0;
                                                    *(undefined8 *)(lVar12 + 0x20) = uVar8;
                                                    *(long *)(lVar12 + 0x28) = lVar9;
                                                    *(undefined8 *)(lVar12 + 0x30) = 0;
                                                    *(long *)(lVar12 + 0x38) = lVar11;
                                                    *(undefined4 *)(lVar12 + 0x10) = 0x21;
                                                    *(undefined1 *)(lVar12 + 0x40) = 0;
                                                    lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 5)
                                                    goto LAB_01eb35e0;
                                                    plVar10[8] = lVar12;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar6 + 0xb8) +
                                                             0x48);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Meta_Voice_NLayer_Decoder_MpegFrame_TypeInfo);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb389c(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_Mesh_SetSizedArrayForChannel__)
                                                  ;
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_01eb3970(lVar12,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine__AndroidJNIHelper_GetFieldID__)
                                                  ;
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_017b46ec(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x18) = 0;
                                                    *(undefined8 *)(lVar13 + 0x20) = uVar8;
                                                    *(long *)(lVar13 + 0x28) = lVar9;
                                                    *(long *)(lVar13 + 0x30) = lVar11;
                                                    *(long *)(lVar13 + 0x38) = lVar12;
                                                    *(undefined4 *)(lVar13 + 0x10) = 0x24;
                                                    *(undefined1 *)(lVar13 + 0x40) = 0;
                                                    lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    puVar7 = StringLiteral_3853;
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar10 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar10[9] = lVar13;
                                                    uVar8 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar7 + 0xb8) +
                                                             0x20);
                                                    uVar14 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar7 + 0xb8) +
                                                              0x50);
                                                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3
                                                                              );
                                                    if (lVar9 != 0) {
                                                      FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_OVRExtensions_ToNonAlloc<string>__);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                           StringLiteral_9569);
                                                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar12 != 0) {
                                                      FUN_017b46ec(lVar12,0);
                                                      *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                      *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                      *(long *)(lVar12 + 0x28) = lVar9;
                                                      *(undefined8 *)(lVar12 + 0x30) = 0;
                                                      *(long *)(lVar12 + 0x38) = lVar11;
                                                      *(undefined4 *)(lVar12 + 0x10) = 0x22;
                                                      *(undefined1 *)(lVar12 + 0x40) = 0;
                                                      lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  puVar7 = StringLiteral_3853;
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 7) goto LAB_01eb35e0;
                                                  plVar10[10] = lVar12;
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar7 + 0xb8) + 0x58
                                                           );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_TypeInfo
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                           StringLiteral_5056);
                                                    lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar2);
                                                    if (lVar12 != 0) {
                                                      FUN_017b46ec(lVar12,0);
                                                      *(undefined8 *)(lVar12 + 0x18) = 0;
                                                      *(undefined8 *)(lVar12 + 0x20) = uVar8;
                                                      *(long *)(lVar12 + 0x28) = lVar9;
                                                      *(undefined8 *)(lVar12 + 0x30) = 0;
                                                      *(long *)(lVar12 + 0x38) = lVar11;
                                                      *(undefined4 *)(lVar12 + 0x10) = 0x25;
                                                      *(undefined1 *)(lVar12 + 0x40) = 1;
                                                      lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8
                                                                                          *)(*
                                                  plVar10 + 0x40));
                                                  if (lVar9 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar10 + 3) < 8) goto LAB_01eb35e0;
                                                  plVar10[0xb] = lVar12;
                                                  uVar8 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar7 + 0xb8) + 0x60
                                                           );
                                                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    FUN_01eb37c4(lVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_HingedCipherWheel_OnRelease__);
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_01eb3970(lVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_UIElements_InternalTreeView_GetItemId__
                                                  );
                                                  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    FUN_017b46ec(lVar12,0);
                                                    *(undefined8 *)(lVar12 + 0x18) = 0;
                                                    *(undefined8 *)(lVar12 + 0x20) = uVar8;
                                                    *(long *)(lVar12 + 0x28) = lVar9;
                                                    *(undefined8 *)(lVar12 + 0x30) = 0;
                                                    *(long *)(lVar12 + 0x38) = lVar11;
                                                    *(undefined4 *)(lVar12 + 0x10) = 0x25;
                                                    *(undefined1 *)(lVar12 + 0x40) = 1;
                                                    lVar9 = thunk_FUN_00d6225c(lVar12,*(undefined8 *
                                                                                       )(*plVar10 +
                                                                                        0x40));
                                                    if (lVar9 == 0) goto LAB_01eb35e4;
                                                    if (8 < *(uint *)(plVar10 + 3)) {
                                                      plVar10[0xc] = lVar12;
                                                      *(long **)(*(long *)(*(long *)puVar7 + 0xb8) +
                                                                0x68) = plVar10;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_01eb35e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


