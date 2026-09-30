/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05670304
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056704b4) */

void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long *param_1)

{
  undefined8 *puVar1;
  int in_w8;
  ulong uVar2;
  int *piVar3;
  uint *unaff_x19;
  long *plVar4;
  long unaff_x20;
  int unaff_w21;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x25;
  undefined8 uStack0000000000000000;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *plStack0000000000000038;
  
  uStack0000000000000000 = 0;
  plStack0000000000000038 = param_1;
  if ((unaff_w21 == 0 && in_w8 == 0) || (*(long *)(unaff_x20 + 0x198) != 0)) {
    lVar6 = *(long *)(unaff_x20 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar2 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        FUN_056708a0();
        uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  else if (*unaff_x19 != 0) {
    uVar5 = 0;
    do {
      FUN_056708a0();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *unaff_x19);
  }
  plVar4 = plStack0000000000000038;
  if (plStack0000000000000038 != (long *)0x0) {
    lVar6 = *plStack0000000000000038;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto FUN_056703f8;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plStack0000000000000038,*unaff_x25,0);
FUN_056703f8:
    (*(code *)*puVar1)(plVar4,puVar1[1]);
  }
  plVar4 = (long *)*in_stack_00000030;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_05670460;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar4,*unaff_x25,0);
LAB_05670460:
    (*(code *)*puVar1)(plVar4,puVar1[1]);
  }
  if (in_stack_00000028 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


