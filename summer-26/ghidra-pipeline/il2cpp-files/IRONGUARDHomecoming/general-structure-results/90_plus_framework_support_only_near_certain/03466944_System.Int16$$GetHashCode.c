/*
FUNCTION_NAME: System.Int16$$GetHashCode
ENTRY_POINT: 03466944
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

void System_Int16__GetHashCode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar6 = thunk_FUN_01f116d0(unaff_x25,unaff_x26);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x25,unaff_x26);
    }
    lVar6 = *unaff_x21;
    plVar7 = (long *)thunk_FUN_01f116d0(unaff_x25,lVar6);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x25,lVar6);
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_034669c4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_034669c4:
    uVar5 = (*(code *)*puVar8)(plVar7);
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
             (uVar9 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 == 0)) goto LAB_03466ce4;
          *(undefined8 *)(unaff_x20 + 0x70) = uVar9;
          thunk_FUN_01f51358();
          plVar7 = (long *)(**(code **)(*unaff_x22 + 0x388))();
          puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar7 == (long *)0x0) {
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
        lVar6 = thunk_FUN_01f116d0(unaff_x25,*unaff_x21);
      } while (lVar6 == 0);
      if (bVar4) break;
      uVar5 = 0;
    }
    if (unaff_x25 == 0) goto LAB_03466ce4;
    unaff_x26 = *unaff_x21;
  } while( true );
LAB_03466a6c:
  lVar11 = *plVar7;
  lVar6 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar6) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03466ab8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03466ab8:
  uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar12 & 1) == 0) {
    plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar7 == (long *)0x0) goto LAB_03466c44;
    lVar6 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 == 0) goto LAB_03466c0c;
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    goto LAB_03466bf4;
  }
  lVar11 = *plVar7;
  lVar6 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar6) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_03466b18;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_03466b18:
  lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = *(undefined8 *)puVar3;
  lVar11 = thunk_FUN_01f116d0(lVar6,uVar9);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar6,uVar9);
  }
  lVar11 = *(long *)puVar3;
  plVar10 = (long *)thunk_FUN_01f116d0(lVar6,lVar11);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar6,lVar11);
  }
  lVar6 = *plVar10;
  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar11) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03466ba4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_03466ba4:
  (*(code *)*puVar8)(plVar10);
  goto LAB_03466a6c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03466c28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03466c44:
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar2;
  }
  uVar12 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
  if ((uVar12 & 1) != 0) {
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar9,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar9;
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


