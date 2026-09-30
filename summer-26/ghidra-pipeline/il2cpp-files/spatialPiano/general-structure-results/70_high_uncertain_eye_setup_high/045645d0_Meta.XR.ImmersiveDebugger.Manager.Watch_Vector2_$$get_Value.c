/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 045645d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value
          (long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar5 = thunk_FUN_02f45174(param_2,lVar5);
  if (lVar5 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar5);
    }
    lVar5 = thunk_FUN_02f45174();
    if (lVar5 != 0) {
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c(lVar5);
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(lVar5 + 0x40)) {
        pcVar2 = (char *)thunk_FUN_02f453b8();
        cVar1 = *pcVar2;
        lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c(lVar5);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar5 + 0x40)) {
          puVar3 = (undefined1 *)thunk_FUN_02f453b8();
                    /* WARNING: Could not recover jumptable at 0x045646e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*param_1 + 0x198))
                            (param_1,cVar1 != '\0',*puVar3,*(undefined8 *)(*param_1 + 0x1a0));
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
  }
  FUN_050f5b58(2,0);
  return 0;
}


