/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 04d3f844
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w8;
  uint uVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x10;
  do {
    uVar8 = in_w8;
    uVar2 = *(uint *)(unaff_x29 + -0x18);
    if (uVar8 == uVar2) {
      uVar2 = uVar8 << 1;
      if ((unaff_w21 & 0xffff | 0x7fff0000) <= uVar2) {
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = FUN_04d7c48c(0x7fffffc7,uVar8 + 1,0);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar9 = *unaff_x25;
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04d3fbe0;
      }
      uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x180));
      auVar10 = FUN_03e881b8(uVar6,*unaff_x26);
      FUN_03e87ca4(unaff_x29 + -0x20,auVar10._0_8_,auVar10._8_8_,*unaff_x27);
      if (*(long *)(unaff_x29 + -0x10) != 0) {
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar9 = *unaff_x25;
        lVar4 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar4 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
        }
        plVar5 = (long *)**(long **)(lVar4 + 0xb8);
        if (plVar5 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04d3fbe0;
        }
        (**(code **)(*plVar5 + 0x188))
                  (plVar5,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar5 + 400));
      }
      uVar7 = *unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar6;
      auVar10 = FUN_03e881b8(uVar6,uVar7);
      uVar2 = auVar10._8_4_;
      *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar10;
    }
    lVar4 = *unaff_x22;
    if (uVar2 < uVar8) {
      FUN_04d9bcc4(0);
    }
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (unaff_x19 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04d3fbe0;
    }
    iVar3 = (**(code **)(*unaff_x19 + 0x348))();
    in_w8 = iVar3 + uVar8;
  } while (iVar3 != 0);
  lVar4 = *(long *)PTR_DAT_063277e0;
  if (*(uint *)(unaff_x29 + -0x18) < uVar8) {
    FUN_04d9bcc4(0);
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  puVar1 = PTR_DAT_063323b0;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar8;
  uVar6 = FUN_03167b88(unaff_x29 + -0x30,*(undefined8 *)puVar1);
  FUN_02a9dd9c(unaff_x29 + -0x40);
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
LAB_04d3fbe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


