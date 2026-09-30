/*
FUNCTION_NAME: Fusion.BVH$$get_rootBVH
ENTRY_POINT: 01c70450
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c7052c) */
/* WARNING: Removing unreachable block (ram,0x01c704f8) */

int Fusion_BVH__get_rootBVH(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  char cStack000000000000001c;
  
  while ((uint)unaff_x26 < in_w8) {
    unaff_x23[unaff_x26 + 4] = unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (unaff_x23 + unaff_x26 + 4,unaff_x24);
    uVar1 = (uint)unaff_x26 + 1;
    if ((int)unaff_x23[3] <= (int)uVar1) {
      lVar3 = FUN_01c708a8();
      cStack000000000000001c = '\0';
      FUN_027e0bd8(lVar3,&stack0x0000001c,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar2 = FUN_01c70b80(lVar3);
      if (*(char *)(unaff_x20 + 0x60) != '\0') {
        FUN_01c70edc(*(undefined8 *)(unaff_x19 + 0x40));
        FUN_01c70f58();
      }
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar3,0);
      }
      if (0 < iVar2) {
        FUN_01c7101c();
      }
      return iVar2;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar1) break;
    unaff_x26 = (long)(int)uVar1;
    if (*(long *)(unaff_x25 + unaff_x26 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x24 = FUN_01c6c41c();
    if ((unaff_x24 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(unaff_x24,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    in_w8 = *(uint *)(unaff_x23 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


