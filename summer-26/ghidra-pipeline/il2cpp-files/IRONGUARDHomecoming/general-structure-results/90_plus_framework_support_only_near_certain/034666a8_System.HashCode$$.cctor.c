/*
FUNCTION_NAME: System.HashCode$$.cctor
ENTRY_POINT: 034666a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03466c40) */
/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466d40) */

void System_HashCode___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *in_x9;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long lVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar6 = (long *)(*in_x9)();
  puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03466710;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03466710:
    bVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((bVar4 & 1) == 0) break;
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar1;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03466774;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_03466774:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = *(undefined8 *)puVar3;
    lVar10 = thunk_FUN_01f116d0(lVar9,uVar15);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar9,uVar15);
    }
    lVar10 = *(long *)puVar3;
    plVar8 = (long *)thunk_FUN_01f116d0(lVar9,lVar10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar9,lVar10);
    }
    lVar9 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03466804;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,1);
LAB_03466804:
    uVar12 = (*(code *)*puVar7)(plVar8);
  } while ((uVar12 & 1) != 0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  bVar4 = bVar4 ^ 1;
  plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_034668d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_034668d0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  lVar9 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar9 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar12 = 0;
    uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar14 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      lVar10 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)puVar1);
      if (lVar10 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar14 == 0) goto LAB_03466ce4;
          uVar15 = *(undefined8 *)puVar1;
          lVar10 = thunk_FUN_01f116d0(lVar14,uVar15);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,uVar15);
          }
          lVar10 = *(long *)puVar1;
          plVar6 = (long *)thunk_FUN_01f116d0(lVar14,lVar10);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,lVar10);
          }
          lVar14 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar10,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar7)(plVar6);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar15 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0)
       ) {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar15;
      thunk_FUN_01f51358();
      plVar6 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03466ab8:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar12 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar6 == (long *)0x0) goto LAB_03466c44;
          lVar9 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_03466c0c;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_03466b18:
        lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = *(undefined8 *)puVar3;
        lVar10 = thunk_FUN_01f116d0(lVar9,uVar15);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,uVar15);
        }
        lVar10 = *(long *)puVar3;
        plVar8 = (long *)thunk_FUN_01f116d0(lVar9,lVar10);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar9,lVar10);
        }
        lVar9 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_03466ba4:
        (*(code *)*puVar7)(plVar8);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar9 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar1;
  }
  uVar12 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x18),0);
  if ((uVar12 & 1) != 0) {
    uVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar15,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar15;
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


