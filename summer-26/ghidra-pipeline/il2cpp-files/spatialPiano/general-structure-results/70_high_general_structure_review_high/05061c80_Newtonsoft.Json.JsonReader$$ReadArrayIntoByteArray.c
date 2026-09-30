/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 05061c80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x22;
  
  FUN_02f08768(PTR_DAT_067c9990);
  FUN_02f08768(PTR_DAT_067d7928);
  *(undefined1 *)(unaff_x20 + 0x774) = 1;
  puVar2 = PTR_DAT_067d7928;
  puVar1 = PTR_DAT_067c9990;
  if (unaff_x22 == 0) {
    lVar3 = *(long *)PTR_DAT_067c9990;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    lVar3 = thunk_FUN_02f45174();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    lVar3 = *(long *)puVar2;
    plVar4 = (long *)thunk_FUN_02f45174();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
          goto LAB_05061d50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar3,0xd);
LAB_05061d50:
    uVar6 = (*(code *)*puVar5)(plVar4);
  }
  return uVar6;
}


