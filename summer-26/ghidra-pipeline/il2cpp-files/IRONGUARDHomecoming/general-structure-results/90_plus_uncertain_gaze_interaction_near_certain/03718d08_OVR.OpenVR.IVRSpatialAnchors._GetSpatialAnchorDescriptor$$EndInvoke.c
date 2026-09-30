/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorDescriptor$$EndInvoke
ENTRY_POINT: 03718d08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03718ecc) */
/* WARNING: Removing unreachable block (ram,0x03718ef4) */
/* WARNING: Removing unreachable block (ram,0x03718f74) */
/* WARNING: Removing unreachable block (ram,0x03718f7c) */

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor__EndInvoke(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
LAB_03718d18:
  do {
    lVar2 = (*(code *)*param_1)();
    lVar3 = FUN_01f08890(*unaff_x26,7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = FUN_035683d0(lVar2 + 0x28,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x28) = *unaff_x27;
    thunk_FUN_01f51358();
    if (*(long *)(lVar2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(*(long *)(lVar2 + 0x50) + 0x28);
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x38) = *unaff_x28;
    thunk_FUN_01f51358();
    uVar4 = FUN_0356965c(lVar2 + 0x30,0);
    if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x48) = *unaff_x28;
    thunk_FUN_01f51358();
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0354f308(lVar2 + 0x48,0);
    if (*(uint *)(lVar3 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
    thunk_FUN_01f51358();
    FUN_0340efe8(lVar3,0);
    FUN_037184fc();
    lVar2 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03718cbc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718cbc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_03718e9c;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03718d18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03718eb8;
    }
  }
LAB_03718e9c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718eb8:
  (*(code *)*puVar1)();
  return;
}


