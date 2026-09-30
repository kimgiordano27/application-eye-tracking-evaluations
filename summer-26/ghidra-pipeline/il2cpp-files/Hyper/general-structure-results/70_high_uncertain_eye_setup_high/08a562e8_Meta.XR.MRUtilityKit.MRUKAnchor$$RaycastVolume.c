/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 08a562e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x25;
  long unaff_x26;
  
  puVar3 = (undefined8 *)FUN_04980e68();
  (*(code *)*puVar3)();
  if (*(char *)(unaff_x26 + 0x585) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac53650);
    *(undefined1 *)(unaff_x26 + 0x585) = 1;
  }
  lVar4 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (uVar2 = FUN_08bd7f80(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x118),0),
     (uVar2 & 1) != 0)) {
    FUN_08a4f840();
    puVar1 = PTR_DAT_0ac46eb8;
    *(undefined1 *)(unaff_x20 + 0x109) = 0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar7 = *(undefined8 *)PTR_DAT_0ac53898;
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac46ed8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_08a55cac;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a55cac:
    (*(code *)*puVar3)(plVar6,uVar7,puVar3[1]);
  }
  puVar1 = PTR_DAT_0ac111a0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


