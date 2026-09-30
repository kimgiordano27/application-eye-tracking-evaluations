/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer$$UpdateTargetWithoutScale
ENTRY_POINT: 06a05dc0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__UpdateTargetWithoutScale
               (long param_1)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar13;
  float fVar14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char cStack0000000000000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 in_stack_00000180;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xa10));
  thunk_FUN_032e1da0(Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
  thunk_FUN_032e1da0(PTR_DAT_072794f0);
  *(undefined1 *)(unaff_x21 + 0x89d) = 1;
  in_stack_00000180 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000148 = 0;
  _cStack0000000000000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  uVar7 = FUN_06a03f28();
  if (*(long *)(unaff_x20 + 0x168) != 0) {
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x168) + 0x18);
    if (*(char *)((long)unaff_x19 + 0x6c) == '\0') {
      if (((uVar7 & 0xff) != 0) && (0 < iVar2)) {
        FUN_06a04f9c();
      }
    }
    else {
      if (((uVar7 & 0xff) == 0) || (iVar2 == 0)) {
        FUN_06a04ed4();
        return;
      }
      if (unaff_x19[7] != 0) {
        if ((uint)*(byte *)((long)unaff_x19 + 0x6e) == (uVar7 & 0xff)) {
          bVar3 = *(byte *)((long)unaff_x19 + 0x6d);
          bVar6 = UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_00000D09_PostfixBurstDelegate___ctor
                            ();
          if (bVar3 != (bVar6 & 1)) {
            (**(code **)(*unaff_x19 + 0x188))();
          }
        }
        else {
          FUN_06a05a68();
          FUN_06a05294();
          puVar4 = 
          Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
          ;
          lVar9 = *(long *)
                   Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar9 = *(long *)puVar4;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28));
          }
          FUN_06a06194();
          (**(code **)(*unaff_x19 + 0x188))();
          FUN_06a050f8();
          FUN_06a05734();
        }
      }
    }
    puVar4 = PTR_DAT_072794f0;
    lVar9 = FUN_06a03e9c();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar4);
    }
    uVar10 = FUN_06be9890(lVar9,0,0);
    puVar5 = PTR_DAT_072a3f60;
    puVar4 = PTR_DAT_07279c50;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x168) == 0) goto LAB_06a06190;
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x168) + 0x18);
      if (0 < iVar2) {
        iVar13 = 0;
        do {
          if (*(long *)(unaff_x20 + 0x170) == 0) goto LAB_06a06190;
          uVar8 = FUN_0418d880(*(long *)(unaff_x20 + 0x170),iVar13,*(undefined8 *)puVar4);
          if (*(long *)(unaff_x20 + 0x168) == 0) goto LAB_06a06190;
          uVar11 = FUN_041e29a8(*(long *)(unaff_x20 + 0x168),iVar13,*(undefined8 *)puVar5);
          if (lVar9 == 0) goto LAB_06a06190;
          FUN_06bc3b14(lVar9,uVar8,uVar11,0);
          iVar13 = iVar13 + 1;
        } while (iVar2 != iVar13);
      }
      memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
      puVar4 = 
      Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__;
      if (cStack0000000000000140 != '\0') {
        lVar12 = *(long *)
                  Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
        ;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar4;
        }
        uVar8 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 4);
        memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
        FUN_04649644(&stack0x00000080,&stack0x00000140,
                     *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        in_stack_000000e8 = in_stack_000000a8;
        in_stack_000000e0 = in_stack_000000a0;
        in_stack_000000f8 = in_stack_000000b8;
        in_stack_000000f0 = in_stack_000000b0;
        if (lVar9 == 0) goto LAB_06a06190;
        in_stack_00000048 = in_stack_00000088;
        in_stack_00000040 = in_stack_00000080;
        in_stack_00000058 = in_stack_00000098;
        in_stack_00000050 = in_stack_00000090;
        in_stack_00000068 = in_stack_000000a8;
        in_stack_00000060 = in_stack_000000a0;
        in_stack_00000078 = in_stack_000000b8;
        in_stack_00000070 = in_stack_000000b0;
        FUN_06bc56f4(lVar9,uVar8,&stack0x00000040,0);
      }
      uVar11 = *(undefined8 *)(unaff_x20 + 400);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x198);
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06a06208(lVar9,uVar11,uVar1);
    }
    memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
    if (cStack0000000000000140 == '\0') {
      return;
    }
    lVar9 = unaff_x19[4];
    memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
    FUN_04649644(&stack0x00000080,&stack0x00000140,
                 *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    if (lVar9 != 0) {
      FUN_06baf92c(lVar9);
      if (unaff_x19[4] != 0) {
        FUN_06baf87c(&stack0x00000080,unaff_x19[4],0);
        in_stack_00000108 = in_stack_00000088;
        in_stack_00000100 = in_stack_00000080;
        in_stack_00000118 = in_stack_00000098;
        in_stack_00000110 = in_stack_00000090;
        in_stack_00000128 = in_stack_000000a8;
        in_stack_00000120 = in_stack_000000a0;
        in_stack_00000138 = in_stack_000000b8;
        in_stack_00000130 = in_stack_000000b0;
        fVar14 = (float)FUN_06bdab18(&stack0x00000100,5,0);
        lVar9 = unaff_x19[4];
        if (lVar9 != 0) {
          fVar14 = atanf(1.0 / fVar14);
          FUN_06baeb08(fVar14 * DAT_013a054c,lVar9,0);
          return;
        }
      }
    }
  }
LAB_06a06190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


