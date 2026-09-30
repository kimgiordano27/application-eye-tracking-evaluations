/*
FUNCTION_NAME: Unity.Properties.TypeUtility$$.cctor
ENTRY_POINT: 06648ab4
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeUtility___cctor(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  puVar3 = UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
  *(undefined8 *)(unaff_x21 + 0x10) = *param_1;
                    /* try { // try from 06648ac8 to 06748adf has its CatchHandler @ 06648c2c */
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)puVar3;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x21 + 0x20));
                    /* try { // try from 06648ae0 to 06748c1b has its CatchHandler @ 066489b4 */
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  lVar4 = thunk_FUN_02ef1808(*unaff_x28);
  FUN_03fd0468(lVar4,*unaff_x26);
  if (lVar4 != 0) {
    lVar8 = *unaff_x29;
    uVar6 = *(undefined8 *)Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
    lVar7 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x21 + 0x30) = lVar4;
      thunk_FUN_02f411dc((long *)(unaff_x21 + 0x30),lVar4);
      lVar4 = thunk_FUN_02ef1808(*(undefined8 *)System_Net_Sockets_LingerOption_TypeInfo);
      FUN_03fd0468(lVar4,*(undefined8 *)System_Xml_Linq_LineInfoAnnotation_TypeInfo);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_InputSystem_LightSensor_TypeInfo);
      FUN_05645a04(lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = *unaff_x24;
        thunk_FUN_02f411dc();
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
        thunk_FUN_02f411dc();
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x10);
          lVar9 = *(long *)UnityEngine_LightmapData_TypeInfo;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          puVar3 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar7;
                    /* try { // try from 06648c1c to 06748c2b has its CatchHandler @ 06648c2c */
              thunk_FUN_02f411dc(plVar5,lVar7);
            }
            else {
                    /* catch() { ... } // from try @ 06648ac8 with catch @ 06648c2c
                       catch() { ... } // from try @ 06648c1c with catch @ 06648c2c */
                    /* try { // try from 06648c30 to 06748c33 has its CatchHandler @ 06648c3c */
                    /* try { // try from 06648c34 to 06748c3f has its CatchHandler @ 066489b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06648c30 with catch @ 06648c3c
                        */
              FUN_03fd0c9c(lVar4,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
                    /* try { // try from 06648c40 to 06748cb3 has its CatchHandler @ 06648c40
                       catch() { ... } // from try @ 06648c40 with catch @ 06648c40
                       catch() { ... } // from try @ 06648cbc with catch @ 06648c40
                       catch() { ... } // from try @ 06648d18 with catch @ 06648c40
                       catch() { ... } // from try @ 06648e6c with catch @ 06648c40 */
            *(long *)(unaff_x21 + 0x28) = lVar4;
            thunk_FUN_02f411dc((long *)(unaff_x21 + 0x28),lVar4);
            lVar4 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_02f411dc();
              }
              else {
                FUN_03fd0c9c();
              }
                    /* try { // try from 06648cb4 to 06748cbb has its CatchHandler @ 06648ce8 */
              lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                    /* try { // try from 06648cbc to 06748cff has its CatchHandler @ 06648c40 */
              FUN_05645a04(lVar4,0);
              puVar2 = PTR_DAT_06d03bc8;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d04858;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 06648cb4 with catch @ 06648ce8
                        */
                thunk_FUN_02f411dc();
                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                    /* try { // try from 06648d00 to 06748d17 has its CatchHandler @ 06648e64 */
                *(undefined4 *)(lVar4 + 0x18) = 1;
                lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                    /* try { // try from 06648d18 to 06748e53 has its CatchHandler @ 06648c40 */
                FUN_03fd0468(lVar7,*unaff_x26);
                if (lVar7 != 0) {
                  uVar6 = *(undefined8 *)puVar2;
                  lVar8 = *(long *)(lVar7 + 0x10);
                  lVar9 = *unaff_x29;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                      thunk_FUN_02f411dc();
                    }
                    else {
                      FUN_03fd0c9c(lVar7,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar4 + 0x30) = lVar7;
                    thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                System_Net_Sockets_LingerOption_TypeInfo);
                    FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                    lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                UnityEngine_InputSystem_LightSensor_TypeInfo);
                    FUN_05645a04(lVar8,0);
                    puVar3 = Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x18) =
                           *(undefined8 *)Photon_Voice_LocalVoiceAudioShort_TypeInfo;
                      thunk_FUN_02f411dc();
                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                      thunk_FUN_02f411dc();
                      if (lVar7 != 0) {
                        lVar9 = *(long *)(lVar7 + 0x10);
                        lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                            plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar8;
                            thunk_FUN_02f411dc(plVar5,lVar8);
                          }
                          else {
                            FUN_03fd0c9c(lVar7,lVar8,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                    /* try { // try from 06648e54 to 06748e63 has its CatchHandler @ 06648e64 */
                          *(long *)(lVar4 + 0x28) = lVar7;
                          thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                    /* catch() { ... } // from try @ 06648d00 with catch @ 06648e64
                       catch() { ... } // from try @ 06648e54 with catch @ 06648e64 */
                    /* try { // try from 06648e68 to 06748e6b has its CatchHandler @ 06648e74 */
                    /* try { // try from 06648e6c to 06748e77 has its CatchHandler @ 06648c40 */
                          lVar7 = *(long *)(unaff_x20 + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06648e68 with catch @ 06648e74
                        */
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar4;
                              thunk_FUN_02f411dc(plVar5,lVar4);
                            }
                            else {
                              FUN_03fd0c9c();
                            }
                            lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                            FUN_05645a04(lVar4,0);
                            puVar2 = System_Threading_LockQueue_TypeInfo;
                            if (lVar4 != 0) {
                              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb98;
                              thunk_FUN_02f411dc();
                              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                              *(undefined4 *)(lVar4 + 0x18) = 0;
                              lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                              FUN_03fd0468(lVar7,*unaff_x26);
                              if (lVar7 != 0) {
                                lVar9 = *unaff_x29;
                                uVar6 = *(undefined8 *)Language_Lua_LocalVar_TypeInfo;
                                lVar8 = *(long *)(lVar7 + 0x10);
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                    thunk_FUN_02f411dc();
                                  }
                                  else {
                                    FUN_03fd0c9c(lVar7,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar4 + 0x30) = lVar7;
                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                  FUN_03fd0468(lVar7,*(undefined8 *)
                                                      System_Xml_Linq_LineInfoAnnotation_TypeInfo);
                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                  FUN_05645a04(lVar8,0);
                                  if (lVar8 != 0) {
                                    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar3;
                                    thunk_FUN_02f411dc();
                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                    thunk_FUN_02f411dc();
                                    if (lVar7 != 0) {
                                      lVar9 = *(long *)(lVar7 + 0x10);
                                      lVar10 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                      puVar3 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
                                      if (lVar9 != 0) {
                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                          plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar5 = lVar8;
                                          thunk_FUN_02f411dc(plVar5,lVar8);
                                        }
                                        else {
                                          FUN_03fd0c9c(lVar7,lVar8,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar4 + 0x28) = lVar7;
                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                        lVar7 = *(long *)(unaff_x20 + 0x10);
                                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar4;
                                            thunk_FUN_02f411dc(plVar5,lVar4);
                                          }
                                          else {
                                            FUN_03fd0c9c();
                                          }
                                          lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                          FUN_05645a04(lVar4,0);
                                          puVar2 = 
                                          PixelCrushers_DialogueSystem_Localization_TypeInfo;
                                          if (lVar4 != 0) {
                                            *(undefined8 *)(lVar4 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_06d5e5d0;
                                            thunk_FUN_02f411dc();
                                            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                            *(undefined4 *)(lVar4 + 0x18) = 2;
                                            lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                                            FUN_03fd0468(lVar7,*unaff_x26);
                                            if (lVar7 != 0) {
                                              lVar9 = *unaff_x29;
                                              uVar6 = *(undefined8 *)PTR_DAT_06d03ba0;
                                              lVar8 = *(long *)(lVar7 + 0x10);
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                  thunk_FUN_02f411dc();
                                                }
                                                else {
                                                  FUN_03fd0c9c(lVar7,uVar6,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar4 + 0x30) = lVar7;
                                                thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                                                lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                        
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                FUN_05645a04(lVar8,0);
                                                if (lVar8 != 0) {
                                                  *(undefined8 *)(lVar8 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_Rendering_LocalKeywordSpace_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02f411dc(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02f411dc(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  System_Linq_Expressions_Interpreter_LocalDefinition_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbd0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar7,*unaff_x26);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar6;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar7,uVar6,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar7;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar7);
                                                        lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Language_Lua_LocalFunc_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02f411dc(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02f411dc(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                                                  FUN_03fd0468(lVar7,*unaff_x26);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02f411dc(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02f411dc(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar7,*unaff_x26);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar6;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar7,uVar6,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar4 + 0x30) = lVar7;
                                                        thunk_FUN_02f411dc((long *)(lVar4 + 0x30),
                                                                           lVar7);
                                                        lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                                        
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02f411dc(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02f411dc(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x25);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar2 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 4;
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x28);
                                                    FUN_03fd0468(lVar7,*unaff_x26);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  System_Net_Sockets_LingerOption_TypeInfo);
                                                  FUN_03fd0468(lVar7,*(undefined8 *)puVar3);
                                                  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                                                                                            
                                                  UnityEngine_InputSystem_LightSensor_TypeInfo);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      lVar10 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02f411dc(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02f411dc(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_02f411dc();
                                                    FUN_0663f8fc();
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


