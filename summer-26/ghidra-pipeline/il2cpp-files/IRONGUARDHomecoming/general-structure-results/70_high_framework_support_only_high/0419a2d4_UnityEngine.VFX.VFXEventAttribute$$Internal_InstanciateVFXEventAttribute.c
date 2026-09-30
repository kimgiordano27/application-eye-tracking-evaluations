/*
FUNCTION_NAME: UnityEngine.VFX.VFXEventAttribute$$Internal_InstanciateVFXEventAttribute
ENTRY_POINT: 0419a2d4
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

void UnityEngine_VFX_VFXEventAttribute__Internal_InstanciateVFXEventAttribute(ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  byte unaff_w29;
  undefined1 auVar10 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    uVar2 = FUN_02766f28(param_1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x12) * 0x10 + 0x138);
          goto LAB_0419a344;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x26,0x12);
LAB_0419a344:
    (*(code *)*puVar3)(unaff_x23,uVar2,puVar3[1]);
    do {
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0419a0c8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0419a0c8:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_0419a3c0;
        lVar5 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_0419a398;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0419a380;
      }
      lVar5 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0419a124;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0419a124:
      unaff_x22 = (*(code *)*puVar3)();
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
      uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                        (*(long *)(unaff_x19 + 0x400),unaff_x22,&stack0x00000008,
                         *(undefined8 *)
                          Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    } while ((uVar8 & 1) == 0);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar1 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
    auVar10 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x4c),0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x20) * 0x10 + 0x138);
          goto FUN_0419a1f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar1,*unaff_x26,0x20);
FUN_0419a1f4:
    (*(code *)*puVar3)(plVar1,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar3[1]);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar1 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
    auVar10 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x54),0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x1f) * 0x10 + 0x138);
          goto LAB_0419a28c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar1,*unaff_x26,0x1f);
LAB_0419a28c:
    (*(code *)*puVar3)(plVar1,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,puVar3[1]);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(in_stack_00000008 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x23 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x18),0);
    if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(*(long *)(unaff_x19 + 0x420) + 0x31) == '\0') {
      param_1 = 1;
    }
    else {
      param_1 = (ulong)(*(byte *)(unaff_x22 + 99) ^ 1);
    }
  } while( true );
code_r0x0419a538:
  uVar8 = uVar8 - 1;
  piVar9 = piVar9 + 4;
  if (uVar8 == 0) goto LAB_0419a544;
  goto LAB_0419a52c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0419a380:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0419a3b4;
    }
  }
LAB_0419a398:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0419a3b4:
  (*(code *)*puVar3)();
LAB_0419a3c0:
  if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_0419a5d0;
  plVar1 = (long *)FUN_04220be0(*(long *)(unaff_x19 + 0x410),0);
  if ((unaff_w29 & 1) == 0) {
    uVar2 = FUN_042379d8(0,0);
    if (plVar1 == (long *)0x0) goto LAB_0419a5d0;
    lVar6 = *plVar1;
    lVar5 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          iVar7 = *piVar9 + 0x15;
          goto LAB_0419a554;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    uVar4 = 0x15;
  }
  else {
    uVar2 = FUN_042379d8(0x3f800000,0);
    if (plVar1 == (long *)0x0) {
LAB_0419a5d0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
          goto LAB_0419a494;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar1,*unaff_x26,0x15);
LAB_0419a494:
    (*(code *)*puVar3)(plVar1,uVar2,puVar3[1]);
    if (*(long *)(unaff_x19 + 0x420) == 0) goto LAB_0419a5d0;
    if (*(int *)(*(long *)(unaff_x19 + 0x420) + 0x2c) != 1) goto LAB_0419a56c;
    if (*(long *)(unaff_x19 + 0x400) == 0) goto LAB_0419a5d0;
    uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (*(long *)(unaff_x19 + 0x400),unaff_x22);
    if ((uVar8 & 1) == 0) goto LAB_0419a56c;
    if ((in_stack_00000000 == 0) || (*(long *)(in_stack_00000000 + 0x18) == 0)) goto LAB_0419a5d0;
    plVar1 = (long *)FUN_04220be0(*(long *)(in_stack_00000000 + 0x18),0);
    uVar2 = FUN_02766f28(1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (plVar1 == (long *)0x0) goto LAB_0419a5d0;
    lVar6 = *plVar1;
    lVar5 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
LAB_0419a52c:
      if (*(long *)(piVar9 + -2) != lVar5) goto code_r0x0419a538;
      iVar7 = *piVar9 + 0x12;
LAB_0419a554:
      puVar3 = (undefined8 *)(lVar6 + (long)iVar7 * 0x10 + 0x138);
      goto LAB_0419a55c;
    }
LAB_0419a544:
    uVar4 = 0x12;
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar1,lVar5,uVar4);
LAB_0419a55c:
  (*(code *)*puVar3)(plVar1,uVar2,puVar3[1]);
LAB_0419a56c:
  FUN_04198670();
  return;
}


