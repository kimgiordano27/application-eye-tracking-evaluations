/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>$$.cctor
ENTRY_POINT: 028af1c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>___cctor
          (long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x23;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_stack_00000018;
  
  uVar11 = *(uint *)(param_1 + 0x18);
  param_2 = param_2 & 0x7fffffff;
  iVar4 = 0;
  if (uVar11 != 0) {
    iVar4 = (int)param_2 / (int)uVar11;
  }
  uVar3 = param_2 - iVar4 * uVar11;
  if (uVar11 <= uVar3) {
LAB_028af3e8:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  uVar11 = *(int *)(param_1 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar11) {
    uVar15 = 0xffffffff;
    do {
      lVar13 = *(long *)(unaff_x19 + 0x18);
      if (lVar13 == 0) goto LAB_028af3e4;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_028af3e8;
      puVar12 = (uint *)(lVar13 + (ulong)uVar11 * 0x18 + 0x20);
      uVar14 = (ulong)uVar11;
      if (*puVar12 == param_2) {
        plVar7 = *(long **)(unaff_x19 + 0x30);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)FUN_022cb7a4(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar7 == (long *)0x0) goto LAB_028af3e4;
          uVar9 = (**(code **)(*plVar7 + 0x1b8))
                            (plVar7,*(undefined4 *)(lVar13 + uVar14 * 0x18 + 0x28),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar7 + 0x1c0));
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_028af3e4;
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar13 + uVar14 * 0x18 + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394(lVar6);
          }
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto 
                System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_AsyncOperationHandle<object>>>___cctor
                ;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01c72498(plVar7,lVar6,0);
System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_AsyncOperationHandle<object>>>___cctor
          :
          uVar9 = (*(code *)*puVar5)(plVar7,uVar1,in_stack_00000018._4_4_,puVar5[1]);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)(uint)uVar15 < 0) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            if (lVar6 == 0) goto LAB_028af3e4;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_028af3e8;
            *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar13 + uVar14 * 0x18 + 0x24) + 1;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
LAB_028af3e4:
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar15) goto LAB_028af3e8;
            *(undefined4 *)(lVar6 + uVar15 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar13 + uVar14 * 0x18 + 0x24);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 *)(lVar13 + uVar14 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar11;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar2 = *(uint *)(lVar13 + uVar14 * 0x18 + 0x24);
      uVar15 = (ulong)uVar11;
      uVar11 = uVar2;
    } while (-1 < (int)uVar2);
  }
  return 0;
}


