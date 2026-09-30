/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 05d40418
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureHeight(void)

{
  uint uVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  long lVar3;
  uint in_w8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  long lVar5;
  undefined8 uVar6;
  
  while( true ) {
    if (in_NG == in_OV) {
      return;
    }
    if (in_w8 <= unaff_w22) break;
    lVar3 = *unaff_x21;
    uVar1 = *(uint *)(unaff_x20 + (long)(int)unaff_w22 * 4 + 0x20);
    lVar5 = (long)(int)uVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *unaff_x21;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
LAB_05d40430:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x48), lVar4 == 0)) goto LAB_05d40430;
    uVar2 = *(uint *)(lVar3 + lVar5 * 4 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= uVar2) break;
    lVar3 = *(long *)(unaff_x19 + 0x140);
    if (lVar3 == 0) goto LAB_05d40430;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    lVar4 = lVar4 + (long)(int)uVar2 * 0x10;
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    lVar3 = lVar3 + lVar5 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    lVar3 = *(long *)(unaff_x19 + 0xd0);
    if (lVar3 == 0) goto LAB_05d40430;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar3 + lVar5 * 4 + 0x20) = unaff_w23;
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


