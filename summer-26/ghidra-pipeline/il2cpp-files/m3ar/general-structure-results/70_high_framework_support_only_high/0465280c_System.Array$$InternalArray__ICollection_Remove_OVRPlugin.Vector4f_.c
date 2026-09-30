/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4f>
ENTRY_POINT: 0465280c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04652a10) */

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4f>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  long *in_stack_00000028;
  
  plVar9 = *(long **)(unaff_x22 + 0x880);
  do {
    lVar6 = *unaff_x21;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04652860;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(unaff_x21,lVar5,0);
LAB_04652860:
    uVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    puVar2 = PTR_DAT_08f65868;
    if ((uVar7 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_0406ddbc(in_stack_00000028,*(undefined8 *)PTR_DAT_08f65868);
      if (plVar9 == (long *)0x0) goto LAB_046529cc;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_046529a4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *in_stack_00000028;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_046528c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000028,lVar5,1);
LAB_046528c8:
    (*(code *)*puVar3)(in_stack_00000028,puVar3[1]);
    uVar4 = FUN_04608288();
    if (unaff_x19 == 0) {
LAB_046529ec:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_046529ec;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
    }
    else {
      FUN_057d53ac();
    }
    unaff_x21 = in_stack_00000028;
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_046529c0;
    }
  }
LAB_046529a4:
  puVar3 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar2,0);
LAB_046529c0:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
LAB_046529cc:
  FUN_0464ed5c();
  return;
}


