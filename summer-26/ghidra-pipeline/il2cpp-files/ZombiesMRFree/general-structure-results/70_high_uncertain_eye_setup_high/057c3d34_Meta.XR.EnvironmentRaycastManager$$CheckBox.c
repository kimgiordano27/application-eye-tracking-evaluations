/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 057c3d34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__CheckBox(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
      goto LAB_057c3d70;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_057c3d70:
  (*(code *)*puVar3)();
  plVar8 = *(long **)(unaff_x21 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_057c3df4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,4);
LAB_057c3df4:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  plVar8 = (long *)FUN_06abc65c();
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f99260 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f99260)) {
      plVar8 = (long *)FUN_06b0d958(plVar8,0);
      goto LAB_057c3e48;
    }
  }
  plVar8 = (long *)0x0;
LAB_057c3e48:
  puVar2 = PTR_DAT_06f9b060;
  lVar4 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar8,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
        (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar8 = (long *)FUN_06adcaf0(plVar8,0), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c3ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x178))(plVar8,0,*(undefined8 *)(*plVar8 + 0x180));
      return;
    }
  }
  return;
}


