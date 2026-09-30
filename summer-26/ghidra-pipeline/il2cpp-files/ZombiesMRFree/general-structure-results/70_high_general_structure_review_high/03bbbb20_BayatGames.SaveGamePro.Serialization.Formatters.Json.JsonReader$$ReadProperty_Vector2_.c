/*
FUNCTION_NAME: BayatGames.SaveGamePro.Serialization.Formatters.Json.JsonReader$$ReadProperty<Vector2>
ENTRY_POINT: 03bbbb20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bbbd34) */

int BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<Vector2>
              (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  int iVar9;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar1 = PTR_DAT_06f70b38;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar9 = 0;
  do {
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03bbbb7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_03bbbb7c:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      iVar9 = -1;
      if (unaff_x19 == (long *)0x0) goto LAB_03bbbcf0;
      goto LAB_03bbbc90;
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto 
          BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<Vector3>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_02feb5b8();
BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<Vector3>:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x26,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x26,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    puVar2 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x24;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar4[2])(uVar3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    iVar9 = iVar9 + 1;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
LAB_03bbbc90:
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03bbbce4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_03bbbce4:
    (*(code *)*puVar2)();
  }
LAB_03bbbcf0:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


