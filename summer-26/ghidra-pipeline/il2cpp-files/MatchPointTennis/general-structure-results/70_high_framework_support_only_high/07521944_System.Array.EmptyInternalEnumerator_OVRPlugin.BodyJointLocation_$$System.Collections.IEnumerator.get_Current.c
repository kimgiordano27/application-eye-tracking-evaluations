/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 07521944
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07521c58) */

void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
               (long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar8;
  
  if ((param_2 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar5 = unaff_x21[3];
    if (lVar5 != 0) {
      uVar8 = 0;
      lVar6 = lVar5 + 0x30;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (-1 < *(int *)(lVar6 + -0x10)) {
          FUN_07523178();
        }
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x38;
      } while (uVar1 != uVar8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  lVar6 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
        ;
      }
      uVar8 = uVar8 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07521ae4;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_07521ae4:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar5,0);
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_07523178();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07521c10;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_07521c10:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


