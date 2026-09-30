/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$GetFirstLayerFromLayerMask
ENTRY_POINT: 08a6c424
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__GetFirstLayerFromLayerMask(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  undefined1 uStack0000000000000004;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x22 + 0xcf7) = 1;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar1 = *unaff_x21;
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uStack0000000000000004 = *(undefined1 *)(unaff_x20 + 0x40);
  plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x28),&stack0x00000004);
  uVar2 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac53fe0,uVar2,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar1 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_08a6c560;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a6c560:
  (*(code *)*puVar3)(plVar6,uVar2,puVar3[1]);
  *unaff_x19 = 0xfffffffe;
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


