/*
FUNCTION_NAME: System.Int16$$CompareTo
ENTRY_POINT: 034667f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03466c40) */
/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466d40) */

void System_Int16__CompareTo(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long lVar14;
  byte unaff_w26;
  undefined8 uVar15;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x034667f4:
  puVar8 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  while (uVar6 = (*(code *)*puVar8)(unaff_x27), (uVar6 & 1) != 0) {
    lVar11 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x19) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03466710;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03466710:
    unaff_w26 = (*(code *)*puVar8)();
    if ((unaff_w26 & 1) == 0) break;
    lVar11 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x19) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03466774;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03466774:
    lVar11 = (*(code *)*puVar8)();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar14 = *unaff_x21;
    lVar9 = thunk_FUN_01f116d0(lVar11,lVar14);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar11,lVar14);
    }
    lVar9 = *unaff_x21;
    unaff_x27 = (long *)thunk_FUN_01f116d0(lVar11,lVar9);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar11,lVar9);
    }
    param_1 = *unaff_x27;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar9) goto code_r0x034667f4;
        uVar6 = uVar6 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(unaff_x27,lVar9,1);
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  bVar4 = unaff_w26 ^ 1;
  plVar7 = (long *)thunk_FUN_01f116d0();
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_034668d0;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_034668d0:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  lVar11 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar11 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar6 = 0;
    uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar14 = *(long *)(lVar11 + uVar6 * 8 + 0x20);
      lVar9 = thunk_FUN_01f116d0(lVar14,*(undefined8 *)puVar1);
      if (lVar9 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar14 == 0) goto LAB_03466ce4;
          uVar15 = *(undefined8 *)puVar1;
          lVar9 = thunk_FUN_01f116d0(lVar14,uVar15);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,uVar15);
          }
          lVar9 = *(long *)puVar1;
          plVar7 = (long *)thunk_FUN_01f116d0(lVar14,lVar9);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar14,lVar9);
          }
          lVar14 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar8)(plVar7);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar15 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0)
       ) {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar15;
      thunk_FUN_01f51358();
      plVar7 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar7;
        lVar11 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar11,0);
LAB_03466ab8:
        uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar6 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar7 == (long *)0x0) goto LAB_03466c44;
          lVar11 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 == 0) goto LAB_03466c0c;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar9 = *plVar7;
        lVar11 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar11,1);
LAB_03466b18:
        lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = *(undefined8 *)puVar3;
        lVar9 = thunk_FUN_01f116d0(lVar11,uVar15);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar15);
        }
        lVar9 = *(long *)puVar3;
        plVar10 = (long *)thunk_FUN_01f116d0(lVar11,lVar9);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,lVar9);
        }
        lVar11 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,0);
LAB_03466ba4:
        (*(code *)*puVar8)(plVar10);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar11 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar1;
  }
  uVar6 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18),0);
  if ((uVar6 & 1) != 0) {
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


