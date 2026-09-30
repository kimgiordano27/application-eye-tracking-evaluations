/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$ClosestSurfacePoint
ENTRY_POINT: 069a5460
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


undefined8 Oculus_Interaction_Surfaces_PhysicsLayerSurface__ClosestSurfacePoint(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x10;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(in_x10 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 0x130) * 8 + -8) != in_x10)) {
    if ((*(byte *)(param_1 + 0x130) < *(byte *)(DAT_083cdd10 + 0x130)) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(DAT_083cdd10 + 0x130) * 8 + -8) !=
        DAT_083cdd10)) {
      if ((unaff_x21 == 0) || (*(char *)(unaff_x21 + 0x20) == '\0')) {
        return 0;
      }
      FUN_033d1ba8(&DAT_083c9fc0);
      FUN_02e06fb0();
      uVar3 = FUN_067d14f8(0);
      uVar4 = FUN_033d1ba8(&DAT_083cda98);
      uVar4 = thunk_FUN_03398650(uVar4,&stack0x0000000c);
      FUN_02e06434();
      plVar5 = (long *)FUN_06877628();
      FUN_02e06434();
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar7 = FUN_033d1ba8(&DAT_0843d3d8);
      uVar3 = FUN_0693b984(uVar7,uVar3,uVar4,uVar6,0);
      goto LAB_069a5698;
    }
    iVar1 = FUN_069832c0();
    if (unaff_w19 < iVar1) {
      FUN_03398650(DAT_083cda98,&stack0x0000000c);
                    /* WARNING: Could not recover jumptable at 0x069a5558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*unaff_x20 + 0x248))();
      return uVar3;
    }
    if (unaff_x21 == 0) {
      return 0;
    }
    if (*(char *)(unaff_x21 + 0x20) == '\0') {
      return 0;
    }
    FUN_033d1ba8(&DAT_083c9fc0);
    FUN_02e06fb0();
    uVar3 = FUN_067d14f8(0);
    uVar4 = FUN_033d1ba8(&DAT_083cda98);
    uVar4 = thunk_FUN_03398650(uVar4,&stack0x0000000c);
    puVar2 = &DAT_0843d3e8;
  }
  else {
    iVar1 = FUN_069832c0();
    if (unaff_w19 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x069a5508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*unaff_x20 + 0x678))();
      return uVar3;
    }
    if (unaff_x21 == 0) {
      return 0;
    }
    if (*(char *)(unaff_x21 + 0x20) == '\0') {
      return 0;
    }
    FUN_033d1ba8(&DAT_083c9fc0);
    FUN_02e06fb0();
    uVar3 = FUN_067d14f8(0);
    uVar4 = FUN_033d1ba8(&DAT_083cda98);
    uVar4 = thunk_FUN_03398650(uVar4,&stack0x0000000c);
    puVar2 = &DAT_0843d3e0;
  }
  uVar6 = FUN_033d1ba8(puVar2);
  uVar3 = FUN_0693b820(uVar6,uVar3,uVar4,0);
LAB_069a5698:
  FUN_033d1ba8(&DAT_083cde88);
  uVar4 = thunk_FUN_03398a84();
  FUN_068cc73c(uVar4,uVar3,0);
  uVar3 = FUN_033d1ba8(&DAT_08414628);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar4,uVar3);
}


