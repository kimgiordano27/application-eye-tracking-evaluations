/*
FUNCTION_NAME: System.Xml.Schema.SymbolsDictionary$$NameOf
ENTRY_POINT: 01eb1e84
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


void System_Xml_Schema_SymbolsDictionary__NameOf(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar12;
  
                    /* try { // try from 01eb1e8c to 01fb1e93 has its CatchHandler @ 01eb20cc */
  *(undefined4 *)(unaff_x21 + 0x10) = 1;
  uVar6 = FUN_01eaff34(0);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
  if (unaff_x19 != (long *)0x0) {
                    /* try { // try from 01eb1ea8 to 01fb1eaf has its CatchHandler @ 01eb20c4 */
    lVar7 = thunk_FUN_00d6225c();
    if (lVar7 == 0) {
LAB_01eb35e4:
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    if ((int)unaff_x19[3] == 0) goto LAB_01eb35e0;
    unaff_x19[4] = unaff_x21;
    lVar7 = thunk_FUN_00d62348(*unaff_x22);
    if (lVar7 != 0) {
                    /* try { // try from 01eb1ecc to 01fb1ed3 has its CatchHandler @ 01eb20fc */
                    /* try { // try from 01eb1ee0 to 01fb1ef7 has its CatchHandler @ 01eb20e0 */
      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                            Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_GetSpanCount__);
      lVar8 = thunk_FUN_00d62348(*unaff_x23);
      if (lVar8 != 0) {
        FUN_017b46ec(lVar8,0);
                    /* try { // try from 01eb1efc to 01fb1f07 has its CatchHandler @ 01eb20f4 */
        *(undefined4 *)(lVar8 + 0x10) = 0x16;
        uVar6 = FUN_01eaff34(10);
                    /* try { // try from 01eb1f0c to 01fb1f17 has its CatchHandler @ 01eb20e4 */
        *(undefined4 *)(lVar8 + 0x14) = 0;
        *(undefined8 *)(lVar8 + 0x18) = uVar6;
        *(long *)(lVar8 + 0x20) = lVar7;
        lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x19 + 0x40));
                    /* try { // try from 01eb1f24 to 01fb1f2f has its CatchHandler @ 01eb20e8 */
        if (lVar7 == 0) goto LAB_01eb35e4;
        if (*(uint *)(unaff_x19 + 3) < 2) goto LAB_01eb35e0;
                    /* try { // try from 01eb1f34 to 01fb1f3f has its CatchHandler @ 01eb20f0 */
        unaff_x19[5] = lVar8;
        *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x28) = unaff_x19;
                    /* try { // try from 01eb1f48 to 01fb1f57 has its CatchHandler @ 01eb20dc */
        plVar9 = (long *)FUN_00da4fb8(*unaff_x25,8);
                    /* try { // try from 01eb1f5c to 01fb1f67 has its CatchHandler @ 01eb20d8 */
        lVar7 = thunk_FUN_00d62348(*unaff_x22);
        if (lVar7 != 0) {
                    /* try { // try from 01eb1f70 to 01fb1f77 has its CatchHandler @ 01eb20ec */
          FUN_01eb35f0(lVar7,0,*(undefined8 *)StringLiteral_9741);
                    /* try { // try from 01eb1f80 to 01fb1f8f has its CatchHandler @ 01eb20f8 */
          lVar8 = thunk_FUN_00d62348(*unaff_x23);
          if (lVar8 != 0) {
            FUN_017b46ec(lVar8,0);
            *(undefined4 *)(lVar8 + 0x10) = 1;
            uVar6 = FUN_01eaff34(10);
                    /* try { // try from 01eb1fa8 to 01fb1faf has its CatchHandler @ 01eb20c0 */
            *(undefined4 *)(lVar8 + 0x14) = 0x100;
            *(undefined8 *)(lVar8 + 0x18) = uVar6;
            *(long *)(lVar8 + 0x20) = lVar7;
                    /* try { // try from 01eb1fb0 to 01fb1fbf has its CatchHandler @ 01eb20bc */
            if (plVar9 != (long *)0x0) {
                    /* try { // try from 01eb1fc0 to 01fb205b has its CatchHandler @ 01eb1c8c */
              lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar7 == 0) goto LAB_01eb35e4;
              if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
              plVar9[4] = lVar8;
              lVar7 = thunk_FUN_00d62348(*unaff_x22);
              if (lVar7 != 0) {
                FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                      Method_OVRSceneAnchor_GetSceneAnchorsOfType<object>__);
                lVar8 = thunk_FUN_00d62348(*unaff_x23);
                if (lVar8 != 0) {
                  FUN_017b46ec(lVar8,0);
                  *(undefined4 *)(lVar8 + 0x10) = 9;
                  uVar6 = FUN_01eaff34(10);
                  *(undefined4 *)(lVar8 + 0x14) = 0;
                  *(undefined8 *)(lVar8 + 0x18) = uVar6;
                  *(long *)(lVar8 + 0x20) = lVar7;
                  lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                  if (lVar7 == 0) goto LAB_01eb35e4;
                  if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                  plVar9[5] = lVar8;
                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                  if (lVar7 != 0) {
                    /* try { // try from 01eb205c to 01fb205f has its CatchHandler @ 01eb20b8 */
                    /* try { // try from 01eb2060 to 01fb2063 has its CatchHandler @ 01eb20b4 */
                    /* try { // try from 01eb2064 to 01fb2067 has its CatchHandler @ 01eb20b0 */
                    /* try { // try from 01eb2068 to 01fb206b has its CatchHandler @ 01eb20ac */
                    /* try { // try from 01eb206c to 01fb206f has its CatchHandler @ 01eb20a8 */
                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<MetaXRAcousticGeometry_TerrainMaterial>_MoveNext__
                                );
                    /* try { // try from 01eb2070 to 01fb2077 has its CatchHandler @ 01eb20a4 */
                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                    /* try { // try from 01eb2078 to 01fb207b has its CatchHandler @ 01eb20a0 */
                    if (lVar8 != 0) {
                    /* try { // try from 01eb207c to 01fb207f has its CatchHandler @ 01eb209c */
                    /* try { // try from 01eb2080 to 01fb2083 has its CatchHandler @ 01eb2098 */
                    /* try { // try from 01eb2084 to 01fb2087 has its CatchHandler @ 01eb1c8c */
                      FUN_017b46ec(lVar8,0);
                    /* try { // try from 01eb2088 to 01fb208b has its CatchHandler @ 01eb2094 */
                    /* try { // try from 01eb208c to 01fb211b has its CatchHandler @ 01eb1c8c */
                      *(undefined4 *)(lVar8 + 0x10) = 6;
                    /* catch() { ... } // from try @ 01eb2088 with catch @ 01eb2094 */
                      uVar6 = FUN_01eaff34(10);
                    /* catch() { ... } // from try @ 01eb2080 with catch @ 01eb2098 */
                      *(undefined4 *)(lVar8 + 0x14) = 0;
                    /* catch() { ... } // from try @ 01eb207c with catch @ 01eb209c */
                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                      *(long *)(lVar8 + 0x20) = lVar7;
                    /* catch() { ... } // from try @ 01eb2078 with catch @ 01eb20a0 */
                    /* catch() { ... } // from try @ 01eb2070 with catch @ 01eb20a4 */
                    /* catch() { ... } // from try @ 01eb206c with catch @ 01eb20a8 */
                    /* catch() { ... } // from try @ 01eb2068 with catch @ 01eb20ac */
                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                    /* catch() { ... } // from try @ 01eb2064 with catch @ 01eb20b0 */
                      if (lVar7 == 0) goto LAB_01eb35e4;
                    /* catch() { ... } // from try @ 01eb2060 with catch @ 01eb20b4 */
                    /* catch() { ... } // from try @ 01eb205c with catch @ 01eb20b8 */
                    /* catch() { ... } // from try @ 01eb1fb0 with catch @ 01eb20bc */
                      if (*(uint *)(plVar9 + 3) < 3) goto LAB_01eb35e0;
                    /* catch() { ... } // from try @ 01eb1fa8 with catch @ 01eb20c0 */
                      plVar9[6] = lVar8;
                    /* catch() { ... } // from try @ 01eb1ea8 with catch @ 01eb20c4 */
                    /* catch() { ... } // from try @ 01eb1e70 with catch @ 01eb20c8 */
                      lVar7 = thunk_FUN_00d62348(*unaff_x22);
                    /* catch() { ... } // from try @ 01eb1e8c with catch @ 01eb20cc */
                      if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 01eb1dc8 with catch @ 01eb20d0 */
                    /* catch() { ... } // from try @ 01eb1d6c with catch @ 01eb20d4 */
                    /* catch() { ... } // from try @ 01eb1f5c with catch @ 01eb20d8 */
                    /* catch() { ... } // from try @ 01eb1f48 with catch @ 01eb20dc */
                    /* catch() { ... } // from try @ 01eb1ee0 with catch @ 01eb20e0 */
                    /* catch() { ... } // from try @ 01eb1f0c with catch @ 01eb20e4 */
                        FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                              RCG_Lovesick_InteractiveObjects_PlacePoint_<>c_TypeInfo
                                    );
                    /* catch() { ... } // from try @ 01eb1f24 with catch @ 01eb20e8 */
                    /* catch() { ... } // from try @ 01eb1f70 with catch @ 01eb20ec */
                        lVar8 = thunk_FUN_00d62348(*unaff_x23);
                    /* catch() { ... } // from try @ 01eb1f34 with catch @ 01eb20f0 */
                        if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 01eb1efc with catch @ 01eb20f4 */
                    /* catch() { ... } // from try @ 01eb1f80 with catch @ 01eb20f8 */
                    /* catch() { ... } // from try @ 01eb1ecc with catch @ 01eb20fc */
                          FUN_017b46ec(lVar8,0);
                          *(undefined4 *)(lVar8 + 0x10) = 0xe;
                          uVar6 = FUN_01eaff34(10);
                          *(undefined4 *)(lVar8 + 0x14) = 0;
                          *(undefined8 *)(lVar8 + 0x18) = uVar6;
                          *(long *)(lVar8 + 0x20) = lVar7;
                    /* try { // try from 01eb211c to 01fb211f has its CatchHandler @ 01eb21a8 */
                          lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                          if (lVar7 == 0) goto LAB_01eb35e4;
                    /* try { // try from 01eb212c to 01fb2193 has its CatchHandler @ 01eb21b0 */
                          if (*(uint *)(plVar9 + 3) < 4) goto LAB_01eb35e0;
                          plVar9[7] = lVar8;
                          lVar7 = thunk_FUN_00d62348(*unaff_x22);
                          puVar3 = Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__;
                          if (lVar7 != 0) {
                            FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                  Method_System_Linq_Set<__Il2CppFullySharedGenericType>_Resize__
                                        );
                            lVar8 = thunk_FUN_00d62348(*unaff_x23);
                            if (lVar8 != 0) {
                              FUN_017b46ec(lVar8,0);
                              *(undefined4 *)(lVar8 + 0x10) = 0x29;
                              uVar6 = FUN_01eaff34(0);
                              *(undefined4 *)(lVar8 + 0x14) = 0;
                              *(undefined8 *)(lVar8 + 0x18) = uVar6;
                              *(long *)(lVar8 + 0x20) = lVar7;
                    /* try { // try from 01eb2194 to 01fb219f has its CatchHandler @ 01eb1c8c */
                              lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                    /* try { // try from 01eb21a0 to 01fb21a7 has its CatchHandler @ 01eb21b0 */
                              if (lVar7 == 0) goto LAB_01eb35e4;
                    /* catch() { ... } // from try @ 01eb211c with catch @ 01eb21a8 */
                              if (*(uint *)(plVar9 + 3) < 5) goto LAB_01eb35e0;
                    /* catch() { ... } // from try @ 01eb212c with catch @ 01eb21b0
                       catch() { ... } // from try @ 01eb21a0 with catch @ 01eb21b0 */
                              plVar9[8] = lVar8;
                              lVar7 = thunk_FUN_00d62348(*unaff_x22);
                              if (lVar7 != 0) {
                                FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                            
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                            );
                                lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                if (lVar8 != 0) {
                                  FUN_017b46ec(lVar8,0);
                                  *(undefined4 *)(lVar8 + 0x10) = 0x2a;
                                  uVar6 = FUN_01eaff34(7);
                                  *(undefined4 *)(lVar8 + 0x14) = 0;
                                  *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                  *(long *)(lVar8 + 0x20) = lVar7;
                                  lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                  if (*(uint *)(plVar9 + 3) < 6) goto LAB_01eb35e0;
                                  plVar9[9] = lVar8;
                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                  if (lVar7 != 0) {
                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)StringLiteral_6747);
                                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                    if (lVar8 != 0) {
                                      FUN_017b46ec(lVar8,0);
                                      *(undefined4 *)(lVar8 + 0x10) = 0x2b;
                                      uVar6 = FUN_01eaff34(0);
                                      *(undefined4 *)(lVar8 + 0x14) = 0;
                                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                      *(long *)(lVar8 + 0x20) = lVar7;
                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                        (*plVar9 + 0x40));
                                      if (lVar7 == 0) goto LAB_01eb35e4;
                                      if (*(uint *)(plVar9 + 3) < 7) goto LAB_01eb35e0;
                                      plVar9[10] = lVar8;
                                      lVar7 = thunk_FUN_00d62348(*unaff_x22);
                    /* try { // try from 01eb22ac to 01fb2363 has its CatchHandler @ 01eb22ac
                       catch() { ... } // from try @ 01eb22ac with catch @ 01eb22ac
                       catch() { ... } // from try @ 01eb2430 with catch @ 01eb22ac
                       catch() { ... } // from try @ 01eb24c4 with catch @ 01eb22ac
                       catch() { ... } // from try @ 01eb24cc with catch @ 01eb22ac
                       catch() { ... } // from try @ 01eb2570 with catch @ 01eb22ac */
                                      if (lVar7 != 0) {
                                        FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                            
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                        lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                        if (lVar8 != 0) {
                                          FUN_017b46ec(lVar8,0);
                                          *(undefined4 *)(lVar8 + 0x10) = 0x2c;
                                          uVar6 = FUN_01eaff34(0);
                                          *(undefined4 *)(lVar8 + 0x14) = 0;
                                          *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                          *(long *)(lVar8 + 0x20) = lVar7;
                                          lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                            (*plVar9 + 0x40));
                                          if (lVar7 == 0) goto LAB_01eb35e4;
                                          if (*(uint *)(plVar9 + 3) < 8) goto LAB_01eb35e0;
                                          plVar9[0xb] = lVar8;
                                          *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x30) = plVar9;
                                          plVar9 = (long *)FUN_00da4fb8(*unaff_x25,7);
                                          lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                          if (lVar7 != 0) {
                                            FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                    
                                                  System_Collections_Generic_List<NavMeshSurface>_TypeInfo
                                                  );
                    /* try { // try from 01eb2364 to 01fb238b has its CatchHandler @ 01eb24e4 */
                                            lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                            if (lVar8 != 0) {
                                              FUN_017b46ec(lVar8,0);
                                              *(undefined4 *)(lVar8 + 0x10) = 1;
                                              uVar6 = FUN_01eaff34(10);
                                              *(undefined4 *)(lVar8 + 0x14) = 0;
                                              *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                              *(long *)(lVar8 + 0x20) = lVar7;
                                              if (plVar9 != (long *)0x0) {
                                                lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                if (lVar7 == 0) goto LAB_01eb35e4;
                                                if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                plVar9[4] = lVar8;
                                                lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                if (lVar7 != 0) {
                    /* try { // try from 01eb23c0 to 01fb23eb has its CatchHandler @ 01eb24e0 */
                                                  FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                        StringLiteral_4010);
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x12;
                                                    uVar6 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                    /* try { // try from 01eb2420 to 01fb242f has its CatchHandler @ 01eb24dc */
                                                    if (*(uint *)(plVar9 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar9[5] = lVar8;
                    /* try { // try from 01eb2430 to 01fb24bb has its CatchHandler @ 01eb22ac */
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_lane_f32__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x1e;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar9[6] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  ;
                                                  if (lVar7 != 0) {
                    /* try { // try from 01eb24bc to 01fb24c3 has its CatchHandler @ 01eb24d8 */
                    /* try { // try from 01eb24c4 to 01fb24c7 has its CatchHandler @ 01eb22ac */
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_List<Light2D>_get_Item__
                                                  );
                    /* try { // try from 01eb24c8 to 01fb24cb has its CatchHandler @ 01eb24d4 */
                    /* try { // try from 01eb24cc to 01fb24f3 has its CatchHandler @ 01eb22ac */
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01eb24c8 with catch @ 01eb24d4
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01eb24bc with catch @ 01eb24d8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01eb2420 with catch @ 01eb24dc
                        */
                                                    FUN_017b46ec(lVar8,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01eb23c0 with catch @ 01eb24e0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01eb2364 with catch @ 01eb24e4
                        */
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x29;
                                                    uVar6 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                    /* try { // try from 01eb24f4 to 01fb24f7 has its CatchHandler @ 01eb2584 */
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                    /* try { // try from 01eb2508 to 01fb256f has its CatchHandler @ 01eb258c */
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar9[7] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                            PTR_DAT_033f1ad8);
                                                      lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar8 != 0) {
                                                        FUN_017b46ec(lVar8,0);
                                                        *(undefined4 *)(lVar8 + 0x10) = 0x2a;
                                                        uVar6 = FUN_01eaff34(7);
                                                        *(undefined4 *)(lVar8 + 0x14) = 0;
                                                        *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                        *(long *)(lVar8 + 0x20) = lVar7;
                    /* try { // try from 01eb2570 to 01fb257b has its CatchHandler @ 01eb22ac */
                    /* try { // try from 01eb257c to 01fb2583 has its CatchHandler @ 01eb258c */
                                                        lVar7 = thunk_FUN_00d6225c(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                    /* catch() { ... } // from try @ 01eb24f4 with catch @ 01eb2584 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01eb2508 with catch @ 01eb258c
                       catch(type#2 @ 00000000) { ... } // from try @ 01eb257c with catch @ 01eb258c
                        */
                                                  if (*(uint *)(plVar9 + 3) < 5) goto LAB_01eb35e0;
                                                  plVar9[8] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x2b;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar9[9] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    puVar1 = 
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Xml_Schema_XmlSchemaObjectTable_XSOEnumerator_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x2c;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 7)
                                                    goto LAB_01eb35e0;
                                                    plVar9[10] = lVar8;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x38)
                                                         = plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x25,3);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqsubq_s8__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 2;
                                                    uVar6 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0x100;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    if (plVar9 != (long *)0x0) {
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 4;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar9[5] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_96>__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 3;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar9[6] = lVar8;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x40)
                                                         = plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x25,3);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  System_Runtime_CompilerServices_ITuple_TypeInfo);
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 2;
                                                    uVar6 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    if (plVar9 != (long *)0x0) {
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                          StringLiteral_5392);
                                                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar8 != 0) {
                                                      FUN_017b46ec(lVar8,0);
                                                      *(undefined4 *)(lVar8 + 0x10) = 0x12;
                                                      uVar6 = FUN_01eaff34(10);
                                                      *(undefined4 *)(lVar8 + 0x14) = 0;
                                                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                      *(long *)(lVar8 + 0x20) = lVar7;
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar9[5] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Net_Configuration_SocketElement__ctor__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x1e;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar9[6] = lVar8;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x48)
                                                         = plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x25,3);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManager<GameObject,_Pool<GameObject>>_GetPool__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0xe;
                                                    uVar6 = FUN_01eaff34(10);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    if (plVar9 != (long *)0x0) {
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_UIElements_BindableElement_UxmlFactory_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 4;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar9[5] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks<int4>__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 3;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar9[6] = lVar8;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x50)
                                                         = plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x25,4);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)puVar3);
                                                      lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar8 != 0) {
                                                        FUN_017b46ec(lVar8,0);
                                                        *(undefined4 *)(lVar8 + 0x10) = 0x29;
                                                        uVar6 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar8 + 0x14) = 0;
                                                        *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                        *(long *)(lVar8 + 0x20) = lVar7;
                                                        if (plVar9 != (long *)0x0) {
                                                          lVar7 = thunk_FUN_00d6225c(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Xml_Serialization_XmlTypeMapElementInfo_set_IsUnnamedAnyElement__
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x2a;
                                                    uVar6 = FUN_01eaff34(7);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 2)
                                                    goto LAB_01eb35e0;
                                                    plVar9[5] = lVar8;
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                            StringLiteral_6747);
                                                      lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar8 != 0) {
                                                        FUN_017b46ec(lVar8,0);
                                                        *(undefined4 *)(lVar8 + 0x10) = 0x2b;
                                                        uVar6 = FUN_01eaff34(0);
                                                        *(undefined4 *)(lVar8 + 0x14) = 0;
                                                        *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                        *(long *)(lVar8 + 0x20) = lVar7;
                                                        lVar7 = thunk_FUN_00d6225c(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar9[6] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_DataViewManagerListItemTypeDescriptor_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                  if (lVar8 != 0) {
                                                    FUN_017b46ec(lVar8,0);
                                                    *(undefined4 *)(lVar8 + 0x10) = 0x2c;
                                                    uVar6 = FUN_01eaff34(0);
                                                    *(undefined4 *)(lVar8 + 0x14) = 0;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                    *(long *)(lVar8 + 0x20) = lVar7;
                                                    lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                                      (*plVar9 +
                                                                                      0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 4)
                                                    goto LAB_01eb35e0;
                                                    plVar9[7] = lVar8;
                                                    *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x58)
                                                         = plVar9;
                                                    plVar9 = (long *)FUN_00da4fb8(*unaff_x25,4);
                                                    lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar7 != 0) {
                                                      FUN_01eb35f0(lVar7,0,*(undefined8 *)puVar2);
                                                      lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                      if (lVar8 != 0) {
                                                        FUN_017b46ec(lVar8,0);
                                                        *(undefined4 *)(lVar8 + 0x10) = 0x29;
                                                        uVar6 = FUN_01eaff34(10);
                                                        *(undefined4 *)(lVar8 + 0x14) = 0;
                                                        *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                        *(long *)(lVar8 + 0x20) = lVar7;
                                                        if (plVar9 != (long *)0x0) {
                                                          lVar7 = thunk_FUN_00d6225c(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)
                                                                          PTR_DAT_033f1ad8);
                                                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar8 != 0) {
                                                      FUN_017b46ec(lVar8,0);
                                                      *(undefined4 *)(lVar8 + 0x10) = 0x2a;
                                                      uVar6 = FUN_01eaff34(7);
                                                      *(undefined4 *)(lVar8 + 0x14) = 0;
                                                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                      *(long *)(lVar8 + 0x20) = lVar7;
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar9[5] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)puVar4);
                                                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar8 != 0) {
                                                      FUN_017b46ec(lVar8,0);
                                                      *(undefined4 *)(lVar8 + 0x10) = 0x2b;
                                                      uVar6 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar8 + 0x14) = 0;
                                                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                      *(long *)(lVar8 + 0x20) = lVar7;
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 3) goto LAB_01eb35e0;
                                                  plVar9[6] = lVar8;
                                                  lVar7 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb35f0(lVar7,0,*(undefined8 *)puVar1);
                                                    lVar8 = thunk_FUN_00d62348(*unaff_x23);
                                                    if (lVar8 != 0) {
                                                      FUN_017b46ec(lVar8,0);
                                                      *(undefined4 *)(lVar8 + 0x10) = 0x2c;
                                                      uVar6 = FUN_01eaff34(0);
                                                      *(undefined4 *)(lVar8 + 0x14) = 0;
                                                      *(undefined8 *)(lVar8 + 0x18) = uVar6;
                                                      *(long *)(lVar8 + 0x20) = lVar7;
                                                      lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 4) goto LAB_01eb35e0;
                                                  plVar9[7] = lVar8;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
                                                  *(long **)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       plVar9;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,_object>_get_Current__
                                                  ;
                                                  plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                 puVar2,9);
                                                  uVar6 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                  if (lVar7 != 0) {
                                                    FUN_017b46ec(lVar7,0);
                                                    *(undefined4 *)(lVar7 + 0x10) = 0;
                                                    *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                    *(undefined8 *)(lVar7 + 0x28) = 0;
                                                    *(undefined8 *)(lVar7 + 0x20) = 0;
                                                    *(undefined8 *)(lVar7 + 0x38) = 0;
                                                    *(undefined8 *)(lVar7 + 0x30) = 0;
                                                    *(undefined1 *)(lVar7 + 0x40) = 0;
                                                    if (plVar9 != (long *)0x0) {
                                                      lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8
                                                                                         *)(*plVar9 
                                                  + 0x40));
                                                  if (lVar8 == 0) goto LAB_01eb35e4;
                                                  if ((int)plVar9[3] == 0) goto LAB_01eb35e0;
                                                  plVar9[4] = lVar7;
                                                  puVar2 = 
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 8);
                                                  uVar6 = *(undefined8 *)
                                                           (*(long *)(*unaff_x24 + 0xb8) + 0x28);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                            
                                                  RCG_Lovesick_RhythmGame_SongManager_TypeInfo);
                                                  puVar4 = StringLiteral_8081;
                                                  if (lVar7 != 0) {
                                                    FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  System_Data_FunctionNode_TypeInfo);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                                  puVar1 = 
                                                  System_Collections_Generic_List<ITimelineEvaluateCallback>_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    FUN_01eb389c(lVar8,0,*(undefined8 *)
                                                                          OVRPlugin_Media_TypeInfo);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar1);
                                                    if (lVar10 != 0) {
                                                      FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                             StringLiteral_2469);
                                                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                   puVar3);
                                                      if (lVar11 != 0) {
                                                        FUN_017b46ec(lVar11,0);
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar12;
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar6;
                                                        *(long *)(lVar11 + 0x28) = lVar7;
                                                        *(long *)(lVar11 + 0x30) = lVar8;
                                                        *(long *)(lVar11 + 0x38) = lVar10;
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x1f;
                                                        *(undefined1 *)(lVar11 + 0x40) = 0;
                                                        lVar7 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar9 + 0x40));
                                                  puVar5 = StringLiteral_3853;
                                                  if (lVar7 == 0) goto LAB_01eb35e4;
                                                  if (*(uint *)(plVar9 + 3) < 2) goto LAB_01eb35e0;
                                                  plVar9[5] = lVar11;
                                                  uVar6 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar5 + 0xb8) + 0x10
                                                           );
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x30);
                                                  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  if (lVar7 != 0) {
                                                    FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                    
                                                  Field_<PrivateImplementationDetails>_C9DC39A22CBFC4F5FF834B1596E09F71781B66A23D4CE41A687AEDFD7F6A83B9
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb389c(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  RhythmGameStarter_TrackManager_<>c__DisplayClass22_0_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c_<DeleteFaces>b__3_0__
                                                  );
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_017b46ec(lVar11,0);
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar6;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                    *(long *)(lVar11 + 0x28) = lVar7;
                                                    *(long *)(lVar11 + 0x30) = lVar8;
                                                    *(long *)(lVar11 + 0x38) = lVar10;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x20;
                                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                                    lVar7 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    puVar5 = StringLiteral_3853;
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 3)
                                                    goto LAB_01eb35e0;
                                                    plVar9[6] = lVar11;
                                                    uVar6 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar5 + 0xb8) +
                                                             0x18);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x38);
                                                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar7 != 0) {
                                                      FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_LowLevel_InputRuntime_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb389c(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqshl_s32__
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_01eb3970(lVar10,0,*(undefined8 *)
                                                                           PTR_DAT_033f0228);
                                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar11 != 0) {
                                                      FUN_017b46ec(lVar11,0);
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar6;
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                      *(long *)(lVar11 + 0x28) = lVar7;
                                                      *(long *)(lVar11 + 0x30) = lVar8;
                                                      *(long *)(lVar11 + 0x38) = lVar10;
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x23;
                                                      *(undefined1 *)(lVar11 + 0x40) = 0;
                                                      lVar7 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                          *)(*plVar9
                                                                                            + 0x40))
                                                      ;
                                                      puVar5 = StringLiteral_3853;
                                                      if (lVar7 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar9 + 3) < 4)
                                                      goto LAB_01eb35e0;
                                                      plVar9[7] = lVar11;
                                                      uVar6 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar5 + 0xb8) +
                                                               0x40);
                                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar7 != 0) {
                                                        FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                              StringLiteral_13781);
                                                        lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar1);
                                                        if (lVar8 != 0) {
                                                          FUN_01eb3970(lVar8,0,*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_017b46ec(lVar10,0);
                                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar6;
                                                    *(long *)(lVar10 + 0x28) = lVar7;
                                                    *(undefined8 *)(lVar10 + 0x30) = 0;
                                                    *(long *)(lVar10 + 0x38) = lVar8;
                                                    *(undefined4 *)(lVar10 + 0x10) = 0x21;
                                                    *(undefined1 *)(lVar10 + 0x40) = 0;
                                                    lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 5)
                                                    goto LAB_01eb35e0;
                                                    plVar9[8] = lVar10;
                                                    uVar6 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar5 + 0xb8) +
                                                             0x48);
                                                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar7 != 0) {
                                                      FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Meta_Voice_NLayer_Decoder_MpegFrame_TypeInfo);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb389c(lVar8,0,*(undefined8 *)
                                                                                                                                                    
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
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar6;
                                                    *(long *)(lVar11 + 0x28) = lVar7;
                                                    *(long *)(lVar11 + 0x30) = lVar8;
                                                    *(long *)(lVar11 + 0x38) = lVar10;
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x24;
                                                    *(undefined1 *)(lVar11 + 0x40) = 0;
                                                    lVar7 = thunk_FUN_00d6225c(lVar11,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    puVar4 = StringLiteral_3853;
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (*(uint *)(plVar9 + 3) < 6)
                                                    goto LAB_01eb35e0;
                                                    plVar9[9] = lVar11;
                                                    uVar6 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x20);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*(long *)puVar4 + 0xb8) +
                                                              0x50);
                                                    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar7 != 0) {
                                                      FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                        
                                                  Method_OVRExtensions_ToNonAlloc<string>__);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb3970(lVar8,0,*(undefined8 *)
                                                                          StringLiteral_9569);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar10 != 0) {
                                                      FUN_017b46ec(lVar10,0);
                                                      *(undefined8 *)(lVar10 + 0x18) = uVar6;
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar12;
                                                      *(long *)(lVar10 + 0x28) = lVar7;
                                                      *(undefined8 *)(lVar10 + 0x30) = 0;
                                                      *(long *)(lVar10 + 0x38) = lVar8;
                                                      *(undefined4 *)(lVar10 + 0x10) = 0x22;
                                                      *(undefined1 *)(lVar10 + 0x40) = 0;
                                                      lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8
                                                                                          *)(*plVar9
                                                                                            + 0x40))
                                                      ;
                                                      puVar4 = StringLiteral_3853;
                                                      if (lVar7 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar9 + 3) < 7)
                                                      goto LAB_01eb35e0;
                                                      plVar9[10] = lVar10;
                                                      uVar6 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x58);
                                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar7 != 0) {
                                                        FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                            
                                                  Meta_XR_MRUtilityKit_AnchorPrefabSpawner_AnchorPrefabGroup_TypeInfo
                                                  );
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb3970(lVar8,0,*(undefined8 *)
                                                                          StringLiteral_5056);
                                                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar3);
                                                    if (lVar10 != 0) {
                                                      FUN_017b46ec(lVar10,0);
                                                      *(undefined8 *)(lVar10 + 0x18) = 0;
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar6;
                                                      *(long *)(lVar10 + 0x28) = lVar7;
                                                      *(undefined8 *)(lVar10 + 0x30) = 0;
                                                      *(long *)(lVar10 + 0x38) = lVar8;
                                                      *(undefined4 *)(lVar10 + 0x10) = 0x25;
                                                      *(undefined1 *)(lVar10 + 0x40) = 1;
                                                      lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8
                                                                                          *)(*plVar9
                                                                                            + 0x40))
                                                      ;
                                                      if (lVar7 == 0) goto LAB_01eb35e4;
                                                      if (*(uint *)(plVar9 + 3) < 8) {
LAB_01eb35e0:
                    /* WARNING: Subroutine does not return */
                                                        FUN_00da5194();
                                                      }
                                                      plVar9[0xb] = lVar10;
                                                      uVar6 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar4 + 0xb8) +
                                                               0x60);
                                                      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar7 != 0) {
                                                        FUN_01eb37c4(lVar7,0,*(undefined8 *)
                                                                                                                                                            
                                                  Method_HingedCipherWheel_OnRelease__);
                                                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar8 != 0) {
                                                    FUN_01eb3970(lVar8,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_UIElements_InternalTreeView_GetItemId__
                                                  );
                                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  if (lVar10 != 0) {
                                                    FUN_017b46ec(lVar10,0);
                                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar6;
                                                    *(long *)(lVar10 + 0x28) = lVar7;
                                                    *(undefined8 *)(lVar10 + 0x30) = 0;
                                                    *(long *)(lVar10 + 0x38) = lVar8;
                                                    *(undefined4 *)(lVar10 + 0x10) = 0x25;
                                                    *(undefined1 *)(lVar10 + 0x40) = 1;
                                                    lVar7 = thunk_FUN_00d6225c(lVar10,*(undefined8 *
                                                                                       )(*plVar9 +
                                                                                        0x40));
                                                    if (lVar7 == 0) goto LAB_01eb35e4;
                                                    if (8 < *(uint *)(plVar9 + 3)) {
                                                      plVar9[0xc] = lVar10;
                                                      *(long **)(*(long *)(*(long *)puVar4 + 0xb8) +
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


