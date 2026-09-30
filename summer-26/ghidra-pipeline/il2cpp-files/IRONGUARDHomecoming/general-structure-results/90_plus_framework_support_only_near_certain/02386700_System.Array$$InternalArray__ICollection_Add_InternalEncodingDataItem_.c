/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<InternalEncodingDataItem>
ENTRY_POINT: 02386700
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x02386ad0) */
/* WARNING: Removing unreachable block (ram,0x02386bf8) */
/* WARNING: Removing unreachable block (ram,0x023869e4) */

void System_Array__InternalArray__ICollection_Add<InternalEncodingDataItem>
               (code *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x02386700:
  plVar1 = (long *)(*param_1)(param_2,param_3);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02386760;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02386760:
    uVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar8 & 1) == 0) break;
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_023867d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar1,lVar6,0);
LAB_023867d4:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar1,unaff_x29 + -0x38);
    memcpy(unaff_x19,unaff_x26,unaff_x25);
    lVar6 = *unaff_x22;
    memcpy(unaff_x27,unaff_x19,unaff_x25);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar2 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x27;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar6,unaff_x29 + -0x38,unaff_x29 + -0x28);
    if (*(char *)(unaff_x29 + -0x28) == '\0') {
      lVar6 = *unaff_x22;
      memcpy(unaff_x26,unaff_x19,unaff_x25);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar3 = thunk_FUN_01f117cc();
      (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar2 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar2 = (undefined8 *)*unaff_x26;
      }
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70);
      uVar4 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar3;
      (*(code *)puVar5[2])(uVar4,puVar5,lVar6,unaff_x29 + -0x18,uVar3);
    }
    lVar6 = *unaff_x22;
    memcpy(unaff_x26,unaff_x19,unaff_x25);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar2 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x26;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar6,unaff_x29 + -0x38,unaff_x29 + -0x20);
    lVar6 = *(long *)(unaff_x29 + -0x20);
    memcpy(unaff_x27,unaff_x28,unaff_x25);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar2 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x27;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar6,unaff_x29 + -0x38,unaff_x29 + -0x24);
  } while( true );
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_023869d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023869d4:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = **(long **)(unaff_x29 + -0x40);
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
                        0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
  uVar8 = (*(code *)*puVar2)(*(undefined8 *)(unaff_x29 + -0x40),puVar2[1]);
  if ((uVar8 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x29 + -0x58);
    plVar1 = *(long **)(unaff_x29 + -0x40);
    if (plVar1 == (long *)0x0) goto LAB_02386ac4;
    lVar6 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 == 0) goto LAB_02386a9c;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    goto LAB_02386a84;
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = **(long **)(unaff_x29 + -0x40);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
        goto LAB_02386610;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar6,0);
LAB_02386610:
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
  lVar6 = *(long *)(lVar6 + 8);
  (**(code **)(lVar6 + 0x10))
            (*(undefined8 *)(lVar6 + 8),lVar6,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x38);
  memcpy(unaff_x28,unaff_x26,unaff_x25);
  memcpy(unaff_x27,unaff_x28,unaff_x25);
  if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar2 = unaff_x27;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
    puVar2 = (undefined8 *)*unaff_x27;
  }
  puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
  uVar3 = *puVar5;
  *(undefined8 **)(unaff_x29 + -0x38) = puVar2;
  (*(code *)puVar5[2])
            (uVar3,puVar5,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30);
  param_2 = *(long **)(unaff_x29 + -0x30);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023866f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(param_2,lVar6,0);
LAB_023866f8:
  param_1 = (code *)*puVar2;
  param_3 = puVar2[1];
  goto code_r0x02386700;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_02386a84:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_02386ab8;
    }
  }
LAB_02386a9c:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02386ab8:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_02386ac4:
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x48) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar4 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
            (uVar4,uVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
            (*(undefined8 *)(unaff_x29 + -0x50),uVar4,*(uint *)(unaff_x29 + -100) & 1);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


