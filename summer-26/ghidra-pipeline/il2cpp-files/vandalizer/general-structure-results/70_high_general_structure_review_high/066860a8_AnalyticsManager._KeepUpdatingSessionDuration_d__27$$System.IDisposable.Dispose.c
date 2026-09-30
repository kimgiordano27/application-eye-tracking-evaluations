/*
FUNCTION_NAME: AnalyticsManager.<KeepUpdatingSessionDuration>d__27$$System.IDisposable.Dispose
ENTRY_POINT: 066860a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
AnalyticsManager_<KeepUpdatingSessionDuration>d__27__System_IDisposable_Dispose(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined4 unaff_w19;
  undefined8 uVar5;
  long *unaff_x26;
  undefined1 auVar6 [16];
  long in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined1 uStack000000000000001a;
  undefined5 uStack000000000000001b;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_1 = *unaff_x26;
  }
  uVar5 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_07616f30);
  FUN_042cbcbc(uVar1,uVar5,*(undefined8 *)PTR_DAT_07616f80,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  thunk_FUN_0329bf60(puVar2,uVar1);
  lVar3 = FUN_03e483a8();
  if (lVar3 != 0) {
    uVar4 = FUN_0668f500(lVar3,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = FUN_06686e94();
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      uStack000000000000001a = 0;
      uStack000000000000001b = 0;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_05e134d8(0x26,0);
      }
      in_stack_00000010 = lVar3;
      thunk_FUN_0329bf60(&stack0x00000010,lVar3);
      uStack000000000000001a = 1;
      in_stack_00000018 = 0;
    }
    else {
      auVar6 = FUN_03e5e9f0();
      FUN_066963a8(lVar3,auVar6._0_8_,auVar6._8_8_,0);
      *(undefined4 *)(lVar3 + 0x74) = unaff_w19;
      *(undefined1 *)(lVar3 + 0xd2) = 1;
      auVar6 = FUN_0668fd64(lVar3);
      in_stack_00000010 = auVar6._0_8_;
      in_stack_00000018 = auVar6._8_2_;
      uStack000000000000001a = auVar6[10];
      uStack000000000000001b = auVar6._11_5_;
    }
    auVar6._8_2_ = in_stack_00000018;
    auVar6._0_8_ = in_stack_00000010;
    auVar6[10] = uStack000000000000001a;
    auVar6._11_5_ = uStack000000000000001b;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


