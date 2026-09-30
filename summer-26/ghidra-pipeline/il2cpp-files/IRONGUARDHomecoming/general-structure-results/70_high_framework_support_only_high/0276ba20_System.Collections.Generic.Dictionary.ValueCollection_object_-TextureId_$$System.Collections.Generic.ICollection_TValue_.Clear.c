/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-TextureId>$$System.Collections.Generic.ICollection<TValue>.Clear
ENTRY_POINT: 0276ba20
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

void System_Collections_Generic_Dictionary_ValueCollection<object,_TextureId>__System_Collections_Generic_ICollection<TValue>_Clear
               (void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  int unaff_w27;
  long unaff_x29;
  
  do {
    uVar7 = FUN_035683d0(unaff_x29 + -0x24,0);
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (unaff_w27 == 0) {
      uVar7 = (*(code *)**(undefined8 **)(lVar11 + 0x18))();
      lVar11 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    }
    else {
      lVar11 = *(long *)(lVar11 + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *unaff_x22;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            lVar11 = lVar12 + (long)*piVar15 * 0x10 + 0x138;
            goto LAB_0276bad0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      lVar11 = FUN_01ecb238();
LAB_0276bad0:
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      (**(code **)(*(long *)(lVar11 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar11 + 8) + 8));
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar10 = *(undefined8 **)(lVar11 + 0x30);
      uVar8 = *puVar10;
      puVar13 = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x28) + 0x28)) {
        puVar13 = (undefined8 *)*unaff_x21;
      }
      *(undefined8 *)(unaff_x29 + -0x20) = uVar7;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
      (*(code *)puVar10[2])(uVar8);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x10);
      lVar11 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    }
    if (lVar11 == 0) goto LAB_0276be18;
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    iVar1 = *(int *)(unaff_x29 + -0x24) + 1;
    *(int *)(unaff_x29 + -0x24) = iVar1;
    iVar6 = (**(code **)(*unaff_x20 + 0x618))();
    if (iVar6 <= iVar1) break;
    unaff_w27 = *(int *)(unaff_x29 + -0x24);
  } while( true );
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58) + 0x135) & 1) == 0)
  {
    FUN_01ecaf44();
  }
  thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
  lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68))();
  if (lVar11 != 0) {
    FUN_03fe3c18(lVar11,0);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70))();
    lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78))();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar11 != 0) {
      plVar9 = (long *)FUN_0265d924(lVar11,*(undefined8 *)
                                            Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0276bce8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_0276bce8:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar14 & 1) == 0) goto LAB_0276bd84;
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0276bd44;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_0276bd44:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))();
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
LAB_0276be18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_0276bd84:
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0276bdd8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0276bdd8:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


