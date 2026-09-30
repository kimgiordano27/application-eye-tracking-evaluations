/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<LOD>
ENTRY_POINT: 023868b0
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

void System_Array__InternalArray__ICollection_Add<LOD>(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  void *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar9;
  long unaff_x24;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x023868b0:
  puVar6 = (undefined8 *)*unaff_x26;
LAB_023868b4:
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x23;
  (*(code *)puVar3[2])(uVar1,puVar3,unaff_x24,unaff_x29 + -0x18,unaff_x23);
LAB_023868d4:
  lVar9 = *unaff_x22;
  memcpy(unaff_x26,unaff_x19,unaff_x25);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar6 = unaff_x26;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
    puVar6 = (undefined8 *)*unaff_x26;
  }
  puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
  (*(code *)puVar3[2])(uVar1,puVar3,lVar9,unaff_x29 + -0x38,unaff_x29 + -0x20);
  lVar9 = *(long *)(unaff_x29 + -0x20);
  memcpy(unaff_x27,unaff_x28,unaff_x25);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar6 = unaff_x27;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
    puVar6 = (undefined8 *)*unaff_x27;
  }
  puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
  (*(code *)puVar3[2])(uVar1,puVar3,lVar9,unaff_x29 + -0x38,unaff_x29 + -0x24);
  do {
    lVar9 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02386760;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(unaff_x21,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02386760:
    uVar5 = (*(code *)*puVar6)(unaff_x21,puVar6[1]);
    if ((uVar5 & 1) != 0) break;
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_023869d4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023869d4:
      (*(code *)*puVar6)(unaff_x21,puVar6[1]);
    }
    if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = **(long **)(unaff_x29 + -0x40);
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
    uVar5 = (*(code *)*puVar6)(*(undefined8 *)(unaff_x29 + -0x40),puVar6[1]);
    if ((uVar5 & 1) == 0) {
      uVar1 = *(undefined8 *)(unaff_x29 + -0x58);
      plVar8 = *(long **)(unaff_x29 + -0x40);
      if (plVar8 == (long *)0x0) goto LAB_02386ac4;
      lVar9 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 == 0) goto LAB_02386a9c;
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_02386a84;
    }
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar4 = **(long **)(unaff_x29 + -0x40);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          lVar9 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02386610;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar9 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar9,0);
LAB_02386610:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))
              (*(undefined8 *)(lVar9 + 8),lVar9,*(undefined8 *)(unaff_x29 + -0x40),unaff_x29 + -0x38
              );
    memcpy(unaff_x28,unaff_x26,unaff_x25);
    memcpy(unaff_x27,unaff_x28,unaff_x25);
    if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x27;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
    (*(code *)puVar3[2])
              (uVar1,puVar3,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30);
    plVar8 = *(long **)(unaff_x29 + -0x30);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023866f8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_023866f8:
    unaff_x21 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar9) {
        lVar9 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
        goto LAB_023867d4;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  lVar9 = FUN_01ecb238(unaff_x21,lVar9,0);
LAB_023867d4:
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
  lVar9 = *(long *)(lVar9 + 8);
  (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,unaff_x21,unaff_x29 + -0x38);
  memcpy(unaff_x19,unaff_x26,unaff_x25);
  lVar9 = *unaff_x22;
  memcpy(unaff_x27,unaff_x19,unaff_x25);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar6 = unaff_x27;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
    puVar6 = (undefined8 *)*unaff_x27;
  }
  puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
  uVar1 = *puVar3;
  *(undefined8 **)(unaff_x29 + -0x38) = puVar6;
  (*(code *)puVar3[2])(uVar1,puVar3,lVar9,unaff_x29 + -0x38,unaff_x29 + -0x28);
  if (*(char *)(unaff_x29 + -0x28) == '\0') goto code_r0x02386858;
  goto LAB_023868d4;
code_r0x02386858:
  unaff_x24 = *unaff_x22;
  memcpy(unaff_x26,unaff_x19,unaff_x25);
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  unaff_x23 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  param_1 = *(long *)(unaff_x20 + 0x38);
  puVar6 = unaff_x26;
  if (-1 < *(int *)(*(long *)(param_1 + 0x40) + 0x28)) goto code_r0x023868b0;
  goto LAB_023868b4;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_02386a84:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_02386ab8;
    }
  }
LAB_02386a9c:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02386ab8:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
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


