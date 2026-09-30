/*
FUNCTION_NAME: UnityEngine.UI.SetPropertyUtility$$SetStruct<__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 022fad20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022fb158) */

void UnityEngine_UI_SetPropertyUtility__SetStruct<__Il2CppFullySharedGenericStructType>(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  void *unaff_x25;
  int iVar10;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  memset(unaff_x23,0,unaff_x20);
  if (unaff_x26 == (long *)0x0) {
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    FUN_03971094(uVar5,0);
    goto LAB_022fb14c;
  }
  if ((*(byte *)(*(long *)(unaff_x24 + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(unaff_x24 + 8));
  }
  plVar3 = (long *)thunk_FUN_01f116d0();
  if (plVar3 == (long *)0x0) {
    lVar6 = **(long **)(unaff_x22 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *unaff_x26;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022faec4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_022faec4:
    plVar3 = (long *)(*(code *)*puVar4)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022faf2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_022faf2c:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      iVar10 = 6;
      iVar2 = 6;
    }
    else {
      do {
        lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
              goto LAB_022fafa0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar6 = FUN_01ecb238(plVar3,lVar6,0);
LAB_022fafa0:
        *(void **)(unaff_x29 + -0x20) = unaff_x21;
        lVar6 = *(long *)(lVar6 + 8);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,unaff_x29 + -0x20);
        memcpy(unaff_x25,unaff_x21,unaff_x20);
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_022fb018;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_022fb018:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      } while ((uVar8 & 1) != 0);
      memcpy(unaff_x21,unaff_x25,unaff_x20);
      memcpy(unaff_x23,unaff_x21,unaff_x20);
      iVar10 = 9;
      iVar2 = 9;
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_022fb0b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022fb0b8:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      iVar2 = iVar10;
    }
    if (iVar2 != 9) {
      if ((iVar2 != 6) && (iVar2 != 0)) goto LAB_022fb108;
      goto LAB_022fb0dc;
    }
    memcpy(unaff_x21,unaff_x23,unaff_x20);
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022fae18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022fae18:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 < 1) {
LAB_022fb0dc:
      FUN_03971224(0);
LAB_022fb14c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08910();
    }
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    *(int *)(unaff_x29 + -0xc) = iVar2 + -1;
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_022fae94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01ecb238(plVar3,lVar6,0);
LAB_022fae94:
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x21;
    lVar6 = *(long *)(lVar6 + 8);
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar3,unaff_x29 + -0x20);
  }
  memcpy(unaff_x19,unaff_x21,unaff_x20);
LAB_022fb108:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


