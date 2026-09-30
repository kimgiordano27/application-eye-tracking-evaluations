/*
FUNCTION_NAME: System.HashCode$$GetHashCode
ENTRY_POINT: 034665f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03466c40) */
/* WARNING: Removing unreachable block (ram,0x03466d4c) */
/* WARNING: Removing unreachable block (ram,0x03466d40) */

void System_HashCode__GetHashCode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x20;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000018;
  
  FUN_035ac8e8();
  *(undefined8 *)(param_1 + 0x10) = unaff_x22;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10));
  plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
  FUN_0353e574(plVar6,0);
  if (unaff_x23 != 0) {
    if (plVar6 == (long *)0x0) goto LAB_03466ce4;
    (**(code **)(*plVar6 + 0x318))(plVar6);
  }
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar7 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar1;
  }
  uVar8 = thunk_FUN_0340e318(in_stack_00000018,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
  uVar9 = FUN_035d6f50(0);
  if ((uVar8 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_03466ce4;
    plVar10 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar10;
      lVar7 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03466710;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar7,0);
LAB_03466710:
      bVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((bVar4 & 1) == 0) break;
      lVar13 = *plVar10;
      lVar7 = *(long *)puVar1;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_03466774;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar7,1);
LAB_03466774:
      lVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar18 = *(undefined8 *)puVar3;
      lVar13 = thunk_FUN_01f116d0(lVar7,uVar18);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar7,uVar18);
      }
      lVar13 = *(long *)puVar3;
      plVar12 = (long *)thunk_FUN_01f116d0(lVar7,lVar13);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar7,lVar13);
      }
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_03466804;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar12,lVar13,1);
LAB_03466804:
      uVar8 = (*(code *)*puVar11)(plVar12,uVar9);
    } while ((uVar8 & 1) != 0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    bVar4 = bVar4 ^ 1;
    plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_034668d0;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_034668d0:
      (*(code *)*puVar11)(plVar10,puVar11[1]);
    }
  }
  lVar7 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar7 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar8 = 0;
    uVar14 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar14 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar17 = *(long *)(lVar7 + uVar8 * 8 + 0x20);
      lVar13 = thunk_FUN_01f116d0(lVar17,*(undefined8 *)puVar1);
      if (lVar13 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar17 == 0) goto LAB_03466ce4;
          uVar18 = *(undefined8 *)puVar1;
          lVar13 = thunk_FUN_01f116d0(lVar17,uVar18);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar17,uVar18);
          }
          lVar13 = *(long *)puVar1;
          plVar10 = (long *)thunk_FUN_01f116d0(lVar17,lVar13);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar17,lVar13);
          }
          lVar15 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar11)(plVar10,uVar9);
          uVar5 = uVar5 & 1;
        }
        if (plVar6 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*plVar6 + 0x308))(plVar6,lVar17,*(undefined8 *)(*plVar6 + 0x310));
      }
      uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((plVar6 != (long *)0x0) &&
       (uVar9 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400)),
       unaff_x20 != 0)) {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar9;
      thunk_FUN_01f51358();
      plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar6;
        lVar7 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_03466ab8:
        uVar8 = (*(code *)*puVar11)(plVar6,puVar11[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar6 == (long *)0x0) goto LAB_03466c44;
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_03466c0c;
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar13 = *plVar6;
        lVar7 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar7) {
              puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,1);
LAB_03466b18:
        lVar7 = (*(code *)*puVar11)(plVar6,puVar11[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = *(undefined8 *)puVar3;
        lVar13 = thunk_FUN_01f116d0(lVar7,uVar9);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar7,uVar9);
        }
        lVar13 = *(long *)puVar3;
        plVar10 = (long *)thunk_FUN_01f116d0(lVar7,lVar13);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar7,lVar13);
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar13) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar13,0);
LAB_03466ba4:
        (*(code *)*puVar11)(plVar10);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar16 = piVar16 + 4;
    if (uVar8 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar7 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *(long *)puVar1;
  }
  uVar8 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
  if ((uVar8 & 1) != 0) {
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(lVar7,in_stack_00000018,param_1);
    param_1 = lVar7;
  }
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x68) = param_1;
    thunk_FUN_01f51358();
    *(byte *)(unaff_x20 + 0x90) = bVar4 & 1;
    return;
  }
LAB_03466ce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


