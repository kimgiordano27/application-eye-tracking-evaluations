/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseEnter$$get_hookName
ENTRY_POINT: 03ec6fb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ec7160) */
/* WARNING: Removing unreachable block (ram,0x03ec71d4) */
/* WARNING: Removing unreachable block (ram,0x03ec7218) */

void Unity_VisualScripting_OnMouseEnter__get_hookName(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    uVar5 = (uint)*(byte *)(param_1 + 0x130);
    uVar6 = (ulong)*(byte *)(param_3 + 0x130);
    do {
      if ((uVar5 < (uint)uVar6) || (*(long *)(*(long *)(param_1 + 200) + uVar6 * 8 + -8) != param_3)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(unaff_x23);
      }
      uVar3 = FUN_03f666dc(unaff_x23,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      if (uVar5 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) = uVar3;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
LAB_03ec6e8c:
      do {
        lVar4 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03ec6ed8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6ed8:
        uVar6 = (*(code *)*puVar2)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x22 == (long *)0x0) goto LAB_03ec7154;
          lVar4 = *unaff_x22;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto Unity_VisualScripting_OnMouseInput__get_hookName;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03ec7114;
        }
        lVar4 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03ec6f34;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6f34:
        unaff_x23 = (long *)(*(code *)*puVar2)();
      } while (unaff_x23 == (long *)0x0);
      param_1 = *unaff_x23;
      lVar4 = *unaff_x26;
      bVar1 = *(byte *)(param_1 + 0x130);
      uVar5 = (uint)bVar1;
      uVar6 = (ulong)*(byte *)(lVar4 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(param_1 + 200) + uVar6 * 8 + -8) == lVar4)) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          param_1 = *unaff_x23;
          lVar4 = *unaff_x26;
          uVar5 = (uint)*(byte *)(param_1 + 0x130);
          uVar6 = (ulong)*(byte *)(lVar4 + 0x130);
        }
        if ((uVar5 < (uint)uVar6) || (*(long *)(*(long *)(param_1 + 200) + uVar6 * 8 + -8) != lVar4)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x23);
        }
        uVar3 = FUN_03f65d30(unaff_x23,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = *(uint *)(unaff_x21 + 0x18);
        if (uVar5 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) = uVar3;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
        goto LAB_03ec6e8c;
      }
      param_3 = *unaff_x27;
      uVar6 = (ulong)*(byte *)(param_3 + 0x130);
      if ((bVar1 < *(byte *)(param_3 + 0x130)) ||
         (*(long *)(*(long *)(param_1 + 200) + uVar6 * 8 + -8) != param_3)) goto LAB_03ec6e8c;
    } while (*(int *)(*unaff_x28 + 0xe0) != 0);
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x23;
    param_3 = *unaff_x27;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03ec7114:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03ec7148;
    }
  }
Unity_VisualScripting_OnMouseInput__get_hookName:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec7148:
  (*(code *)*puVar2)();
LAB_03ec7154:
  if (unaff_x21 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    FUN_030f4630();
    if ((lVar4 != 0) && (FUN_02b6b2e4(lVar4), *(long *)(unaff_x20 + 0x18) != 0)) {
      FUN_02b6b264();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


