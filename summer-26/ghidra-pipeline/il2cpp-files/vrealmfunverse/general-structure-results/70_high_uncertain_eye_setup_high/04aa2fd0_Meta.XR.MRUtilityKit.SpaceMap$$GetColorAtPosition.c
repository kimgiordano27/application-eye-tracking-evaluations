/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 04aa2fd0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  iVar1 = *(int *)((long)param_1 + 0x24) + 1;
  *(int *)((long)param_1 + 0x24) = iVar1;
  if (plVar9 == (long *)0x0) {
LAB_04aa31b0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04aa3070;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar3,0);
LAB_04aa3070:
  iVar2 = (*(code *)*puVar4)(plVar9,param_1 + 2,puVar4[1]);
  plVar9 = (long *)*param_1;
  if (iVar1 < iVar2) {
    if (plVar9 == (long *)0x0) goto LAB_04aa31b0;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x24);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_04aa3174;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_04aa31b0;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = param_1[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_04aa3174;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar3,3);
  goto LAB_04aa3184;
LAB_04aa3174:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
LAB_04aa3184:
  (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
  return iVar1 < iVar2;
}


