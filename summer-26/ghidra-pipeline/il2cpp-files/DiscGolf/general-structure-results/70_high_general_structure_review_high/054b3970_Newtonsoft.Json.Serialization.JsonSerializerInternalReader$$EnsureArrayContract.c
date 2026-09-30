/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 054b3970
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  long *unaff_x19;
  long lVar7;
  undefined8 unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auVar8 [16];
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  uint3 uStack0000000000000088;
  undefined5 uStack000000000000008b;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined4 *in_stack_000000a8;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = unaff_x21;
  do {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    _uStack0000000000000088 = 0;
    in_stack_00000080 = auVar8._0_8_;
    LeanTween__value(&stack0x00000080,auVar8._0_8_);
    uStack0000000000000088 = (uint3)auVar8._8_2_;
    in_stack_00000098 = _uStack0000000000000088;
    in_stack_00000090 = in_stack_00000080;
    LeanTween__value(&stack0x00000090,0);
    LeanTween__value(&stack0x00000090,0);
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    uVar5 = FUN_05415d34(&stack0x00000050,0);
    if ((uVar5 & 1) == 0) {
      in_stack_00000078._4_4_ = 1;
      *in_stack_000000a8 = 1;
      *(ulong *)(in_stack_000000a8 + 0x18) = in_stack_00000058;
      *(undefined8 *)(in_stack_000000a8 + 0x16) = in_stack_00000050;
      LeanTween__value(in_stack_000000a8 + 0x16,0);
      puVar3 = in_stack_000000a8;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x23,extraout_x1_00,in_stack_000000a8);
      }
      FUN_0353b800(puVar3 + 2,&stack0x00000050,in_stack_000000a8,*(undefined8 *)PTR_DAT_06a216a0);
LAB_054b3acc:
      iVar6 = 7;
LAB_054b3ad0:
      FUN_02cf4dd4(&stack0x00000028);
      if ((iVar6 == 0) || (iVar6 == 10)) {
        *in_stack_000000a8 = 0xfffffffe;
        *(undefined8 *)(in_stack_000000a8 + 0x10) = 0;
        LeanTween__value(in_stack_000000a8 + 0x10,0);
        puVar3 = in_stack_000000a8;
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05410914(puVar3 + 2,0);
      }
      return;
    }
    FUN_05415e74(&stack0x00000050,0);
    in_stack_00000020 = 0;
    lVar7 = *(long *)(in_stack_000000a8 + 0x10);
    if (lVar7 == 0) {
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
    }
    else {
      in_stack_00000018 = lVar7;
      LeanTween__value(&stack0x00000018,lVar7);
      in_stack_00000020 = *(long *)(lVar7 + 0x18) << 0x20;
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar8 = (**(code **)(*unaff_x19 + 0x2e8))();
    lVar7 = *unaff_x24;
    in_stack_00000080 = 0;
    _uStack0000000000000088 = 0;
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_00000080 = auVar8._0_8_;
    LeanTween__value(&stack0x00000080,auVar8._0_8_);
    uVar2 = in_stack_00000080;
    uVar5 = _uStack0000000000000088 >> 0x30;
    _uStack0000000000000088 = auVar8._8_6_;
    _uStack0000000000000088 = CONCAT26((short)uVar5,_uStack0000000000000088) & 0xff00ffffffffffff;
    uVar5 = _uStack0000000000000088;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_00000098 = uVar5;
    in_stack_00000090 = uVar2;
    LeanTween__value(&stack0x00000090,0);
    uVar5 = in_stack_00000098;
    uVar2 = in_stack_00000090;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    if ((*(byte *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_00000090 = uVar2;
    in_stack_00000098 = uVar5;
    LeanTween__value(&stack0x00000090,0);
    lVar7 = *(long *)(*unaff_x26 + 0x20);
    in_stack_00000068 = in_stack_00000098;
    in_stack_00000060 = in_stack_00000090;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    uVar5 = FUN_04a45dd8(&stack0x00000060,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    if ((uVar5 & 1) == 0) {
      in_stack_00000078._4_4_ = 0;
      *in_stack_000000a8 = 0;
      *(ulong *)(in_stack_000000a8 + 0x14) = in_stack_00000068;
      *(undefined8 *)(in_stack_000000a8 + 0x12) = in_stack_00000060;
      LeanTween__value(in_stack_000000a8 + 0x12,0);
      puVar3 = in_stack_000000a8;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x23,extraout_x1,in_stack_000000a8);
      }
      FUN_03536f54(puVar3 + 2,&stack0x00000060,in_stack_000000a8,*(undefined8 *)PTR_DAT_06a216a8);
      goto LAB_054b3acc;
    }
    lVar7 = *(long *)(*unaff_x27 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02dcfd18();
    }
    uVar4 = FUN_04a45f04(&stack0x00000060,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    if (uVar4 == 0) {
      iVar6 = 10;
      goto LAB_054b3ad0;
    }
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    plVar1 = *(long **)(in_stack_000000a8 + 0xe);
    lVar7 = *(long *)(in_stack_000000a8 + 0x10);
    if (lVar7 == 0) {
      FUN_05508bc8(0);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
    }
    else {
      if (*(uint *)(lVar7 + 0x18) < uVar4) {
        FUN_05508bc8(0);
      }
      in_stack_00000018 = lVar7;
      LeanTween__value(&stack0x00000018,lVar7);
      in_stack_00000020 = (ulong)uVar4 << 0x20;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar8 = (**(code **)(*plVar1 + 0x328))
                       (plVar1,in_stack_00000018,in_stack_00000020,
                        *(undefined8 *)(in_stack_000000a8 + 0xc),*(undefined8 *)(*plVar1 + 0x330));
  } while( true );
}


