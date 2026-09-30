/*
FUNCTION_NAME: Unity.VisualScripting.WaitWhileUnit.<Await>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 05cb7a14
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cb7b60) */
/* WARNING: Removing unreachable block (ram,0x05cb7bd4) */
/* WARNING: Removing unreachable block (ram,0x05cb7c18) */

void Unity_VisualScripting_WaitWhileUnit_<Await>d__5__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int in_w9;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    *(int *)(unaff_x21 + 0x18) = in_w9;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_02dd37b4();
LAB_05cb788c:
    do {
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cb78d8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05cb78d8:
      uVar8 = (*(code *)*puVar2)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_05cb7b54;
        lVar5 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_05cb7b2c;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_05cb7b14;
      }
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cb7934;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05cb7934:
      plVar3 = (long *)(*(code *)*puVar2)();
    } while (plVar3 == (long *)0x0);
    lVar6 = *plVar3;
    lVar5 = *unaff_x26;
    bVar1 = *(byte *)(lVar6 + 0x130);
    uVar7 = (uint)bVar1;
    uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) == lVar5)) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *plVar3;
        lVar5 = *unaff_x26;
        uVar7 = (uint)*(byte *)(lVar6 + 0x130);
        uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
      }
      if ((uVar7 < (uint)uVar8) || (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar3);
      }
      uVar4 = FUN_05d43d04(plVar3,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      if (uVar7 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) = uVar4;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494();
      }
      goto LAB_05cb788c;
    }
    lVar5 = *unaff_x27;
    uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
    if ((bVar1 < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5)) goto LAB_05cb788c;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *plVar3;
      lVar5 = *unaff_x27;
      uVar7 = (uint)*(byte *)(lVar6 + 0x130);
      uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
    }
    if ((uVar7 < (uint)uVar8) || (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar3);
    }
    param_3 = UnityEngine_XR_ARSubsystems_XRSessionSubsystem__get_matchFrameRateRequested(plVar3,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    in_x10 = (long)(int)uVar7;
    if (*(uint *)(param_1 + 0x18) <= uVar7) {
      FUN_03aac494();
      goto LAB_05cb788c;
    }
    in_w9 = uVar7 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05cb7b14:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05cb7b48;
    }
  }
LAB_05cb7b2c:
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05cb7b48:
  (*(code *)*puVar2)();
LAB_05cb7b54:
  if (unaff_x21 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    FUN_03aadf10();
    if ((lVar5 != 0) && (FUN_048956f0(lVar5), *(long *)(unaff_x20 + 0x18) != 0)) {
      FUN_04895670();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


