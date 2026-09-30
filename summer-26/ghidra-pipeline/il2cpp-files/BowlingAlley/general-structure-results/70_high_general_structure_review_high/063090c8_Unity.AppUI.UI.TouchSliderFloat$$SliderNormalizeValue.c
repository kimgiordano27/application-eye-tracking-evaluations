/*
FUNCTION_NAME: Unity.AppUI.UI.TouchSliderFloat$$SliderNormalizeValue
ENTRY_POINT: 063090c8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


undefined8 Unity_AppUI_UI_TouchSliderFloat__SliderNormalizeValue(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *plVar13;
  long lVar14;
  int iVar15;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  while( true ) {
    uStack0000000000000040 = *(undefined4 *)(param_1 + 0x20);
    plVar13 = *(long **)(unaff_x19 + 0x50);
    uVar8 = thunk_FUN_032a52d0(*unaff_x25,&stack0x00000040);
    in_stack_00000058._4_4_ = (undefined4)unaff_x24;
    uVar9 = thunk_FUN_032a52d0(*unaff_x25,(long)&stack0x00000058 + 4);
    if (plVar13 == (long *)0x0) break;
    (**(code **)(*plVar13 + 0x318))(plVar13,uVar8,uVar9,*(undefined8 *)(*plVar13 + 800));
    param_1 = *(long *)(unaff_x20 + 0x20);
    if (param_1 == 0) break;
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x24) {
      lVar14 = *(long *)(unaff_x20 + 0x10);
      FUN_0630947c();
      puVar7 = System_Net_FileWebResponse_TypeInfo;
      puVar6 = System_Net_FileWebRequestCreator_TypeInfo;
      puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
      if (lVar14 != 0) {
        iVar15 = 0;
        goto LAB_06309164;
      }
      break;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) goto LAB_06309424;
    param_1 = param_1 + unaff_x24 * 4;
  }
  goto LAB_06309420;
LAB_06309164:
  do {
    if (*(long *)(lVar14 + 0x18) == 0) {
      FUN_063095ac();
LAB_0630922c:
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        FUN_06309fe4();
        FUN_0630a048();
        FUN_062fcf44(&stack0x00000040);
        in_stack_00000070 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000050;
        auVar17 = FUN_062fd2f0();
        lVar14 = auVar17._8_8_;
        uVar4 = *(uint *)(unaff_x20 + 0x40);
        if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if ((uVar4 >> 9 & 1) == 0) {
          uVar8 = FUN_058e6040();
        }
        else {
          uVar8 = FUN_058e6bb4(0);
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x10) < 1) {
            uVar9 = 0;
          }
          else {
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Net_FtpWebRequest_TypeInfo);
            FUN_062f3c28(uVar9,lVar14,(auVar17._0_8_ & 0xff) != 0,uVar4 >> 6 & 1,uVar8,0);
          }
          FUN_062fd5e0();
          _in_stack_00000060 = FUN_04caecb8();
          uVar10 = FUN_04970628(&stack0x00000060,*(undefined8 *)System_Net_FtpStatusCode_TypeInfo);
          uVar3 = *(undefined4 *)(unaff_x19 + 0x58);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
          in_stack_00000030 = in_stack_00000080;
          in_stack_00000028 = in_stack_00000078;
          in_stack_00000020 = in_stack_00000070;
          uVar11 = thunk_FUN_032a56a0(*(undefined8 *)System_Net_FtpWebRequestCreator_TypeInfo);
          FUN_062fcd34(uVar11,uVar10,uVar8,uVar3,uVar1,unaff_w21,uVar9,&stack0x00000020);
          return uVar11;
        }
        break;
      }
      uVar4 = *(int *)(unaff_x19 + 0x38) - 1;
      *(uint *)(unaff_x19 + 0x38) = uVar4;
      if (*(uint *)(unaff_x19 + 0x28) <= uVar4) {
LAB_06309424:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) break;
      iVar15 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4);
      FUN_063095ac();
      iVar15 = iVar15 + 1;
    }
    else {
      if (*(int *)(*(long *)(lVar14 + 0x18) + 0x18) <= iVar15) goto LAB_0630922c;
      FUN_063095ac();
      if (*(long *)(lVar14 + 0x18) == 0) break;
      lVar14 = FUN_041e29a8(*(long *)(lVar14 + 0x18),iVar15,*(undefined8 *)puVar5);
      lVar16 = *(long *)puVar7;
      uVar4 = *(uint *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar16 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        FUN_032934b8(lVar12);
      }
      uVar2 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar2 <= (int)uVar4) {
        lVar12 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_032934b8();
        }
        FUN_04caee28(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x38));
        uVar2 = *(uint *)(unaff_x19 + 0x28);
      }
      if (uVar2 <= uVar4) goto LAB_06309424;
      *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4) = iVar15;
      iVar15 = 0;
      *(uint *)(unaff_x19 + 0x38) = uVar4 + 1;
    }
  } while (lVar14 != 0);
LAB_06309420:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


