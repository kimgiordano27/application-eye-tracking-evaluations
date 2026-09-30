/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 0241d574
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  
  if (param_5 == 0) {
    unaff_x20 = (long *)FUN_02983ad8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0)
  {
    FUN_01dde7f8();
  }
  uVar1 = thunk_FUN_01de27b8();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
        goto FUN_0241d61c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_01dde8fc(unaff_x20,lVar2,0);
FUN_0241d61c:
  FUN_02990b84(uVar1,unaff_x20,*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0241df28(param_2,unaff_w22,unaff_w21,uVar1,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
  return;
}


