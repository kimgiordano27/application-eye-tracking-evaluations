/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseExit$$get_hookName
ENTRY_POINT: 03ec70a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ec7160) */
/* WARNING: Removing unreachable block (ram,0x03ec71d4) */
/* WARNING: Removing unreachable block (ram,0x03ec7218) */

void Unity_VisualScripting_OnMouseExit__get_hookName
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
    thunk_FUN_01f51358();
LAB_03ec6e8c:
    do {
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03ec6ed8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6ed8:
      uVar8 = (*(code *)*puVar2)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) goto LAB_03ec7154;
        lVar5 = *unaff_x22;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto Unity_VisualScripting_OnMouseInput__get_hookName;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03ec7114;
      }
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03ec6f34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6f34:
      plVar3 = (long *)(*(code *)*puVar2)();
    } while (plVar3 == (long *)0x0);
    lVar6 = *plVar3;
    lVar5 = *unaff_x26;
    bVar1 = *(byte *)(lVar6 + 0x130);
    uVar7 = (uint)bVar1;
    uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
    if ((bVar1 < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5)) {
      lVar5 = *unaff_x27;
      uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) == lVar5)) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar6 = *plVar3;
          lVar5 = *unaff_x27;
          uVar7 = (uint)*(byte *)(lVar6 + 0x130);
          uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
        }
        if ((uVar7 < (uint)uVar8) || (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5))
        {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar3);
        }
        uVar4 = FUN_03f666dc(plVar3,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = *(uint *)(unaff_x21 + 0x18);
        if (uVar7 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) = uVar4;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      goto LAB_03ec6e8c;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *plVar3;
      lVar5 = *unaff_x26;
      uVar7 = (uint)*(byte *)(lVar6 + 0x130);
      uVar8 = (ulong)*(byte *)(lVar5 + 0x130);
    }
    if ((uVar7 < (uint)uVar8) || (*(long *)(*(long *)(lVar6 + 200) + uVar8 * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar3);
    }
    param_3 = FUN_03f65d30(plVar3,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    in_x10 = (long)(int)uVar7;
    if (*(uint *)(param_1 + 0x18) <= uVar7) {
      FUN_030f2bb4();
      goto LAB_03ec6e8c;
    }
    in_w9 = uVar7 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03ec7114:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03ec7148;
    }
  }
Unity_VisualScripting_OnMouseInput__get_hookName:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec7148:
  (*(code *)*puVar2)();
LAB_03ec7154:
  if (unaff_x21 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    FUN_030f4630();
    if ((lVar5 != 0) && (FUN_02b6b2e4(lVar5), *(long *)(unaff_x20 + 0x18) != 0)) {
      FUN_02b6b264();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


