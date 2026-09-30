/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 04d3f7a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  long unaff_x29;
  undefined1 auVar14 [16];
  undefined1 auStack_200 [512];
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x7e0));
  FUN_02b3c81c(PTR_DAT_063323b0);
  FUN_02b3c81c(PTR_DAT_063277f0);
  FUN_02b3c81c(PTR_DAT_0632a688);
  FUN_02b3c81c(PTR_DAT_0632a060);
  *(undefined1 *)(unaff_x20 + 0x67a) = 1;
  puVar5 = PTR_DAT_06332060;
  puVar3 = PTR_DAT_0632a060;
  puVar2 = PTR_DAT_06322b00;
  puVar1 = PTR_DAT_06322ae8;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  puVar4 = PTR_DAT_0632fee0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  memset(auStack_200,0,0x200);
  uVar10 = DAT_01030e30;
  *(undefined1 **)(unaff_x29 + -0x20) = auStack_200;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x10;
  uVar6 = 0;
  do {
    uVar12 = uVar6;
    uVar6 = *(uint *)(unaff_x29 + -0x18);
    if (uVar12 == uVar6) {
      uVar6 = uVar12 << 1;
      if (0x7fffffc7 < uVar6) {
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar6 = FUN_04d7c48c(0x7fffffc7,uVar12 + 1,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar13 = *(long *)puVar1;
      lVar8 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar8 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      plVar9 = (long *)**(long **)(lVar8 + 0xb8);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04d3fbe0;
      }
      uVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x180));
      auVar14 = FUN_03e881b8(uVar10,*(undefined8 *)puVar3);
      FUN_03e87ca4(unaff_x29 + -0x20,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar5);
      if (*(long *)(unaff_x29 + -0x10) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar13 = *(long *)puVar1;
        lVar8 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02b76218();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02b76218();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar8 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02b76218();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02b76218();
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04d3fbe0;
        }
        (**(code **)(*plVar9 + 0x188))
                  (plVar9,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar9 + 400));
      }
      uVar11 = *(undefined8 *)puVar3;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar10;
      auVar14 = FUN_03e881b8(uVar10,uVar11);
      uVar6 = auVar14._8_4_;
      *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar14;
    }
    lVar8 = *(long *)puVar4;
    if (uVar6 < uVar12) {
      FUN_04d9bcc4(0);
    }
    if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (unaff_x19 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04d3fbe0;
    }
    iVar7 = (**(code **)(*unaff_x19 + 0x348))();
    uVar6 = iVar7 + uVar12;
  } while (iVar7 != 0);
  lVar8 = *(long *)PTR_DAT_063277e0;
  if (*(uint *)(unaff_x29 + -0x18) < uVar12) {
    FUN_04d9bcc4(0);
  }
  uVar10 = *(undefined8 *)(unaff_x29 + -0x20);
  if ((*(ushort *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  puVar1 = PTR_DAT_063323b0;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar12;
  uVar10 = FUN_03167b88(unaff_x29 + -0x30,*(undefined8 *)puVar1);
  FUN_02a9dd9c(unaff_x29 + -0x40);
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar10;
  }
LAB_04d3fbe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


