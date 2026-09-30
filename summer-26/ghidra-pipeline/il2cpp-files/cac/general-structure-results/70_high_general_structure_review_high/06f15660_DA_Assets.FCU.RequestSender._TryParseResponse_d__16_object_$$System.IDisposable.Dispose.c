/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<TryParseResponse>d__16<object>$$System.IDisposable.Dispose
ENTRY_POINT: 06f15660
PROGRAM: cac-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined8
DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<object>__System_IDisposable_Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  uint uVar6;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  uint uVar7;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x06f15660:
  if (!(bool)in_ZR) goto LAB_06f1564c;
DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<object>__MoveNext:
  puVar2 = (undefined8 *)FUN_03f4b594(unaff_x22,param_3,0);
LAB_06f156c4:
  uVar7 = (uint)unaff_x25;
  uVar6 = (uint)unaff_x20;
  uVar4 = (*(code *)*puVar2)(unaff_x22,unaff_w23,unaff_w24,puVar2[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar6 < 0) {
        lVar5 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
            goto LAB_06f15788;
          }
          goto LAB_06f157d4;
        }
      }
      else {
        lVar5 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar5 != 0) {
          if (uVar6 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (ulong)uVar6 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
LAB_06f15788:
            lVar5 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
            uVar9 = *(undefined8 *)(lVar5 + 0x14);
            uVar8 = *(undefined8 *)(lVar5 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x1c);
            in_stack_00000010[1] = uVar9;
            *in_stack_00000010 = uVar8;
            uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000018 + 0x24) = uVar7;
            *(undefined4 *)(lVar5 + 4) = uVar1;
            *(ulong *)(in_stack_00000018 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
            return 1;
          }
LAB_06f157d4:
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
      }
LAB_06f157d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    do {
      unaff_x20 = unaff_x25 & 0xffffffff;
      uVar6 = (uint)unaff_x25;
      uVar7 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar7;
      if ((int)uVar7 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar5 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar5 == 0) goto LAB_06f157d0;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06f157d4;
      unaff_x27 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    unaff_x22 = *(long **)(in_stack_00000018 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar3 = (long *)FUN_044a15f0(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_06f157d0;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                       in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
  unaff_w23 = *(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_03f4b260(param_3);
  }
  param_1 = *unaff_x22;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_w24 = in_stack_00000028._4_4_;
  if (in_x9 == 0) goto DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<object>__MoveNext;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06f1564c:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x06f15660;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_06f156c4;
}


