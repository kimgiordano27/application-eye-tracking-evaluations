/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetEventTypeNameFromEnum
ENTRY_POINT: 037195b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03719714) */
/* WARNING: Removing unreachable block (ram,0x0371973c) */
/* WARNING: Removing unreachable block (ram,0x0371979c) */
/* WARNING: Removing unreachable block (ram,0x037197a4) */

void OVR_OpenVR_CVRSystem__GetEventTypeNameFromEnum(code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar5 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0371960c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0371960c:
    lVar5 = (*(code *)*puVar2)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar5 + 0x20) == '\0') {
      FUN_037184fc();
    }
    else {
      FUN_037184fc();
    }
    plVar3 = *(long **)(lVar5 + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    FUN_03405678(*unaff_x26,uVar4,0);
    FUN_037184fc();
    uVar4 = FUN_03587f1c(lVar5 + 0x18,0);
    FUN_03405678(*unaff_x27,uVar4,0);
    FUN_037184fc();
    lVar5 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_037195b0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_037195b0:
    param_1 = (code *)*puVar2;
  }
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03719700;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03719700:
    (*(code *)*puVar2)();
  }
  return;
}


