/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._PropertyContainer$$EndInvoke
ENTRY_POINT: 0371863c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x037188c8) */

void OVR_OpenVR_IVRIOBuffer__PropertyContainer__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar7 = (long *)FUN_02a856dc();
  puVar6 = 
  Method_Unity_VisualScripting_WaitUntilUnit_<Await>d__5_System_Collections_IEnumerator_Reset__;
  puVar5 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass70_0_<DOBlendableColor>b__1__;
  puVar4 = Method_System_DateTimeParse_ParseExact__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_037186d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_037186d0:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_03718858;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor__BeginInvoke;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor__BeginInvoke:
    lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar9 = FUN_01f08890(*(undefined8 *)puVar3,6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar6;
    thunk_FUN_01f51358();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = FUN_03587f1c(lVar11 + 0x18,0);
    if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar10;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar9 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar11 + 0x28);
    thunk_FUN_01f51358();
    if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar9 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(lVar11 + 0x30);
    thunk_FUN_01f51358();
    FUN_0340efe8(lVar9,0);
    FUN_037184fc();
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03718874;
    }
  }
LAB_03718858:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03718874:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


