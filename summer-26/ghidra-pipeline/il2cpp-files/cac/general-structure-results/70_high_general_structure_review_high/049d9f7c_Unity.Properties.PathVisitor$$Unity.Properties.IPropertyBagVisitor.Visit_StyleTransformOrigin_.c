/*
FUNCTION_NAME: Unity.Properties.PathVisitor$$Unity.Properties.IPropertyBagVisitor.Visit<StyleTransformOrigin>
ENTRY_POINT: 049d9f7c
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Unity_Properties_PathVisitor__Unity_Properties_IPropertyBagVisitor_Visit<StyleTransformOrigin>
               (undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long lVar10;
  undefined4 uStack000000000000000c;
  long in_stack_00000018;
  
  uStack000000000000000c = 0;
  FUN_04b6a748(param_1,*in_x9);
  puVar1 = PTR_DAT_09121148;
  plVar2 = (long *)thunk_FUN_03f4e590();
  if (plVar2 == (long *)0x0) {
    uVar8 = FUN_049eb3b8();
    if ((uVar8 & 1) == 0) {
      lVar7 = FUN_04954ee0();
    }
    else {
      lVar7 = FUN_049e4b94();
    }
  }
  else {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_049da020;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f4b594(plVar2,*(long *)puVar1,0);
LAB_049da020:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar4 == 0) {
      thunk_FUN_03f786f8(PTR_DAT_09121150);
      FUN_0395b070();
      uVar5 = FUN_076b787c(0);
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar6 = thunk_FUN_03f4e68c();
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar6);
    }
    in_stack_00000018 = 0;
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f4b260(lVar10);
    }
    lVar7 = thunk_FUN_03f4e590(lVar4,lVar10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(lVar4,lVar10);
    }
  }
  in_stack_00000018 = lVar7;
  thunk_FUN_03f86000(&stack0x00000018,lVar7);
  return in_stack_00000018;
}


