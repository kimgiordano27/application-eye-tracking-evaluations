/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$RaycastInternal
ENTRY_POINT: 057c2800
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__RaycastInternal(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  long *plVar9;
  
  if (unaff_x21 != 0) {
    FUN_03bb12a4();
    plVar9 = *(long **)(unaff_x19 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_057c2890;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,lVar4,0);
LAB_057c2890:
      uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      plVar8 = *(long **)(unaff_x19 + 0x10);
      plVar9 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      *(undefined4 *)(unaff_x19 + 0x34) = uVar2;
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar9;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4(lVar4);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_057c2914;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,lVar4,3);
LAB_057c2914:
        (*(code *)*puVar3)(plVar8,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          plVar9 = (long *)FUN_06b0d958(*(long *)(unaff_x19 + 0x18),0);
          if (plVar9 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                 *(long *)PTR_DAT_06f9b068)) &&
               (plVar9 = (long *)FUN_06adcaf0(plVar9,0), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c299c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar9 + 0x178))(plVar9,1,*(undefined8 *)(*plVar9 + 0x180));
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


