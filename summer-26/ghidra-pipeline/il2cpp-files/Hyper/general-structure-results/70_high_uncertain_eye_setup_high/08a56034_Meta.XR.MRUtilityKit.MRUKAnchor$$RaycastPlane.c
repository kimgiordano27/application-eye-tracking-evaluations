/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastPlane
ENTRY_POINT: 08a56034
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastPlane(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 in_stack_00000008;
  
  thunk_FUN_049a583c();
  puVar7 = *(undefined8 **)(*unaff_x29 + 0xb8);
  if (puVar7[1] == 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar7 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar11 = *puVar7;
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53868);
    FUN_06416c1c(uVar3,uVar11,*(undefined8 *)PTR_DAT_0ac53888,0);
    puVar7 = (undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
    *puVar7 = uVar3;
    thunk_FUN_049ee3d8(puVar7,uVar3);
  }
  uVar3 = FUN_05b7ce64();
  puVar2 = PTR_DAT_0ac53848;
  FUN_05b8a354(uVar3,*(undefined8 *)PTR_DAT_0ac53848);
  FUN_08a503fc();
  lVar4 = FUN_06c26574();
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar5 = FUN_08795a9c(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000008 = *(undefined4 *)(lVar4 + 0x18);
  uVar3 = thunk_FUN_04983b98(*(undefined8 *)(unaff_x27 + 0x48),&stack0x00000008);
  uVar3 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac538c8,uVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_0433cdb4(0,*(undefined8 *)PTR_DAT_0ac46ed8,lVar5,uVar3);
  lVar5 = *unaff_x29;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *unaff_x29;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar10 = puVar7[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar7 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar3 = *puVar7;
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53868);
    FUN_06416c1c(lVar10,uVar3,*(undefined8 *)PTR_DAT_0ac53890,0);
    plVar6 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x10);
    *plVar6 = lVar10;
    thunk_FUN_049ee3d8(plVar6,lVar10);
  }
  uVar3 = FUN_05b7ce64(lVar4,lVar10,*(undefined8 *)PTR_DAT_0ac53840);
  FUN_05b8a354(uVar3,*(undefined8 *)puVar2);
  FUN_08a503fc();
  cVar1 = *(char *)(unaff_x26 + 0x585);
  *(undefined1 *)(unaff_x20 + 0x109) = 1;
  if (cVar1 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac53650);
    *(undefined1 *)(unaff_x26 + 0x585) = 1;
  }
  lVar4 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  *(undefined8 *)(unaff_x20 + 0x118) = *(undefined8 *)(lVar4 + 0x28);
  thunk_FUN_049ee3d8(unaff_x20 + 0x118);
  puVar2 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *(long *)puVar2;
  }
  plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar3 = *(undefined8 *)PTR_DAT_0ac538b0;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08a559bc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a559bc:
  (*(code *)*puVar7)(plVar6,uVar3,puVar7[1]);
  if (*(char *)(unaff_x26 + 0x585) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac53650);
    *(undefined1 *)(unaff_x26 + 0x585) = 1;
  }
  lVar4 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (uVar8 = FUN_08bd7f80(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x118),0),
     (uVar8 & 1) != 0)) {
    FUN_08a4f840();
    puVar2 = PTR_DAT_0ac46eb8;
    *(undefined1 *)(unaff_x20 + 0x109) = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar2;
    }
    plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar3 = *(undefined8 *)PTR_DAT_0ac53898;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_08a55cac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a55cac:
    (*(code *)*puVar7)(plVar6,uVar3,puVar7[1]);
  }
  puVar2 = PTR_DAT_0ac111a0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


