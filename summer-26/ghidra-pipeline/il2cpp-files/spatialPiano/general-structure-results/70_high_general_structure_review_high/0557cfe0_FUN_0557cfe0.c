/*
FUNCTION_NAME: FUN_0557cfe0
ENTRY_POINT: 0557cfe0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


undefined8
FUN_0557cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  
                    /* try { // try from 0557cfe8 to 0567cff3 has its CatchHandler @ 0557d314 */
                    /* try { // try from 0557d004 to 0567d00f has its CatchHandler @ 0557d360 */
  if ((DAT_06bbf998 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<WebResponseStream_<ReadAllAsyncInner>d__47>__
                );
                    /* try { // try from 0557d02c to 0567d033 has its CatchHandler @ 0557d35c */
    FUN_02f08768(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Create__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067ca7c8);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
                    /* try { // try from 0557d064 to 0567d06b has its CatchHandler @ 0557d348 */
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_Start<WebConnectionTunnel_<ReadHeaders>d__43>__
                );
                    /* try { // try from 0557d07c to 0567d083 has its CatchHandler @ 0557d344 */
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetResult__);
                    /* try { // try from 0557d094 to 0567d09b has its CatchHandler @ 0557d324 */
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetStateMachine__
                );
    FUN_02f08768(PTR_DAT_067d8d60);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_get_Task__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf998 = 1;
  }
  puVar3 = PTR_DAT_067c9338;
  local_58 = 0;
                    /* try { // try from 0557d0e0 to 0567d0e7 has its CatchHandler @ 0557d394 */
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050ed374(param_5,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar13 = thunk_FUN_02f45270();
    uVar10 = thunk_FUN_02f6ef30(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_Create__
                               );
    FUN_0504ee1c(uVar13,uVar10,0);
    uVar10 = thunk_FUN_02f6ef30(
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_AsyncProtocolRequest_<StartOperation>d__23>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar13,uVar10);
  }
                    /* try { // try from 0557d108 to 0567d10b has its CatchHandler @ 0557d384 */
  uVar13 = *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_get_Task__
  ;
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                    /* try { // try from 0557d11c to 0567d127 has its CatchHandler @ 0557d390 */
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_050e4454(uVar13,0);
  uVar6 = FUN_050ed374(param_5,uVar13,0);
  if (((uVar6 & 1) != 0) && (param_4 != (long *)0x0)) {
    bVar1 = *(byte *)(*param_4 + 0x130);
    bVar2 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                     + 0x130);
    if ((bVar2 <= bVar1) &&
       (lVar12 = *(long *)(*param_4 + 200),
       *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) ==
       *(long *)
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
       )) {
      bVar2 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
         )) {
        bVar2 = *(byte *)(*(long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(param_4);
        }
        uVar13 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetException__
        ;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar12 = FUN_050e4454(uVar13,0);
        plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,7);
        lVar8 = FUN_050e4454(*(long *)(puVar3 + 0x90) + 0x20,0);
        if (plVar7 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0557d90c:
            uVar13 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar13,0);
          }
          if ((int)plVar7[3] != 0) {
            plVar7[4] = lVar8;
            lVar8 = FUN_050e4454(*(long *)(puVar3 + 0x90) + 0x20,0);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_0557d90c;
            puVar3 = PTR_DAT_067d8d60;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
              plVar7[5] = lVar8;
              lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_0557d90c;
              if (2 < *(uint *)(plVar7 + 3)) {
                plVar7[6] = lVar8;
                lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
                goto LAB_0557d90c;
                puVar3 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<WebResponseStream_<ReadAllAsyncInner>d__47>__
                ;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                  plVar7[7] = lVar8;
                  lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
                  if ((lVar8 != 0) &&
                     (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)
                     ) goto LAB_0557d90c;
                  puVar3 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetResult__;
                  if (4 < *(uint *)(plVar7 + 3)) {
                    plVar7[8] = lVar8;
                    lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
                    if ((lVar8 != 0) &&
                       (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar9 == 0)) goto LAB_0557d90c;
                    if (5 < *(uint *)(plVar7 + 3)) {
                      plVar7[9] = lVar8;
                      lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
                      if ((lVar8 != 0) &&
                         (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar9 == 0)) goto LAB_0557d90c;
                      if (6 < *(uint *)(plVar7 + 3)) {
                        plVar7[10] = lVar8;
                        if (lVar12 != 0) {
                          uVar13 = FUN_050ef4b8(lVar12,plVar7,0);
                          if (*(int *)(*(long *)PTR_DAT_067ca7c8 + 0xe4) == 0) {
                            thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca7c8);
                          }
                          uVar6 = FUN_05014ac4(uVar13,0,0);
                          if ((uVar6 & 1) == 0) goto LAB_0557d178;
                          plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,7);
                          lVar12 = (**(code **)(*param_4 + 0x178))
                                             (param_4,*(undefined8 *)(*param_4 + 0x180));
                          if (plVar7 != (long *)0x0) {
                            if ((lVar12 != 0) &&
                               (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_0557d90c;
                            if ((int)plVar7[3] == 0) goto LAB_0557d908;
                            plVar7[4] = lVar12;
                            local_58 = FUN_055a3df8(param_4,0);
                            lVar12 = FUN_0557d924(&local_58);
                            if (lVar12 == 0) goto LAB_0557d918;
                            lVar12 = *(long *)(lVar12 + 0x90);
                            if ((lVar12 != 0) &&
                               (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_0557d90c;
                            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                              plVar7[5] = lVar12;
                              lVar12 = FUN_055a27cc(param_4,0);
                              if ((lVar12 != 0) &&
                                 (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40))
                                 , lVar8 == 0)) goto LAB_0557d90c;
                              if (2 < *(uint *)(plVar7 + 3)) {
                                plVar7[6] = lVar12;
                                lVar12 = FUN_055a27d8(param_4,0);
                                if ((lVar12 != 0) &&
                                   (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)
                                                                       (*plVar7 + 0x40)), lVar8 == 0
                                   )) goto LAB_0557d90c;
                                if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                                  plVar7[7] = lVar12;
                                  local_5c = (**(code **)(*param_4 + 0x278))
                                                       (param_4,*(undefined8 *)(*param_4 + 0x280));
                                  lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Create__
                                                  ,&local_5c);
                                  if ((lVar12 != 0) &&
                                     (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)
                                                                         (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_0557d90c;
                                  if (4 < *(uint *)(plVar7 + 3)) {
                                    plVar7[8] = lVar12;
                                    local_60 = (**(code **)(*param_4 + 0x298))
                                                         (param_4,*(undefined8 *)(*param_4 + 0x2a0))
                                    ;
                                    puVar3 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetStateMachine__
                                    ;
                                    lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_SetStateMachine__
                                                  ,&local_60);
                                    if ((lVar12 != 0) &&
                                       (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)
                                                                           (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_0557d90c;
                                    if (5 < *(uint *)(plVar7 + 3)) {
                                      plVar7[9] = lVar12;
                                      local_64 = (**(code **)(*param_4 + 0x2d8))
                                                           (param_4,*(undefined8 *)
                                                                     (*param_4 + 0x2e0));
                                      lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_64);
                                      if ((lVar12 != 0) &&
                                         (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)
                                                                             (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_0557d90c;
                                      puVar11 = (undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_Start<WebConnectionTunnel_<ReadHeaders>d__43>__
                                      ;
                                      if (6 < *(uint *)(plVar7 + 3)) {
                                        plVar7[10] = lVar12;
                                        goto LAB_0557d654;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_0557d908;
                          }
                        }
                        goto LAB_0557d918;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_0557d908:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
      else {
        uVar13 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_get_Task__;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar12 = FUN_050e4454(uVar13,0);
        plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,3);
        lVar8 = FUN_050e4454(*(long *)(puVar3 + 0x90) + 0x20,0);
        if (plVar7 != (long *)0x0) {
          if ((lVar8 == 0) ||
             (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 != 0)) {
            puVar4 = PTR_DAT_067d8d60;
            if ((int)plVar7[3] != 0) {
              plVar7[4] = lVar8;
              lVar8 = FUN_050e4454(*(undefined8 *)puVar4,0);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_0557d90c;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                plVar7[5] = lVar8;
                lVar8 = FUN_050e4454(*(long *)(puVar3 + 0x28) + 0x20,0);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
                goto LAB_0557d90c;
                if (2 < *(uint *)(plVar7 + 3)) {
                  plVar7[6] = lVar8;
                  if (lVar12 != 0) {
                    uVar13 = FUN_050ef4b8(lVar12,plVar7,0);
                    if (*(int *)(*(long *)PTR_DAT_067ca7c8 + 0xe4) == 0) {
                      thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca7c8);
                    }
                    uVar6 = FUN_05014ac4(uVar13,0,0);
                    if ((uVar6 & 1) == 0) goto LAB_0557d178;
                    plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,3);
                    lVar12 = (**(code **)(*param_4 + 0x178))
                                       (param_4,*(undefined8 *)(*param_4 + 0x180));
                    if (plVar7 != (long *)0x0) {
                      if ((lVar12 != 0) &&
                         (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar8 == 0)) goto LAB_0557d90c;
                      if ((int)plVar7[3] != 0) {
                        plVar7[4] = lVar12;
                        lVar12 = FUN_055aef28(param_4,0);
                        if ((lVar12 != 0) &&
                           (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) goto LAB_0557d90c;
                        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                          plVar7[5] = lVar12;
                          uVar5 = FUN_055afea0(param_4,0);
                          local_5c = CONCAT31(local_5c._1_3_,uVar5) & 0xffffff01;
                          lVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar3 + 0x28),&local_5c);
                          if ((lVar12 != 0) &&
                             (lVar8 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_0557d90c;
                          puVar11 = (undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_Start<WebConnectionTunnel_<ReadHeaders>d__43>__
                          ;
                          if (2 < *(uint *)(plVar7 + 3)) {
                            plVar7[6] = lVar12;
LAB_0557d654:
                            uVar10 = thunk_FUN_02f45270(*puVar11);
                            FUN_05904108(uVar10,uVar13,plVar7,0);
                            return uVar10;
                          }
                        }
                      }
                      goto LAB_0557d908;
                    }
                  }
                  goto LAB_0557d918;
                }
              }
            }
            goto LAB_0557d908;
          }
          goto LAB_0557d90c;
        }
      }
LAB_0557d918:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
LAB_0557d178:
  uVar13 = FUN_058e3174(param_1,param_2,param_3,param_4,param_5,0);
  return uVar13;
}


