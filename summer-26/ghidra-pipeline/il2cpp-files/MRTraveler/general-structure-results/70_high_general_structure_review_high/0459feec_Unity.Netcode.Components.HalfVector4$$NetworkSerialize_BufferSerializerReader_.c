/*
FUNCTION_NAME: Unity.Netcode.Components.HalfVector4$$NetworkSerialize<BufferSerializerReader>
ENTRY_POINT: 0459feec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_Netcode_Components_HalfVector4__NetworkSerialize<BufferSerializerReader>
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_03c8f898(PTR_DAT_08e80718);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_03cf12a0();
    }
  }
  in_stack_00000058 = 0;
  uVar3 = FUN_071820a0(0);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0701da3c(param_2,0);
  }
  plVar1 = (long *)(param_2 + 8);
  uVar4 = FUN_0701e3ec(plVar1,uVar4,&stack0x00000058,0);
  if (*plVar1 == 0) {
    uVar3 = FUN_071820a0(0);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_0701da3c(param_2,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = FUN_07179d28(lVar5,0);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      plVar6 = (long *)thunk_FUN_03d12a58();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar7 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e80718,uVar7,0);
      FUN_07185bd0(0,uVar2,uVar7,0,0);
    }
    uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    FUN_0701e7b4(plVar1,uVar7,in_stack_00000058,0,0);
  }
  FUN_0701d004(param_3,uVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x28));
  return;
}


