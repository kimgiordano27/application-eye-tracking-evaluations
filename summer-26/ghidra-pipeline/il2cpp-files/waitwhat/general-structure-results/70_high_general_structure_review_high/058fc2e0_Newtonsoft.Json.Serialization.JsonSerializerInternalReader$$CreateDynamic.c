/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 058fc2e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(long param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  long *unaff_x19;
  ulong uVar6;
  long lVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  do {
                    /* try { // try from 058fc2e0 to 059fcd07 has its CatchHandler @ 058faf8c */
    auVar8 = (**(code **)(param_1 + 0x2e8))();
    lVar7 = *unaff_x24;
    uVar3 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    if ((uVar3 & 1) == 0) {
      FUN_031c09d4();
      uVar3 = *(ushort *)(*(long *)(lVar7 + 0x20) + 0x135);
    }
    if ((uVar3 & 1) == 0) {
      FUN_031c09d4();
    }
    uVar6 = auVar8._8_8_ & 0xffffffffffff;
    if ((*(ushort *)(*(long *)(*unaff_x25 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    lVar7 = *(long *)(*unaff_x26 + 0x20);
    in_stack_00000040 = auVar8._0_8_;
    in_stack_00000048 = uVar6;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    auVar8 = FUN_04daa5a8(&stack0x00000040,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    puVar4 = in_stack_00000068;
    if ((auVar8._0_8_ & 1) == 0) {
      in_stack_00000058._4_4_ = 0;
      lVar7 = *unaff_x23;
      *in_stack_00000068 = 0;
      *(ulong *)(in_stack_00000068 + 0x14) = in_stack_00000048;
      *(undefined8 *)(in_stack_00000068 + 0x12) = in_stack_00000040;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar7,auVar8._8_8_,in_stack_00000068);
      }
      FUN_039cc4f0(puVar4 + 2,&stack0x00000040,in_stack_00000068,*(undefined8 *)PTR_DAT_07104d20);
LAB_058fc4d4:
      iVar5 = 7;
LAB_058fc4d8:
      FUN_030e54b4(&stack0x00000008);
      puVar4 = in_stack_00000068;
      if ((iVar5 == 0) || (iVar5 == 10)) {
        iVar5 = *(int *)(*unaff_x23 + 0xe4);
        *in_stack_00000068 = 0xfffffffe;
        *(undefined8 *)(in_stack_00000068 + 0x10) = 0;
        if (iVar5 == 0) {
          thunk_FUN_031e5338();
        }
        FUN_0585acf4(puVar4 + 2,0);
      }
      return;
    }
    lVar7 = *(long *)(*unaff_x27 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_031c09d4();
    }
    auVar8 = FUN_04daa6d4(&stack0x00000040,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
    lVar7 = auVar8._0_8_;
    if (auVar8._0_4_ == 0) {
      iVar5 = 10;
      goto LAB_058fc4d8;
    }
    plVar1 = *(long **)(in_stack_00000068 + 0xe);
    lVar2 = *(long *)(in_stack_00000068 + 0x10);
    if (lVar2 == 0) {
      auVar8 = FUN_05950030(0);
      lVar7 = 0;
    }
    else {
      if (*(uint *)(lVar2 + 0x18) < auVar8._0_4_) {
        auVar8 = FUN_05950030(0);
      }
      lVar7 = lVar7 << 0x20;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8(auVar8._0_8_,auVar8._8_8_,lVar7);
    }
    auVar8 = (**(code **)(*plVar1 + 0x328))
                       (plVar1,lVar2,lVar7,*(undefined8 *)(in_stack_00000068 + 0xc),
                        *(undefined8 *)(*plVar1 + 0x330));
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    in_stack_00000038 = auVar8._8_8_ & 0xffff;
    in_stack_00000030 = auVar8._0_8_;
    auVar8 = FUN_05869024(&stack0x00000030,0);
    puVar4 = in_stack_00000068;
    if ((auVar8._0_8_ & 1) == 0) {
      lVar7 = *unaff_x23;
      in_stack_00000058._4_4_ = 1;
      *in_stack_00000068 = 1;
      *(ulong *)(in_stack_00000068 + 0x18) = in_stack_00000038;
      *(undefined8 *)(in_stack_00000068 + 0x16) = in_stack_00000030;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar7,auVar8._8_8_,in_stack_00000068);
      }
      FUN_039cf374(puVar4 + 2,&stack0x00000030,in_stack_00000068,*(undefined8 *)PTR_DAT_07104d18);
      goto LAB_058fc4d4;
    }
    FUN_05869164(&stack0x00000030,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_1 = *unaff_x19;
  } while( true );
}


