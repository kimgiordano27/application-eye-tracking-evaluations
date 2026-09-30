/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnter2DTrigger$$GetOnCollisionEnter2DAsyncHandler
ENTRY_POINT: 07be3d58
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


undefined8
Cysharp_Threading_Tasks_Triggers_AsyncCollisionEnter2DTrigger__GetOnCollisionEnter2DAsyncHandler
          (long param_1)

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
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x450));
  FUN_03c8f898(PTR_DAT_08ee3458);
  FUN_03c8f898(PTR_DAT_08ee3140);
  FUN_03c8f898(PTR_DAT_08ee3148);
  FUN_03c8f898(PTR_DAT_08ee3460);
  FUN_03c8f898(PTR_DAT_08ee3150);
  FUN_03c8f898(PTR_DAT_08ee3130);
  *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (unaff_x20 == 0) goto LAB_07be4168;
  lVar12 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 0x28);
  if (lVar12 == 0) {
LAB_07be3dd8:
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    uVar15 = (ulong)uVar2;
  }
  else {
    uVar15 = *(ulong *)(lVar12 + 0x18);
    if (uVar2 == (uint)uVar15) goto LAB_07be3dd8;
    uVar14 = uVar15 & 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x18);
    puVar5 = PTR_DAT_08e699d0;
    if (0 < (int)(uint)uVar15) {
      uVar18 = 0;
      do {
        if (uVar14 <= uVar18) goto LAB_07be416c;
        uStack0000000000000040 = *(undefined4 *)(lVar12 + uVar18 * 4 + 0x20);
        plVar16 = *(long **)(unaff_x19 + 0x50);
        uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)puVar5,&stack0x00000040);
        in_stack_00000058._4_4_ = (undefined4)uVar18;
        uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)puVar5,(long)&stack0x00000058 + 4);
        if (plVar16 == (long *)0x0) goto LAB_07be4168;
        (**(code **)(*plVar16 + 0x318))(plVar16,uVar8,uVar9,*(undefined8 *)(*plVar16 + 800));
        lVar12 = *(long *)(unaff_x20 + 0x20);
        if (lVar12 == 0) goto LAB_07be4168;
        uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x10);
  FUN_07be41c4();
  puVar7 = PTR_DAT_08ee3148;
  puVar6 = PTR_DAT_08ee3140;
  puVar5 = PTR_DAT_08ee3128;
  if (lVar12 != 0) {
    iVar17 = 0;
    do {
      while (*(long *)(lVar12 + 0x18) == 0) {
        FUN_07be42f4();
LAB_07be3f74:
        if (*(int *)(unaff_x19 + 0x38) == 0) {
          FUN_07be4d2c();
          FUN_07be4d90();
          FUN_07bd7c84(&stack0x00000040);
          in_stack_00000070 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000050;
          auVar20 = FUN_07bd8030();
          lVar12 = auVar20._8_8_;
          uVar2 = *(uint *)(unaff_x20 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_08e693f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((uVar2 >> 9 & 1) == 0) {
            uVar8 = FUN_070c211c();
          }
          else {
            uVar8 = FUN_070c20bc(0);
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x10) < 1) {
              uVar9 = 0;
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3450);
              FUN_07bce968(uVar9,lVar12,(auVar20._0_8_ & 0xff) != 0,uVar2 >> 6 & 1,uVar8,0);
            }
            FUN_07bd8320();
            _in_stack_00000060 = FUN_05e2d908();
            uVar10 = FUN_05a26614(&stack0x00000060,*(undefined8 *)PTR_DAT_08ee3448);
            uVar4 = *(undefined4 *)(unaff_x19 + 0x58);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
            uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
            in_stack_00000030 = in_stack_00000080;
            in_stack_00000028 = in_stack_00000078;
            in_stack_00000020 = in_stack_00000070;
            uVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3458);
            Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter__get_IsCompleted
                      (uVar11,uVar10,uVar8,uVar4,uVar1,uVar15 & 0xffffffff,uVar9,&stack0x00000020);
            return uVar11;
          }
          goto LAB_07be4168;
        }
        uVar2 = *(int *)(unaff_x19 + 0x38) - 1;
        *(uint *)(unaff_x19 + 0x38) = uVar2;
        if (*(uint *)(unaff_x19 + 0x28) <= uVar2) {
LAB_07be416c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar12 = *(long *)(lVar12 + 0x38);
        if (lVar12 == 0) goto LAB_07be4168;
        iVar17 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar2 * 4);
        FUN_07be42f4();
        iVar17 = iVar17 + 1;
        if (lVar12 == 0) goto LAB_07be4168;
      }
      if (*(int *)(*(long *)(lVar12 + 0x18) + 0x18) <= iVar17) goto LAB_07be3f74;
      FUN_07be42f4();
      if (*(long *)(lVar12 + 0x18) == 0) break;
      lVar12 = FUN_05212a24(*(long *)(lVar12 + 0x18),iVar17,*(undefined8 *)puVar5);
      lVar19 = *(long *)puVar7;
      uVar2 = *(uint *)(unaff_x19 + 0x38);
      lVar13 = *(long *)(lVar19 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        FUN_03cf1244(lVar13);
      }
      uVar3 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar3 <= (int)uVar2) {
        lVar13 = *(long *)(lVar19 + 0x20);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_03cf1244();
        }
        FUN_05e2da78(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x38));
        uVar3 = *(uint *)(unaff_x19 + 0x28);
      }
      if (uVar3 <= uVar2) goto LAB_07be416c;
      *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar2 * 4) = iVar17;
      iVar17 = 0;
      *(uint *)(unaff_x19 + 0x38) = uVar2 + 1;
    } while (lVar12 != 0);
  }
LAB_07be4168:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


