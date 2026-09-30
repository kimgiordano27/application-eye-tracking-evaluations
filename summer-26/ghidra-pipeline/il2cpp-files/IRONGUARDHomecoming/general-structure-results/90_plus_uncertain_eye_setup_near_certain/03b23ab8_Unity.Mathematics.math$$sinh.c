/*
FUNCTION_NAME: Unity.Mathematics.math$$sinh
ENTRY_POINT: 03b23ab8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03b242c8) */
/* WARNING: Removing unreachable block (ram,0x03b241ac) */
/* WARNING: Removing unreachable block (ram,0x03b242dc) */
/* WARNING: Removing unreachable block (ram,0x03b23d80) */
/* WARNING: Removing unreachable block (ram,0x03b23f94) */
/* WARNING: Removing unreachable block (ram,0x03b242d0) */
/* WARNING: Removing unreachable block (ram,0x03b24308) */
/* WARNING: Removing unreachable block (ram,0x03b242f8) */

void Unity_Mathematics_math__sinh(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x27;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_11610);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_11678);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_11679);
    thunk_FUN_01efb3a4(StringLiteral_11680);
    thunk_FUN_01efb3a4(StringLiteral_11681);
    *(undefined1 *)(unaff_x19 + 0x39a) = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_03b2468c();
  memset(&stack0x00000478,0,0x128);
  plVar12 = (long *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = (uint)(*plVar12 == 0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_04073094(uVar13,0,0);
  puVar3 = StringLiteral_11679;
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar14 = FUN_03b1eab0();
    FUN_025de060(&stack0x00000328,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)StringLiteral_11681);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memmove(&stack0x00000530,(void *)(*(long *)(unaff_x20 + 0x20) + 0x30),0x60);
    thunk_FUN_01f51358(&stack0x00000538,0);
    plVar7 = (long *)FUN_025de0b4(&stack0x000005a0,*(undefined8 *)puVar3);
    puVar4 = StringLiteral_11610;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03b23c88;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03b23c88:
      uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03b23dbc;
        lVar9 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 == 0) goto LAB_03b23d48;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03b23d30;
      }
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03b23ce4;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03b23ce4:
      lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = *(uint *)(lVar9 + 200) >> 1 & 1 | uVar11;
      *(uint *)(lVar9 + 200) = *(uint *)(lVar9 + 200) & 0xfffffff8;
    } while( true );
  }
  FUN_025de00c(&stack0x00000328);
  uVar11 = uVar11 | (*(uint *)(unaff_x20 + 200) & 2) >> 1;
  *(uint *)(unaff_x20 + 200) = *(uint *)(unaff_x20 + 200) & 0xfffffff8;
  goto LAB_03b23dbc;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
LAB_03b23d30:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03b23d64;
    }
  }
LAB_03b23d48:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03b23d64:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03b23dbc:
  if (*plVar12 != 0) {
    FUN_03b34c24(&stack0x00000328,*plVar12 + 0x40,0);
    memcpy(&stack0x000005c0,&stack0x00000328,0x80);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b351f0(*plVar12,uVar11,&stack0x00000450,&stack0x00000474,0);
    FUN_03b3d908(&stack0x00000478,*plVar12,uVar11,0);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03b34a54(*plVar12 + 0x40,0);
  }
  plVar7 = (long *)FUN_025de0b4(&stack0x000005a0,*(undefined8 *)puVar3);
  puVar4 = StringLiteral_11610;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b23ea8;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03b23ea8:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar6 & 1) == 0) break;
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b23f04;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_03b23f04:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    FUN_03b3daa4(&stack0x00000478,uVar13,0);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b23f7c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03b23f7c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  lVar9 = *plVar12;
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_11678);
    FUN_03b34c1c(lVar9,0);
    *plVar12 = lVar9;
    thunk_FUN_01f51358(plVar12,lVar9);
    lVar9 = *plVar12;
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
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_04073094(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)FUN_025de0b4(&stack0x000005a0,*(undefined8 *)puVar3);
    puVar2 = StringLiteral_11610;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03b240c0;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03b240c0:
      uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03b241a0;
        lVar9 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 == 0) goto LAB_03b24178;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03b24160;
      }
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03b2411c;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03b2411c:
      lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar9 + 0x60) = *plVar12;
      thunk_FUN_01f51358();
    } while( true );
  }
  goto LAB_03b241c4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
LAB_03b24160:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03b24194;
    }
  }
LAB_03b24178:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03b24194:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03b241a0:
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28) = *(undefined8 *)(unaff_x20 + 0x60);
  thunk_FUN_01f51358();
LAB_03b241c4:
  lVar9 = *plVar12;
  memcpy(&stack0x00000328,&stack0x000005c0,0x80);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  memcpy(&stack0x00000030,&stack0x00000328,0x80);
  in_stack_00000018 = in_stack_000000b8;
  in_stack_00000010 = in_stack_000000b0;
  in_stack_00000028 = in_stack_000000c8;
  in_stack_00000020 = in_stack_000000c0;
  FUN_03b35bd0(lVar9,0,&stack0x00000030,&stack0x00000010,uVar11,0);
  FUN_03b34a54(&stack0x000005c0,0);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b24290;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03b24290:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
  }
  return;
}


