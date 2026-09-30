/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseDrag$$get_hookName
ENTRY_POINT: 03ec6ebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ec7160) */
/* WARNING: Removing unreachable block (ram,0x03ec71d4) */
/* WARNING: Removing unreachable block (ram,0x03ec7218) */

void Unity_VisualScripting_OnMouseDrag__get_hookName(void)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
code_r0x03ec6ebc:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_03ec7154;
      lVar6 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto Unity_VisualScripting_OnMouseInput__get_hookName;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03ec6f34;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec6f34:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      lVar6 = *unaff_x26;
      bVar1 = *(byte *)(lVar7 + 0x130);
      uVar8 = (uint)bVar1;
      uVar3 = (ulong)*(byte *)(lVar6 + 0x130);
      if ((bVar1 < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(lVar7 + 200) + uVar3 * 8 + -8) != lVar6)) {
        lVar6 = *unaff_x27;
        uVar3 = (ulong)*(byte *)(lVar6 + 0x130);
        if ((*(byte *)(lVar6 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar7 + 200) + uVar3 * 8 + -8) == lVar6)) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *plVar4;
            lVar6 = *unaff_x27;
            uVar8 = (uint)*(byte *)(lVar7 + 0x130);
            uVar3 = (ulong)*(byte *)(lVar6 + 0x130);
          }
          if ((uVar8 < (uint)uVar3) || (*(long *)(*(long *)(lVar7 + 200) + uVar3 * 8 + -8) != lVar6)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar4);
          }
          uVar5 = FUN_03f666dc(plVar4,0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = *(uint *)(unaff_x21 + 0x18);
          if (uVar8 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20) = uVar5;
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
          lVar7 = *plVar4;
          lVar6 = *unaff_x26;
          uVar8 = (uint)*(byte *)(lVar7 + 0x130);
          uVar3 = (ulong)*(byte *)(lVar6 + 0x130);
        }
        if ((uVar8 < (uint)uVar3) || (*(long *)(*(long *)(lVar7 + 200) + uVar3 * 8 + -8) != lVar6))
        {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar4);
        }
        uVar5 = FUN_03f65d30(plVar4,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = *(uint *)(unaff_x21 + 0x18);
        if (uVar8 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar8 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20) = uVar5;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
    }
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 == 0) goto code_r0x03ec6ebc;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != *unaff_x24) {
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
      if (uVar3 == 0) goto code_r0x03ec6ebc;
    }
    puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03ec7148;
    }
  }
Unity_VisualScripting_OnMouseInput__get_hookName:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ec7148:
  (*(code *)*puVar2)();
LAB_03ec7154:
  if (unaff_x21 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    FUN_030f4630();
    if ((lVar6 != 0) && (FUN_02b6b2e4(lVar6), *(long *)(unaff_x20 + 0x18) != 0)) {
      FUN_02b6b264();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


