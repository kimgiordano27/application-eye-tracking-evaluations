/*
FUNCTION_NAME: FUN_03972478
ENTRY_POINT: 03972478
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0397270c) */
/* WARNING: Removing unreachable block (ram,0x039726b0) */

float FUN_03972478(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  double dVar13;
  
  if ((DAT_0483849d & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_4468);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4461);
    thunk_FUN_01efb3a4(StringLiteral_4462);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483849d = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_4461) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0397253c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_4461,0);
LAB_0397253c:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar3 = StringLiteral_4462;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = 0;
    dVar13 = 0.0;
    do {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_039725c0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039725c0:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_039726a4;
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_0397267c;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03972664;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto System_Net_AuthenticationManager__PreAuthenticate;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
System_Net_AuthenticationManager__PreAuthenticate:
      fVar12 = (float)(*(code *)*puVar4)(plVar5,puVar4[1]);
      dVar13 = dVar13 + (double)fVar12;
      if (lVar8 == 0x7fffffffffffffff) {
        uVar6 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,*(undefined8 *)StringLiteral_4468);
      }
      lVar8 = lVar8 + 1;
    } while( true );
  }
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
  uVar6 = FUN_03971094();
  goto LAB_03972718;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03972664:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03972698;
    }
  }
LAB_0397267c:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03972698:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_039726a4:
  if (lVar8 != 0) {
    return (float)(dVar13 / (double)lVar8);
  }
  uVar6 = FUN_03971224();
LAB_03972718:
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_4468);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


