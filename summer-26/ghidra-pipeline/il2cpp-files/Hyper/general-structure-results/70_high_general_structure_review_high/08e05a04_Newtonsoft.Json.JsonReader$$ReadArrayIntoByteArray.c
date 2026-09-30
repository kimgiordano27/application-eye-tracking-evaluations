/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 08e05a04
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x26;
  undefined8 *puVar10;
  undefined8 *unaff_x28;
  
  puVar1 = PTR_DAT_0ac0c148;
  puVar6 = (undefined8 *)(unaff_x20 + 0x10);
  plVar7 = (long *)*puVar6;
  puVar10 = *(undefined8 **)(unaff_x26 + 0x1e8);
  if (plVar7 != (long *)0x0) {
    uVar2 = thunk_FUN_04983f60(*unaff_x28);
    FUN_05f878c4();
    lVar3 = *plVar7;
    lVar9 = *(long *)puVar1;
    uVar8 = *puVar10;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_08e05a8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = FUN_04980e68(plVar7);
LAB_08e05a8c:
    lVar3 = thunk_FUN_04965bc0(*(undefined8 *)(lVar3 + 8),lVar9);
    (**(code **)(lVar3 + 8))(plVar7,uVar8,uVar2,lVar3);
  }
  *puVar6 = unaff_x21;
  thunk_FUN_049ee3d8(puVar6);
  puVar1 = PTR_DAT_0ac0b128;
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    uVar2 = thunk_FUN_04983f60(*unaff_x28);
    FUN_05f878c4();
    lVar3 = *plVar7;
    lVar9 = *(long *)puVar1;
    uVar8 = *puVar10;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_08e05b44;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = FUN_04980e68(plVar7);
LAB_08e05b44:
    lVar3 = thunk_FUN_04965bc0(*(undefined8 *)(lVar3 + 8),lVar9);
    (**(code **)(lVar3 + 8))(plVar7,uVar8,uVar2,lVar3);
    plVar7 = (long *)*puVar6;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar2 = *puVar10;
      lVar9 = *(long *)PTR_DAT_0ac0b118;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar9 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
            goto LAB_08e05bd0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = FUN_04980e68(plVar7);
LAB_08e05bd0:
      lVar3 = thunk_FUN_04965bc0(*(undefined8 *)(lVar3 + 8),lVar9);
      (**(code **)(lVar3 + 8))(plVar7,uVar2,lVar3);
      FUN_08e056e0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


