/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04611960
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


ulong System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint unaff_w22;
  uint uVar6;
  uint unaff_w23;
  long *unaff_x27;
  uint in_stack_00000010;
  uint in_stack_00000028;
  
  do {
    uVar6 = unaff_w22;
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0461197c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)(&switchD_0461197c::switchdataD_01d2ea9d)[unaff_w23] * 4 + 0x4611980
                        ))();
      return uVar2;
    }
    do {
      unaff_w22 = uVar6 - 1;
      if ((int)uVar6 < 1) {
        if ((in_stack_00000010 & 1) == 0) goto LAB_04612050;
        lVar3 = *unaff_x27;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar3 = *unaff_x27;
        }
        puVar1 = PTR_DAT_09f23280;
        lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
        if (lVar4 == 0) goto LAB_04612078;
        iVar5 = *(int *)(lVar4 + 0x18);
        goto LAB_04611fc0;
      }
      lVar3 = *unaff_x27;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar3 = *unaff_x27;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
      if (lVar3 == 0) goto LAB_04612078;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar3 = *(long *)(lVar3 + (ulong)unaff_w22 * 8 + 0x20);
      uVar6 = unaff_w22;
    } while ((lVar3 == 0) || (*(char *)(lVar3 + 0xe8) == '\0'));
    in_CY = 2 < unaff_w23;
    in_ZR = unaff_w23 == 3;
  } while( true );
LAB_04611fc0:
  iVar5 = iVar5 + -1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x27;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x60);
  if (lVar3 == 0) {
LAB_04612078:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (iVar5 < 0) {
    iVar5 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar5) {
      FUN_07a61000(*(undefined8 *)(lVar3 + 0x10),0,iVar5,0);
    }
LAB_04612050:
    return (ulong)in_stack_00000028;
  }
  lVar3 = FUN_05badb74(lVar3,iVar5,*(undefined8 *)puVar1);
  if (lVar3 == 0) goto LAB_04612078;
  if (*(int *)(lVar3 + 0xf8) != -1) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0460fcfc(lVar3);
  }
  lVar3 = *unaff_x27;
  goto LAB_04611fc0;
}


