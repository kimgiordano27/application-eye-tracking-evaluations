/*
FUNCTION_NAME: FUN_037b5cbc
ENTRY_POINT: 037b5cbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x037b6050) */

void FUN_037b5cbc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long local_68;
  
  if ((DAT_04837597 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_679);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_680);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Rect>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Rect>_Peek__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__);
    DAT_04837597 = 1;
  }
  local_68 = 0;
  if (param_2 != 0) {
    uVar7 = FUN_022c6ae8(param_2,&local_68,*(undefined8 *)StringLiteral_679);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((local_68 != 0) && (plVar15 = *(long **)(local_68 + 0x20), plVar15 != (long *)0x0)) {
      lVar10 = *plVar15;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_037b5de8;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar15,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,
                            0);
LAB_037b5de8:
      plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
      puVar6 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar5 = Method_System_Collections_Generic_Stack<Rect>_Peek__;
      puVar4 = Method_System_Collections_Generic_Stack<Rect>_Clear__;
      puVar3 = Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar15;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_037b5e78;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar2,0);
LAB_037b5e78:
        uVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar15;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 == 0) goto LAB_037b5ff4;
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_037b5fdc;
        }
        lVar10 = *plVar15;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_037b5ed4;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar6,0);
LAB_037b5ed4:
        uVar9 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        uVar7 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar5,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
            if ((uVar7 & 1) != 0) {
              lVar10 = *(long *)(param_1 + 0x38);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar13 = *(long *)StringLiteral_680;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = param_2;
                thunk_FUN_01f51358(plVar12,param_2);
              }
              else {
                FUN_030f2bb4(lVar10,param_2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            *(long *)(param_1 + 0x28) = param_2;
            thunk_FUN_01f51358((long *)(param_1 + 0x28),param_2);
          }
        }
        else {
          *(long *)(param_1 + 0x20) = param_2;
          thunk_FUN_01f51358((long *)(param_1 + 0x20),param_2);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_037b5fdc:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_037b6010;
    }
  }
LAB_037b5ff4:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_037b6010:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
  return;
}


