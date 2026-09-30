/*
FUNCTION_NAME: BayatGames.SaveGamePro.Serialization.Formatters.Json.JsonReader$$ReadProperty<uint>
ENTRY_POINT: 03bbba50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bbbd34) */

int BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<uint>(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  void *__s;
  long unaff_x27;
  long unaff_x29;
  
  FUN_02fe925c();
  plVar11 = *(long **)(unaff_x20 + 0x38);
  if (plVar11 == (long *)0x0) {
    FUN_02feb320();
    plVar11 = *(long **)(unaff_x20 + 0x38);
  }
  __n = (ulong)*(uint *)(plVar11[4] + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar7;
  puVar9 = (undefined8 *)(__src + -uVar7);
  __s = (void *)((long)puVar9 - uVar7);
  memset(__s,0,__n);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *plVar11;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03bbbb10;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_03bbbb10:
  plVar11 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_06f70b38;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  iVar10 = 0;
  do {
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03bbbb7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)puVar1,0);
LAB_03bbbb7c:
    uVar7 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      iVar10 = -1;
      if (plVar11 == (long *)0x0) goto LAB_03bbbcf0;
      goto LAB_03bbbc90;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto 
          BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<Vector3>;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_02feb5b8(plVar11,lVar4,0);
BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonReader__ReadProperty<Vector3>:
    *(undefined1 **)(unaff_x29 + -0x18) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar11,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar9,__s,__n);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    puVar2 = puVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar2 = (undefined8 *)*puVar9;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar5[2])(uVar3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    iVar10 = iVar10 + 1;
  } while( true );
  if (plVar11 != (long *)0x0) {
LAB_03bbbc90:
    lVar4 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar9 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03bbbce4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)PTR_DAT_06f70b30,0);
LAB_03bbbce4:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
LAB_03bbbcf0:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


