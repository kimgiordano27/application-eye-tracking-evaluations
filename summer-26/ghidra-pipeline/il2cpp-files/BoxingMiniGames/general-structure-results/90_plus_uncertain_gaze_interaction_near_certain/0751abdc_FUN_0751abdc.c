/*
FUNCTION_NAME: FUN_0751abdc
ENTRY_POINT: 0751abdc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0751b100) */
/* WARNING: Removing unreachable block (ram,0x0751b1f0) */

undefined8 FUN_0751abdc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_68;
  long local_58;
  
  if ((DAT_07ef4b94 & 1) == 0) {
    FUN_03642964(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    FUN_03642964(PTR_DAT_07a1feb8);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isValue__);
    FUN_03642964(PTR_DAT_07a1cf68);
    FUN_03642964(PTR_DAT_079fedf8);
    FUN_03642964(
                Method_Unity_Collections_NativeParallelHashMap_ParallelWriter<int,_GPUDrivenPackedMaterialData>_TryAdd__
                );
    FUN_03642964(PTR_DAT_079ffdf0);
    FUN_03642964(PTR_DAT_079fee10);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b94 = 1;
  }
  local_58 = 0;
  local_68 = 0;
  FUN_074eeee0(param_2,0);
  puVar2 = PTR_DAT_079fd4b0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 0x10);
    FUN_07516ab4(param_1);
    FUN_0751a150(param_1,param_2);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_074efff0(plVar10,0);
    lVar8 = param_2;
    if ((uVar6 & 1) != 0) {
      if (plVar10 == (long *)0x0) goto LAB_0751b1ec;
      uVar7 = (**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440));
      uVar12 = *(undefined8 *)
                Method_Unity_Collections_NativeParallelHashMap_ParallelWriter<int,_GPUDrivenPackedMaterialData>_TryAdd__
      ;
      if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
      }
      uVar12 = FUN_05e26f18(uVar12,0);
      uVar6 = FUN_05e30794(uVar7,uVar12,0);
      if ((uVar6 & 1) != 0) {
        lVar8 = FUN_0750cff8(param_2);
        if (lVar8 == 0) goto LAB_0751b1ec;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x18),0);
        *(undefined1 *)(lVar8 + 0x40) = 0;
        *(undefined4 *)(lVar8 + 0x44) = 1;
      }
    }
    puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__;
    puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__;
    puVar1 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    lVar8 = FUN_0751938c(param_1,lVar8);
    if (lVar8 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      local_58 = FUN_03fc4cf8(*(undefined8 *)puVar4);
      plStack_78 = &local_58;
      local_80 = 0;
      FUN_075184c8(param_1,lVar8,param_2,local_58);
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(int *)(local_58 + 0x18) == 0) {
        if (*(char *)(param_2 + 0x40) == '\0') {
          uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
          plVar10 = (long *)FUN_03642a4c(uVar7,3);
          uStack_88 = *(undefined8 *)(param_2 + 0x18);
          uStack_90 = *(undefined8 *)(param_2 + 0x10);
          uVar7 = thunk_FUN_036aa1c8(Method_System_Nullable<PreserveReferencesHandling>__ctor__);
          lVar8 = thunk_FUN_0367fa58(uVar7,&uStack_90);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_0367fd24(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar7 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar7,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar10[4] = lVar8;
          thunk_FUN_036b7ad0(plVar10 + 4,lVar8);
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar6 = FUN_05e30794(uVar7,0,0);
          if ((uVar6 & 1) == 0) {
            uVar7 = thunk_FUN_036aa1c8(
                                      Method_Zenject_PlaceholderFactory<SignalDeclarationBindInfo,_SignalDeclaration>__ctor__
                                      );
            uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
            lVar8 = FUN_03642a4c(uVar12,1);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar12 = *(undefined8 *)(param_2 + 0x20);
            FUN_03154b74(lVar8,uVar12);
            FUN_03154bd8(lVar8,0,uVar12);
            uVar12 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<float>__ctor__);
            uVar12 = FUN_074eed20(uVar12,lVar8,0);
          }
          else {
            uVar7 = thunk_FUN_036aa1c8(
                                      Method_Zenject_PlaceholderFactory<SignalDeclarationBindInfo,_SignalDeclaration>__ctor__
                                      );
            uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f49e0);
          }
          FUN_03154b74(plVar10,uVar12);
          FUN_03154bd8(plVar10,1,uVar12);
          uVar12 = FUN_0750d110(param_2);
          FUN_03154b74(plVar10,uVar12);
          FUN_03154bd8(plVar10,2,uVar12);
          uVar7 = FUN_074ee34c(uVar7,plVar10,0);
          uVar12 = thunk_FUN_036aa1c8(
                                     Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar7,uVar12);
        }
        uVar7 = *(undefined8 *)(param_2 + 0x48);
      }
      else {
        iVar5 = FUN_03caa01c(local_58,*(undefined8 *)
                                       Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
        if (1 < iVar5) {
          uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
          plVar10 = (long *)FUN_03642a4c(uVar7,3);
          uStack_88 = *(undefined8 *)(param_2 + 0x18);
          uStack_90 = *(undefined8 *)(param_2 + 0x10);
          uVar7 = thunk_FUN_036aa1c8(Method_System_Nullable<PreserveReferencesHandling>__ctor__);
          lVar8 = thunk_FUN_0367fa58(uVar7,&uStack_90);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_0367fd24(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar7 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar7,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar10[4] = lVar8;
          thunk_FUN_036b7ad0(plVar10 + 4,lVar8);
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar6 = FUN_05e30794(uVar7,0,0);
          if ((uVar6 & 1) == 0) {
            uVar7 = thunk_FUN_036aa1c8(
                                      Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                                      );
            uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
            lVar8 = FUN_03642a4c(uVar12,1);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar12 = *(undefined8 *)(param_2 + 0x20);
            FUN_03154b74(lVar8,uVar12);
            FUN_03154bd8(lVar8,0,uVar12);
            uVar12 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<float>__ctor__);
            uVar12 = FUN_074eed20(uVar12,lVar8,0);
          }
          else {
            uVar7 = thunk_FUN_036aa1c8(
                                      Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                                      );
            uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f49e0);
          }
          FUN_03154b74(plVar10,uVar12);
          FUN_03154bd8(plVar10,1,uVar12);
          uVar12 = FUN_0750d110(param_2);
          FUN_03154b74(plVar10,uVar12);
          FUN_03154bd8(plVar10,2,uVar12);
          uVar7 = FUN_074ee34c(uVar7,plVar10,0);
          uVar12 = thunk_FUN_036aa1c8(
                                     Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar7,uVar12);
        }
        uVar7 = FUN_03caf32c(local_58,*(undefined8 *)PTR_DAT_07a1feb8);
      }
      lVar8 = local_58;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_03fc4778(lVar8,*(undefined8 *)puVar3);
      return uVar7;
    }
    if (plVar10 != (long *)0x0) {
      uVar6 = FUN_05e321c4(plVar10,0);
      if (((uVar6 & 1) == 0) ||
         (iVar5 = (**(code **)(*plVar10 + 0x428))(plVar10,*(undefined8 *)(*plVar10 + 0x430)),
         iVar5 != 1)) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar6 = FUN_074efff0(plVar10,0);
        if ((uVar6 & 1) == 0) {
          if (*(char *)(param_2 + 0x40) == '\0') {
            uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
            plVar10 = (long *)FUN_03642a4c(uVar7,3);
            plStack_78 = *(long **)(param_2 + 0x18);
            local_80 = *(undefined8 *)(param_2 + 0x10);
            uVar7 = thunk_FUN_036aa1c8(Method_System_Nullable<PreserveReferencesHandling>__ctor__);
            lVar8 = thunk_FUN_0367fa58(uVar7,&local_80);
            if (plVar10 != (long *)0x0) {
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_0367fd24(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
                uVar7 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                FUN_03642acc(uVar7,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              plVar10[4] = lVar8;
              thunk_FUN_036b7ad0(plVar10 + 4,lVar8);
              uVar7 = *(undefined8 *)(param_2 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar6 = FUN_05e30794(uVar7,0,0);
              uVar7 = thunk_FUN_036aa1c8(
                                        Method_Zenject_PlaceholderFactory<SignalDeclarationBindInfo,_SignalDeclaration>__ctor__
                                        );
              if ((uVar6 & 1) == 0) {
                uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
                lVar8 = FUN_03642a4c(uVar12,1);
                if (lVar8 == 0) goto LAB_0751b1ec;
                uVar12 = *(undefined8 *)(param_2 + 0x20);
                FUN_03154b74(lVar8,uVar12);
                FUN_03154bd8(lVar8,0,uVar12);
                uVar12 = thunk_FUN_036aa1c8(
                                           Method_Unity_InferenceEngine_PartialTensor<float>__ctor__
                                           );
                uVar12 = FUN_074eed20(uVar12,lVar8,0);
              }
              else {
                uVar12 = thunk_FUN_036aa1c8(PTR_DAT_079f49e0);
              }
              FUN_03156bd4(plVar10);
              FUN_03154b74(plVar10,uVar12);
              FUN_03154bd8(plVar10,1,uVar12);
              FUN_03156bd4(param_2);
              uVar12 = FUN_0750d110(param_2);
              FUN_03154b74(plVar10,uVar12);
              FUN_03154bd8(plVar10,2,uVar12);
              uVar7 = FUN_074ee34c(uVar7,plVar10,0);
              uVar12 = thunk_FUN_036aa1c8(
                                         Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureEvent>_GetPooled__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar7,uVar12);
            }
            goto LAB_0751b1ec;
          }
          uVar7 = *(undefined8 *)(param_2 + 0x48);
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440));
          puVar1 = PTR_DAT_079f4610;
          uVar12 = *(undefined8 *)PTR_DAT_079fee10;
          if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
          }
          uVar12 = FUN_05e26f18(uVar12,0);
          uVar6 = FUN_05e30794(uVar7,uVar12,0);
          if ((uVar6 & 1) == 0) {
            uVar7 = (**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440));
            lVar8 = *(long *)(puVar1 + 0xe0);
                    /* try { // try from 0751afcc to 0761afd3 has its CatchHandler @ 0751b104 */
            uVar12 = *(undefined8 *)PTR_DAT_079fedf8;
            if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0751afe4 to 0761aff3 has its CatchHandler @ 0751b100 */
              thunk_FUN_036a1978(lVar8);
            }
            uVar12 = FUN_05e26f18(uVar12,0);
                    /* try { // try from 0751b000 to 0761b037 has its CatchHandler @ 0751b108 */
            uVar6 = FUN_05e30794(uVar7,uVar12,0);
            if ((uVar6 & 1) == 0) {
              (**(code **)(*plVar10 + 0x438))(plVar10,*(undefined8 *)(*plVar10 + 0x440));
              uVar7 = FUN_0753c2e8(*(undefined8 *)(puVar1 + 0xe0));
              return uVar7;
            }
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar7 = FUN_074f00a8(plVar10,0);
          uVar7 = FUN_03cbfa48(uVar7,*(undefined8 *)
                                      Method_Unity_InferenceEngine_PartialTensorElement<int>_get_isValue__
                              );
          lVar8 = FUN_0750cff8(param_2);
          if (lVar8 == 0) goto LAB_0751b1ec;
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x10),uVar7);
          *(undefined1 *)(lVar8 + 0x40) = 1;
          uVar7 = FUN_07518bac(param_1,lVar8);
        }
      }
      else {
        uVar7 = (**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
        lVar8 = FUN_0750cff8(param_2);
        if (lVar8 == 0) goto LAB_0751b1ec;
        puVar11 = (undefined8 *)(lVar8 + 0x10);
        *puVar11 = uVar7;
        thunk_FUN_036b7ad0(puVar11,uVar7);
        lVar9 = *(long *)puVar1;
        *(undefined1 *)(lVar8 + 0x40) = 1;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        local_68 = FUN_03fc4cf8(*(undefined8 *)puVar4);
        plStack_78 = &local_68;
        local_80 = 0;
                    /* try { // try from 0751aedc to 0761afcb has its CatchHandler @ 0751aedc
                       catch() { ... } // from try @ 0751aedc with catch @ 0751aedc
                       catch() { ... } // from try @ 0751b038 with catch @ 0751aedc
                       catch() { ... } // from try @ 0751b0f8 with catch @ 0751aedc
                       catch() { ... } // from try @ 0751b13c with catch @ 0751aedc */
        FUN_07519abc(param_1,lVar8,local_68);
        uVar7 = FUN_074f1bfc(*puVar11,local_68,0);
        uVar12 = local_68;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_03fc4778(uVar12,*(undefined8 *)puVar3);
      }
      return uVar7;
    }
  }
LAB_0751b1ec:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


