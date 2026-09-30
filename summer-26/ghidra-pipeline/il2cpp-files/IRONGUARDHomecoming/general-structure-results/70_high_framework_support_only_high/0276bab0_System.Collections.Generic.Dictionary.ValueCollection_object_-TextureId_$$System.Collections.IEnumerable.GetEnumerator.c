/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-TextureId>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0276bab0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276be20) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_TextureId>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int in_w10;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  
  while (*(int *)(unaff_x23 + 0x1c) = in_w10 + 1, param_1 != 0) {
    while( true ) {
      uVar2 = *(uint *)(unaff_x23 + 0x18);
      if (uVar2 < *(uint *)(param_1 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = param_2;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      iVar1 = *(int *)(unaff_x29 + -0x24) + 1;
      *(int *)(unaff_x29 + -0x24) = iVar1;
      iVar6 = (**(code **)(*unaff_x20 + 0x618))();
      if (iVar6 <= iVar1) {
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58) + 0x135) & 1)
            == 0) {
          FUN_01ecaf44();
        }
        thunk_FUN_01f117cc();
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
        lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68))()
        ;
        if (lVar9 == 0) goto LAB_0276be18;
        FUN_03fe3c18(lVar9,0);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70))();
        lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))()
        ;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if (lVar9 == 0) goto LAB_0276be18;
        plVar10 = (long *)FUN_0265d924(lVar9,*(undefined8 *)
                                              Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                      );
        puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        goto LAB_0276bc9c;
      }
      iVar1 = *(int *)(unaff_x29 + -0x24);
      uVar7 = FUN_035683d0(unaff_x29 + -0x24,0);
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if (iVar1 == 0) break;
      lVar9 = *(long *)(lVar9 + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar12 = *unaff_x22;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            lVar9 = lVar12 + (long)*piVar15 * 0x10 + 0x138;
            goto LAB_0276bad0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      lVar9 = FUN_01ecb238();
LAB_0276bad0:
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      (**(code **)(*(long *)(lVar9 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar9 + 8) + 8));
      lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar11 = *(undefined8 **)(lVar9 + 0x30);
      uVar8 = *puVar11;
      puVar13 = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x28) + 0x28)) {
        puVar13 = (undefined8 *)*unaff_x21;
      }
      *(undefined8 *)(unaff_x29 + -0x20) = uVar7;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
      (*(code *)puVar11[2])(uVar8);
      param_2 = *(undefined8 *)(unaff_x29 + -0x10);
      param_1 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_0276be18;
    }
    param_2 = (*(code *)**(undefined8 **)(lVar9 + 0x18))();
    in_w10 = *(int *)(unaff_x23 + 0x1c);
    param_1 = *(long *)(unaff_x23 + 0x10);
  }
LAB_0276be18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276bc9c:
  lVar9 = *plVar10;
  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0276bce8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_0276bce8:
  uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if ((uVar14 & 1) == 0) goto LAB_0276bd84;
  lVar9 = *plVar10;
  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0276bd44;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_0276bd44:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))();
  thunk_FUN_03fe9acc();
  goto LAB_0276bc9c;
LAB_0276bd84:
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0276bdd8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_0276bdd8:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


