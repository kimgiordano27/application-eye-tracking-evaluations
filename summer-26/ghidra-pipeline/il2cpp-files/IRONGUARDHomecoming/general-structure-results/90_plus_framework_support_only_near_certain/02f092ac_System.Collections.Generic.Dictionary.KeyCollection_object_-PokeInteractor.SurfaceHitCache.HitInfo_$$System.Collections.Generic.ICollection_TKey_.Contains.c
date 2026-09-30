/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<object,-PokeInteractor.SurfaceHitCache.HitInfo>$$System.Collections.Generic.ICollection<TKey>.Contains
ENTRY_POINT: 02f092ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f094a0) */

void System_Collections_Generic_Dictionary_KeyCollection<object,_PokeInteractor_SurfaceHitCache_HitInfo>__System_Collections_Generic_ICollection<TKey>_Contains
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long in_x11;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  
                    /* try { // try from 02f092ac to 030092b7 has its CatchHandler @ 02f08f00 */
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
                    /* try { // try from 02f092b8 to 030092bf has its CatchHandler @ 02f092c0 */
    if (in_x9 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02f09284 with catch @ 02f092c0
                       catch(type#2 @ 00000000) { ... } // from try @ 02f092b8 with catch @ 02f092c0
                        */
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto LAB_02f092dc;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02f092dc:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar10 = 0;
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f09354;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02f09354:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02f09450;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02f093d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_02f093d8:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    puVar3 = (undefined8 *)(unaff_x21 + 8);
    if (iVar10 != 0) {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar6 + 0x18) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar3 = (undefined8 *)(lVar6 + (long)(int)(iVar10 - 1U) * 8 + 0x20);
    }
    *puVar3 = uVar5;
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02f0946c;
    }
  }
LAB_02f09450:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_02f0946c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


