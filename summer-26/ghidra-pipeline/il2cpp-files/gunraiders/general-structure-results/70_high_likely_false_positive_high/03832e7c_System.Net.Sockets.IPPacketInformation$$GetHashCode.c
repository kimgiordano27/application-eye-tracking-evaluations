/*
FUNCTION_NAME: System.Net.Sockets.IPPacketInformation$$GetHashCode
ENTRY_POINT: 03832e7c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_7
*/


void System_Net_Sockets_IPPacketInformation__GetHashCode(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_038363e8();
  uVar7 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_03836600(uVar7,0x36,param_1,0);
  if (unaff_x19 == 0) goto LAB_038363e4;
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = uVar7;
    puVar2 = Method_System_Net_Configuration_ModuleElement_set_Type__;
    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
    FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
    FUN_03836600(uVar8,0x37,uVar7,0);
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
      puVar2 = Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int>__;
      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
      FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
      FUN_03836600(uVar8,0x1e,uVar7,0);
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
        puVar2 = Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__;
        uVar7 = thunk_FUN_01c496e0(*unaff_x23);
        FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
        uVar8 = thunk_FUN_01c496e0(*unaff_x22);
        FUN_03836600(uVar8,0x39,uVar7,0);
        if (3 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x38) = uVar8;
          puVar2 = Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__;
          uVar7 = thunk_FUN_01c496e0(*unaff_x23);
          FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
          uVar8 = thunk_FUN_01c496e0(*unaff_x22);
          FUN_03836600(uVar8,0x35,uVar7,0);
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
            puVar2 = Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int4>__;
            uVar7 = thunk_FUN_01c496e0(*unaff_x23);
            FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
            uVar8 = thunk_FUN_01c496e0(*unaff_x22);
            FUN_03836600(uVar8,0x49,uVar7,0);
            if (5 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
              uVar7 = thunk_FUN_01c496e0(*unaff_x23);
              FUN_038363e8(uVar7,0,*unaff_x26,0);
              uVar8 = thunk_FUN_01c496e0(*unaff_x22);
              FUN_03836600(uVar8,0x16,uVar7,0);
              if (6 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
                puVar2 = 
                Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<UHull,_UEvent,_Tessellator_TestHullEventE>__
                ;
                uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                FUN_03836600(uVar8,3,uVar7,0);
                if (7 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x58) = uVar8;
                  puVar2 = 
                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int2,_int2,_Tessellator_TestEdgePointE>__
                  ;
                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                  FUN_03836600(uVar8,4,uVar7,0);
                  if (8 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
                    puVar2 = 
                    Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int3,_int3,_Tessellator_TestCellE>__
                    ;
                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                    FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                    FUN_03836600(uVar8,1,uVar7,0);
                    if (9 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x68) = uVar8;
                      puVar2 = 
                      Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                      ;
                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                      FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                      FUN_03836600(uVar8,0x3a,uVar7,0);
                      if (10 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
                        puVar2 = 
                        Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_float2,_Tessellator_TestHullPointL>__
                        ;
                        uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                        FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                        uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                        FUN_03836600(uVar8,0x3b,uVar7,0);
                        if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
                          puVar2 = 
                          Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetUpper<UHull,_float2,_Tessellator_TestHullPointU>__
                          ;
                          uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                          FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                          uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                          FUN_03836600(uVar8,0x38,uVar7,0);
                          if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x80) = uVar8;
                            puVar2 = 
                            Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<double,_XCompare>__
                            ;
                            uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                            FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                            uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                            FUN_03836600(uVar8,2,uVar7,0);
                            if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x88) = uVar8;
                              *(long *)(*(long *)(*unaff_x25 + 0xb8) + 200) = unaff_x19;
                              puVar2 = Method_System_Reflection_Module_IsResource__;
                              lVar9 = FUN_01c5d2fc(*unaff_x24,6);
                              uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                              FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                              uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                              FUN_03836600(uVar8,0x36,uVar7,0);
                              if (lVar9 == 0) goto LAB_038363e4;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                puVar2 = Method_System_Reflection_Module_get_Assembly__;
                                uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                FUN_03836600(uVar8,0x37,uVar7,0);
                                if (1 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                  puVar2 = Method_System_Reflection_Module_get_FullyQualifiedName__;
                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                  FUN_03836600(uVar8,0x39,uVar7,0);
                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                    if (3 < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                      puVar2 = Method_System_Reflection_Module_get_ModuleVersionId__
                                      ;
                                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                      FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                      FUN_03836600(uVar8,10,uVar7,0);
                                      if (4 < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + 0x40) = uVar8;
                                        puVar2 = Method_System_Reflection_Module_get_ScopeName__;
                                        uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                        FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                        uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                        FUN_03836600(uVar8,1,uVar7,0);
                                        if (5 < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                          *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd0) = lVar9;
                                          lVar9 = FUN_01c5d2fc(*unaff_x24,1);
                                          uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                          FUN_038363e8(uVar7,0,*unaff_x26,0);
                                          uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                          FUN_03836600(uVar8,0x16,uVar7,0);
                                          if (lVar9 == 0) {
LAB_038363e4:
                    /* WARNING: Subroutine does not return */
                                            FUN_01c5d4a4();
                                          }
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd8) = lVar9;
                                            puVar2 = 
                                            Method_System_MonoCustomAttrs_GetCustomAttributes__;
                                            lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                            uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                            FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                            uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                            FUN_03836600(uVar8,0x3c,uVar7,0);
                                            if (lVar9 == 0) goto LAB_038363e4;
                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                              *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                              uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                              FUN_038363e8(uVar7,0,*unaff_x26,0);
                                              uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                              FUN_03836600(uVar8,0x16,uVar7,0);
                                              if (1 < *(uint *)(lVar9 + 0x18)) {
                                                *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe0) =
                                                     lVar9;
                                                puVar2 = 
                                                Method_System_MonoCustomAttrs_GetCustomAttributes__;
                                                lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                FUN_03836600(uVar8,0x3c,uVar7,0);
                                                if (lVar9 == 0) goto LAB_038363e4;
                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x16,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe8) =
                                                         lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Reflection_Module_IsDefined__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,10,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf0) =
                                                         lVar9;
                                                    puVar2 = 
                                                  Method_System_Reflection_Module_GetModuleVersionId__
                                                  ;
                                                  lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3c,uVar7,0);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf8)
                                                           = lVar9;
                                                      puVar2 = 
                                                  Method_System_Reflection_Module_GetObjectData__;
                                                  lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3c,uVar7,0);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x100
                                                               ) = lVar9;
                                                      lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03836600(uVar8,0x16,uVar7,0);
                                                      if (lVar9 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                        puVar2 = 
                                                  Method_System_MonoCustomAttrs_RetrieveAttributeUsageNoCache__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x39,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<DirectoryInfo>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,1,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x108)
                                                         = lVar9;
                                                    puVar2 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__
                                                  ;
                                                  lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3c,uVar7,0);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x110
                                                               ) = lVar9;
                                                      lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03836600(uVar8,0x16,uVar7,0);
                                                      if (lVar9 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                        puVar2 = 
                                                  Method_System_MonoCustomAttrs_IsDefined__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x78,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x118)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x77,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x120)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_MobileController_SetMuteSelfButtonState__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,1,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x128)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_MobileController_SetMutePlayersButtonState__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3b,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int3,_TessCellCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,1,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,4);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_ThrowLockTakenException__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,3,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar3 = Method_System_Threading_Monitor_Wait__;
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,4,uVar7,0);
                                                    if (2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                      puVar4 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar4,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3b,uVar7,0);
                                                  if (3 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03836600(uVar8,3,uVar7,0);
                                                      if (1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                        uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                        FUN_038363e8(uVar7,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                        FUN_03836600(uVar8,4,uVar7,0);
                                                        if (2 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                          *(long *)(*(long *)(*unaff_x25 + 0xb8) +
                                                                   0x148) = lVar9;
                                                          lVar9 = FUN_01c5d2fc(*unaff_x24,5);
                                                          uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                          FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                          uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                          FUN_03836600(uVar8,0x16,uVar7,0);
                                                          if (lVar9 == 0) goto LAB_038363e4;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                            uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                            FUN_038363e8(uVar7,0,*(undefined8 *)
                                                                                  puVar2,0);
                                                            uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                            FUN_03836600(uVar8,3,uVar7,0);
                                                            if (1 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                              uVar7 = thunk_FUN_01c496e0(*unaff_x23)
                                                              ;
                                                              FUN_038363e8(uVar7,0,*(undefined8 *)
                                                                                    puVar3,0);
                                                              uVar8 = thunk_FUN_01c496e0(*unaff_x22)
                                                              ;
                                                              FUN_03836600(uVar8,4,uVar7,0);
                                                              if (2 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x30) =
                                                                     uVar8;
                                                                puVar2 = 
                                                  Method_MobileController_OnPlayerDeath__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3e,uVar7,0);
                                                  if (3 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    puVar2 = 
                                                  Method_MobileController_OnToggleAutoFire__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3f,uVar7,0);
                                                  if (4 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x40) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int4,_DelaEdgeCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,1,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Linq_Expressions_Interpreter_ModuloInstruction_Create__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x40,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x79,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessEdgeCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x79,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,4);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_Pulse__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,1,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_PulseAll__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x41,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_ReliableEnterTimeout__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x42,uVar7,0);
                                                  if (3 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_ObjWait__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x43,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_System_Threading_Monitor_ObjPulse__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3e,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Threading_Monitor_ObjPulseAll__;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x43,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<UEvent,_TessEventCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x35,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_IntersectionCompare>__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x44,uVar7,0);
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,3);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar2 = 
                                                  Method_Mono_Net_Security_MobileAuthenticatedStream_set_Position__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x3e,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar2 = Method_MobileController_ClosedPause__;
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x3f,uVar7,0);
                                                    if (2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400)
                                                           = lVar9;
                                                      puVar2 = 
                                                  Method_System_Net_Configuration_ModuleElement__ctor__
                                                  ;
                                                  lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x45,uVar7,0);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                    puVar2 = 
                                                  Method_System_Net_Configuration_ModuleElement_get_Properties__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x7a,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198)
                                                         = lVar9;
                                                    puVar2 = Method_MobileController_OpenPause__;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,1);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x45,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0
                                                               ) = lVar9;
                                                      lVar9 = FUN_01c5d2fc(*unaff_x24,2);
                                                      uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                      uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03836600(uVar8,0x16,uVar7,0);
                                                      if (lVar9 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                        puVar2 = 
                                                  Method_UnityEngine_MonoBehaviour_InvokeRepeating__
                                                  ;
                                                  uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_038363e8(uVar7,0,*(undefined8 *)puVar2,0);
                                                  uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03836600(uVar8,0x43,uVar7,0);
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar9;
                                                    lVar9 = FUN_01c5d2fc(*unaff_x24,1);
                                                    uVar7 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_038363e8(uVar7,0,*unaff_x26,0);
                                                    uVar8 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03836600(uVar8,0x16,uVar7,0);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar9 + 0x20) = uVar8;
                                                      puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfConnected__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar9;
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_MethodBuilder_get_MethodHandle__
                                                  ;
                                                  lVar9 = FUN_01c5d2fc(*(undefined8 *)puVar3,0x30);
                                                  uVar8 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar7,0,0,uVar8,0,0,0,1);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar7;
                                                    puVar4 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  ;
                                                  puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter__ctor__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  );
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4a,1,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4b,2,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x30) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteBinary__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4c,3,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (3 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x38) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_Write__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4d,4,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (4 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x40) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs_AcknowledgeAsync__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4e,5,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (5 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x48) = uVar8;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnPlayPauseClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x4f,6,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (6 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x50) = uVar8;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnFastForwardClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x50,7,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (7 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x58) = uVar8;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x50,8,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (8 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x60) = uVar8;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x51,9,uVar10,uVar11,uVar7,0,1)
                                                  ;
                                                  if (9 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x68) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_SetBuffer__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x52,10,uVar10,uVar11,uVar7,0,1
                                                              );
                                                  if (10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x70) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ReadVariableByteInteger__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x52,0xb,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xb < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x78) = uVar8;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x53,0xc,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xc < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x80) = uVar8;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnRewindClicked__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x54,0xd,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xd < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x88) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPingRespPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x55,0xe,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xe < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x90) = uVar8;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_InitializeInternal__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x56,0xf,uVar10,uVar11,uVar7,0,
                                                               1);
                                                  if (0xf < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x98) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteString__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x57,0x10,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xa0) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_AcknowledgeReceivedPublishPacket__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x58,0x11,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xa8) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttApplicationMessageFactory_Create__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x59,0x12,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb0) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageBuilder_Build__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x6c,0x13,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) = uVar8;
                                                    puVar3 = 
                                                  Method_MovingPlatformManager_OnJoinedRoom__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x6e,0x14,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xc0) = uVar8;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnSeekBarMoved__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x6d,0x15,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 200) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubRecPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x6f,0x16,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd0) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x70,0x17,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd8) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubCompPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x71,0x18,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x18 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe0) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient__ctor__;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x74,0x19,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x19 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe8) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttSubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x72,0x1a,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1a < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xf0) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttUnsubAckPacket>__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x73,0x1b,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1b < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xf8) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ValidateReceiveBuffer__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x5a,0x1c,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1c < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x100) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar8,0x5b,0x1d,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x1d < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x108) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar8,0x5c,0x1e,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x1e < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x110) = uVar8;
                                                        puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter_WrapAndThrowException__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x5d,0x1f,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x1f < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x118) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_ThrowIfNotSupported__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x5e,0x20,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x20 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x120) = uVar8;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_Throw__
                                                  ;
                                                  uVar10 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x5f,0x21,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x21 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x128) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar8,0x60,0x22,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x22 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x130) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar8,0x61,0x23,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x23 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x138) = uVar8;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_03836630(uVar8,0x62,0x24,uVar10,uVar11,
                                                                     uVar7,0,1);
                                                        if (0x24 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x140) = uVar8;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar7,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_03836630(uVar8,99,0x25,uVar10,uVar11,
                                                                       uVar7,0,1);
                                                          if (0x25 < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x148) = uVar8;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar7 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar7,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar8 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_03836630(uVar8,100,0x26,uVar10,
                                                                         uVar11,uVar7,0,1);
                                                            if (0x26 < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x150) = uVar8
                                                              ;
                                                              uVar10 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar11 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar7 = thunk_FUN_01c496e0(*(
                                                  undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar8,0x65,0x27,uVar10,uVar11,uVar7,0
                                                               ,1);
                                                  if (0x27 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x158) = uVar8;
                                                    uVar10 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03836630(uVar8,0x66,0x28,uVar10,uVar11,uVar7
                                                                 ,0,1);
                                                    if (0x28 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x160) = uVar8;
                                                      uVar10 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0);
                                                      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03836630(uVar8,0x67,0x29,uVar10,uVar11,
                                                                   uVar7,0,1);
                                                      if (0x29 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x168) = uVar8;
                                                        uVar10 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar11 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar7,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar2);
                                                        FUN_03836630(uVar8,0x68,0x2a,uVar10,uVar11,
                                                                     uVar7,0,1);
                                                        if (0x2a < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x170) = uVar8;
                                                          uVar10 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar11 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar7,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar2);
                                                          FUN_03836630(uVar8,0x69,0x2b,uVar10,uVar11
                                                                       ,uVar7,0,1);
                                                          if (0x2b < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x178) = uVar8;
                                                            uVar10 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar11 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar7 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar7,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar8 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar2);
                                                            FUN_03836630(uVar8,0x75,0x2c,uVar10,
                                                                         uVar11,uVar7,0,1);
                                                            if (0x2c < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x180) = uVar8
                                                              ;
                                                              puVar6 = 
                                                  Method_MQTTnet_Client_MqttClient_PublishAsync__;
                                                  puVar5 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a0);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x6b,0x2d,0,uVar11,uVar7,uVar8
                                                               ,0);
                                                  if (0x2d < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x188) = uVar10;
                                                    puVar5 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs__ctor__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<string>__;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x6a,0x2e,0,uVar11,uVar7,uVar8
                                                               ,0);
                                                  if (0x2e < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 400) = uVar10;
                                                    puVar5 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteVariableByteInteger__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Runtime_Remoting_Messaging_MonoMethodMessage_GetMethodInfo__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x78);
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a8);
                                                  uVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar7,0,*(undefined8 *)puVar5,0);
                                                  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                                  FUN_03836550(uVar8,0,*(undefined8 *)puVar3,0);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar10,0x76,0x2f,uVar11,uVar12,uVar7,
                                                               uVar8,1);
                                                  if (0x2f < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x198) = uVar10;
                                                    puVar3 = PTR_DAT_04232bd8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8)
                                                         = lVar9;
                                                    puVar4 = Method_MinimapDisplay_SetInvisible__;
                                                    puVar2 = PTR_DAT_0422fd68;
                                                    uVar7 = FUN_01c5d2fc(*(undefined8 *)puVar3,6);
                                                    FUN_032032f0(uVar7,*(undefined8 *)puVar4,0);
                                                    *(undefined8 *)
                                                     (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar7;
                                                    lVar9 = FUN_01c5d2fc(*(undefined8 *)puVar2,6);
                                                    if (lVar9 == 0) goto LAB_038363e4;
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if ((((uVar1 != 0) &&
                                                         (*(undefined8 *)(lVar9 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_MQTTnet_Implementations_MqttClientAdapterFactory_CreateClientAdapter__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar9 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  GAP_ParticleSystemController_SerializableMinMaxCurve_TypeInfo
                                                  , 2 < uVar1)) &&
                                                  (((*(undefined8 *)(lVar9 + 0x30) =
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Linq_Enumerable_Select<StyleSelector,_string>__
                                                  , uVar1 != 3 &&
                                                  (*(undefined8 *)(lVar9 + 0x38) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Rendering_ProfilingSampler___TypeInfo,
                                                  4 < uVar1)) &&
                                                  (*(undefined8 *)(lVar9 + 0x40) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar9 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateSelectionEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar9;
                                                  lVar9 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  if ((*(int *)(lVar9 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar9 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IDeselectHandler>__
                                                  , *(int *)(lVar9 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar9 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar9;
                                                  lVar9 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar9 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  VoxelBusters_EssentialKit_SharingServicesCore_Android_NativeMessageComposerListener_TypeInfo
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar9 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar9;
                                                  lVar9 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar9 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar9 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_MQTTnet_Client_MqttClientConnectResultFactory_ConvertReturnCodeToResultCode__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar9 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_MQTTnet_Client_MqttClient_ThrowNotConnected__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar9 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateValidationEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar9;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


