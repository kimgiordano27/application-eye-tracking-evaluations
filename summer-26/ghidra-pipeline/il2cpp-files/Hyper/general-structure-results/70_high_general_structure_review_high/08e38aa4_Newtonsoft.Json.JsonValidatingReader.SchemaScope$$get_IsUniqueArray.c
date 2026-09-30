/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 08e38aa4
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e38e9c) */

void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  lVar7 = thunk_FUN_04983e64();
  puVar1 = PTR_DAT_0ac0f430;
  if (lVar7 == 0) {
LAB_08e38e8c:
    uVar8 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar8,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = unaff_x21;
    thunk_FUN_049ee3d8();
    if ((*(long *)puVar1 != 0) &&
       (lVar7 = thunk_FUN_04983e64(*(long *)puVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar7 == 0))
    goto LAB_08e38e8c;
    puVar2 = PTR_DAT_0ac310a0;
    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
      unaff_x20[7] = *(long *)puVar1;
      thunk_FUN_049ee3d8();
      uVar8 = FUN_08bd9b60();
      uVar8 = FUN_08bda228(uVar8,*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x18),
                           *(undefined8 *)puVar1,0);
      uVar14 = *unaff_x22;
      plVar9 = (long *)FUN_08e38844();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac09b98) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08e38ba0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac09b98,0);
LAB_08e38ba0:
      puVar6 = PTR_DAT_0ac13950;
      puVar5 = PTR_DAT_0ac13940;
      puVar4 = PTR_DAT_0ac10640;
      puVar3 = PTR_DAT_0ac09ba8;
      puVar2 = PTR_DAT_0ac09ba0;
      puVar1 = PTR_DAT_0ac097b0;
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar7 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_08e38c44;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)puVar3,0);
LAB_08e38c44:
        uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_08e38dec;
          lVar7 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 == 0) goto LAB_08e38dc4;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_08e38dac;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar7 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_08e38ca8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)puVar2,0);
LAB_08e38ca8:
        auVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        lVar7 = FUN_04947fd0(*(undefined8 *)puVar1,5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar5;
        thunk_FUN_049ee3d8();
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        *(undefined8 *)(lVar7 + 0x28) = auVar15._0_8_;
        thunk_FUN_049ee3d8((undefined8 *)(lVar7 + 0x28),auVar15._0_8_);
        if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar4;
        thunk_FUN_049ee3d8();
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        *(undefined8 *)(lVar7 + 0x38) = auVar15._8_8_;
        thunk_FUN_049ee3d8((undefined8 *)(lVar7 + 0x38),auVar15._8_8_);
        if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)puVar6;
        thunk_FUN_049ee3d8();
        uVar11 = FUN_08bda330(lVar7,0);
        uVar14 = FUN_08bcc3c0(uVar14,uVar11,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_08e38dac:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_08e38de0;
    }
  }
LAB_08e38dc4:
  puVar10 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e38de0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_08e38dec:
  uVar14 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac6c058,uVar14,*(undefined8 *)PTR_DAT_0ac13990,0);
  uVar8 = FUN_08bcc3c0(uVar8,uVar14,0);
  FUN_08bda228(uVar8,*(undefined8 *)PTR_DAT_0ac6c060,*(undefined8 *)(unaff_x19 + 0x28),
               *(undefined8 *)PTR_DAT_0ac0f430,0);
  return;
}


