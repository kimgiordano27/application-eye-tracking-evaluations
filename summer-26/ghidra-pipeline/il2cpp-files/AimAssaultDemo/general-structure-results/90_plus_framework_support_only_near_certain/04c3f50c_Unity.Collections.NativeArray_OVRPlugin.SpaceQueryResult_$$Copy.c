/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04c3f50c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined1 param_1 [16],undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 04c3f510 to 04d3f517 has its CatchHandler @ 04c3f518 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c3f4dc with catch @ 04c3f518
                       catch(type#2 @ 00000000) { ... } // from try @ 04c3f510 with catch @ 04c3f518
                        */
  if ((DAT_082567ae & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98f00);
    DAT_082567ae = 1;
  }
  puVar1 = PTR_DAT_07d98f00;
  if (param_4 != 0) {
    uVar4 = FUN_03fe0350(param_4,param_3[0x12],
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88));
    uVar6 = param_2;
    uVar5 = FUN_03fe0350(param_4,param_3[0x13],
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88));
    fVar2 = (float)FUN_03fe028c(param_4,param_3[0x14],*(undefined8 *)puVar1);
    if ((char)param_3[0x16] == '\0') {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (float)FUN_075b6260(0);
    }
                    /* WARNING: Could not recover jumptable at 0x04c3f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x5f8))
              (uVar4,param_2,uVar5,uVar6,fVar2 * fVar3,param_3,*(undefined8 *)(*param_3 + 0x600));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


