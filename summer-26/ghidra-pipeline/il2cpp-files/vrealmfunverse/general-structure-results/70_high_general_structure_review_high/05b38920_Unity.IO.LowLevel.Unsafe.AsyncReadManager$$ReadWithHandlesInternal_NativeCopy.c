/*
FUNCTION_NAME: Unity.IO.LowLevel.Unsafe.AsyncReadManager$$ReadWithHandlesInternal_NativeCopy
ENTRY_POINT: 05b38920
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_IO_LowLevel_Unsafe_AsyncReadManager__ReadWithHandlesInternal_NativeCopy(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x21;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = FUN_05aa6fa0();
  if (unaff_x21 != 0) {
    auVar5 = FUN_04a1d048();
    if (*(long *)(unaff_x19 + 0xf0) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0xf0) + 0x20) == 0) {
        *(undefined1 *)(unaff_x19 + 0xf8) = 0;
      }
      FUN_05aa6fa0();
      auVar6 = FUN_05b3799c();
      if ((auVar6._0_8_ & 1) == 0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar6._8_8_;
        auVar5 = auVar5 << 0x40;
        if (*(long *)(unaff_x19 + 400) == 0) goto LAB_05b38a38;
        iVar2 = FUN_0454dc50(*(long *)(unaff_x19 + 400),
                             *(undefined8 *)Method_HandEventTemplate_OnHandCollisionStart__);
        if (0 < iVar2) {
          lVar4 = *(long *)(unaff_x19 + 400);
          auVar5 = FUN_05aa6fa0();
          if (lVar4 == 0) goto LAB_05b38a38;
          FUN_0454f488(lVar4,auVar5._0_8_,*(undefined8 *)Method_HandEventTemplate_OnGrabbed__);
        }
        plVar3 = (long *)FUN_05aa6fa0();
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)Method_System_Net_DigestSession_Authenticate__ + 0x130);
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_System_Net_DigestSession_Authenticate__)) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = plVar3;
            auVar5 = auVar6 << 0x40;
            if (*(long *)(unaff_x19 + 0x188) != 0) {
              FUN_04a1d048(*(long *)(unaff_x19 + 0x188),plVar3,
                           *(undefined8 *)Method_HandEventTemplate_OnHandTriggerStart__);
              return;
            }
            goto LAB_05b38a38;
          }
        }
      }
      return;
    }
  }
LAB_05b38a38:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4(auVar5._0_8_,auVar5._8_8_);
}


