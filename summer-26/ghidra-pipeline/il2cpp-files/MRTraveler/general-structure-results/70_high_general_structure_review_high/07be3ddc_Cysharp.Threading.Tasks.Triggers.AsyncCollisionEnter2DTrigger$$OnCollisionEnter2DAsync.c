/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnter2DTrigger$$OnCollisionEnter2DAsync
ENTRY_POINT: 07be3ddc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


undefined8
Cysharp_Threading_Tasks_Triggers_AsyncCollisionEnter2DTrigger__OnCollisionEnter2DAsync(void)

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
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  FUN_07be41c4();
  puVar7 = PTR_DAT_08ee3148;
  puVar6 = PTR_DAT_08ee3140;
  puVar5 = PTR_DAT_08ee3128;
  if (lVar13 != 0) {
    iVar14 = 0;
    do {
      while (*(long *)(lVar13 + 0x18) == 0) {
        FUN_07be42f4();
LAB_07be3f74:
        if (*(int *)(unaff_x19 + 0x38) == 0) {
          FUN_07be4d2c();
          FUN_07be4d90();
          FUN_07bd7c84(&stack0x00000040);
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000070 = in_stack_00000040;
          in_stack_00000080 = in_stack_00000050;
          auVar16 = FUN_07bd8030();
          lVar13 = auVar16._8_8_;
          uVar4 = *(uint *)(unaff_x20 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_08e693f0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if ((uVar4 >> 9 & 1) == 0) {
            uVar8 = FUN_070c211c();
          }
          else {
            uVar8 = FUN_070c20bc(0);
          }
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (lVar13 != 0) {
            if (*(int *)(lVar13 + 0x10) < 1) {
              uVar9 = 0;
            }
            else {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3450);
              FUN_07bce968(uVar9,lVar13,(auVar16._0_8_ & 0xff) != 0,uVar4 >> 6 & 1,uVar8,0);
            }
            FUN_07bd8320();
            _in_stack_00000060 = FUN_05e2d908();
            uVar10 = FUN_05a26614(&stack0x00000060,*(undefined8 *)PTR_DAT_08ee3448);
            uVar3 = *(undefined4 *)(unaff_x19 + 0x58);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
            uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
            in_stack_00000030 = in_stack_00000080;
            in_stack_00000028 = in_stack_00000078;
            in_stack_00000020 = in_stack_00000070;
            uVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3458);
            Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter__get_IsCompleted
                      (uVar11,uVar10,uVar8,uVar3,uVar1,in_w9,uVar9,&stack0x00000020);
            return uVar11;
          }
          goto LAB_07be4168;
        }
        uVar4 = *(int *)(unaff_x19 + 0x38) - 1;
        *(uint *)(unaff_x19 + 0x38) = uVar4;
        if (*(uint *)(unaff_x19 + 0x28) <= uVar4) {
LAB_07be416c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 == 0) goto LAB_07be4168;
        iVar14 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4);
        FUN_07be42f4();
        iVar14 = iVar14 + 1;
        if (lVar13 == 0) goto LAB_07be4168;
      }
      if (*(int *)(*(long *)(lVar13 + 0x18) + 0x18) <= iVar14) goto LAB_07be3f74;
      FUN_07be42f4();
      if (*(long *)(lVar13 + 0x18) == 0) break;
      lVar13 = FUN_05212a24(*(long *)(lVar13 + 0x18),iVar14,*(undefined8 *)puVar5);
      lVar15 = *(long *)puVar7;
      uVar4 = *(uint *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        FUN_03cf1244(lVar12);
      }
      uVar2 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar2 <= (int)uVar4) {
        lVar12 = *(long *)(lVar15 + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03cf1244();
        }
        FUN_05e2da78(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x38));
        uVar2 = *(uint *)(unaff_x19 + 0x28);
      }
      if (uVar2 <= uVar4) goto LAB_07be416c;
      *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4) = iVar14;
      iVar14 = 0;
      *(uint *)(unaff_x19 + 0x38) = uVar4 + 1;
    } while (lVar13 != 0);
  }
LAB_07be4168:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


