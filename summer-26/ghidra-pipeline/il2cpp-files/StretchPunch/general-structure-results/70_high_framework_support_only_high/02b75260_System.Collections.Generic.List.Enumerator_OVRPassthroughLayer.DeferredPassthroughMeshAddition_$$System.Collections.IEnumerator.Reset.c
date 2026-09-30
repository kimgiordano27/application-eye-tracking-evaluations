/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPassthroughLayer.DeferredPassthroughMeshAddition>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b75260
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02b75590) */

void System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__System_Collections_IEnumerator_Reset
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar3 = thunk_FUN_01dfff04(param_1,0);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x22);
  }
  uVar10 = FUN_033a87c8(uVar10,0);
  uVar4 = FUN_033aa3b4(uVar3,uVar10,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = unaff_x21[3];
    if (lVar7 != 0) {
      uVar4 = 0;
      puVar11 = (undefined4 *)(lVar7 + 0x38);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar11[-6]) {
          FUN_02b76310(puVar11[-2],puVar11[-1],*puVar11);
        }
        uVar4 = uVar4 + 1;
        puVar11 = puVar11 + 8;
      } while (uVar1 != uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01dde7f8(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto 
        System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
        ;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_01dde8fc();

  System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
  :
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  do {
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02b75430;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar2,0);
LAB_02b75430:
    uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar4 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    lVar8 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02b754a8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,lVar7,0);
LAB_02b754a8:
    (*(code *)*puVar5)(&stack0x00000008,plVar6,puVar5[1]);
    FUN_02b76310(uStack0000000000000010,uStack0000000000000014,in_stack_00000018);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01dde8fc(plVar6,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


