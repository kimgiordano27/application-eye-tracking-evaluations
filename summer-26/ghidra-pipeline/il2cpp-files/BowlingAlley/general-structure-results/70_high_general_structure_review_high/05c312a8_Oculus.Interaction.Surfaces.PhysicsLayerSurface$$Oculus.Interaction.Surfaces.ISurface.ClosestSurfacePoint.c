/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 05c312a8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_PhysicsLayerSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x28;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_03293514();
    param_1 = *(long *)(unaff_x28 + 0x38);
  }
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_03293514(lVar6);
  }
  puVar1 = PTR_DAT_072a94f8;
  if (((0 < (int)unaff_x25[1]) && (*unaff_x25 != 0)) &&
     (lVar6 = FUN_03add704(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
     lVar6 != 0)) {
    FUN_03add4ac(*unaff_x25,unaff_x25[1],*(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x18));
  }
  lVar5 = *(long *)puVar1;
  lVar6 = *(long *)(lVar5 + 0x38);
  if (lVar6 == 0) {
    FUN_03293514(lVar5);
    lVar6 = *(long *)(lVar5 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 8);
  if (*(long *)(lVar6 + 0x38) == 0) {
    FUN_03293514(lVar6);
  }
  puVar1 = PTR_DAT_07282238;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar6 = FUN_03add708(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28)),
     lVar6 != 0)) {
    FUN_03add4b4(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  puVar2 = PTR_DAT_072aa360;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_05c31434(in_stack_00000018._4_4_,unaff_w22,unaff_w21);
  uVar4 = FUN_05bc23b0(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x4c) = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000020,0x5c);
  }
  return;
}


