/*
FUNCTION_NAME: System.NotSupportedException$$.ctor
ENTRY_POINT: 0346663c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03466c40) */
/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466d40) */

void System_NotSupportedException___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long lVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (**(code **)(param_1 + 0x318))();
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  uVar7 = thunk_FUN_0340e318(in_stack_00000018,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
  uVar8 = FUN_035d6f50(0);
  if ((uVar7 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
    plVar9 = (long *)(**(code **)(*unaff_x22 + 0x388))();
    puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar9;
      lVar6 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03466710;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_03466710:
      bVar4 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((bVar4 & 1) == 0) break;
      lVar12 = *plVar9;
      lVar6 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03466774;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
LAB_03466774:
      lVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = *(undefined8 *)puVar3;
      lVar12 = thunk_FUN_01f116d0(lVar6,uVar16);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar6,uVar16);
      }
      lVar12 = *(long *)puVar3;
      plVar11 = (long *)thunk_FUN_01f116d0(lVar6,lVar12);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar6,lVar12);
      }
      lVar6 = *plVar11;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03466804;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar12,1);
LAB_03466804:
      uVar7 = (*(code *)*puVar10)(plVar11,uVar8);
    } while ((uVar7 & 1) != 0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    bVar4 = bVar4 ^ 1;
    plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_034668d0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_034668d0:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
  }
  lVar6 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar6 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar7 = 0;
    uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar15 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
      lVar12 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)puVar1);
      if (lVar12 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar15 == 0) goto LAB_03466ce4;
          uVar16 = *(undefined8 *)puVar1;
          lVar12 = thunk_FUN_01f116d0(lVar15,uVar16);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,uVar16);
          }
          lVar12 = *(long *)puVar1;
          plVar9 = (long *)thunk_FUN_01f116d0(lVar15,lVar12);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,lVar12);
          }
          lVar15 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar12) {
                puVar10 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar10)(plVar9,uVar8);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar8 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0))
    {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar8;
      thunk_FUN_01f51358();
      plVar9 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar9;
        lVar6 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_03466ab8:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar7 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar9 == (long *)0x0) goto LAB_03466c44;
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_03466c0c;
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar12 = *plVar9;
        lVar6 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
LAB_03466b18:
        lVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = *(undefined8 *)puVar3;
        lVar12 = thunk_FUN_01f116d0(lVar6,uVar8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,uVar8);
        }
        lVar12 = *(long *)puVar3;
        plVar11 = (long *)thunk_FUN_01f116d0(lVar6,lVar12);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,lVar12);
        }
        lVar6 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar12,0);
LAB_03466ba4:
        (*(code *)*puVar10)(plVar11);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  uVar7 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
  if ((uVar7 & 1) != 0) {
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar8,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar8;
  }
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000010;
    thunk_FUN_01f51358();
    *(byte *)(unaff_x20 + 0x90) = bVar4 & 1;
    return;
  }
LAB_03466ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


