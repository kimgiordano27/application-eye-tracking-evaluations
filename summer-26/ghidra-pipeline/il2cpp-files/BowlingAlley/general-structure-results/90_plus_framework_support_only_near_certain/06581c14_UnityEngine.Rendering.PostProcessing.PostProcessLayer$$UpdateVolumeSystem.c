/*
FUNCTION_NAME: UnityEngine.Rendering.PostProcessing.PostProcessLayer$$UpdateVolumeSystem
ENTRY_POINT: 06581c14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 90
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_Rendering_PostProcessing_PostProcessLayer__UpdateVolumeSystem(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  undefined8 *unaff_x22;
  double in_stack_00000008;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  undefined4 in_stack_00000018;
  uint uStack000000000000001c;
  
  plVar3 = (long *)FUN_032d5d3c();
  uStack000000000000001c = unaff_x19[4] & 0x7fffffff;
  lVar4 = thunk_FUN_032a52d0(*unaff_x22,&stack0x0000001c);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_06581e1c:
    uVar6 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6,0);
  }
  puVar1 = PTR_DAT_07280868;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_0333a630(plVar3 + 4,lVar4);
    in_stack_00000018 = *unaff_x19;
    lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000018);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_06581e1c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_0333a630(plVar3 + 5,lVar4);
      uStack0000000000000014 = (uint)*(ushort *)((long)unaff_x19 + 6);
      lVar4 = thunk_FUN_032a52d0(*unaff_x22,(long)&stack0x00000010 + 4);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_06581e1c;
      puVar1 = PTR_DAT_0727f0a8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_0333a630(plVar3 + 6,lVar4);
        uStack0000000000000010 = (uint)*(ushort *)(unaff_x19 + 1);
        lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000010);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06581e1c;
        puVar1 = PTR_DAT_0727e390;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_0333a630(plVar3 + 7,lVar4);
          puVar2 = PTR_DAT_07280a18;
          if ((DAT_076dfcf7 & 1) == 0) {
            thunk_FUN_032e1da0(PTR_DAT_07280a18);
            DAT_076dfcf7 = 1;
          }
          in_stack_00000008 =
               *(double *)(unaff_x19 + 2) - *(double *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000008);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_06581e1c;
          puVar1 = 
          Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
          ;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_0333a630(plVar3 + 8,lVar4);
            FUN_057ab6a4(*(undefined8 *)puVar1,plVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


