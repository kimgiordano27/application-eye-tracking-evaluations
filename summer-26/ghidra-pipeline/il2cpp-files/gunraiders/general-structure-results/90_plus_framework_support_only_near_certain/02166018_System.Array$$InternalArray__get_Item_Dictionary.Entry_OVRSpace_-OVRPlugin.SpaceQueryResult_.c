/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 02166018
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  (**(code **)(in_x9 + 0x198))
            (**(undefined4 **)(param_1 + 0xb8),param_2,param_3,*(undefined8 *)(in_x9 + 0x1a0));
  if (**(long **)(*unaff_x24 + 0xb8) != 0) {
    lVar5 = *(long *)(**(long **)(*unaff_x24 + 0xb8) + 0x28);
    plVar2 = (long *)FUN_01c5d2fc(*unaff_x25,2);
    if (plVar2 != (long *)0x0) {
      lVar7 = *(long *)(unaff_x19 + 0xd0);
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_021661c0:
        uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_021661bc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar2[4] = lVar7;
      lVar7 = FUN_03d468ac();
      if (lVar7 == 0) goto LAB_021661b8;
      FUN_03d554d8(lVar7,0);
      lVar7 = thunk_FUN_01c49334(*unaff_x26);
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_021661c0;
      if (*(uint *)(plVar2 + 3) < 2) goto LAB_021661bc;
      plVar2[5] = lVar7;
      if (lVar5 != 0) {
        FUN_0357c4c8(lVar5,*(undefined8 *)PTR_DAT_04239928,0,plVar2,0);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x70);
        if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_035706d0(uVar6,0);
        puVar1 = PTR_DAT_04239940;
        uVar6 = **(undefined8 **)(*(long *)PTR_DAT_04239940 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar4 = FUN_03d4f3bc(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_021661b8;
          FUN_01f7e93c(**(long **)(*(long *)puVar1 + 0xb8),0);
        }
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          if (*(int *)(**(long **)(*unaff_x23 + 0xb8) + 0x20) == 8) {
            if (**(long **)(*(long *)PTR_DAT_042396f8 + 0xb8) == 0) goto LAB_021661b8;
            FUN_01eeaf74(**(long **)(*(long *)PTR_DAT_042396f8 + 0xb8),0);
          }
          FUN_02161a48();
          if (*(char *)(unaff_x19 + 0xe9) == '\0') {
            FUN_02161bbc();
          }
          else {
            FUN_02161c80();
          }
          return;
        }
      }
    }
  }
LAB_021661b8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


