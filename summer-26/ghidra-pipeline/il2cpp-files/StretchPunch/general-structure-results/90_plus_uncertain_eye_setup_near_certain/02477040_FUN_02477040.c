/*
FUNCTION_NAME: FUN_02477040
ENTRY_POINT: 02477040
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x024772c0) */

int FUN_02477040(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  int local_24;
  
  if ((DAT_044a3550 & 1) == 0) {
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
    DAT_044a3550 = 1;
  }
  local_24 = 0;
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  uVar3 = Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length
                    (param_1,&local_24,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
  if ((uVar3 & 1) != 0) {
    return local_24;
  }
  local_24 = 0;
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8(lVar2);
  }
  lVar5 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__GetEnumerator;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_01dde8fc(plVar7,lVar2,0);
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__GetEnumerator:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar8 = 0;
  do {
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_024771a0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)puVar1,0);
LAB_024771a0:
    uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar5 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02477224;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar7,lVar2,0);
LAB_02477224:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    iVar8 = iVar8 + 1;
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Item;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01dde8fc(plVar7,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Item:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  return iVar8;
}


