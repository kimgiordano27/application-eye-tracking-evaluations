/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnEnable
ENTRY_POINT: 057c3650
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnEnable(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_06f9b590;
  FUN_06ab23f8();
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  lVar9 = *(long *)(unaff_x19 + 0x18);
  uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_0579bad0();
  if (lVar9 != 0) {
    FUN_03bb12a4(lVar9,uVar3,0,*(undefined8 *)PTR_DAT_06f9b580);
    plVar10 = *(long **)(unaff_x19 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar9 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02feb2c4(lVar9);
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_057c3724;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar10,lVar9,0);
LAB_057c3724:
      uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      plVar8 = *(long **)(unaff_x19 + 0x10);
      plVar10 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar10;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02feb2c4(lVar9);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar9) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_057c37a8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,lVar9,3);
LAB_057c37a8:
        (*(code *)*puVar4)(plVar8,puVar4[1]);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          plVar10 = (long *)FUN_06b0d958(*(long *)(unaff_x19 + 0x18),0);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
                 *(long *)PTR_DAT_06f9b068)) &&
               (plVar10 = (long *)FUN_06adcaf0(plVar10,0), plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c3830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x178))(plVar10,1,*(undefined8 *)(*plVar10 + 0x180));
              return;
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


