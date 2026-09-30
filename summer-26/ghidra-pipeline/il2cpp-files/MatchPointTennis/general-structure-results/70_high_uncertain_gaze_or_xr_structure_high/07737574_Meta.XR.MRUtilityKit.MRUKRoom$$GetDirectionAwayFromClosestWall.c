/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 07737574
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  
  plVar3 = (long *)FUN_07715da0(param_1,0);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x24) * 0x10 + 0x138);
          goto LAB_077375dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_077375dc:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 != 1) {
      return;
    }
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      plVar3 = *(long **)(*(long *)(unaff_x21 + 0x18) + 0x1e0);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f31500 + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f31500))
        {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4();
        }
      }
      FUN_07737684();
      FUN_07737958();
      FUN_0773823c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


