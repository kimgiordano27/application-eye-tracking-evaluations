/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 06de7348
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06de7574) */

void Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000d0;
  
  uStack00000000000000b0 = param_1;
  uStack00000000000000c0 = param_1;
  uStack00000000000000d0 = param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    param_2 = *unaff_x19;
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (plVar5 = (long *)FUN_05a52f70(lVar4,*(undefined8 *)PTR_DAT_08e91b18), plVar5 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e91b08) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06de73d8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e91b08,0);
LAB_06de73d8:
  puVar1 = PTR_DAT_08e6a288;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = PTR_DAT_08e91b10;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06de7450;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_06de7450:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar7 & 1) == 0) break;
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06de74ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_06de74ac:
    (*(code *)*puVar6)(&stack0x00000058,plVar5,puVar6[1]);
    memcpy(&stack0x000000b0,&stack0x00000058,0x58);
    memcpy(&stack0x00000000,&stack0x000000b0,0x58);
    FUN_06de5fb8();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06de7544;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar1,0);
LAB_06de7544:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


