/*
FUNCTION_NAME: System.IndexOutOfRangeException$$.ctor
ENTRY_POINT: 03466788
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

void System_IndexOutOfRangeException___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long lVar13;
  byte unaff_w26;
  undefined8 uVar14;
  long lVar15;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar15 = *unaff_x21;
    lVar6 = thunk_FUN_01f116d0(unaff_x29,lVar15);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x29,lVar15);
    }
    lVar6 = *unaff_x21;
    plVar7 = (long *)thunk_FUN_01f116d0(unaff_x29,lVar6);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x29,lVar6);
    }
    lVar15 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03466804;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_03466804:
    uVar11 = (*(code *)*puVar8)(plVar7);
    if ((uVar11 & 1) == 0) {
LAB_0346681c:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      bVar4 = unaff_w26 ^ 1;
      plVar7 = (long *)thunk_FUN_01f116d0();
      if (plVar7 == (long *)0x0) goto LAB_034668dc;
      lVar6 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 == 0) goto LAB_03466870;
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x19) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03466710;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03466710:
    unaff_w26 = (*(code *)*puVar8)();
    if ((unaff_w26 & 1) == 0) goto LAB_0346681c;
    lVar6 = *unaff_x25;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x19) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03466774;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_03466774:
    unaff_x29 = (*(code *)*puVar8)();
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_034668d0;
    }
  }
LAB_03466870:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_034668d0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_034668dc:
  lVar6 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar6 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar11 = 0;
    uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar13 = *(long *)(lVar6 + uVar11 * 8 + 0x20);
      lVar15 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)puVar1);
      if (lVar15 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar13 == 0) goto LAB_03466ce4;
          uVar14 = *(undefined8 *)puVar1;
          lVar15 = thunk_FUN_01f116d0(lVar13,uVar14);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar13,uVar14);
          }
          lVar15 = *(long *)puVar1;
          plVar7 = (long *)thunk_FUN_01f116d0(lVar13,lVar15);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar13,lVar15);
          }
          lVar13 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar15) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar15,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar8)(plVar7);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar14 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0)
       ) {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar14;
      thunk_FUN_01f51358();
      plVar7 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar15 = *plVar7;
        lVar6 = *(long *)puVar1;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03466ab8:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar11 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar7 == (long *)0x0) goto LAB_03466c44;
          lVar6 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar11 == 0) goto LAB_03466c0c;
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar15 = *plVar7;
        lVar6 = *(long *)puVar1;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar15 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_03466b18:
        lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = *(undefined8 *)puVar3;
        lVar15 = thunk_FUN_01f116d0(lVar6,uVar14);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,uVar14);
        }
        lVar15 = *(long *)puVar3;
        plVar9 = (long *)thunk_FUN_01f116d0(lVar6,lVar15);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,lVar15);
        }
        lVar6 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar15) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar15,0);
LAB_03466ba4:
        (*(code *)*puVar8)(plVar9);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  uVar11 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
  if ((uVar11 & 1) != 0) {
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar14,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar14;
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


