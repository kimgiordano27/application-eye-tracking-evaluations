/*
FUNCTION_NAME: Unity.Mathematics.math$$sinh
ENTRY_POINT: 03b23ed8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03b242c8) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b23f94) */
/* WARNING: Removing unreachable block (ram,0x03b242d0) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */
/* WARNING: Removing unreachable block (ram,0x03b242dc) */

void Unity_Mathematics_math__sinh(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
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
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  char in_stack_00000474;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03b23e5c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03b23e5c:
        uVar4 = (*(code *)*puVar3)();
        FUN_03b3daa4(&stack0x00000478,uVar4,0);
        lVar6 = *unaff_x24;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03b23ea8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03b23ea8:
        uVar7 = (*(code *)*puVar3)();
        if ((uVar7 & 1) == 0) {
          if (unaff_x24 == (long *)0x0) goto LAB_03b23f88;
          lVar6 = *unaff_x24;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_03b23f60;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03b23f48;
        }
        param_1 = *unaff_x24;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03b23f48:
    if (*(long *)(piVar8 + -2) == *unaff_x26) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03b23f7c;
    }
  }
LAB_03b23f60:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03b23f7c:
  (*(code *)*puVar3)();
LAB_03b23f88:
  lVar6 = *unaff_x22;
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
    FUN_03b34c1c(lVar6,0);
    *unaff_x22 = lVar6;
    thunk_FUN_01f51358();
    lVar6 = *unaff_x22;
    memcpy(&stack0x00000328,&stack0x00000478,0x128);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000200,&stack0x00000328,0x128);
    FUN_03b3420c(lVar6,&stack0x00000200,0);
  }
  else {
    memcpy(&stack0x000000d8,&stack0x00000478,0x128);
    FUN_03b34248(lVar6,&stack0x000000d8,0);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_04073094(uVar4,0,0);
  if ((uVar7 & 1) != 0) {
    plVar5 = (long *)FUN_025de0b4(&stack0x000005a0,*unaff_x28);
    puVar2 = StringLiteral_11610;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03b240c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03b240c0:
      uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_03b241a0;
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_03b24178;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03b24160;
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03b2411c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03b2411c:
      lVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar6 + 0x60) = *unaff_x22;
      thunk_FUN_01f51358();
    } while( true );
  }
  goto LAB_03b241c4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03b24160:
    if (*(long *)(piVar8 + -2) == *unaff_x26) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03b24194;
    }
  }
LAB_03b24178:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,0);
LAB_03b24194:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_03b241a0:
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28) = *(undefined8 *)(unaff_x20 + 0x60);
  thunk_FUN_01f51358();
LAB_03b241c4:
  lVar6 = *unaff_x22;
  memcpy(&stack0x00000328,&stack0x000005c0,0x80);
  if (lVar6 == 0) {
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
  FUN_03b35bd0(lVar6,in_stack_00000474 != '\0',&stack0x00000030,&stack0x00000010,unaff_w21,0);
  FUN_03b34a54(&stack0x000005c0,0);
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b24290;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03b24290:
    (*(code *)*puVar3)();
  }
  return;
}


