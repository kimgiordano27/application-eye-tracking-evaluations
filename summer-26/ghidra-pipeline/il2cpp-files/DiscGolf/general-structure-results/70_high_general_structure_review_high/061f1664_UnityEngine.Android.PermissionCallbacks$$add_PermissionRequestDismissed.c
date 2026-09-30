/*
FUNCTION_NAME: UnityEngine.Android.PermissionCallbacks$$add_PermissionRequestDismissed
ENTRY_POINT: 061f1664
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Android_PermissionCallbacks__add_PermissionRequestDismissed(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long *plVar12;
  int iVar13;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_UnityEngine_Mesh_SetIndices<int>__);
  *(undefined1 *)(unaff_x21 + 0xf94) = 1;
  if ((unaff_x20 != 0) && (lVar6 = FUN_0634bbcc(), lVar6 != 0)) {
    uVar7 = FUN_0364d32c(lVar6,unaff_x19 + 0x48,
                         *(undefined8 *)Method_UnityEngine_Mesh_GetListForChannel<Vector3>__);
    puVar5 = Method_UnityEngine_Mesh_SetIndices<int>__;
    puVar4 = Method_UnityEngine_Mesh_SetArrayForChannel<Vector4>__;
    puVar3 = Method_UnityEngine_Mesh_SetArrayForChannel<Vector3>__;
    puVar2 = Method_UnityEngine_Mesh_SetArrayForChannel<Vector2>__;
    puVar1 = PTR_DAT_069fb930;
    if ((uVar7 & 1) == 0) {
      uVar8 = thunk_FUN_06354368();
      uVar8 = FUN_0536d554(*(undefined8 *)Method_UnityEngine_Mesh_SetIndexBufferData<uint>__,uVar8,
                           *(undefined8 *)Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__,0);
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
      }
      FUN_0630bbe4(uVar8,0);
      lVar6 = FUN_0634bbcc();
      if (lVar6 != 0) {
        FUN_0634f038(lVar6,0,0);
        return;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0x48);
      if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 061f16d8 with catch @ 061f16b4
                       catch() { ... } // from try @ 061f1710 with catch @ 061f16b4
                       catch() { ... } // from try @ 061f1738 with catch @ 061f16b4 */
                    /* try { // try from 061f16d0 to 062f16d7 has its CatchHandler @ 061f16f0 */
                    /* try { // try from 061f16d8 to 062f170b has its CatchHandler @ 061f16b4 */
        iVar13 = 0;
        while (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) <= iVar13) {
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              plVar12 = *(long **)(unaff_x19 + 0x20);
              FUN_061f05bc();
              if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x061f18f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
                return;
              }
            }
            break;
          }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 061f16d0 with catch @ 061f16f0
                        */
          lVar6 = FUN_0400ff1c(lVar6,iVar13,*(undefined8 *)puVar3);
          if (*(long *)(unaff_x19 + 0x30) == 0) break;
                    /* try { // try from 061f170c to 062f170f has its CatchHandler @ 061f172c */
          if (iVar13 < *(int *)(*(long *)(unaff_x19 + 0x30) + 0x18)) {
                    /* try { // try from 061f1710 to 062f172f has its CatchHandler @ 061f16b4 */
            if ((lVar6 == 0) || (lVar11 = *(long *)(lVar6 + 0x18), lVar11 == 0)) break;
            if (*(int *)(lVar11 + 0x10) == 1) {
              uVar8 = *(undefined8 *)(lVar11 + 0x18);
            }
            else if (*(int *)(lVar11 + 0x10) == 2) {
              uVar8 = FUN_05d54144(*(undefined8 *)(lVar11 + 0x28),0);
            }
            else {
              uVar8 = FUN_0629a8f8(lVar6,0);
              uVar8 = FUN_0536d554(*(undefined8 *)
                                    Method_UnityEngine_Mesh_SetIndexBufferData<ushort>__,uVar8,
                                   *(undefined8 *)puVar5,0);
              lVar11 = *(long *)puVar1;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar11);
              }
              FUN_0630c038(uVar8);
              uVar8 = 0;
            }
            if (*(long *)(unaff_x19 + 0x30) == 0) break;
            lVar11 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x30),iVar13,*(undefined8 *)puVar2);
            uVar9 = FUN_0629a8f8(lVar6,0);
            uVar10 = FUN_0629a9d4(lVar6,0);
            if (lVar11 == 0) break;
            FUN_061f18fc(lVar11,uVar8,uVar9,uVar10);
          }
          else {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0630c038(*(undefined8 *)puVar4);
          }
          lVar6 = *(long *)(unaff_x19 + 0x48);
          iVar13 = iVar13 + 1;
          if (lVar6 == 0) break;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


