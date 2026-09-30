/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Length>
ENTRY_POINT: 02386988
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02386ad0) */
/* WARNING: Removing unreachable block (ram,0x02386bf8) */

void System_Array__InternalArray__ICollection_Add<Length>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long in_x10;
  void *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x02386988:
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == **(long **)(in_x10 + 0xe00)) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023869d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,**(long **)(in_x10 + 0xe00),0);
LAB_023869d4:
  (*(code *)*puVar3)(unaff_x21,puVar3[1]);
LAB_023869e0:
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(unaff_x24);
  }
  if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = **(long **)(unaff_x29 + -0x40);
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
                        0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
  uVar7 = (*(code *)*puVar3)(*(undefined8 *)(unaff_x29 + -0x40),puVar3[1]);
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = **(long **)(unaff_x29 + -0x40);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02386610;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar5,0);
LAB_02386610:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))
              (*(undefined8 *)(lVar5 + 8),lVar5,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x38
              );
    memcpy(unaff_x28,unaff_x26,unaff_x25);
    memcpy(unaff_x27,unaff_x28,unaff_x25);
    if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x27;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
    uVar1 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
    (*(code *)puVar4[2])
              (uVar1,puVar4,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30);
    plVar9 = *(long **)(unaff_x29 + -0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023866f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_023866f8:
    unaff_x21 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02386760;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02386760:
      uVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if ((uVar7 & 1) == 0) goto LAB_02386978;
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_023867d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(unaff_x21,lVar5,0);
LAB_023867d4:
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,unaff_x21,unaff_x29 + -0x38);
      memcpy(unaff_x19,unaff_x26,unaff_x25);
      lVar5 = *unaff_x22;
      memcpy(unaff_x27,unaff_x19,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x27;
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
      uVar1 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
      (*(code *)puVar4[2])(uVar1,puVar4,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (*(char *)(unaff_x29 + -0x28) == '\0') {
        lVar5 = *unaff_x22;
        memcpy(unaff_x26,unaff_x19,unaff_x25);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        uVar1 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar3 = unaff_x26;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar3 = (undefined8 *)*unaff_x26;
        }
        puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70);
        uVar2 = *puVar4;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar1;
        (*(code *)puVar4[2])(uVar2,puVar4,lVar5,unaff_x29 + -0x18,uVar1);
      }
      lVar5 = *unaff_x22;
      memcpy(unaff_x26,unaff_x19,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x26;
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
      uVar1 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
      (*(code *)puVar4[2])(uVar1,puVar4,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x20);
      lVar5 = *(long *)(unaff_x29 + -0x20);
      memcpy(unaff_x27,unaff_x28,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x27;
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
      uVar1 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
      (*(code *)puVar4[2])(uVar1,puVar4,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x24);
    } while( true );
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x58);
  plVar9 = *(long **)(unaff_x29 + -0x40);
  if (plVar9 == (long *)0x0) goto LAB_02386ac4;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 == 0) goto LAB_02386a9c;
  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  goto LAB_02386a84;
LAB_02386978:
  unaff_x24 = 0;
  if (unaff_x21 != (long *)0x0) goto code_r0x02386980;
  goto LAB_023869e0;
code_r0x02386980:
  param_1 = *unaff_x21;
  in_x10 = 0x4532000;
  goto code_r0x02386988;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_02386a84:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_02386ab8;
    }
  }
LAB_02386a9c:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02386ab8:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
LAB_02386ac4:
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x48) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
            (uVar2,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
            (*(undefined8 *)(unaff_x29 + -0x50),uVar2,*(uint *)(unaff_x29 + -100) & 1);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


