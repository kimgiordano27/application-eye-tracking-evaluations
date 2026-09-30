/*
FUNCTION_NAME: System.IndexOutOfRangeException$$.ctor
ENTRY_POINT: 03466764
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

void System_IndexOutOfRangeException___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  byte unaff_w26;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x03466764:
  puVar9 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  do {
    lVar6 = (*(code *)*puVar9)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *unaff_x21;
    lVar7 = thunk_FUN_01f116d0(lVar6,lVar15);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar6,lVar15);
    }
    lVar7 = *unaff_x21;
    plVar8 = (long *)thunk_FUN_01f116d0(lVar6,lVar7);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar6,lVar7);
    }
    lVar6 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03466804;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,1);
LAB_03466804:
    uVar12 = (*(code *)*puVar9)(plVar8);
    if ((uVar12 & 1) == 0) {
LAB_0346681c:
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      bVar4 = unaff_w26 ^ 1;
      plVar8 = (long *)thunk_FUN_01f116d0();
      if (plVar8 == (long *)0x0) goto LAB_034668dc;
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 == 0) goto LAB_03466870;
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x25;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x19) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03466710;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_03466710:
    unaff_w26 = (*(code *)*puVar9)();
    if ((unaff_w26 & 1) == 0) goto LAB_0346681c;
    param_1 = *unaff_x25;
    uVar12 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar12 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x19) goto code_r0x03466764;
        uVar12 = uVar12 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034668d0;
    }
  }
LAB_03466870:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_034668d0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_034668dc:
  lVar6 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar6 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar12 = 0;
    uVar11 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar15 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
      lVar7 = thunk_FUN_01f116d0(lVar15,*(undefined8 *)puVar1);
      if (lVar7 != 0) {
        if ((bVar4 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          if (lVar15 == 0) goto LAB_03466ce4;
          uVar14 = *(undefined8 *)puVar1;
          lVar7 = thunk_FUN_01f116d0(lVar15,uVar14);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,uVar14);
          }
          lVar7 = *(long *)puVar1;
          plVar8 = (long *)thunk_FUN_01f116d0(lVar15,lVar7);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,lVar7);
          }
          lVar15 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar7,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar9)(plVar8);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar11 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar14 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0)
       ) {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar14;
      thunk_FUN_01f51358();
      plVar8 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar8;
        lVar6 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar6,0);
LAB_03466ab8:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar12 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar8 == (long *)0x0) goto LAB_03466c44;
          lVar6 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 == 0) goto LAB_03466c0c;
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar7 = *plVar8;
        lVar6 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar6,1);
LAB_03466b18:
        lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar14 = *(undefined8 *)puVar3;
        lVar7 = thunk_FUN_01f116d0(lVar6,uVar14);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,uVar14);
        }
        lVar7 = *(long *)puVar3;
        plVar10 = (long *)thunk_FUN_01f116d0(lVar6,lVar7);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar6,lVar7);
        }
        lVar6 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar7,0);
LAB_03466ba4:
        (*(code *)*puVar9)(plVar10);
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
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar6 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  uVar12 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
  if ((uVar12 & 1) != 0) {
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


