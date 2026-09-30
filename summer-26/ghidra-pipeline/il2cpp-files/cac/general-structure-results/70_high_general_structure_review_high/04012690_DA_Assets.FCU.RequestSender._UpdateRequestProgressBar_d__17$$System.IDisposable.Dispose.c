/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<UpdateRequestProgressBar>d__17$$System.IDisposable.Dispose
ENTRY_POINT: 04012690
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void DA_Assets_FCU_RequestSender_<UpdateRequestProgressBar>d__17__System_IDisposable_Dispose
               (undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + 0x48) = param_1;
  thunk_FUN_03f86000();
  FUN_04012774();
  plVar1 = *(long **)(unaff_x21 + 0x40);
  uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0910bfd8);
  FUN_0406fd84();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar3 = *plVar1;
  lVar6 = *(long *)PTR_DAT_0910bfe0;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0401273c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03f4b594(plVar1);
LAB_0401273c:
  lVar3 = thunk_FUN_03f30738(*(undefined8 *)(lVar3 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x0401276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(plVar1,uVar2,0,0);
  return;
}


