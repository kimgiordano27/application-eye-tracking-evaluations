/*
FUNCTION_NAME: Unity.Properties.Internal.Vector4PropertyBag$$.ctor
ENTRY_POINT: 0664ac40
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


void Unity_Properties_Internal_Vector4PropertyBag___ctor(long param_1)

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
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  FUN_05645a04(param_1,0);
  puVar2 = UnityEngine_SceneManagement_LocalPhysicsMode_TypeInfo;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)PTR_DAT_06d8fb68;
    thunk_FUN_02f411dc();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d02348);
    FUN_03fd0468(lVar4,*unaff_x19);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)Photon_Voice_LocalVoiceAudioDummy_TypeInfo;
      lVar7 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)PTR_DAT_06d02330;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(param_1 + 0x30) = lVar4;
        thunk_FUN_02f411dc((long *)(param_1 + 0x30),lVar4);
        lVar4 = thunk_FUN_02ef1808(*unaff_x29);
        FUN_03fd0468(lVar4,*unaff_x25);
        lVar7 = thunk_FUN_02ef1808(*unaff_x24);
        FUN_05645a04(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = *unaff_x28;
          thunk_FUN_02f411dc();
          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
          thunk_FUN_02f411dc();
          if (lVar4 != 0) {
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)UnityEngine_LightmapData_TypeInfo;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar7;
                thunk_FUN_02f411dc(plVar5,lVar7);
              }
              else {
                FUN_03fd0c9c(lVar4,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_06d02348;
              *(long *)(param_1 + 0x28) = lVar4;
              thunk_FUN_02f411dc((long *)(param_1 + 0x28),lVar4);
              lVar4 = *(long *)(unaff_x20 + 0x10);
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(unaff_x20 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = param_1;
                  thunk_FUN_02f411dc(plVar5,param_1);
                }
                else {
                  FUN_03fd0c9c();
                }
                lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                FUN_05645a04(lVar4,0);
                puVar3 = PTR_DAT_06d10538;
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d39cb8;
                  thunk_FUN_02f411dc();
                  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                  FUN_03fd0468(lVar7,*unaff_x19);
                  if (lVar7 != 0) {
                    uVar6 = *(undefined8 *)PTR_DAT_06d03bd0;
                    lVar8 = *(long *)(lVar7 + 0x10);
                    lVar9 = *(long *)PTR_DAT_06d02330;
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
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar4 + 0x30) = lVar7;
                      thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                      lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                      FUN_03fd0468(lVar7,*unaff_x25);
                      lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                      FUN_05645a04(lVar8,0);
                      if (lVar8 != 0) {
                        *(undefined8 *)(lVar8 + 0x18) =
                             *(undefined8 *)System_LocalDataStoreHolder_TypeInfo;
                        thunk_FUN_02f411dc();
                        *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                              lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                              FUN_05645a04(lVar4,0);
                              puVar3 = Fusion_LogType_TypeInfo;
                              if (lVar4 != 0) {
                                *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_06d0ecb8;
                                thunk_FUN_02f411dc();
                                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                *(undefined4 *)(lVar4 + 0x18) = 0;
                                lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                FUN_03fd0468(lVar7,*unaff_x19);
                                if (lVar7 != 0) {
                                  uVar6 = *(undefined8 *)
                                           Unity_VisualScripting_LogicalNegationHandler_TypeInfo;
                                  lVar8 = *(long *)(lVar7 + 0x10);
                                  lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar4 + 0x30) = lVar7;
                                    thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                    lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                    FUN_03fd0468(lVar7,*unaff_x25);
                                    lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                    FUN_05645a04(lVar8,0);
                                    if (lVar8 != 0) {
                                      *(undefined8 *)(lVar8 + 0x18) =
                                           *(undefined8 *)Fusion_LogLevel_TypeInfo;
                                      thunk_FUN_02f411dc();
                                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x70));
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
                                              plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar4;
                                              thunk_FUN_02f411dc(plVar5,lVar4);
                                            }
                                            else {
                                              FUN_03fd0c9c();
                                            }
                                            lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                            FUN_05645a04(lVar4,0);
                                            puVar3 = PTR_DAT_06d03bc8;
                                            if (lVar4 != 0) {
                                              *(undefined8 *)(lVar4 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_06d04858;
                                              thunk_FUN_02f411dc();
                                              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                              *(undefined4 *)(lVar4 + 0x18) = 1;
                                              lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                              FUN_03fd0468(lVar7,*unaff_x19);
                                              if (lVar7 != 0) {
                                                uVar6 = *(undefined8 *)puVar3;
                                                lVar8 = *(long *)(lVar7 + 0x10);
                                                lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                  FUN_03fd0468(lVar7,*unaff_x25);
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Photon_Voice_LocalVoiceAudioShort_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = System_Threading_LockQueue_TypeInfo;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_06d8fb98;
                                                      thunk_FUN_02f411dc();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_02f411dc((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 0;
                                                      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                  puVar2);
                                                      FUN_03fd0468(lVar7,*unaff_x19);
                                                      if (lVar7 != 0) {
                                                        uVar6 = *(undefined8 *)
                                                                 Language_Lua_LocalVar_TypeInfo;
                                                        lVar8 = *(long *)(lVar7 + 0x10);
                                                        lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                  FUN_03fd0468(lVar7,*unaff_x25);
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_LogicalExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = 
                                                  System_Runtime_Remoting_Messaging_LogicalCallContext_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fbb0;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 2;
                                                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03fd0468(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      uVar6 = *(undefined8 *)PTR_DAT_06d03ba0;
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                        lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                        FUN_03fd0468(lVar7,*unaff_x25);
                                                        lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                        FUN_05645a04(lVar8,0);
                                                        if (lVar8 != 0) {
                                                          *(undefined8 *)(lVar8 + 0x18) =
                                                               *(undefined8 *)
                                                                Photon_Voice_LogLevel_TypeInfo;
                                                          thunk_FUN_02f411dc();
                                                          *(undefined8 *)(lVar8 + 0x10) = *unaff_x26
                                                          ;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = 
                                                  Meta_XR_MultiplayerBlocks_Colocation_LogLevel_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d8fba8;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03fd0468(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      uVar6 = *(undefined8 *)PTR_DAT_06d03be0;
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                        lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                        FUN_03fd0468(lVar7,*unaff_x25);
                                                        lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                        FUN_05645a04(lVar8,0);
                                                        if (lVar8 != 0) {
                                                          *(undefined8 *)(lVar8 + 0x18) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  PlayFab_ClientModels_LoginResult_TypeInfo;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = Fusion_LogFlags_TypeInfo;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_LogicalBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                                  FUN_03fd0468(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)PTR_DAT_06d03bd8;
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02f411dc((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                  FUN_03fd0468(lVar7,*unaff_x25);
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          PlayFab_ClientModels_LogStatement_TypeInfo
                                                    ;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = 
                                                  PlayFab_GroupsModels_ListMembershipResponse_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
                                                  FUN_03fd0468(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  PlayFab_GroupsModels_ListGroupApplicationsResponse_TypeInfo
                                                  ;
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                  FUN_03fd0468(lVar7,*unaff_x25);
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  PlayFab_MultiplayerModels_ListPartyQosServersRequest_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = 
                                                  PlayFab_MultiplayerModels_ListMatchmakingQueuesRequest_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06d4e690;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03fd0468(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      uVar6 = *(undefined8 *)PTR_DAT_06d93540;
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                        lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                        FUN_03fd0468(lVar7,*unaff_x25);
                                                        lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                        FUN_05645a04(lVar8,0);
                                                        if (lVar8 != 0) {
                                                          *(undefined8 *)(lVar8 + 0x18) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    lVar4 = thunk_FUN_02ef1808(*unaff_x27);
                                                    FUN_05645a04(lVar4,0);
                                                    puVar3 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_TypeInfo
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Threading_Lock_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02f411dc((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 4;
                                                    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03fd0468(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo;
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar9 = *(long *)PTR_DAT_06d02330;
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
                                                  lVar7 = thunk_FUN_02ef1808(*unaff_x29);
                                                  FUN_03fd0468(lVar7,*unaff_x25);
                                                  lVar8 = thunk_FUN_02ef1808(*unaff_x24);
                                                  FUN_05645a04(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          System_LocalDataStoreSlot_TypeInfo;
                                                    thunk_FUN_02f411dc();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
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
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    uVar6 = thunk_FUN_02f411dc();
                                                    FUN_0663f8fc(uVar6,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


