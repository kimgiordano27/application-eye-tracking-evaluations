/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 04fcb974
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__BuildStateArray(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x19;
  uint unaff_w20;
  ulong uVar7;
  uint unaff_w21;
  long *unaff_x22;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  uint uVar9;
  long unaff_x29;
  undefined1 auVar10 [16];
  
  do {
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
LAB_04fcbc34:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar3 = (**(code **)(*param_1 + 0x178))(param_1,unaff_w20,*(undefined8 *)(*param_1 + 0x180));
    auVar10 = FUN_03c32434(uVar3,*unaff_x26);
    FUN_03c31f20(unaff_x29 + -0x20,auVar10._0_8_,auVar10._8_8_,*unaff_x27);
    if (*(long *)(unaff_x29 + -0x10) != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar8 = *unaff_x25;
      lVar4 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d8720c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d8720c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar4 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d8720c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d8720c();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_04fcbc34;
      }
      (**(code **)(*plVar5 + 0x188))
                (plVar5,*(undefined8 *)(unaff_x29 + -0x10),0,*(undefined8 *)(*plVar5 + 400));
    }
    uVar6 = *unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x10) = uVar3;
    auVar10 = FUN_03c32434(uVar3,uVar6);
    uVar7 = auVar10._8_8_;
    *(undefined1 (*) [16])(unaff_x29 + -0x20) = auVar10;
    uVar9 = unaff_w28;
    do {
      lVar4 = *unaff_x22;
      if ((uint)uVar7 < uVar9) {
        FUN_05023354(0);
      }
      if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      if (unaff_x19 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_04fcbc34;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x358))();
      unaff_w28 = iVar2 + uVar9;
      if (iVar2 == 0) {
        lVar4 = *(long *)PTR_DAT_06651108;
        if (*(uint *)(unaff_x29 + -0x18) < uVar9) {
          FUN_05023354(0);
        }
        uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
        if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        puVar1 = PTR_DAT_06659828;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
        *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar9;
        uVar3 = FUN_0318a730(unaff_x29 + -0x30,*(undefined8 *)puVar1);
        FUN_02cae1f4(unaff_x29 + -0x40);
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return uVar3;
        }
        goto LAB_04fcbc34;
      }
      uVar7 = (ulong)*(uint *)(unaff_x29 + -0x18);
      uVar9 = unaff_w28;
    } while (unaff_w28 != *(uint *)(unaff_x29 + -0x18));
    unaff_w20 = unaff_w28 * 2;
    if (unaff_w21 <= unaff_w20) {
      if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      unaff_w20 = FUN_05003fd0(0x7fffffc7,unaff_w28 + 1,0);
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar8 = *unaff_x25;
    lVar4 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar4 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d8720c();
    }
    param_1 = *(long **)(lVar4 + 0xb8);
  } while( true );
}


