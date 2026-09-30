/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<KeyValuePair<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02158ec4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<KeyValuePair<OVRSpace,_OVRPlugin_SpaceQueryResult>>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  FUN_01c5d288();
  *(undefined1 *)(unaff_x21 + 0xbc6) = 1;
  puVar3 = PTR_DAT_042323c8;
  lVar7 = *unaff_x24;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar7 = *unaff_x24;
  }
  puVar5 = VoxelBusters_CoreLibrary_NativePlugins_DateComponents_TypeInfo;
  puVar4 = PTR_DAT_04239450;
  puVar2 = PTR_DAT_042305b8;
  puVar1 = PTR_DAT_0422fd80;
  lVar7 = FUN_01c5d2fc(*(undefined8 *)puVar3,**(undefined4 **)(lVar7 + 0xb8));
  uVar12 = 0;
  while( true ) {
    lVar8 = *unaff_x24;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *unaff_x24;
    }
    if ((long)**(int **)(lVar8 + 0xb8) <= (long)uVar12) break;
    lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
    if ((((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x120), lVar8 == 0)) ||
        ((lVar8 = *(long *)(lVar8 + 600), lVar8 == 0 ||
         (((lVar8 = *(long *)(lVar8 + 0x28), lVar8 == 0 ||
           (lVar8 = FUN_020aa64c(lVar8,uVar12 & 0xffffffff,0), lVar8 == 0)) ||
          (lVar8 = FUN_03d468e8(lVar8,0), lVar8 == 0)))))) ||
       (bVar6 = FUN_03d49a30(lVar8,0), lVar7 == 0)) goto LAB_0215908c;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_02159090;
    *(byte *)(lVar7 + 0x20 + uVar12) = bVar6 & 1;
    uVar12 = uVar12 + 1;
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,2);
  if (plVar9 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_02159094:
      uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar11,0);
    }
    if ((int)plVar9[3] == 0) {
LAB_02159090:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar9[4] = lVar7;
    lVar7 = **(long **)(*(long *)puVar4 + 0xb8);
    if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x120), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 600), lVar7 != 0)) {
      in_stack_00000008._4_4_ = *(undefined4 *)(lVar7 + 0x58);
      lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_02159094;
      if (*(uint *)(plVar9 + 3) < 2) goto LAB_02159090;
      plVar9[5] = lVar7;
      if (lVar8 != 0) {
        FUN_0357c5cc(lVar8,*(undefined8 *)puVar5);
        return;
      }
    }
  }
LAB_0215908c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


