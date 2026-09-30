/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Vector3f>
ENTRY_POINT: 02b780ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Resize<OVRPlugin_Vector3f>(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  long lVar9;
  long unaff_x19;
  int iVar10;
  long unaff_x22;
  long *plVar11;
  
  puVar5 = PTR_DAT_06e5c9b8;
  puVar4 = PTR_DAT_06e57350;
  puVar3 = PTR_DAT_06dbd038;
  if (0 < in_w8) {
    iVar10 = 0;
    puVar1 = (undefined8 *)(unaff_x22 + 0x28);
    do {
      plVar6 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                 (param_1,iVar10,*(undefined8 *)puVar5);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_015c2790(lVar8);
      }
      if (plVar6 == (long *)0x0) {
LAB_02b78138:
        plVar6 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (param_1,iVar10,*(undefined8 *)puVar5);
        if (plVar6 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar3 + 300);
          if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
            FUN_0485e6d0(plVar6,0);
            goto LAB_02b7822c;
          }
        }
        plVar6 = (long *)System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (param_1,iVar10,*(undefined8 *)puVar5);
        plVar11 = (long *)*puVar1;
        if (plVar11 == (long *)0x0) {
          uVar7 = FUN_0160edfc(*(undefined8 *)puVar4,1);
          *puVar1 = uVar7;
          thunk_FUN_01656ef8(puVar1,uVar7);
          plVar11 = (long *)*puVar1;
        }
        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38) + 0x132) & 1)
            == 0) {
          FUN_015c2790();
        }
        lVar8 = thunk_FUN_015d01b0();
        if (plVar11 == (long *)0x0) {
LAB_02b78290:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_015d0480(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar7,0);
        }
        if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        plVar11[4] = lVar8;
        thunk_FUN_01656ef8(plVar11 + 4,lVar8);
        if (plVar6 == (long *)0x0) goto LAB_02b78290;
        (**(code **)(*plVar6 + 0x178))(plVar6,*puVar1,*(undefined8 *)(*plVar6 + 0x180));
      }
      else {
        lVar9 = *plVar6;
        if ((*(byte *)(lVar9 + 300) < *(byte *)(lVar8 + 300)) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8))
        goto LAB_02b78138;
        (**(code **)(lVar9 + 0x198))(plVar6,*(undefined8 *)(lVar9 + 0x1a0));
      }
LAB_02b7822c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x18));
  }
  return;
}


