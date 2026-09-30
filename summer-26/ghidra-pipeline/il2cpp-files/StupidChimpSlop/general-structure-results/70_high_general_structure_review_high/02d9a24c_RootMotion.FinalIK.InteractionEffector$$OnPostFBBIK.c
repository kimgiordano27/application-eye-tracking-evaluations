/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionEffector$$OnPostFBBIK
ENTRY_POINT: 02d9a24c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long RootMotion_FinalIK_InteractionEffector__OnPostFBBIK(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint unaff_w23;
  undefined8 *puVar6;
  long lVar7;
  long *in_stack_00000008;
  
  if (((((uint)param_3 & 0xffff) < unaff_w23) && (*(long *)(param_2 + 0x70) != 0)) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x70) + 0x28), lVar5 != 0)) {
    in_stack_00000008 = (long *)FUN_02d99f5c(param_1,lVar5);
    if (in_stack_00000008 != (long *)0x0) {
LAB_02d9a284:
      return param_2 + (param_3 & 0xffff) * 0x10 + 0x138;
    }
    iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))
                      (*(undefined8 **)(param_1 + 0x10),lVar5,&stack0x00000008);
    if (-1 < iVar2) {
      uVar3 = FUN_02d99fec(param_1,lVar5,in_stack_00000008);
      plVar4 = in_stack_00000008;
      if ((uVar3 & 1) == 0) {
        (**(code **)(*in_stack_00000008 + 0x10))();
        plVar4 = (long *)FUN_02d99f5c(param_1,lVar5);
      }
      if (plVar4 != (long *)0x0) goto LAB_02d9a284;
    }
  }
  if ((*(ushort *)(param_2 + 0x135) >> 0xc & 1) == 0) {
    FUN_02d9ec34(param_1);
    uVar3 = (ulong)*(uint *)(param_1 + 0xa0);
    if (0 < (int)*(uint *)(param_1 + 0xa0)) {
      puVar6 = (undefined8 *)(param_1 + 0x18);
      do {
        lVar5 = FUN_02db3894(*puVar6);
        if ((lVar5 != 0) &&
           (lVar5 = RootMotion_FinalIK_InteractionObject_InteractionEvent__Activate
                              (lVar5,param_2,param_3 & 0xffffffff), lVar5 != 0)) goto LAB_02d9a398;
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 2;
      } while (uVar3 != 0);
    }
    uVar1 = *(uint *)(param_1 + 0xa4);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        lVar5 = FUN_02db3894(*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar7));
        if ((lVar5 != 0) &&
           (lVar5 = RootMotion_FinalIK_InteractionObject_InteractionEvent__Activate
                              (lVar5,param_2,param_3 & 0xffffffff), lVar5 != 0)) goto LAB_02d9a398;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar7 != 0);
    }
    if (((uint)param_3 & 0xffff) < unaff_w23) {
      lVar5 = param_2 + (param_3 & 0xffff) * 0x10 + 0x138;
    }
    else {
      lVar5 = 0;
    }
LAB_02d9a398:
    RootMotion_FinalIK_InteractionSystem__Raycasting(param_1);
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}


