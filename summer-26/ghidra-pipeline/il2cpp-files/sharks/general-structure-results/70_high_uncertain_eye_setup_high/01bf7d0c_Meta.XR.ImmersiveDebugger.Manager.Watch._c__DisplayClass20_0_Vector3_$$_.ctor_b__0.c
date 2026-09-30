/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$<.ctor>b__0
ENTRY_POINT: 01bf7d0c
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>__<_ctor>b__0
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_01bf7d58;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_01bf7d58:
    iVar1 = (*(code *)*puVar2)();
    if ((long)iVar1 <= (long)unaff_x24) {
      return;
    }
    lVar5 = *unaff_x22;
    plVar8 = *(long **)(unaff_x21 + 0x28);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_037f9328) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01bf7dc4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_01bf7dc4:
    uVar3 = (*(code *)*puVar2)();
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*unaff_x28);
    }
    uVar10 = FUN_02bddb5c(uVar10,0);
    if (plVar8 == (long *)0x0) {
LAB_01bf8138:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar5 = (**(code **)(*plVar8 + 0x508))(plVar8,uVar3,uVar10);
    if (unaff_x23 == 0) goto LAB_01bf8138;
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4(lVar9);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01861ac0(lVar5,lVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar5,lVar9);
      }
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(long *)(unaff_x23 + unaff_x24 * 8 + 0x20) = lVar4;
    thunk_FUN_0188fd20();
    unaff_x24 = unaff_x24 + 1;
    param_1 = *unaff_x22;
  } while( true );
}


