/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 03682ba8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03682cc8) */

uint OVRPlugin__GetEyeRecommendedResolutionScale(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03682c08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x29,0);
LAB_03682c08:
    uVar5 = (*(code *)*puVar3)(plVar7,uVar8,uVar2,uVar1,uVar9,puVar3[1]);
    if ((uVar5 & 1) == 0) {
LAB_03682c28:
      if (unaff_x19 == (long *)0x0) goto LAB_03682c94;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03682c6c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03682b38;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03682b38:
    unaff_w21 = (*(code *)*puVar3)();
    if ((unaff_w21 & 1) == 0) goto LAB_03682c28;
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03682b98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03682b98:
    param_1 = (*(code *)*puVar3)();
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03682c88;
    }
  }
LAB_03682c6c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03682c88:
  (*(code *)*puVar3)();
LAB_03682c94:
  return (unaff_w21 ^ 1) & 1;
}


