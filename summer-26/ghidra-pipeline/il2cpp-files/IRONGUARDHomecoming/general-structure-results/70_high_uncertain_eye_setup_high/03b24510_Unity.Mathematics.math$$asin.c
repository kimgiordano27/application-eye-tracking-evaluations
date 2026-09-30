/*
FUNCTION_NAME: Unity.Mathematics.math$$asin
ENTRY_POINT: 03b24510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b24680) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */
/* WARNING: Removing unreachable block (ram,0x03b245f0) */
/* WARNING: Removing unreachable block (ram,0x03b245f8) */

void Unity_Mathematics_math__asin(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  undefined8 uVar8;
  long lVar9;
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
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  char in_stack_00000474;
  
  if (in_ZR) {
    plVar5 = (long *)__cxa_begin_catch();
    lVar9 = *plVar5;
    __cxa_end_catch();
    if (unaff_x24 != (long *)0x0) {
      lVar6 = *unaff_x24;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03b23f7c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b23f7c:
      (*(code *)*puVar4)();
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar9);
    }
    lVar9 = *unaff_x22;
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
      FUN_03b34c1c(lVar9,0);
      *unaff_x22 = lVar9;
      thunk_FUN_01f51358();
      lVar9 = *unaff_x22;
      memcpy(&stack0x00000328,&stack0x00000478,0x128);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      memcpy(&stack0x00000200,&stack0x00000328,0x128);
      FUN_03b3420c(lVar9,&stack0x00000200,0);
    }
    else {
      memcpy(&stack0x000000d8,&stack0x00000478,0x128);
      FUN_03b34248(lVar9,&stack0x000000d8,0);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_04073094(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      plVar5 = (long *)FUN_025de0b4(&stack0x000005a0,*unaff_x28);
      puVar2 = StringLiteral_11610;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03b240c0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03b240c0:
        uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_03b241a0;
          lVar9 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 == 0) goto LAB_03b24178;
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03b24160;
        }
        lVar9 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03b2411c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03b2411c:
        lVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar9 + 0x60) = *unaff_x22;
        thunk_FUN_01f51358();
      } while( true );
    }
    goto LAB_03b241c4;
  }
  if (unaff_x24 != (long *)0x0) {
    lVar9 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x03b24588;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x03b24588:
    (*(code *)*puVar4)();
  }
  if (param_2 != 1) {
    FUN_03b34a54(&stack0x000005c0,0);
    if (param_2 != 1) {
      if (unaff_x19 != (long *)0x0) {
        lVar9 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto code_r0x03b24668;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238();
code_r0x03b24668:
        (*(code *)*puVar4)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01fbfd14();
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar9 = *plVar5;
    __cxa_end_catch();
    goto code_r0x03b24240;
  }
  plVar5 = (long *)__cxa_begin_catch();
  lVar9 = *plVar5;
  __cxa_end_catch();
  goto code_r0x03b2422c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_03b24160:
    if (*(long *)(piVar7 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03b24194;
    }
  }
LAB_03b24178:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,0);
LAB_03b24194:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03b241a0:
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28) = *(undefined8 *)(unaff_x20 + 0x60);
  thunk_FUN_01f51358();
LAB_03b241c4:
  lVar9 = *unaff_x22;
  memcpy(&stack0x00000328,&stack0x000005c0,0x80);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  in_stack_000000b0 = in_stack_00000450;
  in_stack_000000b8 = in_stack_00000458;
  in_stack_000000c0 = in_stack_00000460;
  in_stack_000000c8 = in_stack_00000468;
  memcpy(&stack0x00000030,&stack0x00000328,0x80);
  in_stack_00000018 = in_stack_000000b8;
  in_stack_00000010 = in_stack_000000b0;
  in_stack_00000028 = in_stack_000000c8;
  in_stack_00000020 = in_stack_000000c0;
  FUN_03b35bd0(lVar9,in_stack_00000474 != '\0',&stack0x00000030,&stack0x00000010,unaff_w21,0);
  lVar9 = 0;
code_r0x03b2422c:
  FUN_03b34a54(&stack0x000005c0,0);
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar9);
  }
  lVar9 = 0;
code_r0x03b24240:
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03b24290;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03b24290:
    (*(code *)*puVar4)();
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar9);
}


