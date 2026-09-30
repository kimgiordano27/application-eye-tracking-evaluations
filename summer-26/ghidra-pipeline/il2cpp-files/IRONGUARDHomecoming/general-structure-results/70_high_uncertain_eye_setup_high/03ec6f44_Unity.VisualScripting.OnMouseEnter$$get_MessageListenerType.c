/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseEnter$$get_MessageListenerType
ENTRY_POINT: 03ec6f44
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

void Unity_VisualScripting_OnMouseEnter__get_MessageListenerType(long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
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
    if (param_1 != (long *)0x0) {
      lVar5 = *unaff_x23;
      lVar4 = *unaff_x26;
      bVar1 = *(byte *)(lVar5 + 0x130);
      uVar6 = (uint)bVar1;
      uVar7 = (ulong)*(byte *)(lVar4 + 0x130);
      if ((bVar1 < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != lVar4)) {
        lVar4 = *unaff_x27;
        uVar7 = (ulong)*(byte *)(lVar4 + 0x130);
        if ((*(byte *)(lVar4 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) == lVar4)) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *unaff_x23;
            lVar4 = *unaff_x27;
            uVar6 = (uint)*(byte *)(lVar5 + 0x130);
            uVar7 = (ulong)*(byte *)(lVar4 + 0x130);
          }
          if ((uVar6 < (uint)uVar7) || (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != lVar4)
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
          uVar6 = *(uint *)(unaff_x21 + 0x18);
          if (uVar6 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
            *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) = uVar3;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4();
          }
        }
      }
      else {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *unaff_x23;
          lVar4 = *unaff_x26;
          uVar6 = (uint)*(byte *)(lVar5 + 0x130);
          uVar7 = (ulong)*(byte *)(lVar4 + 0x130);
        }
        if ((uVar6 < (uint)uVar7) || (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != lVar4))
        {
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
        uVar6 = *(uint *)(unaff_x21 + 0x18);
        if (uVar6 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) = uVar3;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
    }
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03ec6ed8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6ed8:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) break;
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03ec6f34;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6f34:
    param_1 = (long *)(*(code *)*puVar2)();
    unaff_x23 = param_1;
  } while( true );
  if (unaff_x22 != (long *)0x0) {
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03ec7148;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec7148:
    (*(code *)*puVar2)();
  }
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


