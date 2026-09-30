/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$ToString
ENTRY_POINT: 03bc5a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03bc5cb8) */

void Unity_Mathematics_uint2x2__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  plVar12 = (long *)(unaff_x19 + 0x98);
  if (*plVar12 == 0) {
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__);
    FUN_02b6aa68(lVar9,*(undefined8 *)
                        Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__)
    ;
    *plVar12 = lVar9;
    thunk_FUN_01f51358(plVar12,lVar9);
  }
  else {
    FUN_02b6b46c(*plVar12,*(undefined8 *)
                           Method_Unity_VisualScripting_GraphPointer_GetElementData<Cooldown_Data>__
                );
  }
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar7 = (long *)FUN_03b2097c(*(long *)(unaff_x19 + 0x20),0);
  puVar5 = StringLiteral_13444;
  puVar4 = StringLiteral_11734;
  puVar3 = Method_UnityEngine_GameObject_GetComponent<ScrollRect>__;
  puVar2 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03bc5b60;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03bc5b60:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_03bc5c60;
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03bc5bbc;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03bc5bbc:
    lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b1c404(lVar9,0);
    uVar11 = FUN_03b491f0(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)puVar2,0);
    lVar14 = *plVar12;
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    uVar11 = FUN_03405678(*(undefined8 *)puVar5,uVar11,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2d0(lVar14,uVar13,uVar11,*(undefined8 *)puVar3);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03bc5c7c;
    }
  }
LAB_03bc5c60:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03bc5c7c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


