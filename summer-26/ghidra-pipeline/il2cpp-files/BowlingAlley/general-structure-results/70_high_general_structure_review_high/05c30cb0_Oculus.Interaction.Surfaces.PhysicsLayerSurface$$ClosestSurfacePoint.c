/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$ClosestSurfacePoint
ENTRY_POINT: 05c30cb0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_PhysicsLayerSurface__ClosestSurfacePoint
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long *param_5
               ,long *param_6,long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x27;
  long lVar9;
  long unaff_x29;
  long *plVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
  plVar10 = *(long **)(unaff_x29 + 0xb50);
  if ((*(byte *)(unaff_x27 + 0x678) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07282238);
    thunk_FUN_032e1da0(PTR_DAT_072a9b50);
    thunk_FUN_032e1da0(PTR_DAT_072a70d8);
    thunk_FUN_032e1da0(PTR_DAT_072a94f8);
    thunk_FUN_032e1da0(PTR_DAT_072aa358);
    *(undefined1 *)(unaff_x27 + 0x678) = 1;
  }
  lVar9 = *plVar10;
  uStack0000000000000064 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_03293514(lVar8);
  }
  if ((((int)param_4[1] < 1) || (*param_4 == 0)) ||
     (lVar8 = FUN_03add5ec(*param_4,param_4[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_03add490(*param_4,param_4[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar3 = FUN_0596f538(uVar3,0);
  }
  lVar9 = *plVar10;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_03293514(lVar8);
  }
  puVar1 = PTR_DAT_072a70d8;
  if ((((int)param_5[1] < 1) || (*param_5 == 0)) ||
     (lVar8 = FUN_03add5ec(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_03add490(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar4 = FUN_0596f538(uVar4,0);
  }
  lVar9 = *(long *)puVar1;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_03293514(lVar8);
  }
  puVar1 = PTR_DAT_072a94f8;
  if ((((int)param_6[1] < 1) || (*param_6 == 0)) ||
     (lVar8 = FUN_03add704(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_03add4ac(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
    uVar5 = FUN_0596f538(uVar5,0);
  }
  lVar9 = *(long *)puVar1;
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_03293514(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 8);
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_03293514(lVar8);
  }
  puVar1 = PTR_DAT_07282238;
  if ((((int)param_7[1] < 1) || (*param_7 == 0)) ||
     (lVar8 = FUN_03add708(*param_7,param_7[1],*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x28)),
     lVar8 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_03add4b4(*param_7,param_7[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x18));
  }
  puVar2 = PTR_DAT_072aa358;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_05c30fb8(param_1,param_2,param_3,uVar3,uVar4,uVar5,uVar6,&stack0x00000010);
  uVar7 = FUN_05bc23b0(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar7 & 1) == 0) {
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
    memcpy(unaff_x19,&stack0x00000010,0x5c);
  }
  return;
}


