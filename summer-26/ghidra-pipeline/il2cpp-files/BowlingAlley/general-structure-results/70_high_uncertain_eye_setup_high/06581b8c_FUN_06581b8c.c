/*
FUNCTION_NAME: FUN_06581b8c
ENTRY_POINT: 06581b8c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06581b8c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  
  puVar2 = PTR_DAT_07279560;
  puVar1 = PTR_DAT_07279558;
  if ((DAT_076dfcfa & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727e390);
    thunk_FUN_032e1da0(PTR_DAT_07280868);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_0727f0a8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
                      );
    DAT_076dfcfa = 1;
  }
  plVar3 = (long *)FUN_032d5d3c(*(undefined8 *)puVar2,5);
  local_34 = param_1[4] & 0x7fffffff;
  lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_34);
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
  puVar2 = PTR_DAT_07280868;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_0333a630(plVar3 + 4,lVar4);
    local_38 = *param_1;
    lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,&local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_06581e1c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_0333a630(plVar3 + 5,lVar4);
      local_3c = (uint)*(ushort *)((long)param_1 + 6);
      lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_3c);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_06581e1c;
      puVar1 = PTR_DAT_0727f0a8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_0333a630(plVar3 + 6,lVar4);
        local_40 = (uint)*(ushort *)(param_1 + 1);
        lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_40);
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
          local_48 = *(double *)(param_1 + 2) - *(double *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          lVar4 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&local_48);
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


