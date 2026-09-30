/*
FUNCTION_NAME: Unity.Properties.Internal.Vector2PropertyBag$$.ctor
ENTRY_POINT: 0664aa24
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


void Unity_Properties_Internal_Vector2PropertyBag___ctor(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *puVar14;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar15;
  long unaff_x24;
  undefined8 *puVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  puVar15 = *(undefined8 **)(unaff_x23 + 0xbc0);
  puVar14 = *(undefined8 **)(unaff_x19 + 0x348);
  puVar16 = *(undefined8 **)(unaff_x24 + 0x340);
  *(undefined8 *)(unaff_x21 + 0x10) = *param_1;
  thunk_FUN_02f411dc();
  *(undefined8 *)(unaff_x21 + 0x20) = *puVar15;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x21 + 0x20));
                    /* try { // try from 0664aa58 to 0674aa7f has its CatchHandler @ 0664ab34 */
  *(undefined4 *)(unaff_x21 + 0x18) = 1;
  lVar7 = thunk_FUN_02ef1808(*puVar14);
  FUN_03fd0468(lVar7,*puVar16);
  if (lVar7 != 0) {
                    /* try { // try from 0664aa84 to 0674aa8f has its CatchHandler @ 0664ab30 */
    uVar9 = *puVar15;
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)PTR_DAT_06d02330;
                    /* try { // try from 0664aa90 to 0674ab17 has its CatchHandler @ 0664a820 */
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    puVar6 = System_Net_Sockets_LingerOption_TypeInfo;
    puVar5 = System_Xml_Linq_LineInfoAnnotation_TypeInfo;
    puVar4 = UnityEngine_InputSystem_LightSensor_TypeInfo;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c(lVar7,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x21 + 0x30) = lVar7;
      thunk_FUN_02f411dc((long *)(unaff_x21 + 0x30),lVar7);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
      FUN_03fd0468(lVar7,*(undefined8 *)puVar5);
      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_05645a04(lVar10,0);
      puVar2 = UnityEngine_Logger_TypeInfo;
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)UnityEngine_Logger_TypeInfo;
        thunk_FUN_02f411dc();
        *(undefined8 *)(lVar10 + 0x10) = *unaff_x26;
        thunk_FUN_02f411dc();
        if (lVar7 != 0) {
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)UnityEngine_LightmapData_TypeInfo;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar10;
              thunk_FUN_02f411dc(plVar8,lVar10);
            }
            else {
              FUN_03fd0c9c(lVar7,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x21 + 0x28) = lVar7;
            thunk_FUN_02f411dc((long *)(unaff_x21 + 0x28),lVar7);
            if (unaff_x20 != 0) {
              lVar7 = *(long *)(unaff_x20 + 0x10);
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(unaff_x20 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                  *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                  thunk_FUN_02f411dc();
                }
                else {
                  FUN_03fd0c9c();
                }
                lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                FUN_05645a04(lVar7,0);
                puVar3 = UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb68;
                  thunk_FUN_02f411dc();
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20));
                  *(undefined4 *)(lVar7 + 0x18) = 0;
                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02348);
                  FUN_03fd0468(lVar10,*puVar16);
                  if (lVar10 != 0) {
                    uVar9 = *(undefined8 *)Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
                    lVar11 = *(long *)(lVar10 + 0x10);
                    lVar12 = *(long *)PTR_DAT_06d02330;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                        thunk_FUN_02f411dc();
                      }
                      else {
                        FUN_03fd0c9c(lVar10,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar7 + 0x30) = lVar10;
                      thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                      FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                      lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                      FUN_05645a04(lVar11,0);
                      if (lVar11 != 0) {
                        *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
                        thunk_FUN_02f411dc();
                        *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                        thunk_FUN_02f411dc();
                        if (lVar10 != 0) {
                          lVar12 = *(long *)(lVar10 + 0x10);
                          lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar8 = lVar11;
                              thunk_FUN_02f411dc(plVar8,lVar11);
                            }
                            else {
                              FUN_03fd0c9c(lVar10,lVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar2 = PTR_DAT_06d02348;
                            *(long *)(lVar7 + 0x28) = lVar10;
                            thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                            lVar10 = *(long *)(unaff_x20 + 0x10);
                            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar7;
                                thunk_FUN_02f411dc(plVar8,lVar7);
                              }
                              else {
                                FUN_03fd0c9c();
                              }
                              lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                              FUN_05645a04(lVar7,0);
                              puVar3 = PTR_DAT_06d10538;
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_06d39cb8;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20));
                                *(undefined4 *)(lVar7 + 0x18) = 0;
                                lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                FUN_03fd0468(lVar10,*puVar16);
                                if (lVar10 != 0) {
                                  uVar9 = *(undefined8 *)PTR_DAT_06d03bd0;
                                  lVar11 = *(long *)(lVar10 + 0x10);
                                  lVar12 = *(long *)PTR_DAT_06d02330;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                      thunk_FUN_02f411dc();
                                    }
                                    else {
                                      FUN_03fd0c9c(lVar10,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar7 + 0x30) = lVar10;
                                    thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
                                    FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
                                    FUN_05645a04(lVar11,0);
                                    if (lVar11 != 0) {
                                      *(undefined8 *)(lVar11 + 0x18) =
                                           *(undefined8 *)System_LocalDataStoreHolder_TypeInfo;
                                      thunk_FUN_02f411dc();
                                      *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                      thunk_FUN_02f411dc();
                                      if (lVar10 != 0) {
                                        lVar12 = *(long *)(lVar10 + 0x10);
                                        lVar13 = *(long *)UnityEngine_LightmapData_TypeInfo;
                                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar11;
                                            thunk_FUN_02f411dc(plVar8,lVar11);
                                          }
                                          else {
                                            FUN_03fd0c9c(lVar10,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar7 + 0x28) = lVar10;
                                          thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                          lVar10 = *(long *)(unaff_x20 + 0x10);
                                          *(int *)(unaff_x20 + 0x1c) =
                                               *(int *)(unaff_x20 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               );
                                              *plVar8 = lVar7;
                                              thunk_FUN_02f411dc(plVar8,lVar7);
                                            }
                                            else {
                                              FUN_03fd0c9c();
                                            }
                                            lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                            FUN_05645a04(lVar7,0);
                                            puVar3 = Fusion_LogType_TypeInfo;
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_06d0ecb8;
                                              thunk_FUN_02f411dc();
                                              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20));
                                              *(undefined4 *)(lVar7 + 0x18) = 0;
                                              lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                              FUN_03fd0468(lVar10,*puVar16);
                                              if (lVar10 != 0) {
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  Unity_VisualScripting_LogicalNegationHandler_TypeInfo
                                                ;
                                                lVar11 = *(long *)(lVar10 + 0x10);
                                                lVar12 = *(long *)PTR_DAT_06d02330;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                                    thunk_FUN_02f411dc();
                                                  }
                                                  else {
                                                    FUN_03fd0c9c(lVar10,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)Fusion_LogLevel_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = PTR_DAT_06d03bc8;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d04858;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 1;
                                                      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_03fd0468(lVar10,*puVar16);
                                                      if (lVar10 != 0) {
                                                        uVar9 = *(undefined8 *)puVar3;
                                                        lVar11 = *(long *)(lVar10 + 0x10);
                                                        lVar12 = *(long *)PTR_DAT_06d02330;
                                                        *(int *)(lVar10 + 0x1c) =
                                                             *(int *)(lVar10 + 0x1c) + 1;
                                                        if (lVar11 != 0) {
                                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar11 + (long)(int)uVar1 * 8 + 0x20)
                                                                 = uVar9;
                                                            thunk_FUN_02f411dc();
                                                          }
                                                          else {
                                                            FUN_03fd0c9c(lVar10,uVar9,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = System_Threading_LockQueue_TypeInfo;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d8fb98;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar7 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar7 + 0x20));
                                                      *(undefined4 *)(lVar7 + 0x18) = 0;
                                                      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                   puVar2);
                                                      FUN_03fd0468(lVar10,*puVar16);
                                                      if (lVar10 != 0) {
                                                        uVar9 = *(undefined8 *)
                                                                 Language_Lua_LocalVar_TypeInfo;
                                                        lVar11 = *(long *)(lVar10 + 0x10);
                                                        lVar12 = *(long *)PTR_DAT_06d02330;
                                                        *(int *)(lVar10 + 0x1c) =
                                                             *(int *)(lVar10 + 0x1c) + 1;
                                                        if (lVar11 != 0) {
                                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar11 + (long)(int)uVar1 * 8 + 0x20)
                                                                 = uVar9;
                                                            thunk_FUN_02f411dc();
                                                          }
                                                          else {
                                                            FUN_03fd0c9c(lVar10,uVar9,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = 
                                                  System_Runtime_Remoting_Messaging_LogicalCallContext_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbb0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 2;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03fd0468(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      uVar9 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar11 = *(long *)(lVar10 + 0x10);
                                                      lVar12 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar9;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar9,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar12 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LogLevel_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = 
                                                  Meta_XR_MultiplayerBlocks_Colocation_LogLevel_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fba8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03fd0468(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      uVar9 = *(undefined8 *)PTR_DAT_06d03be0;
                                                      lVar11 = *(long *)(lVar10 + 0x10);
                                                      lVar12 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar9;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar9,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar12 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          PlayFab_ClientModels_LoginResult_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = Fusion_LogFlags_TypeInfo;
                                                    if (lVar7 != 0) {
                                                      *(undefined8 *)(lVar7 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_LogicalBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03fd0468(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar12 = *(long *)PTR_DAT_06d02330;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02f411dc();
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          PlayFab_ClientModels_LogStatement_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20));
                                                  *(undefined4 *)(lVar7 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03fd0468(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar12 = *(long *)PTR_DAT_06d02330;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03fd0468(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      uVar9 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar11 = *(long *)(lVar10 + 0x10);
                                                      lVar12 = *(long *)PTR_DAT_06d02330;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar9;
                                                          thunk_FUN_02f411dc();
                                                        }
                                                        else {
                                                          FUN_03fd0c9c(lVar10,uVar9,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar12 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    lVar7 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar7,0);
                                                    puVar3 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar7 + 0x18) = 4;
                                                    lVar10 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03fd0468(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar12 = *(long *)PTR_DAT_06d02330;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02f411dc();
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03fd0468(lVar10,*(undefined8 *)puVar5);
                                                  lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05645a04(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02f411dc();
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar13 = *(long *)
                                                  UnityEngine_LightmapData_TypeInfo;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02f411dc(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar10;
                                                  thunk_FUN_02f411dc((long *)(lVar7 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02f411dc(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_03fd0c9c();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x20;
                                                    uVar9 = thunk_FUN_02f411dc();
                                                    FUN_0663f8fc(uVar9,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


