/*
FUNCTION_NAME: System.Int16$$ToString
ENTRY_POINT: 03466950
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466c40) */

void System_Int16__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x25,unaff_x26);
    }
    lVar13 = *unaff_x21;
    plVar6 = (long *)thunk_FUN_01f116d0(unaff_x25,lVar13);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x25,lVar13);
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_034669c4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar13,1);
LAB_034669c4:
    uVar5 = (*(code *)*puVar7)(plVar6);
    uVar5 = uVar5 & 1;
    while( true ) {
      if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
      bVar4 = uVar5 != 0;
      (**(code **)(*unaff_x22 + 0x308))();
      do {
        unaff_x19 = unaff_x19 + 1;
        if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x19) {
          if (bVar4) goto LAB_03466c44;
          if ((unaff_x22 == (long *)0x0) ||
             (uVar8 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 == 0)) goto LAB_03466ce4;
          *(undefined8 *)(unaff_x20 + 0x70) = uVar8;
          thunk_FUN_01f51358();
          plVar6 = (long *)(**(code **)(*unaff_x22 + 0x388))();
          puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          goto LAB_03466a6c;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        unaff_x25 = *(long *)(unaff_x24 + unaff_x19 * 8 + 0x20);
        lVar13 = thunk_FUN_01f116d0(unaff_x25,*unaff_x21);
      } while (lVar13 == 0);
      if (bVar4) break;
      uVar5 = 0;
    }
    if (unaff_x25 == 0) goto LAB_03466ce4;
    unaff_x26 = *unaff_x21;
    param_1 = thunk_FUN_01f116d0(unaff_x25,unaff_x26);
  } while( true );
LAB_03466a6c:
  lVar10 = *plVar6;
  lVar13 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar13) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03466ab8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar13,0);
LAB_03466ab8:
  uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar11 & 1) == 0) {
    plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar6 == (long *)0x0) goto LAB_03466c44;
    lVar13 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 == 0) goto LAB_03466c0c;
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_03466bf4;
  }
  lVar10 = *plVar6;
  lVar13 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar13) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_03466b18;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar13,1);
LAB_03466b18:
  lVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = *(undefined8 *)puVar3;
  lVar10 = thunk_FUN_01f116d0(lVar13,uVar8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar13,uVar8);
  }
  lVar10 = *(long *)puVar3;
  plVar9 = (long *)thunk_FUN_01f116d0(lVar13,lVar10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar13,lVar10);
  }
  lVar13 = *plVar9;
  uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar10) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03466ba4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_03466ba4:
  (*(code *)*puVar7)(plVar9);
  goto LAB_03466a6c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03466c28:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03466c44:
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar13 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar2;
  }
  uVar11 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
  if ((uVar11 & 1) != 0) {
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar8,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar8;
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000010;
    thunk_FUN_01f51358();
    *(bool *)(unaff_x20 + 0x90) = bVar4;
    return;
  }
LAB_03466ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


