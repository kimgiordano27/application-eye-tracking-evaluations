/*
FUNCTION_NAME: FUN_06b57398
ENTRY_POINT: 06b57398
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_19;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06b57398(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e3a15 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<ReadAllAsync>d__48>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AvatarTemplateFetcher_<>c__DisplayClass5_0_<<FetchTemplateRenders>b__0>d>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<GltfImportBase_<>c__DisplayClass134_0_<<InstantiateSceneInternal>g__IterateNodes_0>d>__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_07281708);
    thunk_FUN_032e1da0(PTR_DAT_0727cc98);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_0727f0a8);
    thunk_FUN_032e1da0(PTR_DAT_0727b460);
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTimeOffset>>__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<Decimal>>__
                      );
    thunk_FUN_032e1da0(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<int>>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0728fd18);
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<byte[]>__)
    ;
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<bool>__);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<PhotoCaptureElement_<RequestCameraPermission>d__13>__
                      );
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<string>__)
    ;
    thunk_FUN_032e1da0(Method_Newtonsoft_Json_Utilities_AsyncUtils_FromCanceled<int>__);
    thunk_FUN_032e1da0(PTR_DAT_072820b8);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<DisposeAsyncCore>d__33>__
                      );
    DAT_076e3a15 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar4 = FUN_06b50bc8(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar5 = FUN_06bece64(lVar4,0,0);
  puVar1 = PTR_DAT_0727cc98;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      return;
    }
    plVar6 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727cc98);
    puVar2 = PTR_DAT_072798c8;
    FUN_057b6818(plVar6,*(undefined8 *)PTR_DAT_072798c8,0);
    plVar7 = (long *)thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    FUN_057b6818(plVar7,*(undefined8 *)puVar2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_041e3694(&local_98,*(long *)(param_1 + 0x20),
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__
                  );
      puVar3 = Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<int>>__;
      puVar2 = PTR_DAT_0728fd18;
      puVar1 = PTR_DAT_07281708;
      local_80 = CONCAT44(uStack_94,local_98);
      iVar14 = 0;
      uStack_78 = uStack_90;
      local_70 = local_88;
      while (uVar5 = FUN_052d44b4(&local_80,
                                  *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AvatarTemplateFetcher_<>c__DisplayClass5_0_<<FetchTemplateRenders>b__0>d>__
                                 ), lVar4 = local_70, (uVar5 & 1) != 0) {
        lVar8 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,7);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_0333a630();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar4 + 0x10);
        thunk_FUN_0333a630();
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x30) =
             *(undefined8 *)Method_Newtonsoft_Json_Utilities_AsyncUtils_FromCanceled<int>__;
        thunk_FUN_0333a630();
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar4 + 0x18);
        thunk_FUN_0333a630();
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar3;
        thunk_FUN_0333a630();
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar4 + 0x20);
        thunk_FUN_0333a630();
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_072820b8;
        thunk_FUN_0333a630();
        uVar9 = FUN_057ab314(lVar8,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8(uVar9,uVar9);
        }
        FUN_057b7f84(plVar6,uVar9,0);
        uVar5 = FUN_057ab1f0(*(undefined8 *)(lVar4 + 0x28),0);
        if ((uVar5 & 1) == 0) {
          uVar9 = FUN_057aaeec(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<DisposeAsyncCore>d__33>__
                               ,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)PTR_DAT_072820b8,0);
          FUN_057b7f84(plVar6,uVar9,0);
          if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar8 = FUN_057ad538(*(long *)(lVar4 + 0x28),0x20,0,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar5 = 0;
            uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar5 * 8);
              uVar13 = FUN_057b14a0(uVar9,0);
              if ((uVar13 & 1) == 0) {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                uVar13 = FUN_06b57be0(uVar9);
                if ((uVar13 & 1) == 0) {
                  iVar14 = iVar14 + 1;
                  lVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,9);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x28) = uVar9;
                  thunk_FUN_0333a630((undefined8 *)(lVar10 + 0x28),uVar9);
                  if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x30) =
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<bool>__;
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar4 + 0x10);
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x40) =
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<byte[]>__
                  ;
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar4 + 0x18);
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)puVar3;
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar4 + 0x20);
                  thunk_FUN_0333a630();
                  if (*(uint *)(lVar10 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                              ();
                  }
                  *(undefined8 *)(lVar10 + 0x60) =
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<string>__
                  ;
                  thunk_FUN_0333a630();
                  uVar9 = FUN_057ab314(lVar10,0);
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8(uVar9,uVar9);
                  }
                  FUN_057b7f84(plVar7,uVar9,0);
                }
              }
              uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
        }
        FUN_057b7f84(plVar6,*(undefined8 *)PTR_DAT_0727b460,0);
      }
      FUN_052d44b0(&local_80,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<ReadAllAsync>d__48>__
                  );
      uVar9 = FUN_06b53110(*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<PhotoCaptureElement_<RequestCameraPermission>d__13>__
                          );
      FUN_06b53250();
      puVar1 = PTR_DAT_0727f0a8;
      local_98 = 0;
      uVar11 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_0727f0a8,&local_98);
      if (plVar6 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        puVar2 = 
        Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<Decimal>>__;
        uVar11 = FUN_057ab61c(*(undefined8 *)
                               Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<Decimal>>__
                              ,uVar11,uVar12,0);
        FUN_06b5319c(uVar9,*(undefined8 *)
                            Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTime>>__
                     ,uVar11);
        FUN_06b53250(uVar9);
        local_9c = iVar14;
        uVar11 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_9c);
        if (plVar7 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar11 = FUN_057ab61c(*(undefined8 *)puVar2,uVar11,uVar12,0);
          FUN_06b5319c(uVar9,*(undefined8 *)
                              Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<DateTimeOffset>>__
                       ,uVar11);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


