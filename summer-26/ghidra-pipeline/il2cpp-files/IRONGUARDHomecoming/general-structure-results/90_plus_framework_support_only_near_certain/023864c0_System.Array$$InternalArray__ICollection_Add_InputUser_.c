/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<InputUser>
ENTRY_POINT: 023864c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x02386ad0) */
/* WARNING: Removing unreachable block (ram,0x023869e4) */
/* WARNING: Removing unreachable block (ram,0x02386bf8) */

void System_Array__InternalArray__ICollection_Add<InputUser>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *in_x12;
  void *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x22;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
    in_x12 = *(long **)(unaff_x29 + -0x50);
  }
  lVar6 = *in_x12;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0238652c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(in_x12,lVar4,0);
  in_x12 = *(long **)(unaff_x29 + -0x50);
LAB_0238652c:
  uVar2 = (*(code *)*puVar1)(in_x12,puVar1[1]);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar2;
LAB_0238653c:
  if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = **(long **)(unaff_x29 + -0x40);
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
                        0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
  uVar7 = (*(code *)*puVar1)(*(undefined8 *)(unaff_x29 + -0x40),puVar1[1]);
  if ((uVar7 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = **(long **)(unaff_x29 + -0x40);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02386610;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar4,0);
LAB_02386610:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))
              (*(undefined8 *)(lVar4 + 8),lVar4,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x38
              );
    memcpy(unaff_x28,unaff_x26,unaff_x25);
    memcpy(unaff_x27,unaff_x28,unaff_x25);
    if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x27;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
    (*(code *)puVar5[2])
              (uVar2,puVar5,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30);
    plVar9 = *(long **)(unaff_x29 + -0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023866f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,0);
LAB_023866f8:
    plVar9 = (long *)(*(code *)*puVar1)(plVar9,puVar1[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02386760;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02386760:
      uVar7 = (*(code *)*puVar1)(plVar9,puVar1[1]);
      if ((uVar7 & 1) == 0) goto LAB_02386978;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            lVar4 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_023867d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar4 = FUN_01ecb238(plVar9,lVar4,0);
LAB_023867d4:
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
      lVar4 = *(long *)(lVar4 + 8);
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x38);
      memcpy(unaff_x19,unaff_x26,unaff_x25);
      lVar4 = *unaff_x22;
      memcpy(unaff_x27,unaff_x19,unaff_x25);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x27;
      }
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
      uVar2 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar4,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (*(char *)(unaff_x29 + -0x28) == '\0') {
        lVar4 = *unaff_x22;
        memcpy(unaff_x26,unaff_x19,unaff_x25);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        uVar2 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar1 = unaff_x26;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar1 = (undefined8 *)*unaff_x26;
        }
        puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70);
        uVar3 = *puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar2;
        (*(code *)puVar5[2])(uVar3,puVar5,lVar4,unaff_x29 + -0x18,uVar2);
      }
      lVar4 = *unaff_x22;
      memcpy(unaff_x26,unaff_x19,unaff_x25);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x26;
      }
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
      uVar2 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar4,unaff_x29 + -0x38,unaff_x29 + -0x20);
      lVar4 = *(long *)(unaff_x29 + -0x20);
      memcpy(unaff_x27,unaff_x28,unaff_x25);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x27;
      }
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
      uVar2 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar4,unaff_x29 + -0x38,unaff_x29 + -0x24);
    } while( true );
  }
  uVar2 = *(undefined8 *)(unaff_x29 + -0x58);
  plVar9 = *(long **)(unaff_x29 + -0x40);
  if (plVar9 == (long *)0x0) goto LAB_02386ac4;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 == 0) goto LAB_02386a9c;
  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
  goto LAB_02386a84;
LAB_02386978:
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023869d4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023869d4:
    (*(code *)*puVar1)(plVar9,puVar1[1]);
  }
  goto LAB_0238653c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_02386a84:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_02386ab8;
    }
  }
LAB_02386a9c:
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02386ab8:
  (*(code *)*puVar1)(plVar9,puVar1[1]);
LAB_02386ac4:
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x48) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar3 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
            (uVar3,uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
            (*(undefined8 *)(unaff_x29 + -0x50),uVar3,*(uint *)(unaff_x29 + -100) & 1);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


