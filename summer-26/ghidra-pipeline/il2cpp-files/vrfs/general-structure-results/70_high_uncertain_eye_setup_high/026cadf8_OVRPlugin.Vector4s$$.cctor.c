/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 026cadf8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Vector4s___cctor(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint in_w8;
  int in_w9;
  uint uVar5;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar6;
  long unaff_x22;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 unaff_x29;
  
  if (in_w9 < 1) {
    uVar5 = *(uint *)(unaff_x21 + 0x20);
    if (uVar5 == in_w8) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x168) + 8))();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
      if (lVar6 == 0) goto LAB_026caf80;
      uVar1 = *(uint *)(lVar6 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_026caf7c;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
    }
    if (unaff_x26 == 0) {
LAB_026caf80:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar4 = false;
  }
  else {
    uVar5 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = in_w9 + -1;
    bVar4 = true;
  }
  if (uVar5 < *(uint *)(unaff_x26 + 0x18)) {
    if (bVar4) {
      *(undefined4 *)(unaff_x21 + 0x24) =
           *(undefined4 *)(unaff_x26 + (long)(int)uVar5 * 0x18 + 0x24);
    }
    lVar6 = unaff_x26 + (long)(int)uVar5 * 0x18;
    *(int *)(lVar6 + 0x20) = unaff_w27;
    iVar2 = *unaff_x28;
    *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
    *(int *)(lVar6 + 0x24) = iVar2 + -1;
    thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x28));
    *(undefined8 *)(lVar6 + 0x30) = unaff_x29;
    *unaff_x28 = uVar5 + 1;
    return 1;
  }
LAB_026caf7c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


