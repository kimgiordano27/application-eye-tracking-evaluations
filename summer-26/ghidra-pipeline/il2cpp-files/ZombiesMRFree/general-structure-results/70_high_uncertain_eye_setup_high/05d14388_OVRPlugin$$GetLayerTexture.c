/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 05d14388
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetLayerTexture(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  puVar5 = (undefined8 *)FUN_02feb5b8(param_1,param_2,0);
  plVar6 = (long *)(*(code *)*puVar5)();
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05d14408;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 05d143ec to 05e14413 has its CatchHandler @ 05d145e8 */
    puVar5 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4b60,0);
LAB_05d14408:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar1 = PTR_DAT_06fb4b20;
    if (unaff_x19 != (long *)0x0) {
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06fb4b20) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_05d14474;
          }
                    /* try { // try from 05d14448 to 05e14473 has its CatchHandler @ 05d145e4 */
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_05d14474:
      uVar8 = (*(code *)*puVar5)();
      if ((uVar8 & 1) == 0) {
        bVar2 = false;
      }
      else {
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
              goto LAB_05d144e0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_05d144e0:
        uVar3 = (*(code *)*puVar5)();
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_05d14540;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_05d14540:
        uVar4 = (*(code *)*puVar5)();
        bVar2 = (uVar4 & uVar3) != 0;
      }
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


