/*
FUNCTION_NAME: Unity.Mathematics.math$$asin
ENTRY_POINT: 03b2446c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b24680) */
/* WARNING: Removing unreachable block (ram,0x03b23f94) */
/* WARNING: Removing unreachable block (ram,0x03b242dc) */
/* WARNING: Removing unreachable block (ram,0x03b245f0) */
/* WARNING: Removing unreachable block (ram,0x03b244f4) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */

void Unity_Mathematics_math__asin(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long lVar10;
  long *unaff_x24;
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
  
  if (in_ZR) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar10 = *plVar6;
    __cxa_end_catch();
    if (unaff_x24 != (long *)0x0) {
      lVar7 = *unaff_x24;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b23d64;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b23d64:
      (*(code *)*puVar4)();
    }
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar10);
    }
    FUN_025de00c(&stack0x00000328);
    uVar1 = unaff_w21 & 1 | (*(uint *)(unaff_x20 + 200) & 2) >> 1;
    *(uint *)(unaff_x20 + 200) = *(uint *)(unaff_x20 + 200) & 0xfffffff8;
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
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b23ea8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03b23ea8:
      uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if ((uVar8 & 1) == 0) goto LAB_03b23f24;
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b23f04;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03b23f04:
      uVar5 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      FUN_03b3daa4(&stack0x00000478,uVar5,0);
    } while( true );
  }
  if (unaff_x24 != (long *)0x0) {
    lVar10 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x03b244e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x03b244e4:
    (*(code *)*puVar4)();
  }
  if (param_2 != 1) {
    FUN_03b34a54(&stack0x000005c0,0);
    if (param_2 != 1) {
      if (unaff_x19 != (long *)0x0) {
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x03b24668;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x03b24668:
        (*(code *)*puVar4)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    plVar6 = (long *)__cxa_begin_catch();
    lVar10 = *plVar6;
    __cxa_end_catch();
    goto code_r0x03b24240;
  }
  plVar6 = (long *)__cxa_begin_catch();
  lVar10 = *plVar6;
  __cxa_end_catch();
  goto code_r0x03b2422c;
LAB_03b23f24:
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
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
  lVar10 = *unaff_x22;
  if (lVar10 == 0) {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
    FUN_03b34c1c(lVar10,0);
    *unaff_x22 = lVar10;
    thunk_FUN_01f51358();
    lVar10 = *unaff_x22;
    memcpy(&stack0x00000328,&stack0x00000478,0x128);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000200,&stack0x00000328,0x128);
    FUN_03b3420c(lVar10,&stack0x00000200,0);
  }
  else {
    memcpy(&stack0x000000d8,&stack0x00000478,0x128);
    FUN_03b34248(lVar10,&stack0x000000d8,0);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_04073094(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    plVar6 = (long *)FUN_025de0b4(&stack0x000005a0,*unaff_x28);
    puVar3 = StringLiteral_11610;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
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
        lVar10 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 == 0) goto LAB_03b24178;
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03b24160;
      }
      lVar10 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03b2411c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03b2411c:
      lVar10 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar10 + 0x60) = *unaff_x22;
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
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
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
  lVar10 = *unaff_x22;
  memcpy(&stack0x00000328,&stack0x000005c0,0x80);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  memcpy(&stack0x00000030,&stack0x00000328,0x80);
  in_stack_00000018 = in_stack_000000b8;
  in_stack_00000010 = in_stack_000000b0;
  in_stack_00000028 = in_stack_000000c8;
  in_stack_00000020 = in_stack_000000c0;
  FUN_03b35bd0(lVar10,0,&stack0x00000030,&stack0x00000010,uVar1,0);
  lVar10 = 0;
code_r0x03b2422c:
  FUN_03b34a54(&stack0x000005c0,0);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  lVar10 = 0;
code_r0x03b24240:
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
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
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  return;
}


