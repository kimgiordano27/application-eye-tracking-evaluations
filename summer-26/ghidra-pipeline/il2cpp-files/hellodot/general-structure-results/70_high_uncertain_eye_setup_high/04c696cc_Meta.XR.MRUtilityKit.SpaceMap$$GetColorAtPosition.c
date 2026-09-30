/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 04c696cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c69d28) */

undefined8 Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  
  plVar8 = (long *)(*(code *)*param_1)();
  puVar7 = PTR_DAT_065e7a20;
  puVar6 = PTR_DAT_065e79f0;
  puVar5 = PTR_DAT_065e79d8;
  puVar4 = PTR_DAT_065e7980;
  puVar3 = PTR_DAT_065dba38;
  puVar2 = PTR_DAT_065cb5e0;
  puVar1 = PTR_DAT_065c8d08;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c69a90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar1,0);
LAB_04c69a90:
    uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return 0;
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_04c69b74;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c69aec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_04c69aec:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = FUN_0467920c(*(long *)(unaff_x19 + 0x10),uVar10,*(undefined8 *)puVar3);
    FUN_0342854c(lVar11 == 0,*(undefined8 *)puVar6,uVar10,*(undefined8 *)puVar7,
                 *(undefined8 *)puVar5,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04c69c68;
    }
  }
LAB_04c69b74:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065c8a48,0);
LAB_04c69c68:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return 0;
}


