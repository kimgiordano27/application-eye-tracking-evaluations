/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorDescriptor$$Invoke
ENTRY_POINT: 03718c48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 146
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03718ecc) */
/* WARNING: Removing unreachable block (ram,0x03718ef4) */
/* WARNING: Removing unreachable block (ram,0x03718f74) */
/* WARNING: Removing unreachable block (ram,0x03718f7c) */

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x21;
  long unaff_x24;
  long *plVar11;
  long unaff_x25;
  long *plVar12;
  
  puVar4 = Method_System_DateTimeParse_ParseExact__;
  puVar3 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  puVar2 = Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Acquire__;
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  plVar11 = *(long **)(unaff_x24 + 0xe08);
  plVar12 = *(long **)(unaff_x25 + 0x608);
  do {
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar11) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03718cbc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03718cbc:
    uVar9 = (*(code *)*puVar5)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar8 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03718e9c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar12) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03718d18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03718d18:
    lVar8 = (*(code *)*puVar5)();
    lVar6 = FUN_01f08890(*(undefined8 *)puVar1,7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_035683d0(lVar8 + 0x28,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)puVar2;
    thunk_FUN_01f51358();
    if (*(long *)(lVar8 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar6 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(*(long *)(lVar8 + 0x50) + 0x28);
    thunk_FUN_01f51358();
    if (*(uint *)(lVar6 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    uVar7 = FUN_0356965c(lVar8 + 0x30,0);
    if (*(uint *)(lVar6 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x40) = uVar7;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar6 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_0354f308(lVar8 + 0x48,0);
    if (*(uint *)(lVar6 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar6 + 0x50) = uVar7;
    thunk_FUN_01f51358();
    FUN_0340efe8(lVar6,0);
    FUN_037184fc();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03718eb8;
    }
  }
LAB_03718e9c:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_03718eb8:
  (*(code *)*puVar5)();
  return;
}


