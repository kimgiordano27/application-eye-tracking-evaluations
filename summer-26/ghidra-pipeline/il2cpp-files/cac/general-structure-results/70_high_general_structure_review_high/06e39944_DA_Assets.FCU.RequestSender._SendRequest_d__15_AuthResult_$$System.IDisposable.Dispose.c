/*
FUNCTION_NAME: DA_Assets.FCU.RequestSender.<SendRequest>d__15<AuthResult>$$System.IDisposable.Dispose
ENTRY_POINT: 06e39944
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void DA_Assets_FCU_RequestSender_<SendRequest>d__15<AuthResult>__System_IDisposable_Dispose(void)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined1 *)(unaff_x20 + 0x8ab) = 1;
  lVar3 = *(long *)(unaff_x21 + 0x20);
  plVar8 = (long *)*unaff_x22;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f4b260();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f4b260();
  }
  if (plVar8 == (long *)0x0) {
    if (*(int *)(DAT_092c9f00 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    lVar3 = FUN_0752d154(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    _uStack0000000000000000 = FUN_0752d038(lVar3,*(undefined1 *)((long)unaff_x22 + 0x16),0);
    FUN_073cf594();
  }
  else {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
      if (*(int *)(DAT_092c9f10 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      uVar9 = **(undefined8 **)(DAT_092c9f10 + 0xb8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x70);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f4b260(lVar3);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06e39aa8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f4b594(plVar8,lVar3,1);
LAB_06e39aa8:
                    /* WARNING: Could not recover jumptable at 0x06e39ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar9);
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x20);
    cVar1 = *(char *)((long)unaff_x22 + 0x16);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f4b260();
    }
    auVar10 = FUN_06196660(plVar8,cVar1 != '\0',*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_03f4b260();
      uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    }
    _uStack0000000000000010 = auVar10;
    if ((uVar2 & 1) == 0) {
      FUN_03f4b260();
    }
    FUN_06e034ec(&stack0x00000010);
  }
  return;
}


