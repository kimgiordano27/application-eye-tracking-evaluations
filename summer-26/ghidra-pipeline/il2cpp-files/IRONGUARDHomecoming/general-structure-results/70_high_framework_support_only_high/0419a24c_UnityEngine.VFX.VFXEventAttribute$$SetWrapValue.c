/*
FUNCTION_NAME: UnityEngine.VFX.VFXEventAttribute$$SetWrapValue
ENTRY_POINT: 0419a24c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0419a5d8) */

void UnityEngine_VFX_VFXEventAttribute__SetWrapValue(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  byte unaff_w29;
  undefined1 auVar11 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  
  auVar11._8_8_ = unaff_x25;
  auVar11._0_8_ = unaff_x24;
  do {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar10 + 0x1f) * 0x10 + 0x138);
        goto LAB_0419a28c;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x23,param_3,0x1f);
LAB_0419a28c:
      (*(code *)*puVar2)(unaff_x23,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar2[1]);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar3 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x18),0);
      if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(*(long *)(unaff_x19 + 0x420) + 0x31) == '\0') {
        bVar1 = 1;
      }
      else {
        bVar1 = *(byte *)(unaff_x22 + 99) ^ 1;
      }
      uVar4 = FUN_02766f28(bVar1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
            goto LAB_0419a344;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,0x12);
LAB_0419a344:
      (*(code *)*puVar2)(plVar3,uVar4,puVar2[1]);
      do {
        lVar6 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0419a0c8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419a0c8:
        uVar9 = (*(code *)*puVar2)();
        if ((uVar9 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_0419a3c0;
          lVar6 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_0419a398;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0419a380;
        }
        lVar6 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0419a124;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419a124:
        unaff_x22 = (*(code *)*puVar2)();
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_00000008 = 0;
        unaff_w29 = unaff_w29 | *(char *)(unaff_x22 + 0x60) != '\0';
        if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                          (*(long *)(unaff_x19 + 0x400),unaff_x22,&stack0x00000008,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
      } while ((uVar9 & 1) == 0);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar3 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
      auVar11 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x4c),0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x20) * 0x10 + 0x138);
            goto FUN_0419a1f4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,0x20);
FUN_0419a1f4:
      (*(code *)*puVar2)(plVar3,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar2[1]);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_x23 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
      auVar11 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x54),0);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      param_1 = *unaff_x23;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
code_r0x0419a538:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto LAB_0419a544;
  goto LAB_0419a52c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0419a380:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0419a3b4;
    }
  }
LAB_0419a398:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419a3b4:
  (*(code *)*puVar2)();
LAB_0419a3c0:
  if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_0419a5d0;
  plVar3 = (long *)FUN_04220be0(*(long *)(unaff_x19 + 0x410),0);
  if ((unaff_w29 & 1) == 0) {
    uVar4 = FUN_042379d8(0,0);
    if (plVar3 == (long *)0x0) goto LAB_0419a5d0;
    lVar7 = *plVar3;
    lVar6 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          iVar8 = *piVar10 + 0x15;
          goto LAB_0419a554;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    uVar5 = 0x15;
  }
  else {
    uVar4 = FUN_042379d8(0x3f800000,0);
    if (plVar3 == (long *)0x0) {
LAB_0419a5d0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto LAB_0419a494;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,0x15);
LAB_0419a494:
    (*(code *)*puVar2)(plVar3,uVar4,puVar2[1]);
    if (*(long *)(unaff_x19 + 0x420) == 0) goto LAB_0419a5d0;
    if (*(int *)(*(long *)(unaff_x19 + 0x420) + 0x2c) != 1) goto LAB_0419a56c;
    if (*(long *)(unaff_x19 + 0x400) == 0) goto LAB_0419a5d0;
    uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (*(long *)(unaff_x19 + 0x400),unaff_x22);
    if ((uVar9 & 1) == 0) goto LAB_0419a56c;
    if ((in_stack_00000000 == 0) || (*(long *)(in_stack_00000000 + 0x18) == 0)) goto LAB_0419a5d0;
    plVar3 = (long *)FUN_04220be0(*(long *)(in_stack_00000000 + 0x18),0);
    uVar4 = FUN_02766f28(1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (plVar3 == (long *)0x0) goto LAB_0419a5d0;
    lVar7 = *plVar3;
    lVar6 = *unaff_x26;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
LAB_0419a52c:
      if (*(long *)(piVar10 + -2) != lVar6) goto code_r0x0419a538;
      iVar8 = *piVar10 + 0x12;
LAB_0419a554:
      puVar2 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
      goto LAB_0419a55c;
    }
LAB_0419a544:
    uVar5 = 0x12;
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,uVar5);
LAB_0419a55c:
  (*(code *)*puVar2)(plVar3,uVar4,puVar2[1]);
LAB_0419a56c:
  FUN_04198670();
  return;
}


