/*
FUNCTION_NAME: FUN_06a3284c
ENTRY_POINT: 06a3284c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a3284c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = Method_OVRPlugin_PinnedArray<Guid>_Dispose__;
  puVar1 = PTR_DAT_07279560;
  if ((DAT_076e2afc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(Method_System_ReadOnlySpan<char>__ctor__);
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    thunk_FUN_032e1da0(Method_System_ReadOnlySpan<char>__ctor__);
    DAT_076e2afc = 1;
  }
  plVar3 = (long *)FUN_032d5d3c(*(undefined8 *)puVar1,5);
  lVar4 = FUN_05935f30(param_1,*(undefined8 *)puVar2,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_06a32a6c:
    uVar6 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_0333a630(plVar3 + 4,lVar4);
    lVar4 = FUN_05935f30(param_1 + 4,*(undefined8 *)puVar2,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_06a32a6c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_0333a630(plVar3 + 5,lVar4);
      lVar4 = FUN_05935e28(param_1 + 8,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_06a32a6c;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_0333a630(plVar3 + 6,lVar4);
        lVar4 = FUN_05935e28(param_1 + 0xc,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_06a32a6c;
        puVar1 = Method_System_ReadOnlySpan<char>__ctor__;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_0333a630(plVar3 + 7,lVar4);
          local_48 = *(undefined8 *)puVar1;
          uStack_40 = 0xffffffffffffffff;
          local_38 = *(undefined4 *)(param_1 + 0x10);
          lVar4 = FUN_059596b4(&local_48,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_032a55a4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_06a32a6c;
          puVar1 = Method_System_ReadOnlySpan<char>__ctor__;
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


