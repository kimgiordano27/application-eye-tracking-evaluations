/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<GlyphRect>
ENTRY_POINT: 02385f68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void System_Array__InternalArray__ICollection_Add<GlyphRect>
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long *plVar9;
  byte unaff_w27;
  long lVar10;
  long unaff_x29;
  
  uVar3 = *param_3;
  puVar5 = unaff_x21;
  if (-1 < *(int *)(param_1 + 0x28)) {
    puVar5 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = puVar5;
  (*(code *)param_3[2])(uVar3);
  lVar10 = *(long *)(unaff_x20 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
    pvVar1 = unaff_x22;
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
    plVar9 = *(long **)(unaff_x29 + -0x38);
    if (plVar9 != (long *)0x0) {
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02386058;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02386058:
      plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_023860c8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_023860c8:
        uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar7 & 1) == 0) goto LAB_023861a0;
        lVar10 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar10) {
              lVar10 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
              goto LAB_0238613c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        lVar10 = FUN_01ecb238(plVar9,lVar10,0);
LAB_0238613c:
        *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
        lVar10 = *(long *)(lVar10 + 8);
        (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar9,unaff_x29 + -0x40);
        puVar5 = unaff_x21;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x28)) {
          puVar5 = (undefined8 *)*unaff_x21;
        }
        puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
        uVar3 = *puVar4;
        *(byte *)(unaff_x29 + -0xc) = unaff_w27 & 1;
        *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
        *(undefined8 *)(unaff_x29 + -0x30) = unaff_x25;
        *(long *)(unaff_x29 + -0x28) = unaff_x19;
        *(long *)(unaff_x29 + -0x20) = unaff_x24;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
      } while( true );
    }
  }
  goto LAB_023862ac;
LAB_023861a0:
  lVar10 = *(long *)(unaff_x29 + -0x58);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02386204:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  pvVar1 = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,pvVar1,unaff_x23);
  if (unaff_x19 != 0) {
    puVar5 = *(undefined8 **)(lVar6 + 0x60);
    uVar3 = *puVar5;
    if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (*(code *)puVar5[2])(uVar3);
    if (*(long *)(lVar10 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_023862ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


