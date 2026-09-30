/*
FUNCTION_NAME: Unity.IO.LowLevel.Unsafe.AsyncReadManager$$CloseFileAsync_Injected
ENTRY_POINT: 05b38c90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_IO_LowLevel_Unsafe_AsyncReadManager__CloseFileAsync_Injected(long param_1,long param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  if ((DAT_066d47f4 & 1) == 0) {
    FUN_02b3c81c(Method_HandEventTemplate_OnGrabbed__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHandCollisionStart__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHandTriggerStart__);
    FUN_02b3c81c(Method_HandEventTemplate_OnReleased__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHighlight__);
    auVar8 = FUN_02b3c81c(Method_System_Net_DigestSession_Authenticate__);
    DAT_066d47f4 = 1;
  }
  if (param_2 != 0) {
    lVar7 = *(long *)(param_1 + 0x100);
    auVar8 = FUN_05aa71d4(param_2,0);
    if (lVar7 != 0) {
      auVar8 = FUN_04a1d048(lVar7,auVar8._0_8_,*(undefined8 *)Method_HandEventTemplate_OnReleased__)
      ;
      if (*(long *)(param_1 + 0x100) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x100) + 0x20) == 0) {
          *(undefined1 *)(param_1 + 0x110) = 0;
        }
        uVar5 = FUN_05aa71d4(param_2,0);
        auVar8 = Unity_Profiling_Memory_MemorySnapshotMetadata__set_Description(param_1,uVar5);
        if ((auVar8._0_8_ & 1) == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = auVar8._8_8_;
          auVar8 = auVar2 << 0x40;
          if (*(long *)(param_1 + 400) == 0) goto LAB_05b38e1c;
          iVar4 = FUN_0454dc50(*(long *)(param_1 + 400),
                               *(undefined8 *)Method_HandEventTemplate_OnHandCollisionStart__);
          if (0 < iVar4) {
            lVar7 = *(long *)(param_1 + 400);
            auVar8 = FUN_05aa71d4(param_2,0);
            if (lVar7 == 0) goto LAB_05b38e1c;
            FUN_0454f488(lVar7,auVar8._0_8_,*(undefined8 *)Method_HandEventTemplate_OnGrabbed__);
          }
          plVar6 = (long *)FUN_05aa71d4(param_2,0);
          if (plVar6 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_System_Net_DigestSession_Authenticate__ + 0x130);
            if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Method_System_Net_DigestSession_Authenticate__)) {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = plVar6;
              auVar8 = auVar3 << 0x40;
              if (*(long *)(param_1 + 0x188) != 0) {
                FUN_04a1d048(*(long *)(param_1 + 0x188),plVar6,
                             *(undefined8 *)Method_HandEventTemplate_OnHandTriggerStart__);
                return;
              }
              goto LAB_05b38e1c;
            }
          }
        }
        return;
      }
    }
  }
LAB_05b38e1c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4(auVar8._0_8_,auVar8._8_8_);
}


