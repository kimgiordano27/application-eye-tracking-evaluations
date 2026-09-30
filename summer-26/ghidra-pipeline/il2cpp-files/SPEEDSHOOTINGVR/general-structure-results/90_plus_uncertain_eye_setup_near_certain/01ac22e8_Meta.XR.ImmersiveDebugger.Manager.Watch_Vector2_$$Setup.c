/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 01ac22e8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long in_x9;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_01ac2328;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01ac2328:
  iVar4 = (*(code *)*puVar5)();
  if (iVar4 != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar6 = FUN_021a94dc();
    puVar3 = PTR_DAT_0234d5f0;
    puVar2 = PTR_DAT_0234d5e8;
    if (lVar6 != 0) {
      do {
        uVar7 = FUN_021b0738(lVar6,*(undefined8 *)puVar2,0);
        if ((uVar7 & 1) != 0) {
          *(long *)(unaff_x19 + 0x438) = lVar6;
          thunk_FUN_0106e12c((long *)(unaff_x19 + 0x438),lVar6);
        }
        uVar7 = FUN_021b0738(lVar6,*(undefined8 *)puVar3,0);
        if ((uVar7 & 1) != 0) {
          *(long *)(unaff_x19 + 0x430) = lVar6;
          thunk_FUN_0106e12c(unaff_x19 + 0x430,lVar6);
          break;
        }
        lVar6 = FUN_021a94dc(lVar6,0);
      } while (lVar6 != 0);
    }
    uVar1 = _DAT_00657f50;
    if (*(long *)(unaff_x19 + 0x438) != 0) {
      *(undefined8 *)(unaff_x19 + 0x3e0) = _UNK_00657f58;
      *(undefined8 *)(unaff_x19 + 0x3d8) = uVar1;
      thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234d5d8);
      FUN_016065a0();
      FUN_0118a564();
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
         ) {
        FUN_0103c244();
      }
      FUN_021af390();
      thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234d5d0);
      FUN_016065a0();
      FUN_0118a564();
      return;
    }
  }
  return;
}


