/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<HasSceneModel>d__48$$SetStateMachine
ENTRY_POINT: 01480f60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<HasSceneModel>d__48__SetStateMachine(void)

{
  uint uVar1;
  long lVar2;
  int unaff_w19;
  uint *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    lVar2 = *(long *)(unaff_x21 + 0x18);
    if (lVar2 == 0) {
LAB_01480fec:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (unaff_w19 < *(int *)(lVar2 + 0x18)) {
      if (*(long *)(unaff_x21 + 0x10) != 0) {
        FUN_0132138c(*(long *)(unaff_x21 + 0x10),unaff_w19,&stack0x00000008,*unaff_x26);
        *unaff_x22 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        if (*(long *)(unaff_x21 + 0x18) != 0) {
          FUN_0132138c(*(long *)(unaff_x21 + 0x18),unaff_w19,&stack0x00000008,*unaff_x25);
          uVar1 = uStack0000000000000008 + 0x1e0 & 0x1ff;
          *unaff_x20 = uVar1;
          if (*(long *)(unaff_x21 + 0x18) != 0) {
            uStack0000000000000008 = uVar1;
            FUN_0132149c(*(long *)(unaff_x21 + 0x18),unaff_w19,&stack0x00000008,*unaff_x24);
            return;
          }
        }
      }
      goto LAB_01480fec;
    }
    FUN_00ac20f0(lVar2,0,*unaff_x23);
  } while( true );
}


