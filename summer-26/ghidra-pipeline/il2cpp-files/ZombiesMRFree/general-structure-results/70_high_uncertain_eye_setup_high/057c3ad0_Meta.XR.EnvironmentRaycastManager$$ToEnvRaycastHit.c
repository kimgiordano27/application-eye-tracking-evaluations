/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ToEnvRaycastHit
ENTRY_POINT: 057c3ad0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__ToEnvRaycastHit
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  long unaff_x23;
  
  FUN_0579bad0(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48),0);
  if (unaff_x23 != 0) {
    FUN_03bb1674();
    FUN_06af9930(*(undefined8 *)(unaff_x20 + 0x18),unaff_w22,0);
    lVar3 = thunk_FUN_03010710();
    if (lVar3 != 0) {
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_057c3c7c;
      uVar4 = FUN_06b0d958(*(long *)(unaff_x20 + 0x18),0);
      puVar2 = PTR_DAT_06f9b060;
      lVar3 = *(long *)PTR_DAT_06f9b060;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar3);
        lVar3 = *(long *)puVar2;
      }
      FUN_06af9fe4(uVar4,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 8),0);
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      plVar5 = (long *)FUN_06b0d958(*(long *)(unaff_x20 + 0x18),0);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
        if (((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
            (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)PTR_DAT_06f9b068)) &&
           (plVar5 = (long *)FUN_06adcaf0(plVar5,0), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x178))(plVar5,0,*(undefined8 *)(*plVar5 + 0x180));
        }
      }
      plVar5 = *(long **)(unaff_x20 + 0x10);
      if (plVar5 != (long *)0x0) {
        lVar3 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_057c3c60;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02feb5b8(plVar5,lVar3,4);
LAB_057c3c60:
                    /* WARNING: Could not recover jumptable at 0x057c3c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        return;
      }
    }
  }
LAB_057c3c7c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


