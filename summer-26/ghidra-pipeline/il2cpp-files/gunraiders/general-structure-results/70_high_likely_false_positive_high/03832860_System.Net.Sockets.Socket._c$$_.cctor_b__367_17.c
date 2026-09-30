/*
FUNCTION_NAME: System.Net.Sockets.Socket.<>c$$<.cctor>b__367_17
ENTRY_POINT: 03832860
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_7
*/


void System_Net_Sockets_Socket_<>c__<_cctor>b__367_17(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  int in_w8;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x25;
  
  *(undefined4 *)(param_1 + 0x20) = 2;
  if (in_w8 != 1) {
    *(undefined4 *)(param_1 + 0x24) = 5;
    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x90) = param_1;
    puVar3 = Method_Mono_Net_Security_MobileAuthenticatedStream_GetInternalError__;
    puVar2 = Method_Mono_Net_Security_MobileAuthenticatedStream_CheckThrow__;
    uVar9 = FUN_01c5d2fc(*unaff_x20,6);
    FUN_032032f0(uVar9,*(undefined8 *)puVar3,0);
                    /* try { // try from 038328b4 to 039328b7 has its CatchHandler @ 03832bdc */
    *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x98) = uVar9;
    uVar9 = FUN_01c5d2fc(*unaff_x20,3);
    FUN_032032f0(uVar9,*(undefined8 *)puVar2,0);
    *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0xa0) = uVar9;
    lVar10 = FUN_01c5d2fc(*unaff_x20,2);
                    /* try { // try from 038328f0 to 039328fb has its CatchHandler @ 03832c34 */
    if (lVar10 == 0) {
LAB_038363e4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(int *)(lVar10 + 0x18) != 0) &&
       (*(undefined4 *)(lVar10 + 0x20) = 0x2d, *(int *)(lVar10 + 0x18) != 1)) {
      *(undefined4 *)(lVar10 + 0x24) = 0x2e;
      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xa8) = lVar10;
      lVar10 = FUN_01c5d2fc(*unaff_x20,1);
                    /* try { // try from 0383292c to 0393292f has its CatchHandler @ 03832bfc */
      if (lVar10 == 0) goto LAB_038363e4;
                    /* try { // try from 03832930 to 0393293f has its CatchHandler @ 03832c24 */
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined4 *)(lVar10 + 0x20) = 2;
        puVar2 = Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessHandshake__;
        *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xb0) = lVar10;
        puVar5 = Method_UnityEngine_MonoBehaviour_StartCoroutine__;
        puVar4 = Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessWrite__;
        puVar3 = Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessRead__;
        lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,7);
        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
        FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
        FUN_03836600(uVar11,0x46,uVar9,0);
        if (lVar10 == 0) goto LAB_038363e4;
                    /* try { // try from 038329bc to 039329c3 has its CatchHandler @ 03832bd4 */
        if (*(int *)(lVar10 + 0x18) != 0) {
          *(undefined8 *)(lVar10 + 0x20) = uVar11;
          puVar5 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                    /* try { // try from 038329f4 to 039329fb has its CatchHandler @ 03832c3c */
          FUN_03836600(uVar11,0x47,uVar9,0);
          if (1 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x28) = uVar11;
            puVar5 = Method_Photon_Realtime_MonoBehaviourEmpty_CompleteOnMainThread__;
            uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                    /* try { // try from 03832a2c to 03932a2f has its CatchHandler @ 03832bdc */
            FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
            FUN_03836600(uVar11,0x31,uVar9,0);
            if (2 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x30) = uVar11;
              puVar5 = Method_Mono_Net_Security_MobileAuthenticatedStream_Seek__;
                    /* try { // try from 03832a68 to 03932a73 has its CatchHandler @ 03832c30 */
              uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
              FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                    /* try { // try from 03832aa4 to 03932aa7 has its CatchHandler @ 03832bf8 */
              FUN_03836600(uVar11,0x16,uVar9,0);
                    /* try { // try from 03832aa8 to 03932ab7 has its CatchHandler @ 03832c20 */
              if (3 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x38) = uVar11;
                puVar6 = Method_System_Net_MonoChunkParser_ThrowProtocolViolation__;
                uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                FUN_03836600(uVar11,0x32,uVar9,0);
                if (4 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x40) = uVar11;
                  puVar6 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                  FUN_03836600(uVar11,0x33,uVar9,0);
                  if (5 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x48) = uVar11;
                    puVar6 = Method_UnityEngine_MonoBehaviour_StartCoroutine__;
                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                    FUN_03836600(uVar11,0x34,uVar9,0);
                    if (6 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x50) = uVar11;
                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xb8) = lVar10;
                      puVar6 = Method_MobileController_UpdateShieldVis__;
                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,8);
                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                      FUN_03836600(uVar11,0x1e,uVar9,0);
                      if (lVar10 == 0) goto LAB_038363e4;
                      if (*(int *)(lVar10 + 0x18) != 0) {
                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                        puVar6 = Method_Mono_Net_Security_MobileTlsContext_SelectClientCertificate__
                        ;
                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                        FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                        FUN_03836600(uVar11,0x35,uVar9,0);
                        if (1 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x28) = uVar11;
                          puVar6 = Method_MobileZipLineTrigger_OnChangeScene__;
                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                          FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                          FUN_03836600(uVar11,0x49,uVar9,0);
                          if (2 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x30) = uVar11;
                            uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                            FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                            FUN_03836600(uVar11,0x16,uVar9,0);
                            if (3 < *(uint *)(lVar10 + 0x18)) {
                              *(undefined8 *)(lVar10 + 0x38) = uVar11;
                              puVar6 = 
                              Method_System_Reflection_Module_FilterTypeNameIgnoreCaseImpl__;
                              uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                              FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                              FUN_03836600(uVar11,1,uVar9,0);
                              if (4 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                puVar6 = Method_System_Reflection_Module_FilterTypeNameImpl__;
                                uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                FUN_03836600(uVar11,0x3b,uVar9,0);
                                if (5 < *(uint *)(lVar10 + 0x18)) {
                                  *(undefined8 *)(lVar10 + 0x48) = uVar11;
                                  puVar6 = Method_System_Reflection_Module_GetCustomAttributes__;
                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                  FUN_03836600(uVar11,2,uVar9,0);
                                  if (6 < *(uint *)(lVar10 + 0x18)) {
                                    *(undefined8 *)(lVar10 + 0x50) = uVar11;
                                    puVar6 = Method_System_Reflection_Module_GetCustomAttributes__;
                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                    FUN_03836600(uVar11,0x48,uVar9,0);
                                    if (7 < *(uint *)(lVar10 + 0x18)) {
                                      *(undefined8 *)(lVar10 + 0x58) = uVar11;
                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xc0) = lVar10;
                                      puVar6 = 
                                      Method_System_Net_Configuration_ModuleElement_get_Type__;
                                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,0xe);
                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                      FUN_03836600(uVar11,0x36,uVar9,0);
                                      if (lVar10 == 0) goto LAB_038363e4;
                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                        puVar6 = 
                                        Method_System_Net_Configuration_ModuleElement_set_Type__;
                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                        FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                        FUN_03836600(uVar11,0x37,uVar9,0);
                                        if (1 < *(uint *)(lVar10 + 0x18)) {
                                          *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                          puVar6 = 
                                          Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int>__
                                          ;
                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                          FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                          FUN_03836600(uVar11,0x1e,uVar9,0);
                                          if (2 < *(uint *)(lVar10 + 0x18)) {
                                            *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                            puVar6 = 
                                            Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<float2>__
                                            ;
                                            uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                            FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                            FUN_03836600(uVar11,0x39,uVar9,0);
                                            if (3 < *(uint *)(lVar10 + 0x18)) {
                                              *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                              puVar6 = 
                                              Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__
                                              ;
                                              uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                              FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                              FUN_03836600(uVar11,0x35,uVar9,0);
                                              if (4 < *(uint *)(lVar10 + 0x18)) {
                                                *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                                puVar6 = 
                                                Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int4>__
                                                ;
                                                uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                                FUN_03836600(uVar11,0x49,uVar9,0);
                                                if (5 < *(uint *)(lVar10 + 0x18)) {
                                                  *(undefined8 *)(lVar10 + 0x48) = uVar11;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x16,uVar9,0);
                                                  if (6 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x50) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<UHull,_UEvent,_Tessellator_TestHullEventE>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,3,uVar9,0);
                                                  if (7 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x58) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int2,_int2,_Tessellator_TestEdgePointE>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,4,uVar9,0);
                                                  if (8 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x60) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetEqual<int3,_int3,_Tessellator_TestCellE>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (9 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x68) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_UEvent,_Tessellator_TestHullEventLe>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3a,uVar9,0);
                                                  if (10 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x70) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetLower<UHull,_float2,_Tessellator_TestHullPointL>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3b,uVar9,0);
                                                  if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x78) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_GetUpper<UHull,_float2,_Tessellator_TestHullPointU>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x38,uVar9,0);
                                                  if (0xc < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x80) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<double,_XCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,2,uVar9,0);
                                                  if (0xd < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x88) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 200) =
                                                         lVar10;
                                                    puVar6 = 
                                                  Method_System_Reflection_Module_IsResource__;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,6);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x36,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Reflection_Module_get_Assembly__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x37,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Reflection_Module_get_FullyQualifiedName__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x39,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (3 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Reflection_Module_get_ModuleVersionId__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,10,uVar9,0);
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Reflection_Module_get_ScopeName__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (5 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x48) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd0) =
                                                         lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,1);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xd8)
                                                           = lVar10;
                                                      puVar6 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributes__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3c,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe0)
                                                           = lVar10;
                                                      puVar6 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributes__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3c,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xe8)
                                                           = lVar10;
                                                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2)
                                                      ;
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03836600(uVar11,0x16,uVar9,0);
                                                      if (lVar10 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                        puVar6 = 
                                                  Method_System_Reflection_Module_IsDefined__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,10,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf0) =
                                                         lVar10;
                                                    puVar6 = 
                                                  Method_System_Reflection_Module_GetModuleVersionId__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3c,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0xf8)
                                                           = lVar10;
                                                      puVar6 = 
                                                  Method_System_Reflection_Module_GetObjectData__;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3c,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x100
                                                               ) = lVar10;
                                                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3)
                                                      ;
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03836600(uVar11,0x16,uVar9,0);
                                                      if (lVar10 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                        puVar6 = 
                                                  Method_System_MonoCustomAttrs_RetrieveAttributeUsageNoCache__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x39,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<DirectoryInfo>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x108)
                                                         = lVar10;
                                                    puVar6 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3c,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x110
                                                               ) = lVar10;
                                                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2)
                                                      ;
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03836600(uVar11,0x16,uVar9,0);
                                                      if (lVar10 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                        puVar6 = 
                                                  Method_System_MonoCustomAttrs_IsDefined__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x78,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x118)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x77,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x120)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_MobileController_SetMuteSelfButtonState__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x128)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_MobileController_SetMutePlayersButtonState__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3b,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x130)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int3,_TessCellCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x138)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,4);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Threading_Monitor_ThrowLockTakenException__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,3,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar8 = Method_System_Threading_Monitor_Wait__;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar8,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,4,uVar9,0);
                                                    if (2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                      puVar7 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessJunctionCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar7,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3b,uVar9,0);
                                                  if (3 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x140)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03836600(uVar11,3,uVar9,0);
                                                      if (1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_038363e8(uVar9,0,*(undefined8 *)puVar8,0
                                                                    );
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_03836600(uVar11,4,uVar9,0);
                                                        if (2 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                          *(long *)(*(long *)(*unaff_x25 + 0xb8) +
                                                                   0x148) = lVar10;
                                                          lVar10 = FUN_01c5d2fc(*(undefined8 *)
                                                                                 puVar2,5);
                                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_038363e8(uVar9,0,*(undefined8 *)puVar5
                                                                       ,0);
                                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *
                                                                                       )puVar3);
                                                          FUN_03836600(uVar11,0x16,uVar9,0);
                                                          if (lVar10 == 0) goto LAB_038363e4;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                            uVar9 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_038363e8(uVar9,0,*(undefined8 *)
                                                                                  puVar6,0);
                                                            uVar11 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar3);
                                                            FUN_03836600(uVar11,3,uVar9,0);
                                                            if (1 < *(uint *)(lVar10 + 0x18)) {
                                                              *(undefined8 *)(lVar10 + 0x28) =
                                                                   uVar11;
                                                              uVar9 = thunk_FUN_01c496e0(*(
                                                  undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar8,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,4,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    puVar6 = Method_MobileController_OnPlayerDeath__
                                                    ;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x3e,uVar9,0);
                                                    if (3 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                                      puVar6 = 
                                                  Method_MobileController_OnToggleAutoFire__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3f,uVar9,0);
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x150)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int4,_DelaEdgeCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Linq_Expressions_Interpreter_ModuloInstruction_Create__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x40,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x79,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x160)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_TessEdgeCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x79,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x168)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,4);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Threading_Monitor_Pulse__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,1,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Threading_Monitor_PulseAll__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x41,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Threading_Monitor_ReliableEnterTimeout__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x42,uVar9,0);
                                                  if (3 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x170)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Threading_Monitor_ObjWait__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x43,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x178)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_System_Threading_Monitor_ObjPulse__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3e,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Threading_Monitor_ObjPulseAll__;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x43,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x180)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<UEvent,_TessEventCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x35,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = 
                                                  Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_InsertionSort<int2,_IntersectionCompare>__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x44,uVar9,0);
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar6 = 
                                                  Method_Mono_Net_Security_MobileAuthenticatedStream_set_Position__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x3e,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar6 = Method_MobileController_ClosedPause__;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x3f,uVar9,0);
                                                    if (2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 400)
                                                           = lVar10;
                                                      puVar6 = 
                                                  Method_System_Net_Configuration_ModuleElement__ctor__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x45,uVar9,0);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                    puVar6 = 
                                                  Method_System_Net_Configuration_ModuleElement_get_Properties__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x7a,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x198)
                                                         = lVar10;
                                                    puVar6 = Method_MobileController_OpenPause__;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,1);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x45,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a0
                                                               ) = lVar10;
                                                      lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2)
                                                      ;
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03836600(uVar11,0x16,uVar9,0);
                                                      if (lVar10 == 0) goto LAB_038363e4;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                        puVar6 = 
                                                  Method_UnityEngine_MonoBehaviour_InvokeRepeating__
                                                  ;
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_038363e8(uVar9,0,*(undefined8 *)puVar6,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03836600(uVar11,0x43,uVar9,0);
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1a8)
                                                         = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,1);
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_038363e8(uVar9,0,*(undefined8 *)puVar5,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03836600(uVar11,0x16,uVar9,0);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar10 + 0x20) = uVar11;
                                                      puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfConnected__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b0) =
                                                       lVar10;
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_MethodBuilder_get_MethodHandle__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar3,0x30);
                                                  uVar11 = **(undefined8 **)(*unaff_x25 + 0xb8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                                  FUN_03836630(uVar9,0,0,uVar11,0,0,0,1);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) = uVar9;
                                                    puVar4 = 
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  ;
                                                  puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter__ctor__;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 8);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_MQTTnet_Client_MqttClient_ThrowIfOptionsInvalid__
                                                  );
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4a,1,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x28) = uVar11;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa8);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1b0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4b,2,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x30) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteBinary__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x178);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4c,3,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (3 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x38) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_Write__;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x180);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4d,4,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x40) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs_AcknowledgeAsync__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x18);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 200);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4e,5,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (5 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x48) = uVar11;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnPlayPauseClicked__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x10);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xc0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x4f,6,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (6 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x50) = uVar11;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnFastForwardClicked__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x80);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x128);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x50,7,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (7 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x58) = uVar11;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x130);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x50,8,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (8 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x60) = uVar11;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 400);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x51,9,uVar12,uVar13,uVar9,0,1
                                                              );
                                                  if (9 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x68) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_SetBuffer__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x88);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x138);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x52,10,uVar12,uVar13,uVar9,0,
                                                               1);
                                                  if (10 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x70) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ReadVariableByteInteger__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x140);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x52,0xb,uVar12,uVar13,uVar9,0
                                                               ,1);
                                                  if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x78) = uVar11;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x90);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x53,0xc,uVar12,uVar13,uVar9,0
                                                               ,1);
                                                  if (0xc < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x80) = uVar11;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnRewindClicked__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x54,0xd,uVar12,uVar13,uVar9,0
                                                               ,1);
                                                  if (0xd < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x88) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPingRespPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x98);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x148);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x55,0xe,uVar12,uVar13,uVar9,0
                                                               ,1);
                                                  if (0xe < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x90) = uVar11;
                                                    puVar3 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_InitializeInternal__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x150);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x56,0xf,uVar12,uVar13,uVar9,0
                                                               ,1);
                                                  if (0xf < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x98) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteString__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x170);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x57,0x10,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x10 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xa0) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_AcknowledgeReceivedPublishPacket__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x58);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x108);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x58,0x11,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x11 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xa8) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttApplicationMessageFactory_Create__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x20);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x59,0x12,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x12 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xb0) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageBuilder_Build__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x40);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x6c,0x13,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x13 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xb8) = uVar11;
                                                    puVar3 = 
                                                  Method_MovingPlatformManager_OnJoinedRoom__;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x50);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x100);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x6e,0x14,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x14 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xc0) = uVar11;
                                                    puVar3 = 
                                                  Method_MoviePlayerSampleControls_OnSeekBarMoved__;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x48);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xf8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x6d,0x15,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x15 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 200) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubRecPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x28);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xd8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x6f,0x16,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x16 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xd0) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubAckPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x30);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x70,0x17,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x17 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xd8) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttPubCompPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x38);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xe8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x71,0x18,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x18 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xe0) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient__ctor__;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x70);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x118);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x74,0x19,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x19 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xe8) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttSubAckPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x68);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x120);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x72,0x1a,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x1a < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xf0) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Client_MqttClient_Request<MqttUnsubAckPacket>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x60);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x110);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x73,0x1b,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x1b < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xf8) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_Formatter_MqttBufferReader_ValidateReceiveBuffer__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x158);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x5a,0x1c,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x1c < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x100) = uVar11;
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xa0);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x158)
                                                    ;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03836630(uVar11,0x5b,0x1d,uVar12,uVar13,
                                                                 uVar9,0,1);
                                                    if (0x1d < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x108) = uVar11;
                                                      uVar12 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xa0
                                                                );
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x158);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_03836630(uVar11,0x5c,0x1e,uVar12,uVar13,
                                                                   uVar9,0,1);
                                                      if (0x1e < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x110) = uVar11;
                                                        puVar3 = 
                                                  Method_MQTTnet_Adapter_MqttChannelAdapter_WrapAndThrowException__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x160);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x5d,0x1f,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x1f < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x118) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_ThrowIfNotSupported__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x168);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x5e,0x20,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x20 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x120) = uVar11;
                                                    puVar3 = 
                                                  Method_MQTTnet_MqttApplicationMessageValidator_Throw__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x188);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x5f,0x21,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x21 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x128) = uVar11;
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03836630(uVar11,0x60,0x22,uVar12,uVar13,
                                                                 uVar9,0,1);
                                                    if (0x22 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x130) = uVar11;
                                                      uVar12 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_03836630(uVar11,0x61,0x23,uVar12,uVar13,
                                                                   uVar9,0,1);
                                                      if (0x23 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x138) = uVar11;
                                                        uVar12 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar13 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_03836630(uVar11,0x62,0x24,uVar12,uVar13,
                                                                     uVar9,0,1);
                                                        if (0x24 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x140) = uVar11;
                                                          uVar12 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar13 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar9,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_03836630(uVar11,99,0x25,uVar12,uVar13,
                                                                       uVar9,0,1);
                                                          if (0x25 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x148) = uVar11
                                                            ;
                                                            uVar12 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar13 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar9 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar9,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar11 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_03836630(uVar11,100,0x26,uVar12,
                                                                         uVar13,uVar9,0,1);
                                                            if (0x26 < *(uint *)(lVar10 + 0x18)) {
                                                              *(undefined8 *)(lVar10 + 0x150) =
                                                                   uVar11;
                                                              uVar12 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0xb0);
                                                              uVar13 = *(undefined8 *)
                                                                        (*(long *)(*unaff_x25 + 0xb8
                                                                                  ) + 0x188);
                                                              uVar9 = thunk_FUN_01c496e0(*(
                                                  undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar11,0x65,0x27,uVar12,uVar13,uVar9,
                                                               0,1);
                                                  if (0x27 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x158) = uVar11;
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0xb0);
                                                    uVar13 = *(undefined8 *)
                                                              (*(long *)(*unaff_x25 + 0xb8) + 0x188)
                                                    ;
                                                    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03836630(uVar11,0x66,0x28,uVar12,uVar13,
                                                                 uVar9,0,1);
                                                    if (0x28 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x160) = uVar11;
                                                      uVar12 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) + 0xb0
                                                                );
                                                      uVar13 = *(undefined8 *)
                                                                (*(long *)(*unaff_x25 + 0xb8) +
                                                                0x188);
                                                      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_03836630(uVar11,0x67,0x29,uVar12,uVar13,
                                                                   uVar9,0,1);
                                                      if (0x29 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x168) = uVar11;
                                                        uVar12 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0xb0);
                                                        uVar13 = *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x188);
                                                        uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                    puVar4);
                                                        FUN_0383649c(uVar9,0,*(undefined8 *)puVar3,0
                                                                    );
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar2);
                                                        FUN_03836630(uVar11,0x68,0x2a,uVar12,uVar13,
                                                                     uVar9,0,1);
                                                        if (0x2a < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0x170) = uVar11;
                                                          uVar12 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0xb0);
                                                          uVar13 = *(undefined8 *)
                                                                    (*(long *)(*unaff_x25 + 0xb8) +
                                                                    0x188);
                                                          uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                      puVar4);
                                                          FUN_0383649c(uVar9,0,*(undefined8 *)puVar3
                                                                       ,0);
                                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *
                                                                                       )puVar2);
                                                          FUN_03836630(uVar11,0x69,0x2b,uVar12,
                                                                       uVar13,uVar9,0,1);
                                                          if (0x2b < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x178) = uVar11
                                                            ;
                                                            uVar12 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0xb0);
                                                            uVar13 = *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x188);
                                                            uVar9 = thunk_FUN_01c496e0(*(undefined8
                                                                                         *)puVar4);
                                                            FUN_0383649c(uVar9,0,*(undefined8 *)
                                                                                  puVar3,0);
                                                            uVar11 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar2);
                                                            FUN_03836630(uVar11,0x75,0x2c,uVar12,
                                                                         uVar13,uVar9,0,1);
                                                            if (0x2c < *(uint *)(lVar10 + 0x18)) {
                                                              *(undefined8 *)(lVar10 + 0x180) =
                                                                   uVar11;
                                                              puVar6 = 
                                                  Method_MQTTnet_Client_MqttClient_PublishAsync__;
                                                  puVar5 = 
                                                  Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<FileInfo>__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a0);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03836550(uVar11,0,*(undefined8 *)puVar3,0);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar12,0x6b,0x2d,0,uVar13,uVar9,
                                                               uVar11,0);
                                                  if (0x2d < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x188) = uVar12;
                                                    puVar5 = 
                                                  Method_MQTTnet_Client_MqttApplicationMessageReceivedEventArgs__ctor__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_IO_MonoLinqHelper_ToArray<string>__;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x198);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03836550(uVar11,0,*(undefined8 *)puVar3,0);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar12,0x6a,0x2e,0,uVar13,uVar9,
                                                               uVar11,0);
                                                  if (0x2e < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 400) = uVar12;
                                                    puVar5 = 
                                                  Method_MQTTnet_Formatter_MqttBufferWriter_WriteVariableByteInteger__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Runtime_Remoting_Messaging_MonoMethodMessage_GetMethodInfo__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x78);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x25 + 0xb8) + 0x1a8);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                  FUN_0383649c(uVar9,0,*(undefined8 *)puVar5,0);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03836550(uVar11,0,*(undefined8 *)puVar3,0);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03836630(uVar12,0x76,0x2f,uVar13,uVar14,uVar9,
                                                               uVar11,1);
                                                  if (0x2f < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x198) = uVar12;
                                                    puVar3 = PTR_DAT_04232bd8;
                                                    *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1b8)
                                                         = lVar10;
                                                    puVar4 = Method_MinimapDisplay_SetInvisible__;
                                                    puVar2 = PTR_DAT_0422fd68;
                                                    uVar9 = FUN_01c5d2fc(*(undefined8 *)puVar3,6);
                                                    FUN_032032f0(uVar9,*(undefined8 *)puVar4,0);
                                                    *(undefined8 *)
                                                     (*(long *)(*unaff_x25 + 0xb8) + 0x1c0) = uVar9;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,6);
                                                    if (lVar10 == 0) goto LAB_038363e4;
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if ((((uVar1 != 0) &&
                                                         (*(undefined8 *)(lVar10 + 0x20) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_MQTTnet_Implementations_MqttClientAdapterFactory_CreateClientAdapter__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar10 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  GAP_ParticleSystemController_SerializableMinMaxCurve_TypeInfo
                                                  , 2 < uVar1)) &&
                                                  (((*(undefined8 *)(lVar10 + 0x30) =
                                                          *(undefined8 *)
                                                                                                                      
                                                  Method_System_Linq_Enumerable_Select<StyleSelector,_string>__
                                                  , uVar1 != 3 &&
                                                  (*(undefined8 *)(lVar10 + 0x38) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  UnityEngine_Rendering_ProfilingSampler___TypeInfo,
                                                  4 < uVar1)) &&
                                                  (*(undefined8 *)(lVar10 + 0x40) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                                  , uVar1 != 5)))) {
                                                    *(undefined8 *)(lVar10 + 0x48) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateSelectionEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1c8) =
                                                       lVar10;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  if ((*(int *)(lVar10 + 0x18) != 0) &&
                                                     (*(undefined8 *)(lVar10 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IDeselectHandler>__
                                                  , *(int *)(lVar10 + 0x18) != 1)) {
                                                    *(undefined8 *)(lVar10 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d0) =
                                                       lVar10;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar10 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  VoxelBusters_EssentialKit_SharingServicesCore_Android_NativeMessageComposerListener_TypeInfo
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar10 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar10 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_Execute__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1d8) =
                                                       lVar10;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  if (lVar10 == 0) goto LAB_038363e4;
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (((uVar1 != 0) &&
                                                      (*(undefined8 *)(lVar10 + 0x20) =
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_MQTTnet_Client_MqttClientConnectResultFactory_ConvertReturnCodeToResultCode__
                                                  , uVar1 != 1)) &&
                                                  (*(undefined8 *)(lVar10 + 0x28) =
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_MQTTnet_Client_MqttClient_ThrowNotConnected__
                                                  , 2 < uVar1)) {
                                                    *(undefined8 *)(lVar10 + 0x30) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_MQTTnet_Client_MqttClientCertificateValidationEventArgs__ctor__
                                                  ;
                                                  *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x1e0) =
                                                       lVar10;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


