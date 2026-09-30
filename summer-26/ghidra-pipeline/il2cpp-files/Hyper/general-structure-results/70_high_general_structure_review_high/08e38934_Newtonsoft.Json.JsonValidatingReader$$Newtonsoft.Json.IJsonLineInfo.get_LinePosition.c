/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 08e38934
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x08e38e9c) */

void Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar14;
  long *unaff_x22;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac09ba8);
  FUN_04947ee4(PTR_DAT_0ac09bc0);
  FUN_04947ee4(PTR_DAT_0ac09bc8);
  FUN_04947ee4(PTR_DAT_0ac09b30);
  FUN_04947ee4(PTR_DAT_0ac097b0);
  FUN_04947ee4(PTR_DAT_0ac13940);
  FUN_04947ee4(PTR_DAT_0ac10640);
  FUN_04947ee4(PTR_DAT_0ac13950);
  FUN_04947ee4(PTR_DAT_0ac310a0);
  FUN_04947ee4(PTR_DAT_0ac0f430);
  FUN_04947ee4(PTR_DAT_0ac6c050);
  FUN_04947ee4(PTR_DAT_0ac6c058);
  FUN_04947ee4(PTR_DAT_0ac6c060);
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac13990);
  *(undefined1 *)(unaff_x21 + 0xd9b) = 1;
  lVar14 = *unaff_x22;
  in_stack_00000018 = (long *)0x0;
  plVar7 = (long *)FUN_04947fd0(*unaff_x20,4);
  if (plVar7 == (long *)0x0) {
Newtonsoft_Json_JsonValidatingReader_<>c___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if ((lVar14 != 0) &&
     (lVar8 = thunk_FUN_04983e64(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_08e38e8c:
    uVar9 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar9,0);
  }
  puVar1 = PTR_DAT_0ac6c050;
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar14;
    thunk_FUN_049ee3d8(plVar7 + 4,lVar14);
    lVar14 = *(long *)puVar1;
    if ((lVar14 != 0) &&
       (lVar14 = thunk_FUN_04983e64(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar14 == 0))
    goto LAB_08e38e8c;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = *(long *)puVar1;
      thunk_FUN_049ee3d8();
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,*(undefined1 *)(unaff_x19 + 0x10));
      lVar14 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x28),&stack0x00000008);
      if ((lVar14 != 0) &&
         (lVar8 = thunk_FUN_04983e64(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_08e38e8c;
      puVar1 = PTR_DAT_0ac0f430;
      if (2 < *(uint *)(plVar7 + 3)) {
        plVar7[6] = lVar14;
        thunk_FUN_049ee3d8(plVar7 + 6,lVar14);
        if ((*(long *)puVar1 != 0) &&
           (lVar14 = thunk_FUN_04983e64(*(long *)puVar1,*(undefined8 *)(*plVar7 + 0x40)),
           lVar14 == 0)) goto LAB_08e38e8c;
        puVar2 = PTR_DAT_0ac310a0;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
          plVar7[7] = *(long *)puVar1;
          thunk_FUN_049ee3d8();
          uVar9 = FUN_08bd9b60(plVar7,0);
          uVar9 = FUN_08bda228(uVar9,*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x18),
                               *(undefined8 *)puVar1,0);
          lVar14 = *unaff_x22;
          plVar7 = (long *)FUN_08e38844();
          if (plVar7 != (long *)0x0) {
            lVar8 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0ac09b98) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_08e38ba0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b98,0);
LAB_08e38ba0:
            puVar6 = PTR_DAT_0ac13950;
            puVar5 = PTR_DAT_0ac13940;
            puVar4 = PTR_DAT_0ac10640;
            puVar3 = PTR_DAT_0ac09ba8;
            puVar2 = PTR_DAT_0ac09ba0;
            puVar1 = PTR_DAT_0ac097b0;
            in_stack_00000018 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
            in_stack_00000010 = &stack0x00000018;
            in_stack_00000008 = 0;
            do {
              plVar7 = in_stack_00000018;
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              lVar8 = *in_stack_00000018;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_08e38c44;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)puVar3,0);
LAB_08e38c44:
              uVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
              plVar7 = in_stack_00000018;
              if ((uVar12 & 1) == 0) {
                if (in_stack_00000018 == (long *)0x0) goto LAB_08e38dec;
                lVar8 = *in_stack_00000018;
                uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar12 == 0) goto LAB_08e38dc4;
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                goto LAB_08e38dac;
              }
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              lVar8 = *in_stack_00000018;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_08e38ca8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)puVar2,0);
LAB_08e38ca8:
              auVar15 = (*(code *)*puVar10)(plVar7,puVar10[1]);
              lVar8 = FUN_04947fd0(*(undefined8 *)puVar1,5);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_049ee3d8();
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              *(undefined8 *)(lVar8 + 0x28) = auVar15._0_8_;
              thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x28),auVar15._0_8_);
              if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar4;
              thunk_FUN_049ee3d8();
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              *(undefined8 *)(lVar8 + 0x38) = auVar15._8_8_;
              thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x38),auVar15._8_8_);
              if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar6;
              thunk_FUN_049ee3d8();
              uVar11 = FUN_08bda330(lVar8,0);
              lVar14 = FUN_08bcc3c0(lVar14,uVar11,0);
            } while( true );
          }
          goto Newtonsoft_Json_JsonValidatingReader_<>c___ctor;
        }
      }
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
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_08e38de0;
    }
  }
LAB_08e38dc4:
  puVar10 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_08e38de0:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_08e38dec:
  uVar11 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac6c058,lVar14,*(undefined8 *)PTR_DAT_0ac13990,0);
  uVar9 = FUN_08bcc3c0(uVar9,uVar11,0);
  FUN_08bda228(uVar9,*(undefined8 *)PTR_DAT_0ac6c060,*(undefined8 *)(unaff_x19 + 0x28),
               *(undefined8 *)PTR_DAT_0ac0f430,0);
  return;
}


