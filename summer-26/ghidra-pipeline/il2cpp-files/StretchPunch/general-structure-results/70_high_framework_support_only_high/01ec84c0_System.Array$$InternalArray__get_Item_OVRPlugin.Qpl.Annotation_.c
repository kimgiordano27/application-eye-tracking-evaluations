/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 01ec84c0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ec865c) */

long * System_Array__InternalArray__get_Item<OVRPlugin_Qpl_Annotation>(code *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  while (uVar2 = (*param_1)(), (uVar2 & 1) != 0) {
    lVar6 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_01ec8518;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_01ec8518:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    bVar1 = *(byte *)(*unaff_x25 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar4);
    }
    FUN_03d78284(plVar4,0);
    uVar2 = thunk_FUN_03278f50();
    if ((uVar2 & 1) != 0) goto LAB_01ec85bc;
    plVar4 = (long *)FUN_01ec83d0();
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = FUN_03d749a8(plVar4,0,0);
    if ((uVar2 & 1) != 0) goto LAB_01ec85bc;
    lVar6 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ec84b8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc();
LAB_01ec84b8:
    param_1 = (code *)*puVar3;
  }
  plVar4 = (long *)0x0;
LAB_01ec85bc:
  plVar5 = (long *)thunk_FUN_01de26bc();
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ec861c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar5,*unaff_x23,0);
LAB_01ec861c:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  return plVar4;
}


