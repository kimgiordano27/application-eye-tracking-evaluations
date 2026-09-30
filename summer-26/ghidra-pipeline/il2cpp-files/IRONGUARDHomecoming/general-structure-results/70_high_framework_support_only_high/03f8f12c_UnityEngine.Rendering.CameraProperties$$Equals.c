/*
FUNCTION_NAME: UnityEngine.Rendering.CameraProperties$$Equals
ENTRY_POINT: 03f8f12c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f8f48c) */

undefined1  [16] UnityEngine_Rendering_CameraProperties__Equals(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar7 = (long *)thunk_FUN_01f116d0();
  puVar2 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
  puVar4 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  lVar8 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar4;
  }
  in_stack_00000018 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
  in_stack_00000010 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_03f8f560();
  uVar6 = FUN_03f8f694(plVar7);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  lVar8 = UnityEngine_Rendering_CommandBuffer__ClearRandomWriteTargets(uVar6);
  *unaff_x20 = lVar8;
  thunk_FUN_01f51358();
  if ((*unaff_x20 != 0) && (lVar8 = FUN_03f8a108(), plVar7 != (long *)0x0)) {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x25) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f8f220;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x25,0);
LAB_03f8f220:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar11 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
    puVar5 = PTR_DAT_04581b10;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar11;
      lVar12 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f8f298;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar12,0);
LAB_03f8f298:
      uVar14 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar14 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar2);
        if (plVar11 == (long *)0x0) goto LAB_03f8f420;
        lVar13 = *plVar11;
        lVar12 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_03f8f3f8;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_03f8f3e0;
      }
      lVar13 = *plVar11;
      lVar12 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_03f8f2f8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar12,1);
LAB_03f8f2f8:
      auVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,auVar16._8_8_,auVar16._0_8_);
      }
      auVar16 = FUN_03fa041c(*(long *)(unaff_x21 + 0x10),uVar9,auVar16._0_8_,&stack0x00000008,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03f8a150(&stack0x00000010,auVar16._0_8_,auVar16._8_8_);
      if ((auVar16._0_8_ & 0xff) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar5;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar8,in_stack_00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
LAB_03f8f484:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03f8f3e0:
    if (*(long *)(piVar15 + -2) == lVar12) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03f8f414;
    }
  }
LAB_03f8f3f8:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar12,0);
LAB_03f8f414:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_03f8f420:
  uVar9 = thunk_FUN_01ecaf38(plVar7,0);
  uVar14 = FUN_03f8f794(uVar9,uVar9);
  if ((uVar14 & 1) != 0) {
    if (lVar8 == 0) goto LAB_03f8f484;
    FUN_030f4404(lVar8,*(undefined8 *)PTR_DAT_04581d28);
  }
  auVar16._8_8_ = in_stack_00000018;
  auVar16._0_8_ = in_stack_00000010;
  return auVar16;
}


