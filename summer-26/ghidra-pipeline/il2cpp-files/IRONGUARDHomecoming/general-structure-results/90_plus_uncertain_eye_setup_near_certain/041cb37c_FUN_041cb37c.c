/*
FUNCTION_NAME: FUN_041cb37c
ENTRY_POINT: 041cb37c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041cb62c) */

long * FUN_041cb37c(float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = param_2;
  if ((DAT_04840e5f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04840e5f = 1;
  }
  lVar5 = FUN_041caff0(param_5);
  if ((lVar5 == 0) || (plVar6 = (long *)FUN_04133c3c(lVar5,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar6;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_041cb44c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__,
                        0);
LAB_041cb44c:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar3 = Method_System_Linq_Enumerable_Any<int>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041cb4c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_041cb4c4:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar9 & 1) == 0) {
      plVar8 = (long *)0x0;
      iVar11 = 6;
      iVar4 = 6;
      if (plVar6 == (long *)0x0) goto LAB_041cb5f0;
      goto LAB_041cb598;
    }
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041cb520;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_041cb520:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar12 = (float)FUN_042269a0(lVar5,0);
    param_4 = fVar13 + param_4;
  } while ((((param_4 <= param_2) || (param_2 < fVar13)) || (param_1 < fVar12)) ||
          (fVar12 + param_3 <= param_1));
  iVar11 = 5;
  iVar4 = 5;
  if (plVar6 != (long *)0x0) {
LAB_041cb598:
    iVar11 = iVar4;
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041cb5e4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_041cb5e4:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
LAB_041cb5f0:
  if ((iVar11 == 6) || (iVar11 == 0)) {
    plVar8 = (long *)0x0;
  }
  return plVar8;
}


