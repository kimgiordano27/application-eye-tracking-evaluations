/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<MoveRequestProgressBarToEnd>d__18$$System.IDisposable.Dispose
ENTRY_POINT: 04012574
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void DA_Assets_FCU_RequestSender_<MoveRequestProgressBarToEnd>d__18__System_IDisposable_Dispose
               (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long unaff_x21;
  long unaff_x22;
  
  FUN_03f13384(*param_1);
  *(undefined1 *)(unaff_x22 + 0x707) = 1;
  if (*(long *)(unaff_x21 + 0x20) == 0) {
LAB_04012770:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  iVar1 = *(int *)(*(long *)(unaff_x21 + 0x20) + 0x34);
  if (iVar1 == 2) {
    plVar8 = *(long **)(unaff_x21 + 0x40);
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0910c000);
    FUN_040cf2f8();
    if (plVar8 == (long *)0x0) goto LAB_04012770;
    lVar4 = *plVar8;
    lVar7 = *(long *)PTR_DAT_0910bff0;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar7 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) goto LAB_0401272c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else if (iVar1 == 1) {
    plVar8 = *(long **)(unaff_x21 + 0x40);
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0910bff8);
    FUN_040c6830();
    if (plVar8 == (long *)0x0) goto LAB_04012770;
    lVar4 = *plVar8;
    lVar7 = *(long *)PTR_DAT_0910bfe8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar7 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) goto LAB_0401272c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (*(long *)(unaff_x21 + 0x48) == 0) {
      uVar2 = FUN_0401243c();
      *(undefined8 *)(unaff_x21 + 0x48) = uVar2;
      thunk_FUN_03f86000((long *)(unaff_x21 + 0x48),uVar2);
    }
    FUN_04012774();
    plVar8 = *(long **)(unaff_x21 + 0x40);
    uVar2 = thunk_FUN_03f4e68c(*(undefined8 *)PTR_DAT_0910bfd8);
    FUN_0406fd84();
    if (plVar8 == (long *)0x0) goto LAB_04012770;
    lVar4 = *plVar8;
    lVar7 = *(long *)PTR_DAT_0910bfe0;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar3 = (uint)*(ushort *)(lVar7 + 0x50);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) goto LAB_0401272c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  lVar4 = FUN_03f4b594(plVar8);
  goto LAB_0401273c;
LAB_0401272c:
  lVar4 = lVar4 + (long)(int)(*piVar6 + uVar3) * 0x10 + 0x138;
LAB_0401273c:
  lVar4 = thunk_FUN_03f30738(*(undefined8 *)(lVar4 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x0401276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(plVar8,uVar2,0,0);
  return;
}


