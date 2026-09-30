/*
FUNCTION_NAME: Unity.Mathematics.math$$sinh
ENTRY_POINT: 03b23cac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b242c8) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b23f94) */
/* WARNING: Removing unreachable block (ram,0x03b23d84) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */
/* WARNING: Removing unreachable block (ram,0x03b242dc) */
/* WARNING: Removing unreachable block (ram,0x03b23d80) */
/* WARNING: Removing unreachable block (ram,0x03b242d0) */
/* WARNING: Removing unreachable block (ram,0x03b242f8) */

void Unity_Mathematics_math__sinh(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong in_x9;
  long in_x10;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar10;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  do {
    piVar9 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        uVar10 = unaff_w21;
        goto LAB_03b23ce4;
      }
      in_x9 = in_x9 - 1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_01ecb238();
      uVar10 = unaff_w21;
LAB_03b23ce4:
      lVar5 = (*(code *)*puVar4)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar5 + 200) >> 1 & 1;
      unaff_w21 = uVar1 | uVar10;
      *(uint *)(lVar5 + 200) = *(uint *)(lVar5 + 200) & 0xfffffff8;
      lVar5 = *unaff_x24;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b23c88;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b23c88:
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x24 == (long *)0x0) goto LAB_03b23d70;
        lVar5 = *unaff_x24;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_03b23d48;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03b23d30;
      }
      param_1 = *unaff_x24;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03b23d30:
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03b23d64;
    }
  }
LAB_03b23d48:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b23d64:
  (*(code *)*puVar4)();
LAB_03b23d70:
  uVar1 = uVar1 | uVar10 & 1;
  if (*unaff_x22 != 0) {
    FUN_03b34c24(&stack0x00000328,*unaff_x22 + 0x40,0);
    memcpy(&stack0x000005c0,&stack0x00000328,0x80);
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b351f0(*unaff_x22,uVar1,&stack0x00000450,&stack0x00000474,0);
    FUN_03b3d908(&stack0x00000478,*unaff_x22,uVar1,0);
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b34a54(*unaff_x22 + 0x40,0);
  }
  plVar6 = (long *)FUN_025de0b4(&stack0x000005a0,*unaff_x28);
  puVar3 = StringLiteral_11610;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b23ea8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03b23ea8:
    uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar5 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b23f04;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03b23f04:
    uVar7 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    FUN_03b3daa4(&stack0x00000478,uVar7,0);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b23f7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x26,0);
LAB_03b23f7c:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  lVar5 = *unaff_x22;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
    FUN_03b34c1c(lVar5,0);
    *unaff_x22 = lVar5;
    thunk_FUN_01f51358();
    lVar5 = *unaff_x22;
    memcpy(&stack0x00000328,&stack0x00000478,0x128);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000200,&stack0x00000328,0x128);
    FUN_03b3420c(lVar5,&stack0x00000200,0);
  }
  else {
    memcpy(&stack0x000000d8,&stack0x00000478,0x128);
    FUN_03b34248(lVar5,&stack0x000000d8,0);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_04073094(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    plVar6 = (long *)FUN_025de0b4(&stack0x000005a0,*unaff_x28);
    puVar3 = StringLiteral_11610;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b240c0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03b240c0:
      uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03b241a0;
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 == 0) goto LAB_03b24178;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03b24160;
      }
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b2411c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03b2411c:
      lVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar5 + 0x60) = *unaff_x22;
      thunk_FUN_01f51358();
    } while( true );
  }
  goto LAB_03b241c4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03b24160:
    if (*(long *)(piVar9 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03b24194;
    }
  }
LAB_03b24178:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x26,0);
LAB_03b24194:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_03b241a0:
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28) = *(undefined8 *)(unaff_x20 + 0x60);
  thunk_FUN_01f51358();
LAB_03b241c4:
  lVar5 = *unaff_x22;
  memcpy(&stack0x00000328,&stack0x000005c0,0x80);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  memcpy(&stack0x00000030,&stack0x00000328,0x80);
  in_stack_00000018 = in_stack_000000b8;
  in_stack_00000010 = in_stack_000000b0;
  in_stack_00000028 = in_stack_000000c8;
  in_stack_00000020 = in_stack_000000c0;
  FUN_03b35bd0(lVar5,0,&stack0x00000030,&stack0x00000010,uVar1,0);
  FUN_03b34a54(&stack0x000005c0,0);
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b24290;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b24290:
    (*(code *)*puVar4)();
  }
  return;
}


