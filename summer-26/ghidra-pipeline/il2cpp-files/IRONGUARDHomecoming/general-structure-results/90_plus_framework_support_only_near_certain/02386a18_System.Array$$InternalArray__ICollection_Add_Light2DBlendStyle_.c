/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Light2DBlendStyle>
ENTRY_POINT: 02386a18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x02386ce0) */
/* WARNING: Removing unreachable block (ram,0x02386bd8) */

void System_Array__InternalArray__ICollection_Add<Light2DBlendStyle>(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void *unaff_x19;
  long unaff_x20;
  int iVar10;
  int iVar11;
  long *unaff_x21;
  long *unaff_x22;
  long lVar12;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    lVar12 = *plVar4;
    __cxa_end_catch();
code_r0x0238697c:
    if (unaff_x21 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023869d4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023869d4:
      (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    }
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar12);
    }
    if (*(long **)(unaff_x29 + -0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = **(long **)(unaff_x29 + -0x40);
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto System_Array__InternalArray__ICollection_Add<Int32Enum>;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
System_Array__InternalArray__ICollection_Add<Int32Enum>:
    uVar8 = (*(code *)*puVar3)(*(undefined8 *)(unaff_x29 + -0x40),puVar3[1]);
    if ((uVar8 & 1) != 0) {
      lVar12 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      lVar7 = **(long **)(unaff_x29 + -0x40);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar12) {
            lVar12 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_02386610;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar12 = FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),lVar12,0);
LAB_02386610:
      *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
      lVar12 = *(long *)(lVar12 + 8);
      (**(code **)(lVar12 + 0x10))
                (*(undefined8 *)(lVar12 + 8),lVar12,*(undefined8 *)(unaff_x29 + -0x40),
                 unaff_x29 + -0x38);
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
      puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x50);
      uVar1 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
      (*(code *)puVar6[2])
                (uVar1,puVar6,*(undefined8 *)(unaff_x29 + -0x48),unaff_x29 + -0x38,unaff_x29 + -0x30
                );
      plVar4 = *(long **)(unaff_x29 + -0x30);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar12) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023866f8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar12,0);
LAB_023866f8:
      unaff_x21 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar12 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar3 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02386760;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(unaff_x21,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02386760:
        uVar8 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if ((uVar8 & 1) == 0) goto LAB_02386978;
        lVar12 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44(lVar12);
        }
        lVar7 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar12) {
              lVar12 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
              goto LAB_023867d4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar12 = FUN_01ecb238(unaff_x21,lVar12,0);
LAB_023867d4:
        *(undefined8 **)(unaff_x29 + -0x38) = unaff_x26;
        lVar12 = *(long *)(lVar12 + 8);
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,unaff_x21,unaff_x29 + -0x38)
        ;
        memcpy(unaff_x19,unaff_x26,unaff_x25);
        lVar12 = *unaff_x22;
        memcpy(unaff_x27,unaff_x19,unaff_x25);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar3 = unaff_x27;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar3 = (undefined8 *)*unaff_x27;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
        uVar1 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
        (*(code *)puVar6[2])(uVar1,puVar6,lVar12,unaff_x29 + -0x38,unaff_x29 + -0x28);
        if (*(char *)(unaff_x29 + -0x28) == '\0') {
          lVar12 = *unaff_x22;
          memcpy(unaff_x26,unaff_x19,unaff_x25);
          if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x60) + 0x135) & 1) == 0) {
            FUN_01ecaf44();
          }
          uVar1 = thunk_FUN_01f117cc();
          (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x68))();
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          puVar3 = unaff_x26;
          if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
            puVar3 = (undefined8 *)*unaff_x26;
          }
          puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x70);
          uVar2 = *puVar6;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
          *(undefined8 *)(unaff_x29 + -0x10) = uVar1;
          (*(code *)puVar6[2])(uVar2,puVar6,lVar12,unaff_x29 + -0x18,uVar1);
        }
        lVar12 = *unaff_x22;
        memcpy(unaff_x26,unaff_x19,unaff_x25);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar3 = unaff_x26;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar3 = (undefined8 *)*unaff_x26;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x78);
        uVar1 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
        (*(code *)puVar6[2])(uVar1,puVar6,lVar12,unaff_x29 + -0x38,unaff_x29 + -0x20);
        lVar12 = *(long *)(unaff_x29 + -0x20);
        memcpy(unaff_x27,unaff_x28,unaff_x25);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar3 = unaff_x27;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x40) + 0x28)) {
          puVar3 = (undefined8 *)*unaff_x27;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x80);
        uVar1 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x38) = puVar3;
        (*(code *)puVar6[2])(uVar1,puVar6,lVar12,unaff_x29 + -0x38,unaff_x29 + -0x24);
      } while( true );
    }
    uVar1 = *(undefined8 *)(unaff_x29 + -0x58);
    plVar4 = *(long **)(unaff_x29 + -0x40);
    lVar12 = 0;
    iVar11 = 7;
    iVar10 = 7;
    goto joined_r0x02386a60;
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x58);
  plVar4 = *(long **)(unaff_x29 + -0x40);
  if (unaff_x21 != (long *)0x0) {
    lVar12 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x02386bc4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
code_r0x02386bc4:
    (*(code *)*puVar3)();
  }
  if (param_2 != 1) {
    if (*(long **)(unaff_x29 + -0x40) != (long *)0x0) {
      lVar12 = **(long **)(unaff_x29 + -0x40);
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x02386cc8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x02386cc8:
      (*(code *)*puVar3)(*(undefined8 *)(unaff_x29 + -0x40),puVar3[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar12 = *plVar5;
  __cxa_end_catch();
  iVar11 = 0;
  iVar10 = 0;
joined_r0x02386a60:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_02386ab8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02386ab8:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    iVar10 = iVar11;
  }
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar12);
  }
  if ((iVar10 == 7) || (iVar10 == 0)) {
    if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x48) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar2 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
              (uVar2,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
    (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
              (*(undefined8 *)(unaff_x29 + -0x50),uVar2,*(uint *)(unaff_x29 + -100) & 1);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_02386978:
  lVar12 = 0;
  goto code_r0x0238697c;
}


