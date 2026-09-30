/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderBase.UxmlSerializedData<Vector2,-float>$$.ctor
ENTRY_POINT: 043eb298
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2,_float>___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  void *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c(lVar1);
  }
  lVar2 = *unaff_x24;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar1) {
        lVar1 = lVar2 + (long)*piVar4 * 0x10 + 0x138;
        goto LAB_043eb38c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_02f421d0();
LAB_043eb38c:
  lVar1 = *(long *)(lVar1 + 8);
  *(void **)(unaff_x29 + -0x10) = unaff_x23;
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8));
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  memcpy(unaff_x23,unaff_x22,unaff_x21);
  memcpy(unaff_x20,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


