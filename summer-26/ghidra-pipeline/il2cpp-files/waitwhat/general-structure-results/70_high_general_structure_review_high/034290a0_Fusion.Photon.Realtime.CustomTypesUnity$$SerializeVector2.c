/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 034290a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector2(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_034289d8();
  if (*(int *)(*(long *)PTR_DAT_070c9c80 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_059051d0(uVar3,*(undefined8 *)PTR_DAT_070c9ca8,0);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0754658f == '\0') {
    FUN_03188a78(PTR_DAT_070c2768);
    DAT_0754658f = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *unaff_x20;
  }
  cVar1 = *(char *)(unaff_x22 + 0x58d);
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20) = uVar3;
  puVar2 = PTR_DAT_070c2768;
  if (cVar1 == '\0') {
    FUN_03188a78(PTR_DAT_070c2768);
    lVar4 = *(long *)puVar2;
    *(undefined1 *)(unaff_x22 + 0x58d) = 1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *unaff_x20;
  }
  uVar3 = FUN_059051d0(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),
                       *(undefined8 *)PTR_DAT_070c9ca0,0);
  if (DAT_07546590 == '\0') {
    FUN_03188a78(PTR_DAT_070c2768);
    DAT_07546590 = '\x01';
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *unaff_x20;
  }
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28) = uVar3;
  plVar5 = (long *)FUN_03428c90();
  puVar2 = PTR_DAT_070c2658;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070c2658) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_03429228;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070c2658,2);
LAB_03429228:
  uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    plVar5 = (long *)FUN_03428c90();
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    if (DAT_0754658e == '\0') {
      FUN_03188a78(PTR_DAT_070c2768);
      DAT_0754658e = '\x01';
    }
    lVar4 = *unaff_x20;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *unaff_x20;
    }
    uVar3 = FUN_057bf780(*(undefined8 *)PTR_DAT_070c9cb0,
                         *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),
                         *(undefined8 *)PTR_DAT_070c2f90,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar9 = *(undefined8 *)PTR_DAT_070c9c70;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_03429320;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,3);
LAB_03429320:
    (*(code *)*puVar6)(plVar5,uVar9,uVar3,0,puVar6[1]);
  }
  return;
}


