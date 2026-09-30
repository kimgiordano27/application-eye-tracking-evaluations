/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<InternedString>
ENTRY_POINT: 02386748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02386ad0) */
/* WARNING: Removing unreachable block (ram,0x02386bf8) */
/* WARNING: Removing unreachable block (ram,0x023869e4) */

void System_Array__InternalArray__ICollection_Add<InternedString>(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  void *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x02386748:
  puVar1 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  param_1 = unaff_x21;
  do {
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        lVar5 = *param_1;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_023869d4;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(param_1,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_023869d4:
        (*(code *)*puVar1)(param_1,puVar1[1]);
      }
      if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = **(long **)(unaff_x29 + -0x40);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
      uVar2 = (*(code *)*puVar1)(*(undefined8 *)(unaff_x29 + -0x40),puVar1[1]);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x29 + -0x58);
        plVar9 = *(long **)(unaff_x29 + -0x40);
        if (plVar9 == (long *)0x0) goto LAB_02386ac4;
        lVar5 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 == 0) goto LAB_02386a9c;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        break;
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar7 = **(long **)(unaff_x29 + -0x40);
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_02386610;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      lVar5 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar5,0);
LAB_02386610:
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))
                (*(undefined8 *)(lVar5 + 8),lVar5,*(undefined8 *)(unaff_x29 + -0x40),
                 unaff_x29 + -0x38);
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
      puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar6[2])
                (uVar3,puVar6,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30
                );
      plVar9 = *(long **)(unaff_x29 + -0x30);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar7 = *plVar9;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023866f8;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_023866f8:
      param_1 = (long *)(*(code *)*puVar1)(plVar9,puVar1[1]);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar7 = *param_1;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_023867d4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      lVar5 = FUN_01ecb238(param_1,lVar5,0);
LAB_023867d4:
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,unaff_x29 + -0x38);
      memcpy(unaff_x19,unaff_x26,unaff_x25);
      lVar5 = *unaff_x22;
      memcpy(unaff_x27,unaff_x19,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x27;
      }
      puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (*(char *)(unaff_x29 + -0x28) == '\0') {
        lVar5 = *unaff_x22;
        memcpy(unaff_x26,unaff_x19,unaff_x25);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
          FUN_01ecaf44();
        }
        uVar3 = thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar1 = unaff_x26;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar1 = (undefined8 *)*unaff_x26;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70);
        uVar4 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
        *(undefined8 *)(unaff_x29 + -0x10) = uVar3;
        (*(code *)puVar6[2])(uVar4,puVar6,lVar5,unaff_x29 + -0x18,uVar3);
      }
      lVar5 = *unaff_x22;
      memcpy(unaff_x26,unaff_x19,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x26;
      }
      puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x20);
      lVar5 = *(long *)(unaff_x29 + -0x20);
      memcpy(unaff_x27,unaff_x28,unaff_x25);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x27;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x27;
      }
      puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar5,unaff_x29 + -0x38,unaff_x29 + -0x24);
    }
    lVar5 = *param_1;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    param_2 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    unaff_x21 = param_1;
    if (uVar2 == 0) goto code_r0x02386748;
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 4;
      if (uVar2 == 0) goto code_r0x02386748;
    }
    puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
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
  uVar4 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
            (uVar4,uVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
            (*(undefined8 *)(unaff_x29 + -0x50),uVar4,*(uint *)(unaff_x29 + -100) & 1);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


