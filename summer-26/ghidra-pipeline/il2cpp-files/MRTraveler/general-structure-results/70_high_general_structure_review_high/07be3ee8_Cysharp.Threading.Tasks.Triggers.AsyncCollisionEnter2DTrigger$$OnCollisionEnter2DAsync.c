/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnter2DTrigger$$OnCollisionEnter2DAsync
ENTRY_POINT: 07be3ee8
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
Cysharp_Threading_Tasks_Triggers_AsyncCollisionEnter2DTrigger__OnCollisionEnter2DAsync
          (long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  uint unaff_w24;
  long lVar12;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined1 auVar13 [16];
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
  
code_r0x07be3ee8:
  lVar6 = FUN_05212a24(param_1,param_2,param_3);
  lVar12 = *unaff_x28;
  uVar5 = *(uint *)(unaff_x19 + 0x38);
  lVar11 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    FUN_03cf1244(lVar11);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar2 <= (int)uVar5) {
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_05e2da78();
    uVar2 = *(uint *)(unaff_x19 + 0x28);
  }
  if (uVar2 <= uVar5) {
LAB_07be416c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  *(uint *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar5 * 4) = unaff_w24;
  unaff_w24 = 0;
  *(uint *)(unaff_x19 + 0x38) = uVar5 + 1;
  if (lVar6 != 0) {
    do {
      if (*(long *)(lVar6 + 0x18) == 0) {
        FUN_07be42f4();
      }
      else if ((int)unaff_w24 < *(int *)(*(long *)(lVar6 + 0x18) + 0x18)) goto code_r0x07be3ec0;
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        FUN_07be4d2c();
        FUN_07be4d90();
        FUN_07bd7c84(&stack0x00000040);
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000070 = in_stack_00000040;
        in_stack_00000080 = in_stack_00000050;
        auVar13 = FUN_07bd8030();
        lVar6 = auVar13._8_8_;
        uVar5 = *(uint *)(unaff_x20 + 0x40);
        if (*(int *)(*(long *)PTR_DAT_08e693f0 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((uVar5 >> 9 & 1) == 0) {
          uVar7 = FUN_070c211c();
        }
        else {
          uVar7 = FUN_070c20bc(0);
        }
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x10) < 1) {
            uVar8 = 0;
          }
          else {
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3450);
            FUN_07bce968(uVar8,lVar6,(auVar13._0_8_ & 0xff) != 0,uVar5 >> 6 & 1,uVar7,0);
          }
          FUN_07bd8320();
          _in_stack_00000060 = FUN_05e2d908();
          uVar9 = FUN_05a26614(&stack0x00000060,*(undefined8 *)PTR_DAT_08ee3448);
          uVar3 = *(undefined4 *)(unaff_x19 + 0x58);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
          in_stack_00000030 = in_stack_00000080;
          in_stack_00000028 = in_stack_00000078;
          in_stack_00000020 = in_stack_00000070;
          uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee3458);
          Cysharp_Threading_Tasks_UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter__get_IsCompleted
                    (uVar10,uVar9,uVar7,uVar3,uVar1,unaff_w21,uVar8,&stack0x00000020);
          return uVar10;
        }
        break;
      }
      uVar5 = *(int *)(unaff_x19 + 0x38) - 1;
      *(uint *)(unaff_x19 + 0x38) = uVar5;
      if (*(uint *)(unaff_x19 + 0x28) <= uVar5) goto LAB_07be416c;
      lVar6 = *(long *)(lVar6 + 0x38);
      if (lVar6 == 0) break;
      iVar4 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar5 * 4);
      FUN_07be42f4();
      unaff_w24 = iVar4 + 1;
      if (lVar6 == 0) break;
    } while( true );
  }
LAB_07be4168:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x07be3ec0:
  FUN_07be42f4();
  param_1 = *(long *)(lVar6 + 0x18);
  if (param_1 == 0) goto LAB_07be4168;
  param_3 = *unaff_x27;
  param_2 = (ulong)unaff_w24;
  goto code_r0x07be3ee8;
}


