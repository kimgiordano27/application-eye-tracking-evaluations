/*
FUNCTION_NAME: FUN_02415c7c
ENTRY_POINT: 02415c7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02415f4c) */
/* WARNING: Removing unreachable block (ram,0x02415fb4) */

undefined8 FUN_02415c7c(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  
                    /* try { // try from 02415c98 to 02515cbf has its CatchHandler @ 02415e58 */
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    if (*(long *)(param_3 + 0x38) == 0) {
                    /* try { // try from 02415cd8 to 02515d37 has its CatchHandler @ 02415e5c */
      FUN_01ecafa0(param_3);
    }
  }
  if (param_1 != (long *)0x0) {
    lVar8 = **(long **)(param_3 + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02415d44;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_1,lVar8,0);
LAB_02415d44:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar2 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar13 = (long *)0x0;
    uVar7 = 0;
    iVar3 = 0;
    do {
      iVar14 = iVar3;
      uVar12 = uVar7;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        do {
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02415dcc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02415dcc:
          uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_02415f40;
            lVar8 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 == 0) goto System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>;
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_02415f00;
          }
          lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02415e40;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_02415e40:
          plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        } while (plVar6 == (long *)0x0);
        uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        uVar10 = FUN_0340eec4(uVar7,0);
      } while ((uVar10 & 1) != 0);
      iVar3 = 1;
      if (iVar14 != 0) {
        if (iVar14 == 1) {
          plVar13 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_03416d98(plVar13,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(plVar13,uVar12,0);
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03418748(plVar13,param_2,0);
        FUN_03418748(plVar13,uVar7,0);
        uVar7 = uVar12;
        iVar3 = iVar14 + 1;
      }
    } while( true );
  }
LAB_02415fb0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02415f00:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02415f34;
    }
  }
System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02415f34:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02415f40:
  if (iVar14 == 0) {
    uVar12 = 0;
  }
  else if (iVar14 != 1) {
    if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02415f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      return uVar7;
    }
    goto LAB_02415fb0;
  }
  return uVar12;
}


