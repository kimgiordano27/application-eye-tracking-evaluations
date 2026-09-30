/*
FUNCTION_NAME: FUN_039c0608
ENTRY_POINT: 039c0608
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x039c09c8) */

void FUN_039c0608(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  
  if ((DAT_0483884d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5422);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerClickHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_5423);
    thunk_FUN_01efb3a4(StringLiteral_5424);
    thunk_FUN_01efb3a4(StringLiteral_5425);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__);
    thunk_FUN_01efb3a4(StringLiteral_5426);
    DAT_0483884d = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)FUN_0265d924(param_2,*(undefined8 *)StringLiteral_5426);
  puVar9 = StringLiteral_5425;
  puVar8 = StringLiteral_5424;
  puVar7 = StringLiteral_5423;
  puVar6 = StringLiteral_5422;
  puVar5 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerClickHandler>__;
  puVar4 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar16 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_039c074c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_039c074c:
    uVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar17 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar16 = *plVar10;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 == 0) goto LAB_039c0948;
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      break;
    }
    lVar16 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_039c07a8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar6,0);
LAB_039c07a8:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = (int)plVar12[2];
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      if (*plVar12 != *(long *)puVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar12);
      }
      FUN_039b6ca4(param_1,1,plVar12[3],plVar12[4],1);
    }
    else if (iVar1 == 1) {
      if (*plVar12 != *(long *)puVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar12);
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      lVar16 = plVar12[3];
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar16 = FUN_039c0b0c(lVar16);
      plVar15 = (long *)plVar12[3];
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar15 + 0x130)) &&
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar17 = FUN_0358471c(lVar16,0);
          if ((uVar17 & 1) != 0) {
            uVar13 = FUN_0398f474(plVar12[4],0);
            uVar14 = thunk_FUN_01efb3a4(StringLiteral_5427);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar13,uVar14);
          }
          plVar15 = (long *)plVar12[3];
        }
      }
      FUN_039beb38(param_1,0,plVar15,1);
      FUN_039c0608(param_1,plVar12[4]);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab8e8();
    }
    else if (iVar1 == 2) {
      if (*plVar12 != *(long *)puVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar12);
      }
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab888();
      FUN_039beb38(param_1,0,plVar12[3],1);
      FUN_039c01ac(param_1,plVar12[4]);
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039ab8e8();
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_039c0964;
    }
  }
LAB_039c0948:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039c0964:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


