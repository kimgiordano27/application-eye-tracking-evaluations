/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 04331104
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == (long *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = thunk_FUN_02da6564(param_2,0);
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if (*(int *)(DAT_06dcfe48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(uVar5,0);
    uVar2 = FUN_05501380(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_02dfd288(&DAT_06b34df0);
      uVar1 = thunk_FUN_02dd3144();
      FUN_054e7f24(uVar1,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar1,param_3);
    }
    lVar4 = *(long *)(param_3 + 0x20);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_2);
    }
    puVar3 = (undefined8 *)thunk_FUN_02dd328c();
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    uVar1 = puVar3[2];
    if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    param_1[2] = uVar6;
    param_1[1] = uVar5;
    param_1[3] = uVar1;
    LeanTween__value(param_1 + 2,0);
    *(undefined1 *)param_1 = 1;
  }
  return;
}


