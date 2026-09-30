/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 03ce1628
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ce17ac) */
/* WARNING: Removing unreachable block (ram,0x03ce1800) */

void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  do {
    param_2 = FUN_02eea768(param_2);
    do {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == param_2) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03ce167c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ce167c:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_02f411dc();
      }
      else {
        FUN_03fd0c9c();
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02eea86c();
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor:
      uVar6 = (*(code *)*puVar2)();
      if ((uVar6 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_03ce17a0;
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_03ce173c;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_03ce1724;
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x58);
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03ce1724:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03ce1794;
    }
  }
LAB_03ce173c:
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ce1794:
  (*(code *)*puVar2)();
LAB_03ce17a0:
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd0ea8();
  }
  return;
}


