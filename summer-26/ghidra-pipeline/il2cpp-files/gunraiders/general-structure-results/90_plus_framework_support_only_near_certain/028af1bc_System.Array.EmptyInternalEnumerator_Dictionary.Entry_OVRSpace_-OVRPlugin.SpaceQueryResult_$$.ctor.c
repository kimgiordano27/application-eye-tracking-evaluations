/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$.ctor
ENTRY_POINT: 028af1bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>___ctor
          (uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x23;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar12 = *(uint *)(lVar7 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar4 = 0;
    if (uVar12 != 0) {
      iVar4 = (int)param_1 / (int)uVar12;
    }
    uVar3 = param_1 - iVar4 * uVar12;
    if (uVar12 <= uVar3) {
LAB_028af3e8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar12 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar12) {
      uVar15 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_028af3e4;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_028af3e8;
        puVar13 = (uint *)(lVar7 + (ulong)uVar12 * 0x18 + 0x20);
        uVar14 = (ulong)uVar12;
        if (*puVar13 == param_1) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_022cb7a4(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar8 == (long *)0x0) goto LAB_028af3e4;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined4 *)(lVar7 + uVar14 * 0x18 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_028af3e4;
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0x18 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto 
                  System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_AsyncOperationHandle<object>>>___cctor
                  ;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c72498(plVar8,lVar6,0);
System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_AsyncOperationHandle<object>>>___cctor
            :
            uVar10 = (*(code *)*puVar5)(plVar8,uVar1,in_stack_00000018._4_4_,puVar5[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar15 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_028af3e4;
              if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_028af3e8;
              *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_028af3e4;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar15) goto LAB_028af3e8;
              *(undefined4 *)(lVar6 + uVar15 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x18 + 0x24);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 *)(lVar7 + uVar14 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar12;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar7 + uVar14 * 0x18 + 0x24);
        uVar15 = (ulong)uVar12;
        uVar12 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_028af3e4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


