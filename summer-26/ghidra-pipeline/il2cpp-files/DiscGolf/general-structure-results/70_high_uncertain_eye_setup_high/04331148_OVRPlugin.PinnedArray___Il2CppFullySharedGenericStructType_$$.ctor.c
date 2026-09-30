/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 04331148
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


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30);
  if (*(int *)(DAT_06dcfe48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_054f73b4(uVar4,0);
  uVar1 = FUN_05501380();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_02dfd288(&DAT_06b34df0);
    uVar4 = thunk_FUN_02dd3144();
    FUN_054e7f24(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18(lVar2);
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
    puVar3 = (undefined8 *)thunk_FUN_02dd328c();
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    uVar4 = puVar3[2];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    unaff_x19[2] = uVar6;
    unaff_x19[1] = uVar5;
    unaff_x19[3] = uVar4;
    LeanTween__value(unaff_x19 + 2,0);
    *(undefined1 *)unaff_x19 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0();
}


