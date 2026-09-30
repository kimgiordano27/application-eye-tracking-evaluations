/*
FUNCTION_NAME: System.Number$$FormatInt32
ENTRY_POINT: 034669e4
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

void System_Number__FormatInt32(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  uint in_w8;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *piVar13;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long lVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    bVar4 = in_w8 != 0;
    (**(code **)(in_x9 + 0x308))();
    do {
      unaff_x19 = unaff_x19 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x19) {
        if (bVar4) goto LAB_03466c44;
        if ((unaff_x22 == (long *)0x0) ||
           (uVar6 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 == 0)) goto LAB_03466ce4;
        *(undefined8 *)(unaff_x20 + 0x70) = uVar6;
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
      lVar11 = *(long *)(unaff_x24 + unaff_x19 * 8 + 0x20);
      lVar10 = thunk_FUN_01f116d0(lVar11,*unaff_x21);
    } while (lVar10 == 0);
    if (bVar4) {
      if (lVar11 == 0) goto LAB_03466ce4;
      lVar14 = *unaff_x21;
      lVar10 = thunk_FUN_01f116d0(lVar11,lVar14);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,lVar14);
      }
      lVar10 = *unaff_x21;
      plVar7 = (long *)thunk_FUN_01f116d0(lVar11,lVar10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,lVar10);
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_034669c4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_034669c4:
      uVar5 = (*(code *)*puVar8)(plVar7);
      in_w8 = uVar5 & 1;
    }
    else {
      in_w8 = 0;
    }
    if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
    in_x9 = *unaff_x22;
  } while( true );
LAB_03466a6c:
  lVar11 = *plVar7;
  lVar10 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03466ab8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_03466ab8:
  uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar12 & 1) == 0) {
    plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar7 == (long *)0x0) goto LAB_03466c44;
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 == 0) goto LAB_03466c0c;
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_03466bf4;
  }
  lVar11 = *plVar7;
  lVar10 = *(long *)puVar2;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_03466b18;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,1);
LAB_03466b18:
  lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = *(undefined8 *)puVar3;
  lVar11 = thunk_FUN_01f116d0(lVar10,uVar6);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar10,uVar6);
  }
  lVar11 = *(long *)puVar3;
  plVar9 = (long *)thunk_FUN_01f116d0(lVar10,lVar11);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar10,lVar11);
  }
  lVar10 = *plVar9;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar11) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03466ba4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_03466ba4:
  (*(code *)*puVar8)(plVar9);
  goto LAB_03466a6c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03466c28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03466c44:
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar10 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar2;
  }
  uVar12 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
  if ((uVar12 & 1) != 0) {
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar6,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar6;
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


