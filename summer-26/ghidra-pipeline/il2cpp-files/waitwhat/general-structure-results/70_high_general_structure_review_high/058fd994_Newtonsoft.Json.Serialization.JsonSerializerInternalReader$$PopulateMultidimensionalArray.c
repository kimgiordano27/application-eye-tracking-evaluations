/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 058fd994
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
                (undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined4 uVar7;
  
  uVar3 = FUN_03188b1c(*param_1);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  iVar2 = 0;
  while (iVar2 == 0) {
    cVar1 = *(char *)(unaff_x19 + 0x44);
    plVar4 = *(long **)(unaff_x19 + 0x10);
    uVar7 = 1;
    if (cVar1 != '\0') {
      uVar7 = 2;
    }
    if (plVar4 == (long *)0x0) goto LAB_058fdae8;
    uVar5 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
    lVar6 = *(long *)(unaff_x19 + 0x28);
    if (lVar6 == 0) goto LAB_058fdae8;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058fda80;
    *(char *)(lVar6 + 0x20) = (char)uVar5;
    if (((int)uVar5 == -1) || (cVar1 == '\0')) {
      if ((int)uVar5 == -1) {
        return uVar5;
      }
    }
    else {
      plVar4 = *(long **)(unaff_x19 + 0x10);
      if (plVar4 == (long *)0x0) goto LAB_058fdae8;
      iVar2 = (**(code **)(*plVar4 + 0x378))(plVar4,*(undefined8 *)(*plVar4 + 0x380));
      lVar6 = *(long *)(unaff_x19 + 0x28);
      if (lVar6 == 0) goto LAB_058fdae8;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058fda80;
      *(char *)(lVar6 + 0x21) = (char)iVar2;
      uVar7 = 1;
      if (iVar2 != -1) {
        uVar7 = 2;
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x20);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar2 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,*(undefined8 *)(unaff_x19 + 0x28),0,uVar7,
                       *(undefined8 *)(unaff_x19 + 0x30),0,*(undefined8 *)(*plVar4 + 0x1c0));
  }
  lVar6 = *(long *)(unaff_x19 + 0x30);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      return (ulong)*(ushort *)(lVar6 + 0x20);
    }
LAB_058fda80:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_058fdae8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


