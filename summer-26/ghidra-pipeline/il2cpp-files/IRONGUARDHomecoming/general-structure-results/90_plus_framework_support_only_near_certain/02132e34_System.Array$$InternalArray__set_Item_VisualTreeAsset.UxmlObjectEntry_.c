/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<VisualTreeAsset.UxmlObjectEntry>
ENTRY_POINT: 02132e34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x021331a4) */

void System_Array__InternalArray__set_Item<VisualTreeAsset_UxmlObjectEntry>
               (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x20;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *__s;
  undefined1 *__dest;
  void *unaff_x26;
  long *plVar10;
  long unaff_x28;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = param_4;
  plVar10 = *(long **)(param_5 + 0x38);
  if (plVar10 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_BootConfigData__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Decode__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar10 = *(long **)(unaff_x20 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01ecafa0();
      plVar10 = *(long **)(unaff_x20 + 0x38);
    }
  }
  uVar8 = (ulong)*(uint *)(plVar10[3] + 0xfc);
  uVar9 = uVar8 + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar9;
  puVar7 = (undefined8 *)(__dest + -uVar9);
  memset(puVar7,0,uVar8);
  __s = (undefined1 *)((long)puVar7 - uVar9);
  memset(__s,0,uVar8);
  if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  lVar1 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 8))();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(unaff_x29 + -0x30) = param_3[2];
  *(undefined8 *)(unaff_x29 + -0x38) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar3;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x29 + -0x38);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    thunk_FUN_01f51358(lVar1 + 0x10,0);
    if ((param_2 != 0) &&
       (lVar2 = FUN_032a01b0(param_2,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20)),
       lVar2 != 0)) {
      plVar10 = (long *)thunk_FUN_03ed4570(lVar2,0);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_BootConfigData__ctor__);
      FUN_02e67a8c(uVar3,lVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10),0);
      lVar1 = *(long *)(unaff_x20 + 0x38);
      if (-1 < *(int *)(*(long *)(lVar1 + 0x18) + 0x28)) {
        unaff_x26 = (void *)(unaff_x29 + -0x48);
      }
      memcpy(__dest,unaff_x26,uVar8);
      lVar1 = *(long *)(lVar1 + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar1 == 0) {
        memcpy(__s,__dest,uVar8);
        lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44();
        }
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01ecaf44();
        }
        uVar4 = **(undefined8 **)(lVar1 + 0xb8);
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_Bootstring_Decode__);
        FUN_02e6c0a0(lVar1,uVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x30),0);
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar2 + 0xb8) + 8,lVar1);
        __dest = __s;
      }
      memcpy(puVar7,__dest,uVar8);
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x38);
      uVar4 = *puVar5;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x18) + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      *(long **)(unaff_x29 + -0x40) = plVar10;
      *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
      *(undefined8 **)(unaff_x29 + -0x30) = puVar7;
      *(long *)(unaff_x29 + -0x28) = lVar1;
      *(undefined1 *)(unaff_x29 + -0xc) = 1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      (*(code *)puVar5[2])(uVar4,puVar5,0,unaff_x29 + -0x40,unaff_x29 + -0xc);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03ed669c(plVar10,0);
      lVar1 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02133160;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02133160:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


