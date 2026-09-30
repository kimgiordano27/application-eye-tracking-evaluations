/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNextRare
ENTRY_POINT: 02b75378
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02b75590) */

void System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNextRare
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  lVar2 = FUN_01dde7f8();
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto 
        System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
        ;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc();

  System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
  :
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  do {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b75430;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar1,0);
LAB_02b75430:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b754a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar4,lVar2,0);
LAB_02b754a8:
    (*(code *)*puVar3)(&stack0x00000008,plVar4,puVar3[1]);
    FUN_02b76310(uStack0000000000000010,uStack0000000000000014,in_stack_00000018);
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01dde8fc(plVar4,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


