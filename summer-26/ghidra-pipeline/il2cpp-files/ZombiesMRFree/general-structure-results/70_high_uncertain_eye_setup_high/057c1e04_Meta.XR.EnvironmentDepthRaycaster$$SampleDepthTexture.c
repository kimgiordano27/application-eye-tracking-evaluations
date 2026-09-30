/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$SampleDepthTexture
ENTRY_POINT: 057c1e04
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


void Meta_XR_EnvironmentDepthRaycaster__SampleDepthTexture(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  
  uVar3 = FUN_06b0d958();
  puVar2 = PTR_DAT_06f9b060;
  lVar6 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar6);
    lVar6 = *(long *)puVar2;
  }
  FUN_06af9fe4(uVar3,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8),0);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar4 = (long *)FUN_06b0d958(*(long *)(unaff_x20 + 0x18),0);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
          (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068)
          ) && (plVar4 = (long *)FUN_06adcaf0(plVar4,0), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      }
    }
    plVar4 = *(long **)(unaff_x20 + 0x10);
    if (plVar4 != (long *)0x0) {
      lVar6 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4(lVar6);
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_057c1f2c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02feb5b8(plVar4,lVar6,4);
LAB_057c1f2c:
                    /* WARNING: Could not recover jumptable at 0x057c1f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


