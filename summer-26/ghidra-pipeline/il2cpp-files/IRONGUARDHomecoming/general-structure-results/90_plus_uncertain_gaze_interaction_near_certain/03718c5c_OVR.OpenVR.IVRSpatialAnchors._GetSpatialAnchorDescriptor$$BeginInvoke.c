/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorDescriptor$$BeginInvoke
ENTRY_POINT: 03718c5c
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

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor__BeginInvoke(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  long *plVar7;
  long unaff_x26;
  undefined8 *puVar8;
  long unaff_x27;
  undefined8 *puVar9;
  long unaff_x28;
  undefined8 *puVar10;
  long unaff_x29;
  long *plVar11;
  
  plVar7 = *(long **)(unaff_x25 + 0x608);
  puVar8 = *(undefined8 **)(unaff_x26 + 0xe48);
  puVar9 = *(undefined8 **)(unaff_x27 + 0x6b0);
  puVar10 = *(undefined8 **)(unaff_x28 + 0x278);
  plVar11 = *(long **)(unaff_x29 + 0xd88);
  do {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
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
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03718e9c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03718d18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718d18:
    lVar4 = (*(code *)*puVar1)();
    lVar2 = FUN_01f08890(*puVar8,7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_035683d0(lVar4 + 0x28,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x28) = *puVar9;
    thunk_FUN_01f51358();
    if (*(long *)(lVar4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar2 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(lVar4 + 0x50) + 0x28);
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x38) = *puVar10;
    thunk_FUN_01f51358();
    uVar3 = FUN_0356965c(lVar4 + 0x30,0);
    if (*(uint *)(lVar2 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x48) = *puVar10;
    thunk_FUN_01f51358();
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0354f308(lVar4 + 0x48,0);
    if (*(uint *)(lVar2 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    thunk_FUN_01f51358();
    FUN_0340efe8(lVar2,0);
    FUN_037184fc();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03718eb8;
    }
  }
LAB_03718e9c:
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03718eb8:
  (*(code *)*puVar8)();
  return;
}


