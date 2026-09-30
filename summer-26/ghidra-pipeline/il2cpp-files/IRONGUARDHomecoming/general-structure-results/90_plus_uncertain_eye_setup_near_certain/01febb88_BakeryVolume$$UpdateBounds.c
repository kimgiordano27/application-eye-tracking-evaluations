/*
FUNCTION_NAME: BakeryVolume$$UpdateBounds
ENTRY_POINT: 01febb88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01febc40) */
/* WARNING: Removing unreachable block (ram,0x01febc4c) */
/* WARNING: Removing unreachable block (ram,0x01febc50) */
/* WARNING: Removing unreachable block (ram,0x01febc64) */
/* WARNING: Removing unreachable block (ram,0x01febc68) */
/* WARNING: Removing unreachable block (ram,0x01febc78) */
/* WARNING: Removing unreachable block (ram,0x01febcd4) */
/* WARNING: Removing unreachable block (ram,0x01febcdc) */

void BakeryVolume__UpdateBounds(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  
  do {
    uVar3 = FUN_040305e8(param_1,0);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(unaff_x27 + (long)(int)unaff_w26 * 8 + 0x20) = uVar3;
    unaff_w26 = unaff_w26 + 1;
    thunk_FUN_01f51358();
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01febb04;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_01febb04:
    uVar6 = (*(code *)*puVar2)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_01febc10;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_01febb64;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_01febb64:
    param_1 = (long *)(*(code *)*puVar2)();
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*param_1 != *unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    unaff_x27 = *unaff_x22;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01febc2c;
    }
  }
LAB_01febc10:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_01febc2c:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


