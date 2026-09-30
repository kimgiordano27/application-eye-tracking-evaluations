/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05733700
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05733848) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 unaff_w24;
  
code_r0x05733700:
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05733528 with catch @ 05733700
                        */
  puVar2 = (undefined8 *)FUN_044822ac();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto code_r0x05733820;
      lVar5 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_057337f4;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05733790;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_05733790:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar1 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
    if (iVar1 == 1) {
      *(undefined1 *)(unaff_x20 + 0x100) = unaff_w24;
    }
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 == 0) goto code_r0x05733700;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != *unaff_x23) {
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
      if (uVar3 == 0) goto code_r0x05733700;
    }
                    /* try { // try from 05733710 to 05833713 has its CatchHandler @ 05733724 */
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05733810;
    }
  }
LAB_057337f4:
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_05733810:
  (*(code *)*puVar2)();
code_r0x05733820:
  if (unaff_x20 != 0) {
    FUN_08a00b90();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


