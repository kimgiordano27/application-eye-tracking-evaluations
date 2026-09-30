/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$NetworkSerialize<BufferSerializerReader>
ENTRY_POINT: 03ee7afc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_Netcode_Components_HalfVector4__NetworkSerialize<BufferSerializerReader>
               (undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  ulong unaff_x22;
  long lVar7;
  long unaff_x27;
  long unaff_x28;
  undefined8 *puVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar8 = *(undefined8 **)(unaff_x28 + 0xe68);
  uVar2 = FUN_05c1838c(param_1,in_stack_00000010,in_stack_00000018,*puVar8);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    FUN_031ae340(*(undefined8 *)(unaff_x27 + 0xe0));
    uVar3 = FUN_062519f8(uVar3,0);
    FUN_031a5e18();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar4 = FUN_062519f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d95e78);
    uVar3 = FUN_060c2018(uVar5,uVar3,uVar6,uVar4,0);
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar4 = thunk_FUN_037788cc();
    FUN_061a843c(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4);
  }
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d95e70);
  FUN_044b36a8();
  puVar1 = PTR_DAT_07d95e60;
  if (lVar7 == 0) goto LAB_03ee7c8c;
  FUN_05c18180(lVar7,in_stack_00000010,in_stack_00000018,uVar3,*(undefined8 *)PTR_DAT_07d95e60);
  if ((unaff_x22 & 1) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_062519f8(uVar3,0);
    uVar4 = FUN_062519f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    uVar2 = FUN_0625b9c4(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_062519f8(uVar3,0);
      FUN_062519f8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
      FUN_07257910();
      if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_03ee7c8c:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar2 = FUN_05c1838c(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,*puVar8);
      if ((uVar2 & 1) == 0) {
        lVar7 = *(long *)(unaff_x20 + 0x30);
        uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d95e70);
        FUN_044b36a8();
        if (lVar7 == 0) goto LAB_03ee7c8c;
        FUN_05c18180(lVar7,in_stack_00000000,in_stack_00000008,uVar3,*(undefined8 *)puVar1);
      }
    }
  }
  return;
}


