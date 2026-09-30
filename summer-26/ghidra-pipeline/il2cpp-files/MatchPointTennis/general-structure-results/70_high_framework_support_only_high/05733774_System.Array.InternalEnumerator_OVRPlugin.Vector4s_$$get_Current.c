/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 05733774
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

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 unaff_w24;
  
code_r0x05733774:
  puVar2 = (undefined8 *)FUN_044822ac();
  do {
                    /* try { // try from 05733790 to 05833797 has its CatchHandler @ 05733798 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0573375c with catch @ 05733798
                       catch(type#2 @ 00000000) { ... } // from try @ 05733790 with catch @ 05733798
                        */
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if (iVar1 == 1) {
      *(undefined1 *)(unaff_x20 + 0x100) = unaff_w24;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05733718;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac();
LAB_05733718:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto code_r0x05733820;
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_057337f4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 == 0) goto code_r0x05733774;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != lVar4) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto code_r0x05733774;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05733810;
    }
  }
LAB_057337f4:
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_05733810:
  (*(code *)*puVar2)();
code_r0x05733820:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_08a00b90();
  return;
}


