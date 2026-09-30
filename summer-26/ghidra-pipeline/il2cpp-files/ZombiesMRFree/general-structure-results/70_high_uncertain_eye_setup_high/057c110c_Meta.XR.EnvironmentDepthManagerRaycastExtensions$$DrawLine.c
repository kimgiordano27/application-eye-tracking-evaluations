/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$DrawLine
ENTRY_POINT: 057c110c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__DrawLine(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int in_w8;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  
  if (in_w8 == 0) {
    return;
  }
  if (unaff_x19 == 0) {
LAB_057c1328:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(int *)(unaff_x19 + 0x8c) != 0x1b) {
    return;
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  plVar5 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  *(undefined1 *)(unaff_x21 + 0x30) = 0;
  if (plVar9 == (long *)0x0) goto LAB_057c1328;
  lVar4 = *plVar5;
  uVar10 = *(undefined8 *)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_057c119c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar9,lVar4,1);
LAB_057c119c:
  (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
  plVar5 = *(long **)(unaff_x21 + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_057c1328;
  lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_057c1220;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar5,lVar4,4);
LAB_057c1220:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  plVar5 = (long *)FUN_06abc65c();
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f99260 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f99260)) {
      plVar5 = (long *)FUN_06b0d958(plVar5,0);
      goto LAB_057c1274;
    }
  }
  plVar5 = (long *)0x0;
LAB_057c1274:
  puVar2 = PTR_DAT_06f9b060;
  lVar4 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar5,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
        (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar5 = (long *)FUN_06adcaf0(plVar5,0), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x178))(plVar5,0,*(undefined8 *)(*plVar5 + 0x180));
      return;
    }
  }
  return;
}


