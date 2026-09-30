/*
FUNCTION_NAME: FUN_03a66c38
ENTRY_POINT: 03a66c38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a66e70) */

void FUN_03a66c38(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04838d77 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7742);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838d77 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7774);
    FUN_034efd20(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_7775);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar8);
  }
  plVar4 = (long *)FUN_03a66f34(param_2);
  puVar3 = StringLiteral_7742;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar4;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a66d00;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,0);
LAB_03a66d00:
    uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar4;
      lVar9 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03a66ddc;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar4;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03a66d60;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,1);
LAB_03a66d60:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6);
    }
    FUN_03a667c8(param_1,plVar6);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a66df8;
    }
  }
LAB_03a66ddc:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar9,0);
LAB_03a66df8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


