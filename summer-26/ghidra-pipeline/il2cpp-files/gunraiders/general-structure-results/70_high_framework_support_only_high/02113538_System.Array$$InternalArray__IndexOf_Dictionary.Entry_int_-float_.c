/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Dictionary.Entry<int,-float>>
ENTRY_POINT: 02113538
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long System_Array__InternalArray__IndexOf<Dictionary_Entry<int,_float>>(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  ulong uVar11;
  long *plVar12;
  
  uVar11 = 0;
  do {
    plVar12 = (long *)(unaff_x20 + uVar11 * 8 + 0x20);
    plVar4 = (long *)thunk_FUN_01c495e4(*plVar12,*unaff_x22);
    if (plVar4 != (long *)0x0) {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar11) break;
      lVar5 = *plVar12;
      if (lVar5 == 0) goto LAB_021136ec;
      uVar6 = FUN_03d45df0(lVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_021135c0;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x22,0);
LAB_021135c0:
        lVar5 = (*(code *)*puVar7)(plVar4);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
    }
    puVar2 = PTR_DAT_042393a8;
    uVar11 = uVar11 + 1;
    if (uVar11 == unaff_x23) {
      lVar5 = *(long *)PTR_DAT_042393a8;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar5 = *(long *)puVar2;
      }
      puVar3 = OVRPlugin_Rectf___TypeInfo;
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        if (iVar1 < 1) {
          return 0;
        }
        iVar10 = 0;
        while( true ) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
          if ((lVar5 == 0) ||
             (plVar4 = (long *)FUN_02d4fd88(lVar5,iVar10,*(undefined8 *)puVar3),
             plVar4 == (long *)0x0)) break;
          lVar5 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_021136ac;
              }
              uVar11 = uVar11 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x22,0);
LAB_021136ac:
          lVar5 = (*(code *)*puVar7)(plVar4);
          if (lVar5 != 0) {
            return lVar5;
          }
          iVar10 = iVar10 + 1;
          if (iVar10 == iVar1) {
            return 0;
          }
          lVar5 = *(long *)puVar2;
        }
      }
LAB_021136ec:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  } while (uVar11 < *(uint *)(unaff_x20 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


