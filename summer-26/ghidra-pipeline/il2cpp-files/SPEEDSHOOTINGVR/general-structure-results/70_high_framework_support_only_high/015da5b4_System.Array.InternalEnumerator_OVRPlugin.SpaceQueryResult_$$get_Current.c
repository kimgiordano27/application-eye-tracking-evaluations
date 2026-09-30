/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 015da5b4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_0103c244(param_2);
  lVar1 = thunk_FUN_0103ffe0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0103c244(lVar1);
    }
    lVar1 = thunk_FUN_0103ffe0();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0103c244(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        puVar2 = (undefined4 *)thunk_FUN_01040230();
        uVar5 = *puVar2;
        uVar4 = puVar2[1];
        uVar6 = puVar2[2];
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0103c244(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          puVar2 = (undefined4 *)thunk_FUN_01040230();
                    /* WARNING: Could not recover jumptable at 0x015da6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*unaff_x19 + 0x1b8))(uVar5,uVar4,uVar6,*puVar2,puVar2[1],puVar2[2]);
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
  }
  FUN_01d68ae8(2,0);
  return 0;
}


