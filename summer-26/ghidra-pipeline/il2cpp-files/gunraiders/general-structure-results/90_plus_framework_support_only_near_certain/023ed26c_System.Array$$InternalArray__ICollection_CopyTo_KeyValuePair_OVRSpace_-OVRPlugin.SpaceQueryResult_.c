/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 023ed26c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong unaff_x19;
  long unaff_x20;
  int iVar9;
  long unaff_x25;
  long unaff_x29;
  
  if (-1 < (long)unaff_x19) {
    plVar6 = *(long **)(unaff_x20 + 0x38);
    lVar4 = *plVar6;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
      plVar6 = *(long **)(unaff_x20 + 0x38);
    }
    FUN_01c5dc8c(lVar4,plVar6[1]);
    puVar1 = System_Collections_Generic_List<Pet>_TypeInfo;
    plVar6 = *(long **)(unaff_x29 + -0x10);
    if (plVar6 == (long *)0x0) {
LAB_023ed4d0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Collections_Generic_List<Pet>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_023ed30c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01c72498(plVar6,*(long *)System_Collections_Generic_List<Pet>_TypeInfo,0);
LAB_023ed30c:
    lVar4 = (*(code *)*puVar5)(plVar6,unaff_x19 & 0xffffffff,puVar5[1]);
    if (lVar4 == 0) goto LAB_023ed4d0;
    iVar3 = FUN_03c51ab8(lVar4,0);
    iVar9 = (int)(unaff_x19 >> 0x20);
    if (iVar9 < iVar3) {
      plVar6 = *(long **)(unaff_x20 + 0x38);
      lVar4 = *plVar6;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
        plVar6 = *(long **)(unaff_x20 + 0x38);
      }
      FUN_01c5dc8c(lVar4,plVar6[1]);
      plVar6 = *(long **)(unaff_x29 + -0x10);
      if (plVar6 == (long *)0x0) goto LAB_023ed4d0;
      lVar4 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023ed3d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar6,*(long *)
                                    VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo,0);
LAB_023ed3d0:
      iVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((int)unaff_x19 < iVar3) {
        plVar6 = *(long **)(unaff_x20 + 0x38);
        lVar4 = *plVar6;
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01c72394();
          plVar6 = *(long **)(unaff_x20 + 0x38);
        }
        FUN_01c5dc8c(lVar4,plVar6[1]);
        plVar6 = *(long **)(unaff_x29 + -0x10);
        if (plVar6 == (long *)0x0) goto LAB_023ed4d0;
        lVar4 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_023ed4a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar1,0);
LAB_023ed4a8:
        lVar4 = (*(code *)*puVar5)(plVar6,unaff_x19 & 0xffffffff,puVar5[1]);
        if (lVar4 == 0) goto LAB_023ed4d0;
        iVar3 = FUN_03c51ab8(lVar4,0);
        bVar2 = iVar9 < iVar3;
        goto LAB_023ed470;
      }
    }
  }
  bVar2 = false;
LAB_023ed470:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


