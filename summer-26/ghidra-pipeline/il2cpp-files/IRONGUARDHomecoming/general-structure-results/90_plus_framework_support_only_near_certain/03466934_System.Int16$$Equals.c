/*
FUNCTION_NAME: System.Int16$$Equals
ENTRY_POINT: 03466934
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466c40) */

void System_Int16__Equals(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long lVar12;
  byte unaff_w28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (param_1 != 0) {
      if ((unaff_w28 & 1) == 0) {
        uVar4 = 0;
      }
      else {
        if (unaff_x25 == 0) goto LAB_03466ce4;
        lVar12 = *unaff_x21;
        lVar5 = thunk_FUN_01f116d0(unaff_x25,lVar12);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x25,lVar12);
        }
        lVar5 = *unaff_x21;
        plVar6 = (long *)thunk_FUN_01f116d0(unaff_x25,lVar5);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(unaff_x25,lVar5);
        }
        lVar12 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_034669c4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,1);
LAB_034669c4:
        uVar4 = (*(code *)*puVar7)(plVar6);
        uVar4 = uVar4 & 1;
      }
      if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
      unaff_w28 = uVar4 != 0;
      (**(code **)(*unaff_x22 + 0x308))();
    }
    unaff_x19 = unaff_x19 + 1;
    if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x19) {
      if ((unaff_w28 & 1) != 0) goto LAB_03466c44;
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
      break;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_x25 = *(long *)(unaff_x24 + unaff_x19 * 8 + 0x20);
    param_1 = thunk_FUN_01f116d0(unaff_x25,*unaff_x21);
  } while( true );
LAB_03466a6c:
  lVar12 = *plVar6;
  lVar5 = *(long *)puVar2;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03466ab8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,0);
LAB_03466ab8:
  uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((uVar10 & 1) == 0) {
    plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar6 == (long *)0x0) goto LAB_03466c44;
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 == 0) goto LAB_03466c0c;
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    goto LAB_03466bf4;
  }
  lVar12 = *plVar6;
  lVar5 = *(long *)puVar2;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar5) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_03466b18;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar5,1);
LAB_03466b18:
  lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = *(undefined8 *)puVar3;
  lVar12 = thunk_FUN_01f116d0(lVar5,uVar8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar5,uVar8);
  }
  lVar12 = *(long *)puVar3;
  plVar9 = (long *)thunk_FUN_01f116d0(lVar5,lVar12);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(lVar5,lVar12);
  }
  lVar5 = *plVar9;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar12) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03466ba4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_03466ba4:
  (*(code *)*puVar7)(plVar9);
  goto LAB_03466a6c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03466c28:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03466c44:
  puVar2 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar5 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar10 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
  if ((uVar10 & 1) != 0) {
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar8,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar8;
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000010;
    thunk_FUN_01f51358();
    *(byte *)(unaff_x20 + 0x90) = unaff_w28 & 1;
    return;
  }
LAB_03466ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


