/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSurfacePositionDebugger
ENTRY_POINT: 0773f3f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSurfacePositionDebugger(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  int unaff_w24;
  byte in_stack_00000040;
  long *in_stack_00000048;
  
  while( true ) {
    FUN_0773a264(param_1,0);
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x22 + 0x18) <= unaff_w24) break;
    param_1 = FUN_05badb74();
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x24) * 0x10 + 0x138);
          goto LAB_0773f314;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac();
LAB_0773f314:
    iVar4 = (*(code *)*puVar5)();
    if (param_1 == 0) goto LAB_0773f550;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*unaff_x19 + 0x498))();
    lVar7 = *in_stack_00000048;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_0773f3ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(in_stack_00000048,*(long *)PTR_DAT_09f313c8,10);
LAB_0773f3ac:
    (*(code *)*puVar5)(in_stack_00000048,param_1,uVar1,unaff_w23,0,iVar4 == 1 & in_stack_00000040);
  }
  *(undefined4 *)(unaff_x19 + 2) = 1;
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x24) * 0x10 + 0x138);
        goto LAB_0773f470;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac();
LAB_0773f470:
  iVar4 = (*(code *)*puVar5)();
  if (iVar4 != 1) {
    return 1;
  }
  plVar6 = (long *)(**(code **)(*unaff_x19 + 0x4d8))();
  puVar3 = PTR_DAT_09f31428;
  if (plVar6 == (long *)0x0) {
LAB_0773f550:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_09f31428)) {
    FUN_094edf40(plVar6,0,0);
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x4d8))();
    if (plVar6 == (long *)0x0) goto LAB_0773f550;
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
      FUN_094edf40(plVar6,unaff_x19[0x38],0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_044481e4();
}


