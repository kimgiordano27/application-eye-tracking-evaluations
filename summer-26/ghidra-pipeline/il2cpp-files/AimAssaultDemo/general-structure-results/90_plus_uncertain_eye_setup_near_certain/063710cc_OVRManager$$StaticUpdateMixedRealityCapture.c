/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 063710cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__StaticUpdateMixedRealityCapture(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int unaff_w20;
  
  puVar1 = PTR_DAT_07db3528;
  lVar8 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db3528) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06371124;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07db3528,0);
LAB_06371124:
  iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
  puVar2 = PTR_DAT_07db5938;
  if (iVar3 < unaff_w20) {
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar5 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daf490);
    FUN_061a5334(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db5a28);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar6);
  }
  FUN_0637078c();
  lVar8 = FUN_06370f2c();
  if (unaff_w20 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_063711bc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar2,0);
LAB_063711bc:
    lVar9 = (*(code *)*puVar4)(param_1,unaff_w20 + -1,puVar4[1]);
  }
  lVar10 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0637121c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar1,0);
LAB_0637121c:
  iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
  if (iVar3 == unaff_w20) {
    lVar10 = 0;
  }
  else {
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06371284;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar2,0);
LAB_06371284:
    lVar10 = (*(code *)*puVar4)(param_1,unaff_w20,puVar4[1]);
  }
  (**(code **)(*unaff_x19 + 0x6d8))();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(long **)(lVar8 + 0x10) = unaff_x19;
  thunk_FUN_037aeb94();
  *(long *)(lVar8 + 0x18) = lVar9;
  thunk_FUN_037aeb94((long *)(lVar8 + 0x18),lVar9);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x20) = lVar8;
    thunk_FUN_037aeb94((long *)(lVar9 + 0x20),lVar8);
  }
  *(long *)(lVar8 + 0x20) = lVar10;
  thunk_FUN_037aeb94((long *)(lVar8 + 0x20),lVar10);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x18) = lVar8;
    thunk_FUN_037aeb94((long *)(lVar10 + 0x18),lVar8);
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
        goto LAB_06371360;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c(param_1,*(long *)puVar2,3);
LAB_06371360:
  (*(code *)*puVar4)(param_1,unaff_w20,lVar8,puVar4[1]);
  if (unaff_x19[6] != 0) {
    uVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar5,1,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19bcc(uVar5,0,lVar8,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x628))();
  }
  return 1;
}


