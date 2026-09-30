/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector2>$$Load
ENTRY_POINT: 0789a30c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector2>__Load(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  byte unaff_w21;
  undefined8 uVar7;
  long unaff_x23;
  
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  puVar2 = PTR_DAT_0ac402c8;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  lVar6 = *(long *)(unaff_x23 + 0xe0);
  uVar7 = *(undefined8 *)puVar2;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(byte *)(*(long *)(lVar4 + 0xb8) + 0x10) = unaff_w21 & 1;
  if (iVar1 == 0) {
    thunk_FUN_049a583c(lVar6);
  }
  plVar5 = (long *)FUN_08d895f0(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar3 = (**(code **)(*plVar5 + 0x2a8))();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    *(byte *)(*(long *)(lVar4 + 0xb8) + 0xf) = bVar3 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


