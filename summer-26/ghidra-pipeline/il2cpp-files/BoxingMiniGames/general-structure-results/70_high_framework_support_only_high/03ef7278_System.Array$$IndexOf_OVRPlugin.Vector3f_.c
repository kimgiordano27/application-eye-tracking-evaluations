/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector3f>
ENTRY_POINT: 03ef7278
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ef7570) */

long System_Array__IndexOf<OVRPlugin_Vector3f>(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x25;
  long *in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar1 = FUN_05e72aa4();
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *in_stack_00000038;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03ef72f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000038,*unaff_x25,0);
LAB_03ef72f0:
  uVar6 = (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
  if ((uVar6 & 1) == 0) {
    if (lVar1 == 0) {
      lVar1 = **(long **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
    }
  }
  else {
    lVar4 = FUN_05ca6890(0x10,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_05ca401c(lVar4,lVar1,0);
    do {
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc(lVar1);
      }
      lVar5 = *in_stack_00000038;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 03ef7358 to 03ff7363 has its CatchHandler @ 03ef75c0 */
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03ef7398;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000038,lVar1,0);
LAB_03ef7398:
                    /* try { // try from 03ef73a0 to 03ff73cb has its CatchHandler @ 03ef75c4 */
      (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
      FUN_05ca3ecc(lVar4);
      if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar3 = FUN_05e72aa4();
      FUN_05ca401c(lVar4,uVar3,0);
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = *in_stack_00000038;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03ef7450;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000038,*unaff_x25,0);
LAB_03ef7450:
      uVar6 = (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
    } while ((uVar6 & 1) != 0);
    lVar1 = FUN_05ca69ec(lVar4,0);
  }
  if (in_stack_00000038 != (long *)0x0) {
    lVar4 = *in_stack_00000038;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ef74f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(in_stack_00000038,*(long *)PTR_DAT_079f4598,0);
LAB_03ef74f8:
    (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
  }
  return lVar1;
}


