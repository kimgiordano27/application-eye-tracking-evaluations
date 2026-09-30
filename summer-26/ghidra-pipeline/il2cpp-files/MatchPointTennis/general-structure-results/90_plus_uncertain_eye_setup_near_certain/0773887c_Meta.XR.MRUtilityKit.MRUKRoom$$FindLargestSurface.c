/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$FindLargestSurface
ENTRY_POINT: 0773887c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__FindLargestSurface(void)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000010;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  Unity_Collections_NativeArray<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_44>__get_Length
            ();
  *(undefined8 *)(unaff_x19 + 0x58) = uStack0000000000000008;
  *(undefined8 *)(unaff_x19 + 0x50) = uStack0000000000000000;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_07430e40(*(long *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_09f31a48);
    puVar2 = PTR_DAT_09f31320;
    if ((*(long *)(unaff_x19 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x108), lVar5 != 0)) {
      lVar5 = FUN_05badb74(lVar5,0,*(undefined8 *)PTR_DAT_09f31320);
      puVar3 = PTR_DAT_09f31a50;
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_07430ca4(*(long *)(unaff_x19 + 0x48),lVar5,0,*(undefined8 *)PTR_DAT_09f31a50);
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 != 0) {
          lVar9 = 0;
          iVar7 = 0;
          iVar10 = 0;
          iVar8 = 0;
          while (*(long *)(lVar6 + 0x1c0) != 0) {
            iVar4 = FUN_094f3ae4(*(long *)(lVar6 + 0x1c0),0);
            if (iVar4 <= lVar9) {
              return;
            }
            if (lVar5 == 0) break;
            if (iVar10 < *(int *)(lVar5 + 0x30)) {
              lVar6 = *(long *)(unaff_x19 + 0x18);
            }
            else {
              if ((*(long *)(unaff_x19 + 0x18) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x108), lVar5 == 0)) break;
              iVar8 = iVar8 + 1;
              lVar5 = FUN_05badb74(lVar5,iVar8,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x19 + 0x48) == 0) break;
              FUN_07430ca4(*(long *)(unaff_x19 + 0x48),lVar5,iVar7,*(undefined8 *)puVar3);
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x108) == 0)) break;
              if (iVar8 == *(int *)(*(long *)(lVar6 + 0x108) + 0x18) + -1) {
                return;
              }
              iVar10 = 0;
            }
            iVar10 = iVar10 + 1;
            pbVar1 = (byte *)(*(long *)(unaff_x19 + 0x50) + lVar9);
            lVar9 = lVar9 + 1;
            iVar7 = iVar7 + (uint)*pbVar1;
            if (lVar6 == 0) break;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


