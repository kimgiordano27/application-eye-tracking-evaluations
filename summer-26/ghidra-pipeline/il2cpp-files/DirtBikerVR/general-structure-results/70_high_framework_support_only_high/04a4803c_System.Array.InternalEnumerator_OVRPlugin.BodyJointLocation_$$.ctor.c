/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$.ctor
ENTRY_POINT: 04a4803c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04a48238) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  
  plVar2 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_08488568;
  if (plVar2 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a480c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)puVar1,0);
LAB_04a480c0:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_04a481e4;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04a481cc;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a48154;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,lVar5,0);
LAB_04a48154:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      puVar3 = (undefined8 *)(unaff_x20 + 8);
      if (iVar9 != 0) {
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(lVar5 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        puVar3 = (undefined8 *)(lVar5 + (long)(int)(iVar9 - 1U) * 8 + 0x20);
      }
      iVar9 = iVar9 + 1;
      *puVar3 = uVar4;
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04a481cc:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04a48200;
    }
  }
LAB_04a481e4:
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)PTR_DAT_08488550,0);
LAB_04a48200:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


