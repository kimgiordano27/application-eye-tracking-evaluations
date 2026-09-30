/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$set_MemberInfo
ENTRY_POINT: 076d152c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_InspectedMember__set_MemberInfo
               (undefined1 param_1 [16],float param_2,float param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar6;
  float fVar7;
  ulong in_stack_00000008;
  
  uVar6 = 0;
  lVar5 = (**(code **)(*unaff_x19 + 0x178))();
  if (lVar5 == 0) {
LAB_076d1660:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    lVar5 = (**(code **)(*unaff_x19 + 0x178))();
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x30) == 0)) goto LAB_076d1660;
    fVar7 = (float)FUN_076c8c6c();
    if (fVar7 <= param_2) {
      fVar7 = param_2;
    }
    if (fVar7 <= param_3) {
      fVar7 = param_3;
    }
    if (0.0 < fVar7) {
      uVar6 = 0x10;
    }
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x178))();
  if (lVar5 == 0) goto LAB_076d1660;
  if (*(long *)(lVar5 + 0x20) == 0) {
LAB_076d1600:
    cVar1 = *(char *)((long)unaff_x19 + 0x34);
  }
  else {
    lVar5 = (**(code **)(*unaff_x19 + 0x178))();
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_076d1660;
    if (*(float *)(*(long *)(lVar5 + 0x20) + 0x10) <= 0.0) goto LAB_076d1600;
    in_stack_00000008 = (**(code **)(*unaff_x20 + 0x238))();
    cVar1 = *(char *)((long)unaff_x19 + 0x34);
    if ((in_stack_00000008 & 0xff) != 0) goto LAB_076d162c;
  }
  puVar2 = PTR_DAT_09f2e4f0;
  iVar3 = FUN_076c7d28();
  FUN_0613ca18(&stack0x00000008,iVar3 == 2,*(undefined8 *)puVar2);
LAB_076d162c:
  if (cVar1 != '\0') {
    uVar6 = uVar6 | 4;
  }
  uVar4 = FUN_0613ca30(&stack0x00000008,*(undefined8 *)PTR_DAT_09f2e500);
  return uVar4 | uVar6;
}


