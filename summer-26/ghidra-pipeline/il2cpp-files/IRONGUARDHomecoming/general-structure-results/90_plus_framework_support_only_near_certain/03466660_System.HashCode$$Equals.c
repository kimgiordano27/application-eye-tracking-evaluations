/*
FUNCTION_NAME: System.HashCode$$Equals
ENTRY_POINT: 03466660
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

void System_HashCode__Equals(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long lVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01ee6d7c();
  uVar6 = thunk_FUN_0340e318(in_stack_00000018,*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18),
                             0);
  uVar7 = FUN_035d6f50(0);
  if ((uVar6 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
    plVar8 = (long *)(**(code **)(*unaff_x22 + 0x388))();
    puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03466710;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_03466710:
      bVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((bVar4 & 1) == 0) break;
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03466774;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,1);
LAB_03466774:
      lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = *(undefined8 *)puVar3;
      lVar12 = thunk_FUN_01f116d0(lVar11,uVar16);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,uVar16);
      }
      lVar12 = *(long *)puVar3;
      plVar10 = (long *)thunk_FUN_01f116d0(lVar11,lVar12);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar11,lVar12);
      }
      lVar11 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_03466804;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar12,1);
LAB_03466804:
      uVar6 = (*(code *)*puVar9)(plVar10,uVar7);
    } while ((uVar6 & 1) != 0);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    bVar4 = bVar4 ^ 1;
    plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_034668d0;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_034668d0:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
  }
  lVar11 = (**(code **)(*unaff_x24 + 0x1f8))();
  puVar1 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
  if (lVar11 == 0) goto LAB_03466ce4;
  if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
    uVar6 = 0;
    uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    do {
      if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar15 = *(long *)(lVar11 + uVar6 * 8 + 0x20);
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
          plVar8 = (long *)thunk_FUN_01f116d0(lVar15,lVar12);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar15,lVar12);
          }
          lVar15 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar12) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_034669c4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_034669c4:
          uVar5 = (*(code *)*puVar9)(plVar8,uVar7);
          uVar5 = uVar5 & 1;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_03466ce4;
        bVar4 = uVar5 != 0;
        (**(code **)(*unaff_x22 + 0x308))();
      }
      uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar11 + 0x18));
  }
  if ((bVar4 & 1) == 0) {
    if ((unaff_x22 != (long *)0x0) && (uVar7 = (**(code **)(*unaff_x22 + 0x3f8))(), unaff_x20 != 0))
    {
      *(undefined8 *)(unaff_x20 + 0x70) = uVar7;
      thunk_FUN_01f51358();
      plVar8 = (long *)(**(code **)(*unaff_x22 + 0x388))();
      puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03466ab8;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_03466ab8:
        uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar6 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar8 == (long *)0x0) goto LAB_03466c44;
          lVar11 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 == 0) goto LAB_03466c0c;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_03466bf4;
        }
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03466b18;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,1);
LAB_03466b18:
        lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = *(undefined8 *)puVar3;
        lVar12 = thunk_FUN_01f116d0(lVar11,uVar7);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,uVar7);
        }
        lVar12 = *(long *)puVar3;
        plVar10 = (long *)thunk_FUN_01f116d0(lVar11,lVar12);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar11,lVar12);
        }
        lVar11 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar12) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03466ba4;
            }
            uVar6 = uVar6 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar12,0);
LAB_03466ba4:
        (*(code *)*puVar9)(plVar10);
      } while( true );
    }
    goto LAB_03466ce4;
  }
  goto LAB_03466c44;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar14 = piVar14 + 4;
    if (uVar6 == 0) break;
LAB_03466bf4:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03466c28;
    }
  }
LAB_03466c0c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03466c28:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03466c44:
  puVar1 = Method_System_RuntimeMethodHandle_GetObjectData__;
  lVar11 = *(long *)Method_System_RuntimeMethodHandle_GetObjectData__;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar1;
  }
  uVar6 = FUN_0340e600(in_stack_00000018,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18),0);
  if ((uVar6 & 1) != 0) {
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_0346fec4(uVar7,in_stack_00000018,in_stack_00000010);
    in_stack_00000010 = uVar7;
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


