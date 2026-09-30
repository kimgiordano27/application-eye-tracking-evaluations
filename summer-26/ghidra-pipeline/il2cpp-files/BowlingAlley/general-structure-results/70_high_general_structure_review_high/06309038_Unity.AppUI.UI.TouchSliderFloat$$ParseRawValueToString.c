/*
FUNCTION_NAME: Unity.AppUI.UI.TouchSliderFloat$$ParseRawValueToString
ENTRY_POINT: 06309038
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 Unity_AppUI_UI_TouchSliderFloat__ParseRawValueToString(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
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
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(System_Net_FtpWebResponse_TypeInfo);
  thunk_FUN_032e1da0(System_Net_FileWebStream_TypeInfo);
  thunk_FUN_032e1da0(System_IO_Enumeration_FileSystemName_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x716) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (unaff_x20 == 0) goto LAB_06309420;
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 0x28);
  if (lVar12 == 0) {
LAB_06309090:
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    uVar15 = (ulong)uVar2;
  }
  else {
    uVar15 = *(ulong *)(lVar12 + 0x18);
    if (uVar2 == (uint)uVar15) goto LAB_06309090;
    uVar14 = uVar15 & 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x18);
    puVar5 = PTR_DAT_07279558;
    if (0 < (int)(uint)uVar15) {
      uVar18 = 0;
      do {
        if (uVar14 <= uVar18) goto LAB_06309424;
        uStack0000000000000040 = *(undefined4 *)(lVar12 + uVar18 * 4 + 0x20);
        plVar16 = *(long **)(unaff_x19 + 0x50);
        uVar8 = thunk_FUN_032a52d0(*(undefined8 *)puVar5,&stack0x00000040);
        in_stack_00000058._4_4_ = (undefined4)uVar18;
        uVar9 = thunk_FUN_032a52d0(*(undefined8 *)puVar5,(long)&stack0x00000058 + 4);
        if (plVar16 == (long *)0x0) goto LAB_06309420;
        (**(code **)(*plVar16 + 0x318))(plVar16,uVar8,uVar9,*(undefined8 *)(*plVar16 + 800));
        lVar12 = *(long *)(unaff_x20 + 0x20);
        if (lVar12 == 0) goto LAB_06309420;
        uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x10);
  FUN_0630947c();
  puVar7 = System_Net_FileWebResponse_TypeInfo;
  puVar6 = System_Net_FileWebRequestCreator_TypeInfo;
  puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  if (lVar12 != 0) {
    iVar17 = 0;
    do {
      while (*(long *)(lVar12 + 0x18) == 0) {
        FUN_063095ac();
LAB_0630922c:
        if (*(int *)(unaff_x19 + 0x38) == 0) {
          FUN_06309fe4();
          FUN_0630a048();
          FUN_062fcf44(&stack0x00000040);
          in_stack_00000070 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000050;
          auVar20 = FUN_062fd2f0();
          lVar12 = auVar20._8_8_;
          uVar2 = *(uint *)(unaff_x20 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if ((uVar2 >> 9 & 1) == 0) {
            uVar8 = FUN_058e6040();
          }
          else {
            uVar8 = FUN_058e6bb4(0);
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x10) < 1) {
              uVar9 = 0;
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Net_FtpWebRequest_TypeInfo);
              FUN_062f3c28(uVar9,lVar12,(auVar20._0_8_ & 0xff) != 0,uVar2 >> 6 & 1,uVar8,0);
            }
            FUN_062fd5e0();
            _in_stack_00000060 = FUN_04caecb8();
            uVar10 = FUN_04970628(&stack0x00000060,*(undefined8 *)System_Net_FtpStatusCode_TypeInfo)
            ;
            uVar4 = *(undefined4 *)(unaff_x19 + 0x58);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
            uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
            in_stack_00000030 = in_stack_00000080;
            in_stack_00000028 = in_stack_00000078;
            in_stack_00000020 = in_stack_00000070;
            uVar11 = thunk_FUN_032a56a0(*(undefined8 *)System_Net_FtpWebRequestCreator_TypeInfo);
            FUN_062fcd34(uVar11,uVar10,uVar8,uVar4,uVar1,uVar15 & 0xffffffff,uVar9,&stack0x00000020)
            ;
            return uVar11;
          }
          goto LAB_06309420;
        }
        uVar2 = *(int *)(unaff_x19 + 0x38) - 1;
        *(uint *)(unaff_x19 + 0x38) = uVar2;
        if (*(uint *)(unaff_x19 + 0x28) <= uVar2) {
LAB_06309424:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar12 = *(long *)(lVar12 + 0x38);
        if (lVar12 == 0) goto LAB_06309420;
        iVar17 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar2 * 4);
        FUN_063095ac();
        iVar17 = iVar17 + 1;
        if (lVar12 == 0) goto LAB_06309420;
      }
      if (*(int *)(*(long *)(lVar12 + 0x18) + 0x18) <= iVar17) goto LAB_0630922c;
      FUN_063095ac();
      if (*(long *)(lVar12 + 0x18) == 0) break;
      lVar12 = FUN_041e29a8(*(long *)(lVar12 + 0x18),iVar17,*(undefined8 *)puVar5);
      lVar19 = *(long *)puVar7;
      uVar2 = *(uint *)(unaff_x19 + 0x38);
      lVar13 = *(long *)(lVar19 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        FUN_032934b8(lVar13);
      }
      uVar3 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar3 <= (int)uVar2) {
        lVar13 = *(long *)(lVar19 + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_032934b8();
        }
        FUN_04caee28(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x38));
        uVar3 = *(uint *)(unaff_x19 + 0x28);
      }
      if (uVar3 <= uVar2) goto LAB_06309424;
      *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar2 * 4) = iVar17;
      iVar17 = 0;
      *(uint *)(unaff_x19 + 0x38) = uVar2 + 1;
    } while (lVar12 != 0);
  }
LAB_06309420:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


