/*
FUNCTION_NAME: FUN_05b38838
ENTRY_POINT: 05b38838
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05b38838(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar2 = PTR_DAT_06312520;
  if ((DAT_066d47f0 & 1) == 0) {
    FUN_02b3c81c(Method_HandEventTemplate_OnGrabbed__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHandCollisionStart__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHandCollisionStop__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHandTriggerStart__);
    FUN_02b3c81c(Method_HandEventTemplate_OnGrabJointBreak__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Net_DigestSession_Authenticate__);
    DAT_066d47f0 = 1;
  }
  lVar6 = param_1[0xc];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  auVar7 = FUN_05c8c45c(lVar6,0,0);
  if ((auVar7._0_8_ & 1) == 0) {
    if (param_2 == 0) goto LAB_05b38a38;
  }
  else {
    if (param_2 == 0) goto LAB_05b38a38;
    uVar4 = FUN_05aa6fa0(param_2,0);
    (**(code **)(*param_1 + 0x618))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x620));
  }
  lVar6 = param_1[0x1e];
  auVar7 = FUN_05aa6fa0(param_2,0);
  if (lVar6 != 0) {
    auVar7 = FUN_04a1d048(lVar6,auVar7._0_8_,
                          *(undefined8 *)Method_HandEventTemplate_OnHandCollisionStop__);
    if (param_1[0x1e] != 0) {
      if (*(int *)(param_1[0x1e] + 0x20) == 0) {
        *(undefined1 *)(param_1 + 0x1f) = 0;
      }
      uVar4 = FUN_05aa6fa0(param_2,0);
      auVar8 = FUN_05b3799c(param_1,uVar4);
      if ((auVar8._0_8_ & 1) == 0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = auVar8._8_8_;
        auVar7 = auVar7 << 0x40;
        if (param_1[0x32] == 0) goto LAB_05b38a38;
        iVar3 = FUN_0454dc50(param_1[0x32],
                             *(undefined8 *)Method_HandEventTemplate_OnHandCollisionStart__);
        if (0 < iVar3) {
          lVar6 = param_1[0x32];
          auVar7 = FUN_05aa6fa0(param_2,0);
          if (lVar6 == 0) goto LAB_05b38a38;
          FUN_0454f488(lVar6,auVar7._0_8_,*(undefined8 *)Method_HandEventTemplate_OnGrabbed__);
        }
        plVar5 = (long *)FUN_05aa6fa0(param_2,0);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)Method_System_Net_DigestSession_Authenticate__ + 0x130);
          if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_System_Net_DigestSession_Authenticate__)) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = plVar5;
            auVar7 = auVar8 << 0x40;
            if (param_1[0x31] != 0) {
              FUN_04a1d048(param_1[0x31],plVar5,
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
  FUN_02b3cac4(auVar7._0_8_,auVar7._8_8_);
}


