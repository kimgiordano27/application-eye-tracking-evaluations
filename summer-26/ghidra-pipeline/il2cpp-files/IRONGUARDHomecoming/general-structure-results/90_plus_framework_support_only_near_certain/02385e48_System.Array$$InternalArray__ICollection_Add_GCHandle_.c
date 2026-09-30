/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<GCHandle>
ENTRY_POINT: 02385e48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void System_Array__InternalArray__ICollection_Add<GCHandle>
               (void *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  void *in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar10;
  size_t unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *plVar11;
  byte unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    in_x9 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(param_1,in_x9,param_3);
  if (unaff_x25 != 0) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0x10);
    uVar3 = *puVar5;
    puVar6 = unaff_x21;
    if (-1 < *(int *)(*(long *)(unaff_x22 + 8) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar6;
    (*(code *)puVar5[2])(uVar3);
    if (*(char *)(unaff_x29 + -0x38) != '\0') {
      if ((unaff_w27 & 1) != 0) {
        lVar10 = *(long *)(unaff_x20 + 0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x50);
        if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x48);
        }
        memcpy(unaff_x21,pvVar1,unaff_x23);
        if (unaff_x19 == 0) goto LAB_023862ac;
        puVar5 = *(undefined8 **)(lVar10 + 0x68);
        uVar3 = *puVar5;
        if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
        (*(code *)puVar5[2])(uVar3);
        if (*(char *)(unaff_x29 + -0x38) == '\0') {
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar3 = thunk_FUN_01f117cc();
          uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Rigidbody2D>__);
          FUN_0356adc8(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3);
        }
      }
LAB_0238627c:
      if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    *(long *)(unaff_x29 + -0x58) = unaff_x28;
    lVar10 = *(long *)(unaff_x20 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(unaff_x21,pvVar1,unaff_x23);
    puVar6 = *(undefined8 **)(lVar10 + 0x18);
    uVar3 = *puVar6;
    puVar5 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = puVar5;
    (*(code *)puVar6[2])(uVar3);
    lVar10 = *(long *)(unaff_x20 + 0x38);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x48);
    }
    memcpy(unaff_x26,pvVar1,unaff_x23);
    if (unaff_x24 != 0) {
      puVar5 = *(undefined8 **)(lVar10 + 0x28);
      uVar3 = *puVar5;
      if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
        unaff_x26 = (undefined8 *)*unaff_x26;
      }
      *(undefined8 **)(unaff_x29 + -0x40) = unaff_x26;
      (*(code *)puVar5[2])(uVar3);
      plVar11 = *(long **)(unaff_x29 + -0x38);
      if (plVar11 != (long *)0x0) {
        lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar10) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02386058;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar11,lVar10,0);
LAB_02386058:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_023860c8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_023860c8:
          uVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
          if ((uVar8 & 1) == 0) goto LAB_023861a0;
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          lVar7 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar10) {
                lVar10 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
                goto LAB_0238613c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar10 = FUN_01ecb238(plVar11,lVar10,0);
LAB_0238613c:
          *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
          lVar10 = *(long *)(lVar10 + 8);
          (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar11,unaff_x29 + -0x40)
          ;
          puVar5 = unaff_x21;
          if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x28)) {
            puVar5 = (undefined8 *)*unaff_x21;
          }
          puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
          uVar3 = *puVar6;
          *(byte *)(unaff_x29 + -0xc) = unaff_w27 & 1;
          *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
          *(long *)(unaff_x29 + -0x30) = unaff_x25;
          *(long *)(unaff_x29 + -0x28) = unaff_x19;
          *(long *)(unaff_x29 + -0x20) = unaff_x24;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          (*(code *)puVar6[2])(uVar3,puVar6,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
        } while( true );
      }
    }
  }
  goto LAB_023862ac;
LAB_023861a0:
  unaff_x28 = *(long *)(unaff_x29 + -0x58);
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02386204:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  lVar10 = *(long *)(unaff_x20 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,pvVar1,unaff_x23);
  if (unaff_x19 != 0) {
    puVar5 = *(undefined8 **)(lVar10 + 0x60);
    uVar3 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (*(code *)puVar5[2])(uVar3);
    goto LAB_0238627c;
  }
LAB_023862ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


