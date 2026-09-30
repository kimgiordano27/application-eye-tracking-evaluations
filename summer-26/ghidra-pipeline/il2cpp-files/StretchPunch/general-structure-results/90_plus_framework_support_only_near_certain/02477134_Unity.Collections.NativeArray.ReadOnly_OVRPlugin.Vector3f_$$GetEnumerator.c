/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 02477134
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x024772c0) */

int Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__GetEnumerator(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int iVar8;
  
  plVar2 = (long *)(*(code *)*param_1)();
  puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar8 = 0;
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 02477168 to 0257727f has its CatchHandler @ 02477168
                       catch() { ... } // from try @ 02477168 with catch @ 02477168
                       catch() { ... } // from try @ 02477360 with catch @ 02477168
                       catch() { ... } // from try @ 02477424 with catch @ 02477168
                       catch() { ... } // from try @ 0247742c with catch @ 02477168
                       catch() { ... } // from try @ 024774d0 with catch @ 02477168 */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_024771a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,*(long *)puVar1,0);
LAB_024771a0:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02477224;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,lVar4,0);
LAB_02477224:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    iVar8 = iVar8 + 1;
  } while( true );
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Item;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01dde8fc(plVar2,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                          ,0);
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Item:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return iVar8;
}


