/*
FUNCTION_NAME: FUN_05d63a94
ENTRY_POINT: 05d63a94
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_11;telemetry_or_network_hits_2
*/


long * FUN_05d63a94(uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar6 = System_Func<float[],_Quaternion>_TypeInfo;
  puVar5 = System_Func<float[],_Pose>_TypeInfo;
  puVar4 = System_Func<object[],_object>_TypeInfo;
  if ((DAT_06a7aabd & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd510);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<float[],_Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<float[],_Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<float[],_Vector4>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueTuple<Enum,_string>,_Enum>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<float[],_Quaternion>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<float[],_Pose>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<string[],_IEnumerable<string>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<string[],_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ASServiceTelemetryIds,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<AndroidAxis,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Assembly,_IEnumerable<Type>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Assembly,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<AssemblyName,_Assembly>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Func<AsyncOperationHandle,_AsyncOperationHandle<IList<IAssetBundleResource>>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<object[],_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Func<AsyncOperationHandle,_AsyncOperationHandle<IList<IResourceLocation>>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<AsyncOperationHandle,_AsyncOperationHandle<List<string>>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<AsyncOperationHandle,_AsyncOperationHandle<bool>>_TypeInfo);
    DAT_06a7aabd = 1;
  }
  uVar13 = *(undefined8 *)puVar4;
  uVar14 = *(undefined8 *)puVar5;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar6);
  Unity_Mathematics_uint3__op_LessThan(lVar7,0);
  puVar4 = System_Func<float[],_Vector4>_TypeInfo;
  if (lVar7 != 0) {
    *(uint *)(lVar7 + 0x28) = param_1 | 0x28;
    puVar5 = System_Func<float[],_Vector3>_TypeInfo;
    lVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_03a20cd0(lVar8,*(undefined8 *)puVar5);
    puVar4 = System_Func<float[],_Vector2>_TypeInfo;
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar8 + 0x10);
      uVar10 = *(undefined8 *)System_Func<AssemblyName,_Assembly>_TypeInfo;
      lVar12 = *(long *)System_Func<float[],_Vector2>_TypeInfo;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar5 = System_Func<Assembly,_IEnumerable<Type>>_TypeInfo;
      uVar3 = DAT_0137ede8;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar11 + 0x20) = uVar10;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined8 *)(lVar11 + 0x30) = uVar3;
        }
        else {
          uStack_58 = 0;
          local_50 = DAT_0137ede8;
          local_60 = uVar10;
          FUN_03a21574(lVar8,&local_60,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = *(undefined8 *)puVar5;
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar12 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        puVar5 = System_Func<AsyncOperationHandle,_AsyncOperationHandle<List<string>>>_TypeInfo;
        uVar3 = DAT_0137ede8;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar11 + 0x20) = uVar10;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 0x30) = uVar3;
          }
          else {
            uStack_58 = 0;
            local_50 = DAT_0137ede8;
            local_60 = uVar10;
            FUN_03a21574(lVar8,&local_60,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = *(undefined8 *)puVar5;
          lVar11 = *(long *)(lVar8 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar5 = System_Func<string[],_string>_TypeInfo;
          uVar3 = DAT_0137ede8;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + 0x20) = uVar10;
              *(undefined8 *)(lVar11 + 0x28) = 0;
              *(undefined8 *)(lVar11 + 0x30) = uVar3;
            }
            else {
              uStack_58 = 0;
              local_50 = DAT_0137ede8;
              local_60 = uVar10;
              FUN_03a21574(lVar8,&local_60,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = *(undefined8 *)puVar5;
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            puVar5 = System_Func<Assembly,_bool>_TypeInfo;
            uVar3 = DAT_0137ede8;
            if (lVar11 != 0) {
              uVar2 = *(uint *)(lVar8 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar11 + 0x20) = uVar10;
                *(undefined8 *)(lVar11 + 0x28) = 0;
                *(undefined8 *)(lVar11 + 0x30) = uVar3;
              }
              else {
                uStack_58 = 0;
                local_50 = DAT_0137ede8;
                local_60 = uVar10;
                FUN_03a21574(lVar8,&local_60,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar10 = *(undefined8 *)puVar5;
              lVar11 = *(long *)(lVar8 + 0x10);
              lVar12 = *(long *)puVar4;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              puVar5 = System_Func<AsyncOperationHandle,_AsyncOperationHandle<bool>>_TypeInfo;
              uVar3 = DAT_0137e440;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar11 + 0x20) = uVar10;
                  *(undefined8 *)(lVar11 + 0x28) = 0;
                  *(undefined8 *)(lVar11 + 0x30) = uVar3;
                }
                else {
                  uStack_58 = 0;
                  local_50 = DAT_0137e440;
                  local_60 = uVar10;
                  FUN_03a21574(lVar8,&local_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                uVar10 = *(undefined8 *)puVar5;
                lVar11 = *(long *)(lVar8 + 0x10);
                lVar12 = *(long *)puVar4;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                puVar5 = 
                System_Func<AsyncOperationHandle,_AsyncOperationHandle<IList<IResourceLocation>>>_TypeInfo
                ;
                uVar3 = DAT_0137f388;
                if (lVar11 != 0) {
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar11 + 0x20) = uVar10;
                    *(undefined8 *)(lVar11 + 0x28) = 0;
                    *(undefined8 *)(lVar11 + 0x30) = uVar3;
                  }
                  else {
                    uStack_58 = 0;
                    local_50 = DAT_0137f388;
                    local_60 = uVar10;
                    FUN_03a21574(lVar8,&local_60,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar10 = *(undefined8 *)puVar5;
                  lVar11 = *(long *)(lVar8 + 0x10);
                  lVar12 = *(long *)puVar4;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  puVar5 = System_Func<string[],_IEnumerable<string>>_TypeInfo;
                  uVar3 = DAT_0137ded8;
                  if (lVar11 != 0) {
                    uVar2 = *(uint *)(lVar8 + 0x18);
                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar11 + 0x20) = uVar10;
                      *(undefined8 *)(lVar11 + 0x28) = 0;
                      *(undefined8 *)(lVar11 + 0x30) = uVar3;
                    }
                    else {
                      uStack_58 = 0;
                      local_50 = DAT_0137ded8;
                      local_60 = uVar10;
                      FUN_03a21574(lVar8,&local_60,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar10 = *(undefined8 *)puVar5;
                    lVar11 = *(long *)(lVar8 + 0x10);
                    lVar12 = *(long *)puVar4;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    puVar5 = System_Func<AndroidAxis,_string>_TypeInfo;
                    uVar3 = DAT_0137edf0;
                    if (lVar11 != 0) {
                      uVar2 = *(uint *)(lVar8 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar11 + 0x20) = uVar10;
                        *(undefined8 *)(lVar11 + 0x28) = 0;
                        *(undefined8 *)(lVar11 + 0x30) = uVar3;
                      }
                      else {
                        uStack_58 = 0;
                        local_50 = DAT_0137edf0;
                        local_60 = uVar10;
                        FUN_03a21574(lVar8,&local_60,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar10 = *(undefined8 *)puVar5;
                      lVar11 = *(long *)(lVar8 + 0x10);
                      lVar12 = *(long *)puVar4;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      puVar5 = System_Func<ASServiceTelemetryIds,_int>_TypeInfo;
                      uVar3 = DAT_0137edf0;
                      if (lVar11 != 0) {
                        uVar2 = *(uint *)(lVar8 + 0x18);
                        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                          lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar11 + 0x20) = uVar10;
                          *(undefined8 *)(lVar11 + 0x28) = 0;
                          *(undefined8 *)(lVar11 + 0x30) = uVar3;
                        }
                        else {
                          uStack_58 = 0;
                          local_50 = DAT_0137edf0;
                          local_60 = uVar10;
                          FUN_03a21574(lVar8,&local_60,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar10 = *(undefined8 *)puVar5;
                        lVar11 = *(long *)(lVar8 + 0x10);
                        lVar12 = *(long *)puVar4;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        puVar5 = 
                        System_Func<AsyncOperationHandle,_AsyncOperationHandle<IList<IAssetBundleResource>>>_TypeInfo
                        ;
                        uVar3 = DAT_0137edf0;
                        if (lVar11 != 0) {
                          uVar2 = *(uint *)(lVar8 + 0x18);
                          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                            lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar11 + 0x20) = uVar10;
                            *(undefined8 *)(lVar11 + 0x28) = 0;
                            *(undefined8 *)(lVar11 + 0x30) = uVar3;
                          }
                          else {
                            uStack_58 = 0;
                            local_50 = DAT_0137edf0;
                            local_60 = uVar10;
                            FUN_03a21574(lVar8,&local_60,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar10 = *(undefined8 *)puVar5;
                          lVar11 = *(long *)(lVar8 + 0x10);
                          lVar12 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          puVar4 = PTR_DAT_065dd510;
                          uVar3 = DAT_0137edf0;
                          if (lVar11 != 0) {
                            uVar2 = *(uint *)(lVar8 + 0x18);
                            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                              lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
                              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar11 + 0x20) = uVar10;
                              *(undefined8 *)(lVar11 + 0x28) = 0;
                              *(undefined8 *)(lVar11 + 0x30) = uVar3;
                            }
                            else {
                              uStack_58 = 0;
                              local_50 = DAT_0137edf0;
                              local_60 = uVar10;
                              FUN_03a21574(lVar8,&local_60,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar7 + 0x30) = lVar8;
                            local_a0 = FUN_058ada30(lVar7,0);
                            uStack_58 = uStack_68;
                            local_60 = local_70;
                            uStack_88 = uStack_78;
                            local_90 = local_80;
                            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                              thunk_FUN_02cd038c(*(long *)puVar4);
                            }
                            uStack_c8 = uStack_58;
                            local_d0 = local_60;
                            uStack_a8 = uStack_88;
                            local_b0 = local_90;
                            local_c0 = uVar14;
                            uStack_b8 = uVar13;
                            plVar9 = (long *)FUN_0583a144(&local_d0,0);
                            if (plVar9 != (long *)0x0) {
                              bVar1 = *(byte *)(*(long *)
                                                 System_Func<ValueTuple<Enum,_string>,_Enum>_TypeInfo
                                               + 0x130);
                              if (*(byte *)(*plVar9 + 0x130) < bVar1) {
                                plVar9 = (long *)0x0;
                              }
                              else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8)
                                       != *(long *)
                                           System_Func<ValueTuple<Enum,_string>,_Enum>_TypeInfo) {
                                plVar9 = (long *)0x0;
                              }
                            }
                            return plVar9;
                          }
                        }
                      }
                    }
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
  FUN_02ce7c7c();
}


