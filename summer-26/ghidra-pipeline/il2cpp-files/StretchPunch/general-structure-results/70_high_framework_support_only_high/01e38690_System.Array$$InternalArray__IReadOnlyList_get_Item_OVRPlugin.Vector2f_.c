/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 01e38690
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector2f>
               (ulong *param_1,undefined8 param_2,_func_void_void_ptr *param_3)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  long *unaff_x19;
  long lVar15;
  ulong *unaff_x20;
  uint uVar16;
  ulong unaff_x21;
  byte *unaff_x22;
  uint uVar17;
  long unaff_x23;
  long unaff_x24;
  long *plVar18;
  long *plVar19;
  byte *unaff_x26;
  byte *pbVar20;
  ulong *unaff_x27;
  byte *pbVar21;
  byte *pbVar22;
  long unaff_x29;
  long in_stack_00000018;
  ulong in_stack_00000020;
  byte *in_stack_00000028;
  undefined *in_stack_00000030;
  
  System_Array__InternalArray__IndexOf<KeyValuePair<ConversionUtility_ConversionQuery,_object>>
            (param_1,(void *)(unaff_x29 + -0x18),param_3);
  puVar3 = PTR_id_0425a380;
  uVar12 = (long)*(int *)(unaff_x24 + 8) - 1;
  if ((uVar12 < (ulong)(*(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10) >> 3)) &&
     (plVar19 = *(long **)(*(long *)(unaff_x23 + 0x10) + uVar12 * 8), plVar19 != (long *)0x0)) {
    lVar15 = *unaff_x19;
    in_stack_00000030 = PTR_id_0425a380;
    if (*(long *)PTR_id_0425a380 != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000030;
      System_Array__InternalArray__IndexOf<KeyValuePair<ConversionUtility_ConversionQuery,_object>>
                ((ulong *)PTR_id_0425a380,(void *)(unaff_x29 + -0x18),FUN_01e59ce0);
    }
    lVar1 = *(long *)(lVar15 + 0x10);
    if (((long)*(int *)(puVar3 + 8) - 1U < (ulong)(*(long *)(lVar15 + 0x18) - lVar1 >> 3)) &&
       (plVar18 = *(long **)(lVar1 + ((long)*(int *)(puVar3 + 8) - 1U) * 8), plVar18 != (long *)0x0)
       ) {
      (**(code **)(*plVar18 + 0x28))(&stack0x00000030,plVar18);
      *unaff_x20 = in_stack_00000020;
      if ((*in_stack_00000028 == 0x2d) || (pbVar20 = in_stack_00000028, *in_stack_00000028 == 0x2b))
      {
        uVar4 = (**(code **)(*plVar19 + 0x58))(plVar19);
        puVar7 = (undefined4 *)*unaff_x20;
        pbVar20 = in_stack_00000028 + 1;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar4;
      }
      if ((((long)unaff_x22 - (long)pbVar20 < 2) || (*pbVar20 != 0x30)) ||
         ((pbVar20[1] | 0x20) != 0x78)) {
        pbVar22 = pbVar20;
        pbVar21 = pbVar20;
        if (pbVar20 < unaff_x22) {
          do {
            bVar2 = *pbVar21;
            if (((DAT_046c9300 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_046c9300), iVar5 != 0)) {
              DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_046c9300);
            }
            iVar5 = isdigit_l((uint)bVar2,DAT_046c92f8);
            pbVar22 = pbVar21;
          } while ((iVar5 != 0) &&
                  (pbVar21 = pbVar21 + 1, pbVar22 = unaff_x22, unaff_x22 != pbVar21));
        }
      }
      else {
        uVar4 = (**(code **)(*plVar19 + 0x58))(plVar19,0x30);
        puVar7 = (undefined4 *)*unaff_x20;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar4;
        uVar4 = (**(code **)(*plVar19 + 0x58))(plVar19,pbVar20[1]);
        puVar7 = (undefined4 *)*unaff_x20;
        pbVar20 = pbVar20 + 2;
        *unaff_x20 = (ulong)(puVar7 + 1);
        *puVar7 = uVar4;
        pbVar22 = pbVar20;
        pbVar21 = pbVar20;
        if (pbVar20 < unaff_x22) {
          do {
            bVar2 = *pbVar21;
            if (((DAT_046c9300 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_046c9300), iVar5 != 0)) {
              DAT_046c92f8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_046c9300);
            }
            iVar5 = isxdigit_l((uint)bVar2,DAT_046c92f8);
            pbVar22 = pbVar21;
          } while ((iVar5 != 0) &&
                  (pbVar21 = pbVar21 + 1, pbVar22 = unaff_x22, unaff_x22 != pbVar21));
        }
      }
      uVar12 = (ulong)in_stack_00000030 >> 1 & 0x7f;
      if (((ulong)in_stack_00000030 & 1) != 0) {
        uVar12 = unaff_x21;
      }
      if (uVar12 == 0) {
        (**(code **)(*plVar19 + 0x60))(plVar19,pbVar20,pbVar22,*unaff_x20);
        *unaff_x20 = *unaff_x20 + ((long)pbVar22 - (long)pbVar20) * 4;
      }
      else {
        if ((pbVar20 != pbVar22) && (pbVar8 = pbVar22 + -1, pbVar21 = pbVar20, pbVar20 < pbVar8)) {
          do {
            pbVar13 = pbVar21 + 1;
            bVar2 = *pbVar21;
            *pbVar21 = *pbVar8;
            pbVar9 = pbVar8 + -1;
            *pbVar8 = bVar2;
            pbVar8 = pbVar9;
            pbVar21 = pbVar13;
          } while (pbVar13 < pbVar9);
        }
        uVar4 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if (pbVar20 < pbVar22) {
          uVar17 = 0;
          uVar16 = 0;
          pbVar21 = pbVar20;
          do {
            pbVar8 = (byte *)(ulong)uVar17;
            if (((ulong)in_stack_00000030 & 1) == 0) {
              bVar2 = pbVar8[(long)&stack0x00000030 + 1];
            }
            else {
              bVar2 = *pbVar8;
            }
            if ((bVar2 != 0) && (uVar16 == bVar2)) {
              puVar7 = (undefined4 *)*unaff_x20;
              uVar16 = 0;
              *unaff_x20 = (ulong)(puVar7 + 1);
              *puVar7 = uVar4;
              uVar12 = (ulong)in_stack_00000030 >> 1 & 0x7f;
              if (((ulong)in_stack_00000030 & 1) != 0) {
                uVar12 = unaff_x21;
              }
              if (pbVar8 < (byte *)(uVar12 - 1)) {
                uVar17 = uVar17 + 1;
              }
            }
            uVar6 = (**(code **)(*plVar19 + 0x58))(plVar19,*pbVar21);
            puVar10 = (undefined4 *)*unaff_x20;
            pbVar21 = pbVar21 + 1;
            uVar16 = uVar16 + 1;
            puVar7 = puVar10 + 1;
            *unaff_x20 = (ulong)puVar7;
            *puVar10 = uVar6;
          } while (pbVar22 != pbVar21);
        }
        else {
          puVar7 = (undefined4 *)*unaff_x20;
        }
        puVar10 = (undefined4 *)(in_stack_00000020 + ((long)pbVar20 - (long)in_stack_00000028) * 4);
        if ((puVar10 != puVar7) && (puVar10 < puVar7 + -1)) {
          puVar10 = puVar7 + -1;
          puVar7 = (undefined4 *)(in_stack_00000020 + ((long)pbVar20 - (long)in_stack_00000028) * 4)
          ;
          do {
            puVar14 = puVar7 + 1;
            uVar4 = *puVar7;
            *puVar7 = *puVar10;
            puVar11 = puVar10 + -1;
            *puVar10 = uVar4;
            puVar10 = puVar11;
            puVar7 = puVar14;
          } while (puVar14 < puVar11);
        }
      }
      pbVar20 = pbVar22;
      if (pbVar22 < unaff_x22) {
        do {
          if (*pbVar22 == 0x2e) {
            uVar4 = (**(code **)(*plVar18 + 0x18))(plVar18);
            puVar7 = (undefined4 *)*unaff_x20;
            *unaff_x20 = (ulong)(puVar7 + 1);
            *puVar7 = uVar4;
            pbVar20 = pbVar22 + 1;
            break;
          }
          uVar4 = (**(code **)(*plVar19 + 0x58))(plVar19);
          puVar7 = (undefined4 *)*unaff_x20;
          pbVar22 = pbVar22 + 1;
          *unaff_x20 = (ulong)(puVar7 + 1);
          *puVar7 = uVar4;
          pbVar20 = unaff_x22;
        } while (unaff_x22 != pbVar22);
      }
      (**(code **)(*plVar19 + 0x60))(plVar19,pbVar20);
      uVar12 = *unaff_x20 + ((long)unaff_x22 - (long)pbVar20) * 4;
      *unaff_x20 = uVar12;
      if (unaff_x26 != unaff_x22) {
        uVar12 = in_stack_00000020 + ((long)unaff_x26 - (long)in_stack_00000028) * 4;
      }
      *unaff_x27 = uVar12;
      if (((ulong)in_stack_00000030 & 1) != 0) {
        operator_delete((void *)0x0);
      }
      if (*(long *)(in_stack_00000018 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01db2de8();
}


