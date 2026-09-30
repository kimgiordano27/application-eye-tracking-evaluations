/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderInt.UxmlSerializedData$$Deserialize
ENTRY_POINT: 058b0528
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_AppUI_UI_RangeSliderInt_UxmlSerializedData__Deserialize(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  int iVar15;
  undefined8 unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
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
  
  while (uVar12 = thunk_FUN_02f44ec4(param_1,param_2), unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x318))(unaff_x22,unaff_x23,uVar12,*(undefined8 *)(*unaff_x22 + 800));
    lVar14 = *(long *)(unaff_x20 + 0x20);
    unaff_x24 = unaff_x24 + 1;
    if (lVar14 == 0) break;
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)unaff_x24) {
      lVar14 = *(long *)(unaff_x20 + 0x10);
      FUN_058b05b4();
      puVar8 = Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Value__;
      puVar7 = Method_System_Collections_Generic_LinkedListNode<WebOperation>_get_Next__;
      puVar6 = Method_System_Collections_Generic_LinkedListNode<WeakReference>_get_Value__;
      puVar5 = PTR_DAT_067c9fd8;
      if (lVar14 != 0) {
        iVar15 = 0;
        goto LAB_058b0210;
      }
      break;
    }
    if (*(uint *)(lVar14 + 0x18) <= unaff_x24) goto LAB_058b055c;
    unaff_x22 = *(long **)(unaff_x19 + 0x50);
    uStack0000000000000040 = *(undefined4 *)(lVar14 + unaff_x24 * 4 + 0x20);
    unaff_x23 = thunk_FUN_02f44ec4(*(undefined8 *)(unaff_x25 + 0x48),&stack0x00000040);
    param_1 = *(undefined8 *)(unaff_x25 + 0x48);
    param_2 = (long)&stack0x00000058 + 4;
    in_stack_00000058._4_4_ = (undefined4)unaff_x24;
  }
  goto LAB_058b0328;
LAB_058b0210:
  do {
    if (*(long *)(lVar14 + 0x18) == 0) {
      FUN_058b06f4();
LAB_058b02dc:
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        FUN_058b0f14();
        FUN_058b0f78();
        FUN_058a4710(&stack0x00000040);
        in_stack_00000070 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000078 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000050;
        auVar17 = FUN_058a4aa4();
        lVar14 = auVar17._8_8_;
        uVar4 = *(uint *)(unaff_x20 + 0x40);
        if ((uVar4 >> 9 & 1) == 0) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_05064e74(0);
        }
        else {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_050656a0(0);
        }
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x10) < 1) {
            uVar9 = 0;
          }
          else {
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                        Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>__ctor__
                                      );
            FUN_0589c7f8(uVar9,lVar14,(auVar17._0_8_ & 0xff) != 0,uVar4 >> 6 & 1,uVar12,0);
          }
          FUN_058a4db0();
          _in_stack_00000060 = FUN_045440e0();
          uVar10 = FUN_041983cc(&stack0x00000060,
                                *(undefined8 *)
                                 Method_UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_Return__
                               );
          uVar3 = *(undefined4 *)(unaff_x19 + 0x58);
          uVar12 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
          in_stack_00000028 = in_stack_00000078;
          in_stack_00000020 = in_stack_00000070;
          in_stack_00000030 = in_stack_00000080;
          uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Clear__
                                     );
          FUN_058a4554(uVar11,uVar10,uVar12,uVar3,uVar1,unaff_w21,uVar9,&stack0x00000020);
          return uVar11;
        }
        break;
      }
      uVar4 = *(int *)(unaff_x19 + 0x38) - 1;
      *(uint *)(unaff_x19 + 0x38) = uVar4;
      if (*(uint *)(unaff_x19 + 0x28) <= uVar4) {
LAB_058b055c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) break;
      iVar15 = *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4);
      FUN_058b06f4();
      iVar15 = iVar15 + 1;
    }
    else {
      if (*(int *)(*(long *)(lVar14 + 0x18) + 0x18) <= iVar15) goto LAB_058b02dc;
      FUN_058b06f4();
      if (*(long *)(lVar14 + 0x18) == 0) break;
      lVar14 = FUN_03abf644(*(long *)(lVar14 + 0x18),iVar15,*(undefined8 *)puVar6);
      lVar16 = *(long *)puVar8;
      uVar4 = *(uint *)(unaff_x19 + 0x38);
      lVar13 = *(long *)(lVar16 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        FUN_02f41e9c(lVar13);
      }
      uVar2 = *(uint *)(unaff_x19 + 0x28);
      if ((int)uVar2 <= (int)uVar4) {
        lVar13 = *(long *)(lVar16 + 0x20);
        if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_02f41e9c();
        }
        FUN_04544278(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x38));
        uVar2 = *(uint *)(unaff_x19 + 0x28);
      }
      if (uVar2 <= uVar4) goto LAB_058b055c;
      *(int *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar4 * 4) = iVar15;
      iVar15 = 0;
      *(uint *)(unaff_x19 + 0x38) = uVar4 + 1;
    }
  } while (lVar14 != 0);
LAB_058b0328:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


