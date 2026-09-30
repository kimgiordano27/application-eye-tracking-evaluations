/*
FUNCTION_NAME: Shapes.MetaMpb$$.ctor
ENTRY_POINT: 037b5d94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037b6050) */

void Shapes_MetaMpb___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  lVar10 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_037b5de8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_037b5de8:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar6 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar5 = Method_System_Collections_Generic_Stack<Rect>_Peek__;
  puVar4 = Method_System_Collections_Generic_Stack<Rect>_Clear__;
  puVar3 = Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_037b5e78;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_037b5e78:
    uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_037b5ff4;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_037b5ed4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_037b5ed4:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar12 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar5,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
        if ((uVar12 & 1) != 0) {
          lVar10 = *(long *)(unaff_x21 + 0x38);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = unaff_x20;
            thunk_FUN_01f51358(puVar7);
          }
          else {
            FUN_030f2bb4();
          }
        }
      }
      else {
        *(undefined8 *)(unaff_x21 + 0x28) = unaff_x20;
        thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x28));
      }
    }
    else {
      *(undefined8 *)(unaff_x21 + 0x20) = unaff_x20;
      thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x20));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_037b6010;
    }
  }
LAB_037b5ff4:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_037b6010:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


